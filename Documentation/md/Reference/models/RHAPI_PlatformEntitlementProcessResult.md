---
title: RHAPI_PlatformEntitlementProcessResult
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlatformEntitlementProcessResult`](#structFRHAPI__PlatformEntitlementProcessResult) | Result of processing a platform entitlement.

## struct `FRHAPI_PlatformEntitlementProcessResult` <a id="structFRHAPI__PlatformEntitlementProcessResult"></a>

```
struct FRHAPI_PlatformEntitlementProcessResult
  : public FRHAPI_Model
```

Result of processing a platform entitlement.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`RequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1ae996578068367b465028369b1e127b3e) | unique id to allow tracking the request
`public ERHAPI_ClientType `[`ClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1a617fe403bc85562d6bd5085c2b72fe00) | 
`public FString `[`TransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1ac4e5064b8dd8dce73c0d93ff4bc196d8) | unique id for this transaction on the platform
`public ERHAPI_PlatformRegion `[`PlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1adb311eefbbc7b0e7e34a2189e7c2edaf) | 
`public FString `[`Status_Optional`](#structFRHAPI__PlatformEntitlementProcessResult_1a8d74f677f67627a8b0a1367d99655fdf) | status of this result
`public bool `[`Status_IsSet`](#structFRHAPI__PlatformEntitlementProcessResult_1abca3d4ab6149c9cb2998b0b41ed8ef7c) | true if Status_Optional has been set to a value
`public FString `[`ErrorCode_Optional`](#structFRHAPI__PlatformEntitlementProcessResult_1aae6a30857286c415c7961ae56e4792e9) | 
`public bool `[`ErrorCode_IsSet`](#structFRHAPI__PlatformEntitlementProcessResult_1aee512a01a4abab2afb14b0b2ca678efe) | true if ErrorCode_Optional has been set to a value
`public bool `[`ErrorCode_IsNull`](#structFRHAPI__PlatformEntitlementProcessResult_1ac0d46664bf21c3083f0b83f6a4f13c5f) | true if ErrorCode_Optional has been explicitly set to null
`public TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > `[`ClientEntitlements_Optional`](#structFRHAPI__PlatformEntitlementProcessResult_1ab364b54bdebc6777f9ffe6e046161b6c) | Client entitlements that have been processed.
`public bool `[`ClientEntitlements_IsSet`](#structFRHAPI__PlatformEntitlementProcessResult_1a53fc5f42cd21746352e77d4e11ff1e35) | true if ClientEntitlements_Optional has been set to a value
`public TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > `[`ServerEntitlements_Optional`](#structFRHAPI__PlatformEntitlementProcessResult_1aa5c0162acdebd1b679a3a532480f56f1) | Server entitlements that have been processed.
`public bool `[`ServerEntitlements_IsSet`](#structFRHAPI__PlatformEntitlementProcessResult_1a7811dbb2ed9aa8c86ebf55e7b65a5f1f) | true if ServerEntitlements_Optional has been set to a value
`public ERHAPI_InventoryPlatform `[`PlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1a3d9c101ea96330d129568c76c2821def) | 
`public FString `[`PlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1a5e27e7e6c68e086ec3a2eb805c2d6488) | Unique identifier for the platform user that processed this entitlement.
`public bool `[`SkippedServerEntitlements_Optional`](#structFRHAPI__PlatformEntitlementProcessResult_1aedc8e7425204af954d95b39faaef2e53) | True if the server entitlements were skipped.
`public bool `[`SkippedServerEntitlements_IsSet`](#structFRHAPI__PlatformEntitlementProcessResult_1a1588a5d0d180aff1f81430371a93a6e0) | true if SkippedServerEntitlements_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformEntitlementProcessResult_1a3f329be368de00ffc6b35006d7776894)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformEntitlementProcessResult_1a01d1be379c73cfbeacb1a5ab24742f93)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetRequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1a3bf878b0af703108ace12173f2f22fb5)`()` | Gets the value of RequestId.
`public inline const FString & `[`GetRequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1a409063880ec205f4f9e530dd297966a2)`() const` | Gets the value of RequestId.
`public inline void `[`SetRequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1ad2aab3c733cbe131b97c43c18cc4648f)`(const FString & NewValue)` | Sets the value of RequestId.
`public inline void `[`SetRequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1a17f0405b2999da698b4dcb5ada2811fb)`(FString && NewValue)` | Sets the value of RequestId using move semantics.
`public inline ERHAPI_ClientType & `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1a64c841a5ec10ad221aad2e6a07d1099b)`()` | Gets the value of ClientType.
`public inline const ERHAPI_ClientType & `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1ac522af37247027e724fc54a32299d8eb)`() const` | Gets the value of ClientType.
`public inline void `[`SetClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1a231b528ffa48320eaf7383f92fa1187f)`(const ERHAPI_ClientType & NewValue)` | Sets the value of ClientType.
`public inline void `[`SetClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1ab7c621c7f7d20a96d4a205c212259d20)`(ERHAPI_ClientType && NewValue)` | Sets the value of ClientType using move semantics.
`public inline FString & `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1a1335cd8401b33f42c476720e01220fe6)`()` | Gets the value of TransactionId.
`public inline const FString & `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1aeaf2079b7507b5b590553de3e69610fe)`() const` | Gets the value of TransactionId.
`public inline void `[`SetTransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1a4169cdc5aa01c78fba62b46cd907196d)`(const FString & NewValue)` | Sets the value of TransactionId.
`public inline void `[`SetTransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1a7dbca44d3487576d4562645537b93374)`(FString && NewValue)` | Sets the value of TransactionId using move semantics.
`public inline ERHAPI_PlatformRegion & `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1a17d739551f0b32349633bddb6e37efb6)`()` | Gets the value of PlatformRegion.
`public inline const ERHAPI_PlatformRegion & `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1a43d04183465a63017e7d1c8616c3cd91)`() const` | Gets the value of PlatformRegion.
`public inline void `[`SetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1a613610ac409ad0341d7cc573dec46cb7)`(const ERHAPI_PlatformRegion & NewValue)` | Sets the value of PlatformRegion.
`public inline void `[`SetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1a09570f36962de53e208a5831f3fdef1c)`(ERHAPI_PlatformRegion && NewValue)` | Sets the value of PlatformRegion using move semantics.
`public inline FString & `[`GetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1a28e0610876875828049955502d3583f8)`()` | Gets the value of Status_Optional, regardless of it having been set.
`public inline const FString & `[`GetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1afce100792d4c7ceb572d8dd99b836fcb)`() const` | Gets the value of Status_Optional, regardless of it having been set.
`public inline const FString & `[`GetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1a0eca8564a4439efa79270f8ba6ae7afa)`(const FString & DefaultValue) const` | Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1ad2d20b01df86f12578ffadacc7ec0a7a)`(FString & OutValue) const` | Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStatusOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1ad1436921f52eb920604bd633edc76d0c)`()` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStatusOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a8eeae442c0d9b9558f21a34ee32c9c86)`() const` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1adb0151a121028f0bacefc2dfeb0f36f6)`(const FString & NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true.
`public inline void `[`SetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1a4a5f8ca8e26f8994d49d7b866eebff4d)`(FString && NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.
`public inline void `[`ClearStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1ad2735d15394bd2b76d3291a0790cec96)`()` | Clears the value of Status_Optional and sets Status_IsSet to false.
`public inline bool `[`IsStatusSet`](#structFRHAPI__PlatformEntitlementProcessResult_1a94b225de767f2ccccfea9cf55e95eb86)`() const` | Checks whether Status_Optional has been set.
`public inline bool `[`IsStatusDefaultValue`](#structFRHAPI__PlatformEntitlementProcessResult_1a87e997a54582d7f013b354e3489f60dc)`() const` | Returns true if Status_Optional is set and matches the default value.
`public inline void `[`SetStatusToDefault`](#structFRHAPI__PlatformEntitlementProcessResult_1a15d890c6ce1c2c6f535b6868932b5664)`()` | Sets the value of Status_Optional to its default and also sets Status_IsSet to true.
`public inline FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1ad703de8154cd1baa101c411cee174701)`()` | Gets the value of ErrorCode_Optional, regardless of it having been set.
`public inline const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a7df94430d5b8efdd91054227a2675289)`() const` | Gets the value of ErrorCode_Optional, regardless of it having been set.
`public inline const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1ac15336eed08e86cce47e49071e98c3cc)`(const FString & DefaultValue) const` | Gets the value of ErrorCode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a9d8aeb8cc843338c9a182221b75fd4ef)`(FString & OutValue) const` | Fills OutValue with the value of ErrorCode_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a2fc669429df37d989cbe679572944f65)`()` | Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a3565c6e7d9f024c6986b27f214f81faf)`() const` | Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a65841c2ac942ab03bc18ac8b674afd1f)`(const FString & NewValue)` | Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true.
`public inline void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1ad34ba6e275d1e94533c55a375b3c2107)`(FString && NewValue)` | Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true using move semantics.
`public inline void `[`ClearErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a93ec866a89fb160d53864189c43c91ce)`()` | Clears the value of ErrorCode_Optional and sets ErrorCode_IsSet to false.
`public inline bool `[`IsErrorCodeSet`](#structFRHAPI__PlatformEntitlementProcessResult_1a64cd1c7350f84bcd82bc0c92ddadc6df)`() const` | Checks whether ErrorCode_Optional has been set.
`public inline void `[`SetErrorCodeToNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a255615346acd5437cec43b828e6bf255)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsErrorCodeNull`](#structFRHAPI__PlatformEntitlementProcessResult_1afad91a3cfba33d54fe31a2c408f0c326)`() const` | Checks whether ErrorCode_Optional is set to null.
`public inline TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a9b0e13fbfb32b9855960599dd87d033b)`()` | Gets the value of ClientEntitlements_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a583f9148ee28314977c95e8e65884046)`() const` | Gets the value of ClientEntitlements_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a286d986959ca09856965b5cbab000b49)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & DefaultValue) const` | Gets the value of ClientEntitlements_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a2fbb3228b6708d7898ef5f914187f140)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & OutValue) const` | Fills OutValue with the value of ClientEntitlements_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetClientEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1ad857af08e02e6ec74fd8c267e3f0c81b)`()` | Returns a pointer to ClientEntitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetClientEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a3e0c6763c0cd948ade17a70819582840)`() const` | Returns a pointer to ClientEntitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a5ced2a22c971b9b55150d6d2f290d657)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & NewValue)` | Sets the value of ClientEntitlements_Optional and also sets ClientEntitlements_IsSet to true.
`public inline void `[`SetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a89a1cfc6a3aa99a7fd443f9e115e091f)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > && NewValue)` | Sets the value of ClientEntitlements_Optional and also sets ClientEntitlements_IsSet to true using move semantics.
`public inline void `[`ClearClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1af651efecd120bf707ceb0030de1faaa5)`()` | Clears the value of ClientEntitlements_Optional and sets ClientEntitlements_IsSet to false.
`public inline bool `[`IsClientEntitlementsSet`](#structFRHAPI__PlatformEntitlementProcessResult_1a5de56851b9cabc862953f64eb0950236)`() const` | Checks whether ClientEntitlements_Optional has been set.
`public inline TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1ad930aab15a8a1f0bf9cd91811434cb11)`()` | Gets the value of ServerEntitlements_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1ae3200bf19d17bcc0d877e95b3a1e1963)`() const` | Gets the value of ServerEntitlements_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1aa37d171bb0680e1c18bf57c7fe346dca)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & DefaultValue) const` | Gets the value of ServerEntitlements_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a01c2734101ea487d2a46ce29c128d476)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & OutValue) const` | Fills OutValue with the value of ServerEntitlements_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetServerEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a6421f66538fbf3410f413756ef9835d0)`()` | Returns a pointer to ServerEntitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetServerEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a2843bbe64185a49679eeb8be30a947f0)`() const` | Returns a pointer to ServerEntitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a2b34311d32fa7d37a22d88e358c90279)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & NewValue)` | Sets the value of ServerEntitlements_Optional and also sets ServerEntitlements_IsSet to true.
`public inline void `[`SetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1afcffdc50adb7bbb283bc5159774708a1)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > && NewValue)` | Sets the value of ServerEntitlements_Optional and also sets ServerEntitlements_IsSet to true using move semantics.
`public inline void `[`ClearServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1aa079715cdcbcf91c7ce6dc1f2bc5f0d6)`()` | Clears the value of ServerEntitlements_Optional and sets ServerEntitlements_IsSet to false.
`public inline bool `[`IsServerEntitlementsSet`](#structFRHAPI__PlatformEntitlementProcessResult_1aa702227046e5e3a103fbb4218ef9f464)`() const` | Checks whether ServerEntitlements_Optional has been set.
`public inline ERHAPI_InventoryPlatform & `[`GetPlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1a39973154263b4f509d5614220d162a4b)`()` | Gets the value of PlatformId.
`public inline const ERHAPI_InventoryPlatform & `[`GetPlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1aa2e7ff09722049b18e46303d7051fc15)`() const` | Gets the value of PlatformId.
`public inline void `[`SetPlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1a146174ec55998c7c4ca97a41c88e640a)`(const ERHAPI_InventoryPlatform & NewValue)` | Sets the value of PlatformId.
`public inline void `[`SetPlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1a583e9876f4969331bab5654e1f6383bf)`(ERHAPI_InventoryPlatform && NewValue)` | Sets the value of PlatformId using move semantics.
`public inline FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1af59fcdb045feaab9f2f4f13b2d806f53)`()` | Gets the value of PlatformUserId.
`public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1a3b970b434ca0eda5d35f44bbaec11dfb)`() const` | Gets the value of PlatformUserId.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1aeb0f248cba82b79677a170499a439acb)`(const FString & NewValue)` | Sets the value of PlatformUserId.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1a82366c739f6e0bca5099ac0ebc0bbbdf)`(FString && NewValue)` | Sets the value of PlatformUserId using move semantics.
`public inline bool & `[`GetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a5d16552a61d2270bb50f95cca8674e03)`()` | Gets the value of SkippedServerEntitlements_Optional, regardless of it having been set.
`public inline const bool & `[`GetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1afb189c3a4a1cbd18d900e271dc9251c5)`() const` | Gets the value of SkippedServerEntitlements_Optional, regardless of it having been set.
`public inline const bool & `[`GetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a696dbf79827645728d94d4a53bc22a3a)`(const bool & DefaultValue) const` | Gets the value of SkippedServerEntitlements_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a72e1cfde5ebdb6d10d21e65c95cc5651)`(bool & OutValue) const` | Fills OutValue with the value of SkippedServerEntitlements_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetSkippedServerEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1af8af54af3626c4a63e831e8ea01e385e)`()` | Returns a pointer to SkippedServerEntitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetSkippedServerEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a118256fa6ace16932aaf50a85a73fd71)`() const` | Returns a pointer to SkippedServerEntitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1ac084f78fed3ed8410e2c6a8132b30b2c)`(const bool & NewValue)` | Sets the value of SkippedServerEntitlements_Optional and also sets SkippedServerEntitlements_IsSet to true.
`public inline void `[`SetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a590028abdad3cbf4b6cd7744641e7744)`(bool && NewValue)` | Sets the value of SkippedServerEntitlements_Optional and also sets SkippedServerEntitlements_IsSet to true using move semantics.
`public inline void `[`ClearSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a06090335dcdb3a2b4fbb0521e5fa685e)`()` | Clears the value of SkippedServerEntitlements_Optional and sets SkippedServerEntitlements_IsSet to false.
`public inline bool `[`IsSkippedServerEntitlementsSet`](#structFRHAPI__PlatformEntitlementProcessResult_1ae9d3fcbc32b19316d176eaa755a1a498)`() const` | Checks whether SkippedServerEntitlements_Optional has been set.
`public inline bool `[`IsSkippedServerEntitlementsDefaultValue`](#structFRHAPI__PlatformEntitlementProcessResult_1ae124e63567ad85ca72f9ef7297f9dd4a)`() const` | Returns true if SkippedServerEntitlements_Optional is set and matches the default value.
`public inline void `[`SetSkippedServerEntitlementsToDefault`](#structFRHAPI__PlatformEntitlementProcessResult_1ac278ece6c8d1a8180f643b6f342f5a96)`()` | Sets the value of SkippedServerEntitlements_Optional to its default and also sets SkippedServerEntitlements_IsSet to true.

### Members

#### `public FString `[`RequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1ae996578068367b465028369b1e127b3e) <a id="structFRHAPI__PlatformEntitlementProcessResult_1ae996578068367b465028369b1e127b3e"></a>

unique id to allow tracking the request

#### `public ERHAPI_ClientType `[`ClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1a617fe403bc85562d6bd5085c2b72fe00) <a id="structFRHAPI__PlatformEntitlementProcessResult_1a617fe403bc85562d6bd5085c2b72fe00"></a>

#### `public FString `[`TransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1ac4e5064b8dd8dce73c0d93ff4bc196d8) <a id="structFRHAPI__PlatformEntitlementProcessResult_1ac4e5064b8dd8dce73c0d93ff4bc196d8"></a>

unique id for this transaction on the platform

#### `public ERHAPI_PlatformRegion `[`PlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1adb311eefbbc7b0e7e34a2189e7c2edaf) <a id="structFRHAPI__PlatformEntitlementProcessResult_1adb311eefbbc7b0e7e34a2189e7c2edaf"></a>

#### `public FString `[`Status_Optional`](#structFRHAPI__PlatformEntitlementProcessResult_1a8d74f677f67627a8b0a1367d99655fdf) <a id="structFRHAPI__PlatformEntitlementProcessResult_1a8d74f677f67627a8b0a1367d99655fdf"></a>

status of this result

#### `public bool `[`Status_IsSet`](#structFRHAPI__PlatformEntitlementProcessResult_1abca3d4ab6149c9cb2998b0b41ed8ef7c) <a id="structFRHAPI__PlatformEntitlementProcessResult_1abca3d4ab6149c9cb2998b0b41ed8ef7c"></a>

true if Status_Optional has been set to a value

#### `public FString `[`ErrorCode_Optional`](#structFRHAPI__PlatformEntitlementProcessResult_1aae6a30857286c415c7961ae56e4792e9) <a id="structFRHAPI__PlatformEntitlementProcessResult_1aae6a30857286c415c7961ae56e4792e9"></a>

#### `public bool `[`ErrorCode_IsSet`](#structFRHAPI__PlatformEntitlementProcessResult_1aee512a01a4abab2afb14b0b2ca678efe) <a id="structFRHAPI__PlatformEntitlementProcessResult_1aee512a01a4abab2afb14b0b2ca678efe"></a>

true if ErrorCode_Optional has been set to a value

#### `public bool `[`ErrorCode_IsNull`](#structFRHAPI__PlatformEntitlementProcessResult_1ac0d46664bf21c3083f0b83f6a4f13c5f) <a id="structFRHAPI__PlatformEntitlementProcessResult_1ac0d46664bf21c3083f0b83f6a4f13c5f"></a>

true if ErrorCode_Optional has been explicitly set to null

#### `public TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > `[`ClientEntitlements_Optional`](#structFRHAPI__PlatformEntitlementProcessResult_1ab364b54bdebc6777f9ffe6e046161b6c) <a id="structFRHAPI__PlatformEntitlementProcessResult_1ab364b54bdebc6777f9ffe6e046161b6c"></a>

Client entitlements that have been processed.

#### `public bool `[`ClientEntitlements_IsSet`](#structFRHAPI__PlatformEntitlementProcessResult_1a53fc5f42cd21746352e77d4e11ff1e35) <a id="structFRHAPI__PlatformEntitlementProcessResult_1a53fc5f42cd21746352e77d4e11ff1e35"></a>

true if ClientEntitlements_Optional has been set to a value

#### `public TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > `[`ServerEntitlements_Optional`](#structFRHAPI__PlatformEntitlementProcessResult_1aa5c0162acdebd1b679a3a532480f56f1) <a id="structFRHAPI__PlatformEntitlementProcessResult_1aa5c0162acdebd1b679a3a532480f56f1"></a>

Server entitlements that have been processed.

#### `public bool `[`ServerEntitlements_IsSet`](#structFRHAPI__PlatformEntitlementProcessResult_1a7811dbb2ed9aa8c86ebf55e7b65a5f1f) <a id="structFRHAPI__PlatformEntitlementProcessResult_1a7811dbb2ed9aa8c86ebf55e7b65a5f1f"></a>

true if ServerEntitlements_Optional has been set to a value

#### `public ERHAPI_InventoryPlatform `[`PlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1a3d9c101ea96330d129568c76c2821def) <a id="structFRHAPI__PlatformEntitlementProcessResult_1a3d9c101ea96330d129568c76c2821def"></a>

#### `public FString `[`PlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1a5e27e7e6c68e086ec3a2eb805c2d6488) <a id="structFRHAPI__PlatformEntitlementProcessResult_1a5e27e7e6c68e086ec3a2eb805c2d6488"></a>

Unique identifier for the platform user that processed this entitlement.

#### `public bool `[`SkippedServerEntitlements_Optional`](#structFRHAPI__PlatformEntitlementProcessResult_1aedc8e7425204af954d95b39faaef2e53) <a id="structFRHAPI__PlatformEntitlementProcessResult_1aedc8e7425204af954d95b39faaef2e53"></a>

True if the server entitlements were skipped.

#### `public bool `[`SkippedServerEntitlements_IsSet`](#structFRHAPI__PlatformEntitlementProcessResult_1a1588a5d0d180aff1f81430371a93a6e0) <a id="structFRHAPI__PlatformEntitlementProcessResult_1a1588a5d0d180aff1f81430371a93a6e0"></a>

true if SkippedServerEntitlements_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformEntitlementProcessResult_1a3f329be368de00ffc6b35006d7776894)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a3f329be368de00ffc6b35006d7776894"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformEntitlementProcessResult_1a01d1be379c73cfbeacb1a5ab24742f93)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a01d1be379c73cfbeacb1a5ab24742f93"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetRequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1a3bf878b0af703108ace12173f2f22fb5)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a3bf878b0af703108ace12173f2f22fb5"></a>

Gets the value of RequestId.

#### `public inline const FString & `[`GetRequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1a409063880ec205f4f9e530dd297966a2)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a409063880ec205f4f9e530dd297966a2"></a>

Gets the value of RequestId.

#### `public inline void `[`SetRequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1ad2aab3c733cbe131b97c43c18cc4648f)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ad2aab3c733cbe131b97c43c18cc4648f"></a>

Sets the value of RequestId.

#### `public inline void `[`SetRequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1a17f0405b2999da698b4dcb5ada2811fb)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a17f0405b2999da698b4dcb5ada2811fb"></a>

Sets the value of RequestId using move semantics.

#### `public inline ERHAPI_ClientType & `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1a64c841a5ec10ad221aad2e6a07d1099b)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a64c841a5ec10ad221aad2e6a07d1099b"></a>

Gets the value of ClientType.

#### `public inline const ERHAPI_ClientType & `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1ac522af37247027e724fc54a32299d8eb)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ac522af37247027e724fc54a32299d8eb"></a>

Gets the value of ClientType.

#### `public inline void `[`SetClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1a231b528ffa48320eaf7383f92fa1187f)`(const ERHAPI_ClientType & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a231b528ffa48320eaf7383f92fa1187f"></a>

Sets the value of ClientType.

#### `public inline void `[`SetClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1ab7c621c7f7d20a96d4a205c212259d20)`(ERHAPI_ClientType && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ab7c621c7f7d20a96d4a205c212259d20"></a>

Sets the value of ClientType using move semantics.

#### `public inline FString & `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1a1335cd8401b33f42c476720e01220fe6)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a1335cd8401b33f42c476720e01220fe6"></a>

Gets the value of TransactionId.

#### `public inline const FString & `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1aeaf2079b7507b5b590553de3e69610fe)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1aeaf2079b7507b5b590553de3e69610fe"></a>

Gets the value of TransactionId.

#### `public inline void `[`SetTransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1a4169cdc5aa01c78fba62b46cd907196d)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a4169cdc5aa01c78fba62b46cd907196d"></a>

Sets the value of TransactionId.

#### `public inline void `[`SetTransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1a7dbca44d3487576d4562645537b93374)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a7dbca44d3487576d4562645537b93374"></a>

Sets the value of TransactionId using move semantics.

#### `public inline ERHAPI_PlatformRegion & `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1a17d739551f0b32349633bddb6e37efb6)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a17d739551f0b32349633bddb6e37efb6"></a>

Gets the value of PlatformRegion.

#### `public inline const ERHAPI_PlatformRegion & `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1a43d04183465a63017e7d1c8616c3cd91)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a43d04183465a63017e7d1c8616c3cd91"></a>

Gets the value of PlatformRegion.

#### `public inline void `[`SetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1a613610ac409ad0341d7cc573dec46cb7)`(const ERHAPI_PlatformRegion & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a613610ac409ad0341d7cc573dec46cb7"></a>

Sets the value of PlatformRegion.

#### `public inline void `[`SetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1a09570f36962de53e208a5831f3fdef1c)`(ERHAPI_PlatformRegion && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a09570f36962de53e208a5831f3fdef1c"></a>

Sets the value of PlatformRegion using move semantics.

#### `public inline FString & `[`GetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1a28e0610876875828049955502d3583f8)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a28e0610876875828049955502d3583f8"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1afce100792d4c7ceb572d8dd99b836fcb)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1afce100792d4c7ceb572d8dd99b836fcb"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1a0eca8564a4439efa79270f8ba6ae7afa)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a0eca8564a4439efa79270f8ba6ae7afa"></a>

Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1ad2d20b01df86f12578ffadacc7ec0a7a)`(FString & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ad2d20b01df86f12578ffadacc7ec0a7a"></a>

Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStatusOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1ad1436921f52eb920604bd633edc76d0c)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ad1436921f52eb920604bd633edc76d0c"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStatusOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a8eeae442c0d9b9558f21a34ee32c9c86)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a8eeae442c0d9b9558f21a34ee32c9c86"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1adb0151a121028f0bacefc2dfeb0f36f6)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1adb0151a121028f0bacefc2dfeb0f36f6"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true.

#### `public inline void `[`SetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1a4a5f8ca8e26f8994d49d7b866eebff4d)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a4a5f8ca8e26f8994d49d7b866eebff4d"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.

#### `public inline void `[`ClearStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1ad2735d15394bd2b76d3291a0790cec96)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ad2735d15394bd2b76d3291a0790cec96"></a>

Clears the value of Status_Optional and sets Status_IsSet to false.

#### `public inline bool `[`IsStatusSet`](#structFRHAPI__PlatformEntitlementProcessResult_1a94b225de767f2ccccfea9cf55e95eb86)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a94b225de767f2ccccfea9cf55e95eb86"></a>

Checks whether Status_Optional has been set.

#### `public inline bool `[`IsStatusDefaultValue`](#structFRHAPI__PlatformEntitlementProcessResult_1a87e997a54582d7f013b354e3489f60dc)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a87e997a54582d7f013b354e3489f60dc"></a>

Returns true if Status_Optional is set and matches the default value.

#### `public inline void `[`SetStatusToDefault`](#structFRHAPI__PlatformEntitlementProcessResult_1a15d890c6ce1c2c6f535b6868932b5664)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a15d890c6ce1c2c6f535b6868932b5664"></a>

Sets the value of Status_Optional to its default and also sets Status_IsSet to true.

#### `public inline FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1ad703de8154cd1baa101c411cee174701)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ad703de8154cd1baa101c411cee174701"></a>

Gets the value of ErrorCode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a7df94430d5b8efdd91054227a2675289)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a7df94430d5b8efdd91054227a2675289"></a>

Gets the value of ErrorCode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1ac15336eed08e86cce47e49071e98c3cc)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ac15336eed08e86cce47e49071e98c3cc"></a>

Gets the value of ErrorCode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a9d8aeb8cc843338c9a182221b75fd4ef)`(FString & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a9d8aeb8cc843338c9a182221b75fd4ef"></a>

Fills OutValue with the value of ErrorCode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a2fc669429df37d989cbe679572944f65)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a2fc669429df37d989cbe679572944f65"></a>

Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a3565c6e7d9f024c6986b27f214f81faf)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a3565c6e7d9f024c6986b27f214f81faf"></a>

Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a65841c2ac942ab03bc18ac8b674afd1f)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a65841c2ac942ab03bc18ac8b674afd1f"></a>

Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true.

#### `public inline void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1ad34ba6e275d1e94533c55a375b3c2107)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ad34ba6e275d1e94533c55a375b3c2107"></a>

Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true using move semantics.

#### `public inline void `[`ClearErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a93ec866a89fb160d53864189c43c91ce)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a93ec866a89fb160d53864189c43c91ce"></a>

Clears the value of ErrorCode_Optional and sets ErrorCode_IsSet to false.

#### `public inline bool `[`IsErrorCodeSet`](#structFRHAPI__PlatformEntitlementProcessResult_1a64cd1c7350f84bcd82bc0c92ddadc6df)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a64cd1c7350f84bcd82bc0c92ddadc6df"></a>

Checks whether ErrorCode_Optional has been set.

#### `public inline void `[`SetErrorCodeToNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a255615346acd5437cec43b828e6bf255)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a255615346acd5437cec43b828e6bf255"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsErrorCodeNull`](#structFRHAPI__PlatformEntitlementProcessResult_1afad91a3cfba33d54fe31a2c408f0c326)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1afad91a3cfba33d54fe31a2c408f0c326"></a>

Checks whether ErrorCode_Optional is set to null.

#### `public inline TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a9b0e13fbfb32b9855960599dd87d033b)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a9b0e13fbfb32b9855960599dd87d033b"></a>

Gets the value of ClientEntitlements_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a583f9148ee28314977c95e8e65884046)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a583f9148ee28314977c95e8e65884046"></a>

Gets the value of ClientEntitlements_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a286d986959ca09856965b5cbab000b49)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a286d986959ca09856965b5cbab000b49"></a>

Gets the value of ClientEntitlements_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a2fbb3228b6708d7898ef5f914187f140)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a2fbb3228b6708d7898ef5f914187f140"></a>

Fills OutValue with the value of ClientEntitlements_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetClientEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1ad857af08e02e6ec74fd8c267e3f0c81b)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ad857af08e02e6ec74fd8c267e3f0c81b"></a>

Returns a pointer to ClientEntitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetClientEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a3e0c6763c0cd948ade17a70819582840)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a3e0c6763c0cd948ade17a70819582840"></a>

Returns a pointer to ClientEntitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a5ced2a22c971b9b55150d6d2f290d657)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a5ced2a22c971b9b55150d6d2f290d657"></a>

Sets the value of ClientEntitlements_Optional and also sets ClientEntitlements_IsSet to true.

#### `public inline void `[`SetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a89a1cfc6a3aa99a7fd443f9e115e091f)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a89a1cfc6a3aa99a7fd443f9e115e091f"></a>

Sets the value of ClientEntitlements_Optional and also sets ClientEntitlements_IsSet to true using move semantics.

#### `public inline void `[`ClearClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1af651efecd120bf707ceb0030de1faaa5)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1af651efecd120bf707ceb0030de1faaa5"></a>

Clears the value of ClientEntitlements_Optional and sets ClientEntitlements_IsSet to false.

#### `public inline bool `[`IsClientEntitlementsSet`](#structFRHAPI__PlatformEntitlementProcessResult_1a5de56851b9cabc862953f64eb0950236)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a5de56851b9cabc862953f64eb0950236"></a>

Checks whether ClientEntitlements_Optional has been set.

#### `public inline TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1ad930aab15a8a1f0bf9cd91811434cb11)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ad930aab15a8a1f0bf9cd91811434cb11"></a>

Gets the value of ServerEntitlements_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1ae3200bf19d17bcc0d877e95b3a1e1963)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ae3200bf19d17bcc0d877e95b3a1e1963"></a>

Gets the value of ServerEntitlements_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1aa37d171bb0680e1c18bf57c7fe346dca)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1aa37d171bb0680e1c18bf57c7fe346dca"></a>

Gets the value of ServerEntitlements_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a01c2734101ea487d2a46ce29c128d476)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a01c2734101ea487d2a46ce29c128d476"></a>

Fills OutValue with the value of ServerEntitlements_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetServerEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a6421f66538fbf3410f413756ef9835d0)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a6421f66538fbf3410f413756ef9835d0"></a>

Returns a pointer to ServerEntitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetServerEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a2843bbe64185a49679eeb8be30a947f0)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a2843bbe64185a49679eeb8be30a947f0"></a>

Returns a pointer to ServerEntitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a2b34311d32fa7d37a22d88e358c90279)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a2b34311d32fa7d37a22d88e358c90279"></a>

Sets the value of ServerEntitlements_Optional and also sets ServerEntitlements_IsSet to true.

#### `public inline void `[`SetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1afcffdc50adb7bbb283bc5159774708a1)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1afcffdc50adb7bbb283bc5159774708a1"></a>

Sets the value of ServerEntitlements_Optional and also sets ServerEntitlements_IsSet to true using move semantics.

#### `public inline void `[`ClearServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1aa079715cdcbcf91c7ce6dc1f2bc5f0d6)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1aa079715cdcbcf91c7ce6dc1f2bc5f0d6"></a>

Clears the value of ServerEntitlements_Optional and sets ServerEntitlements_IsSet to false.

#### `public inline bool `[`IsServerEntitlementsSet`](#structFRHAPI__PlatformEntitlementProcessResult_1aa702227046e5e3a103fbb4218ef9f464)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1aa702227046e5e3a103fbb4218ef9f464"></a>

Checks whether ServerEntitlements_Optional has been set.

#### `public inline ERHAPI_InventoryPlatform & `[`GetPlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1a39973154263b4f509d5614220d162a4b)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a39973154263b4f509d5614220d162a4b"></a>

Gets the value of PlatformId.

#### `public inline const ERHAPI_InventoryPlatform & `[`GetPlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1aa2e7ff09722049b18e46303d7051fc15)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1aa2e7ff09722049b18e46303d7051fc15"></a>

Gets the value of PlatformId.

#### `public inline void `[`SetPlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1a146174ec55998c7c4ca97a41c88e640a)`(const ERHAPI_InventoryPlatform & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a146174ec55998c7c4ca97a41c88e640a"></a>

Sets the value of PlatformId.

#### `public inline void `[`SetPlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1a583e9876f4969331bab5654e1f6383bf)`(ERHAPI_InventoryPlatform && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a583e9876f4969331bab5654e1f6383bf"></a>

Sets the value of PlatformId using move semantics.

#### `public inline FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1af59fcdb045feaab9f2f4f13b2d806f53)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1af59fcdb045feaab9f2f4f13b2d806f53"></a>

Gets the value of PlatformUserId.

#### `public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1a3b970b434ca0eda5d35f44bbaec11dfb)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a3b970b434ca0eda5d35f44bbaec11dfb"></a>

Gets the value of PlatformUserId.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1aeb0f248cba82b79677a170499a439acb)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1aeb0f248cba82b79677a170499a439acb"></a>

Sets the value of PlatformUserId.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1a82366c739f6e0bca5099ac0ebc0bbbdf)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a82366c739f6e0bca5099ac0ebc0bbbdf"></a>

Sets the value of PlatformUserId using move semantics.

#### `public inline bool & `[`GetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a5d16552a61d2270bb50f95cca8674e03)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a5d16552a61d2270bb50f95cca8674e03"></a>

Gets the value of SkippedServerEntitlements_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1afb189c3a4a1cbd18d900e271dc9251c5)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1afb189c3a4a1cbd18d900e271dc9251c5"></a>

Gets the value of SkippedServerEntitlements_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a696dbf79827645728d94d4a53bc22a3a)`(const bool & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a696dbf79827645728d94d4a53bc22a3a"></a>

Gets the value of SkippedServerEntitlements_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a72e1cfde5ebdb6d10d21e65c95cc5651)`(bool & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a72e1cfde5ebdb6d10d21e65c95cc5651"></a>

Fills OutValue with the value of SkippedServerEntitlements_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetSkippedServerEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1af8af54af3626c4a63e831e8ea01e385e)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1af8af54af3626c4a63e831e8ea01e385e"></a>

Returns a pointer to SkippedServerEntitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetSkippedServerEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a118256fa6ace16932aaf50a85a73fd71)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a118256fa6ace16932aaf50a85a73fd71"></a>

Returns a pointer to SkippedServerEntitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1ac084f78fed3ed8410e2c6a8132b30b2c)`(const bool & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ac084f78fed3ed8410e2c6a8132b30b2c"></a>

Sets the value of SkippedServerEntitlements_Optional and also sets SkippedServerEntitlements_IsSet to true.

#### `public inline void `[`SetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a590028abdad3cbf4b6cd7744641e7744)`(bool && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a590028abdad3cbf4b6cd7744641e7744"></a>

Sets the value of SkippedServerEntitlements_Optional and also sets SkippedServerEntitlements_IsSet to true using move semantics.

#### `public inline void `[`ClearSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a06090335dcdb3a2b4fbb0521e5fa685e)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a06090335dcdb3a2b4fbb0521e5fa685e"></a>

Clears the value of SkippedServerEntitlements_Optional and sets SkippedServerEntitlements_IsSet to false.

#### `public inline bool `[`IsSkippedServerEntitlementsSet`](#structFRHAPI__PlatformEntitlementProcessResult_1ae9d3fcbc32b19316d176eaa755a1a498)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ae9d3fcbc32b19316d176eaa755a1a498"></a>

Checks whether SkippedServerEntitlements_Optional has been set.

#### `public inline bool `[`IsSkippedServerEntitlementsDefaultValue`](#structFRHAPI__PlatformEntitlementProcessResult_1ae124e63567ad85ca72f9ef7297f9dd4a)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ae124e63567ad85ca72f9ef7297f9dd4a"></a>

Returns true if SkippedServerEntitlements_Optional is set and matches the default value.

#### `public inline void `[`SetSkippedServerEntitlementsToDefault`](#structFRHAPI__PlatformEntitlementProcessResult_1ac278ece6c8d1a8180f643b6f342f5a96)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ac278ece6c8d1a8180f643b6f342f5a96"></a>

Sets the value of SkippedServerEntitlements_Optional to its default and also sets SkippedServerEntitlements_IsSet to true.

