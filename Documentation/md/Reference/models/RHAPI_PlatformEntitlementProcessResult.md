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
`public inline FORCEINLINE FString & `[`GetRequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1aed4643ed0700a6ede29ea0a4e03123fe)`()` | Gets the value of RequestId.
`public inline FORCEINLINE const FString & `[`GetRequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1a491068235207d31b663408b2699d37cf)`() const` | Gets the value of RequestId.
`public inline FORCEINLINE void `[`SetRequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1a44d92c80d6d5ecd77f81a9456f5453db)`(const FString & NewValue)` | Sets the value of RequestId.
`public inline FORCEINLINE void `[`SetRequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1a60c791335ec7bde343f999285ffb29e2)`(FString && NewValue)` | Sets the value of RequestId using move semantics.
`public inline FORCEINLINE ERHAPI_ClientType & `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1a1ec2757ea4ee8acae34c20eba4cd1c63)`()` | Gets the value of ClientType.
`public inline FORCEINLINE const ERHAPI_ClientType & `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1aaffe3be64eeff4c5f8d4503ee89b4b85)`() const` | Gets the value of ClientType.
`public inline FORCEINLINE void `[`SetClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1ad9cc1767d4a21e4591d6a0649d294812)`(const ERHAPI_ClientType & NewValue)` | Sets the value of ClientType.
`public inline FORCEINLINE void `[`SetClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1a7e1a7e9844c6d3b8032067132dd5daae)`(ERHAPI_ClientType && NewValue)` | Sets the value of ClientType using move semantics.
`public inline FORCEINLINE FString & `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1a9f1f57e1ce409bf7c0f64ed14dff8f8f)`()` | Gets the value of TransactionId.
`public inline FORCEINLINE const FString & `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1a7e80aa41d5f6bcd498cac84e6f427ed0)`() const` | Gets the value of TransactionId.
`public inline FORCEINLINE void `[`SetTransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1a7c10c3c0846e3654f0433835e7688764)`(const FString & NewValue)` | Sets the value of TransactionId.
`public inline FORCEINLINE void `[`SetTransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1aa0e0fd0c072f31105a950818338ad47a)`(FString && NewValue)` | Sets the value of TransactionId using move semantics.
`public inline FORCEINLINE ERHAPI_PlatformRegion & `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1a0d47aed433d12ad384540c078cb5e1e9)`()` | Gets the value of PlatformRegion.
`public inline FORCEINLINE const ERHAPI_PlatformRegion & `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1a63537ec914602e78d7bcc4b1116dad75)`() const` | Gets the value of PlatformRegion.
`public inline FORCEINLINE void `[`SetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1aef429f3c1efc161c1fff1450337885b6)`(const ERHAPI_PlatformRegion & NewValue)` | Sets the value of PlatformRegion.
`public inline FORCEINLINE void `[`SetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1a0338b15fea4f9543d02b09e717773b39)`(ERHAPI_PlatformRegion && NewValue)` | Sets the value of PlatformRegion using move semantics.
`public inline FORCEINLINE FString & `[`GetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1a0e38e96a7ea4987fd2bb74094a133475)`()` | Gets the value of Status_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1a9e503258741595791f91ca4a2227a78d)`() const` | Gets the value of Status_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1a262fa097c6126f882c58723307c4b00a)`(const FString & DefaultValue) const` | Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1a2244a4f510074d14ccd0ba92524d2cc1)`(FString & OutValue) const` | Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetStatusOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1adcf32d9129c6abd7a63b6b6894208ad4)`()` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetStatusOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1aefcad2cf1905c70eaca889bf405eea82)`() const` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1a58db0f017fe5b6ac37f1214b80175d81)`(const FString & NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true.
`public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1a485b0d714509844c76a0d8f265334df3)`(FString && NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.
`public inline void `[`ClearStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1ad2735d15394bd2b76d3291a0790cec96)`()` | Clears the value of Status_Optional and sets Status_IsSet to false.
`public inline FORCEINLINE FString `[`GetDefaultValue_Status`](#structFRHAPI__PlatformEntitlementProcessResult_1ae44f1195397da8163a6d5540acc4f553)`()` | Returns the default value of Status.
`public inline FORCEINLINE FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a8fc838b71f35a42d3511c335a0306bfe)`()` | Gets the value of ErrorCode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1ab717da35c16f3cf7c57d04c77a2dacfb)`() const` | Gets the value of ErrorCode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a884a9f41864ab4631f816499a7c17f1e)`(const FString & DefaultValue) const` | Gets the value of ErrorCode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1afedf2e8b2f5fb7d1e35a7f850aa3e658)`(FString & OutValue) const` | Fills OutValue with the value of ErrorCode_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a30d14e51dcb4aaf9051e1679c873f89c)`()` | Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a7d2267309d1ddb7104f03c41c2b0c78e)`() const` | Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1aefe747378402bcaa9988b200e3598043)`(const FString & NewValue)` | Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true.
`public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a3179a1856f040ba8d5a7afa4b57b5629)`(FString && NewValue)` | Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true using move semantics.
`public inline void `[`ClearErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a93ec866a89fb160d53864189c43c91ce)`()` | Clears the value of ErrorCode_Optional and sets ErrorCode_IsSet to false.
`public inline FORCEINLINE void `[`SetErrorCodeToNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a19b5f9598ac7e11791272887ec58d917)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsErrorCodeNull`](#structFRHAPI__PlatformEntitlementProcessResult_1adc1154c96037544ba21395679f4b1b29)`() const` | Checks whether ErrorCode_Optional is set to null.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a5c956d4fac2fe6f62f6839029e4ac62a)`()` | Gets the value of ClientEntitlements_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a71cefb816ef227ffa013546344e72c7b)`() const` | Gets the value of ClientEntitlements_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1af983c05efd30a523f27e4d486bf621cd)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & DefaultValue) const` | Gets the value of ClientEntitlements_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a45057f57e5a0a018a26c5a19f3eb4c23)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & OutValue) const` | Fills OutValue with the value of ClientEntitlements_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetClientEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1ae96ce0a1472bd3523d7c8dbb711a5d55)`()` | Returns a pointer to ClientEntitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetClientEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1ae0f25f29dc86ed1da3200225e7389901)`() const` | Returns a pointer to ClientEntitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a4eb3e9b4e5ddcdb4c417385ad5c70065)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & NewValue)` | Sets the value of ClientEntitlements_Optional and also sets ClientEntitlements_IsSet to true.
`public inline FORCEINLINE void `[`SetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1ae7b252e0436b52d4c2985ff787cdd551)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > && NewValue)` | Sets the value of ClientEntitlements_Optional and also sets ClientEntitlements_IsSet to true using move semantics.
`public inline void `[`ClearClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1af651efecd120bf707ceb0030de1faaa5)`()` | Clears the value of ClientEntitlements_Optional and sets ClientEntitlements_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a3957f7a5e82adacf743053eae9039423)`()` | Gets the value of ServerEntitlements_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1add046e68855aa74b32c3f21a08f15990)`() const` | Gets the value of ServerEntitlements_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a569db2d919f2d3d45b1989c12378303d)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & DefaultValue) const` | Gets the value of ServerEntitlements_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1ac4f22e09d4291d162a4ef058d3682c12)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & OutValue) const` | Fills OutValue with the value of ServerEntitlements_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetServerEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a7278ebf302c45805abceefbcbe267035)`()` | Returns a pointer to ServerEntitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetServerEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a4ff4546e771492fe81ef24f8698504e0)`() const` | Returns a pointer to ServerEntitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a28e9ef6fa3b571f58c23394736200099)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & NewValue)` | Sets the value of ServerEntitlements_Optional and also sets ServerEntitlements_IsSet to true.
`public inline FORCEINLINE void `[`SetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a4b31ff2c4c56bfd7cae42b7447f2ff51)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > && NewValue)` | Sets the value of ServerEntitlements_Optional and also sets ServerEntitlements_IsSet to true using move semantics.
`public inline void `[`ClearServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1aa079715cdcbcf91c7ce6dc1f2bc5f0d6)`()` | Clears the value of ServerEntitlements_Optional and sets ServerEntitlements_IsSet to false.
`public inline FORCEINLINE ERHAPI_InventoryPlatform & `[`GetPlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1a5307c93422b50af1efbf9136e3ad316d)`()` | Gets the value of PlatformId.
`public inline FORCEINLINE const ERHAPI_InventoryPlatform & `[`GetPlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1a057bf4e0b0777ab358f07ab52aed3784)`() const` | Gets the value of PlatformId.
`public inline FORCEINLINE void `[`SetPlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1ac59358f312d76915c3e9edcf9008aae3)`(const ERHAPI_InventoryPlatform & NewValue)` | Sets the value of PlatformId.
`public inline FORCEINLINE void `[`SetPlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1ac46542705778921ea1c39738d763364c)`(ERHAPI_InventoryPlatform && NewValue)` | Sets the value of PlatformId using move semantics.
`public inline FORCEINLINE FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1ad3856f65b04cd4668957388bc3412928)`()` | Gets the value of PlatformUserId.
`public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1aa1f8fc3d2716a1f722627ca3c40d1e35)`() const` | Gets the value of PlatformUserId.
`public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1a761b95030f1c194a1b37c4c36e1a0ed9)`(const FString & NewValue)` | Sets the value of PlatformUserId.
`public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1a273005a698156986e191cb94cf1c5b32)`(FString && NewValue)` | Sets the value of PlatformUserId using move semantics.
`public inline FORCEINLINE bool & `[`GetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a33cc1b2ed52b2fd8035a2f20ac6df645)`()` | Gets the value of SkippedServerEntitlements_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a20ee7a1ed0da0f0dcaa1dc77f898adb7)`() const` | Gets the value of SkippedServerEntitlements_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a40dc198d4964f32389e1019dd2543b1c)`(const bool & DefaultValue) const` | Gets the value of SkippedServerEntitlements_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1ace6f423c979f4618b66d64416af50f0f)`(bool & OutValue) const` | Fills OutValue with the value of SkippedServerEntitlements_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetSkippedServerEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1ac95ed1d5b7610ce76f54674b69297334)`()` | Returns a pointer to SkippedServerEntitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetSkippedServerEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a5e08c9af9cee82bc75660b74febc5f30)`() const` | Returns a pointer to SkippedServerEntitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a846726aef47fc3fd138aa127979a802a)`(const bool & NewValue)` | Sets the value of SkippedServerEntitlements_Optional and also sets SkippedServerEntitlements_IsSet to true.
`public inline FORCEINLINE void `[`SetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a3ef418626f0a988d9651c644802f9dcd)`(bool && NewValue)` | Sets the value of SkippedServerEntitlements_Optional and also sets SkippedServerEntitlements_IsSet to true using move semantics.
`public inline void `[`ClearSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a06090335dcdb3a2b4fbb0521e5fa685e)`()` | Clears the value of SkippedServerEntitlements_Optional and sets SkippedServerEntitlements_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_SkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a2acf65c4a1e14c6d465432754660d752)`()` | Returns the default value of SkippedServerEntitlements.

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

#### `public inline FORCEINLINE FString & `[`GetRequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1aed4643ed0700a6ede29ea0a4e03123fe)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1aed4643ed0700a6ede29ea0a4e03123fe"></a>

Gets the value of RequestId.

#### `public inline FORCEINLINE const FString & `[`GetRequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1a491068235207d31b663408b2699d37cf)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a491068235207d31b663408b2699d37cf"></a>

Gets the value of RequestId.

#### `public inline FORCEINLINE void `[`SetRequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1a44d92c80d6d5ecd77f81a9456f5453db)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a44d92c80d6d5ecd77f81a9456f5453db"></a>

Sets the value of RequestId.

#### `public inline FORCEINLINE void `[`SetRequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1a60c791335ec7bde343f999285ffb29e2)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a60c791335ec7bde343f999285ffb29e2"></a>

Sets the value of RequestId using move semantics.

#### `public inline FORCEINLINE ERHAPI_ClientType & `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1a1ec2757ea4ee8acae34c20eba4cd1c63)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a1ec2757ea4ee8acae34c20eba4cd1c63"></a>

Gets the value of ClientType.

#### `public inline FORCEINLINE const ERHAPI_ClientType & `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1aaffe3be64eeff4c5f8d4503ee89b4b85)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1aaffe3be64eeff4c5f8d4503ee89b4b85"></a>

Gets the value of ClientType.

#### `public inline FORCEINLINE void `[`SetClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1ad9cc1767d4a21e4591d6a0649d294812)`(const ERHAPI_ClientType & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ad9cc1767d4a21e4591d6a0649d294812"></a>

Sets the value of ClientType.

#### `public inline FORCEINLINE void `[`SetClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1a7e1a7e9844c6d3b8032067132dd5daae)`(ERHAPI_ClientType && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a7e1a7e9844c6d3b8032067132dd5daae"></a>

Sets the value of ClientType using move semantics.

#### `public inline FORCEINLINE FString & `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1a9f1f57e1ce409bf7c0f64ed14dff8f8f)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a9f1f57e1ce409bf7c0f64ed14dff8f8f"></a>

Gets the value of TransactionId.

#### `public inline FORCEINLINE const FString & `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1a7e80aa41d5f6bcd498cac84e6f427ed0)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a7e80aa41d5f6bcd498cac84e6f427ed0"></a>

Gets the value of TransactionId.

#### `public inline FORCEINLINE void `[`SetTransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1a7c10c3c0846e3654f0433835e7688764)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a7c10c3c0846e3654f0433835e7688764"></a>

Sets the value of TransactionId.

#### `public inline FORCEINLINE void `[`SetTransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1aa0e0fd0c072f31105a950818338ad47a)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1aa0e0fd0c072f31105a950818338ad47a"></a>

Sets the value of TransactionId using move semantics.

#### `public inline FORCEINLINE ERHAPI_PlatformRegion & `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1a0d47aed433d12ad384540c078cb5e1e9)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a0d47aed433d12ad384540c078cb5e1e9"></a>

Gets the value of PlatformRegion.

#### `public inline FORCEINLINE const ERHAPI_PlatformRegion & `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1a63537ec914602e78d7bcc4b1116dad75)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a63537ec914602e78d7bcc4b1116dad75"></a>

Gets the value of PlatformRegion.

#### `public inline FORCEINLINE void `[`SetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1aef429f3c1efc161c1fff1450337885b6)`(const ERHAPI_PlatformRegion & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1aef429f3c1efc161c1fff1450337885b6"></a>

Sets the value of PlatformRegion.

#### `public inline FORCEINLINE void `[`SetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1a0338b15fea4f9543d02b09e717773b39)`(ERHAPI_PlatformRegion && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a0338b15fea4f9543d02b09e717773b39"></a>

Sets the value of PlatformRegion using move semantics.

#### `public inline FORCEINLINE FString & `[`GetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1a0e38e96a7ea4987fd2bb74094a133475)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a0e38e96a7ea4987fd2bb74094a133475"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1a9e503258741595791f91ca4a2227a78d)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a9e503258741595791f91ca4a2227a78d"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1a262fa097c6126f882c58723307c4b00a)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a262fa097c6126f882c58723307c4b00a"></a>

Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1a2244a4f510074d14ccd0ba92524d2cc1)`(FString & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a2244a4f510074d14ccd0ba92524d2cc1"></a>

Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetStatusOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1adcf32d9129c6abd7a63b6b6894208ad4)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1adcf32d9129c6abd7a63b6b6894208ad4"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetStatusOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1aefcad2cf1905c70eaca889bf405eea82)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1aefcad2cf1905c70eaca889bf405eea82"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1a58db0f017fe5b6ac37f1214b80175d81)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a58db0f017fe5b6ac37f1214b80175d81"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1a485b0d714509844c76a0d8f265334df3)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a485b0d714509844c76a0d8f265334df3"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.

#### `public inline void `[`ClearStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1ad2735d15394bd2b76d3291a0790cec96)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ad2735d15394bd2b76d3291a0790cec96"></a>

Clears the value of Status_Optional and sets Status_IsSet to false.

#### `public inline FORCEINLINE FString `[`GetDefaultValue_Status`](#structFRHAPI__PlatformEntitlementProcessResult_1ae44f1195397da8163a6d5540acc4f553)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ae44f1195397da8163a6d5540acc4f553"></a>

Returns the default value of Status.

#### `public inline FORCEINLINE FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a8fc838b71f35a42d3511c335a0306bfe)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a8fc838b71f35a42d3511c335a0306bfe"></a>

Gets the value of ErrorCode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1ab717da35c16f3cf7c57d04c77a2dacfb)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ab717da35c16f3cf7c57d04c77a2dacfb"></a>

Gets the value of ErrorCode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a884a9f41864ab4631f816499a7c17f1e)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a884a9f41864ab4631f816499a7c17f1e"></a>

Gets the value of ErrorCode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1afedf2e8b2f5fb7d1e35a7f850aa3e658)`(FString & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1afedf2e8b2f5fb7d1e35a7f850aa3e658"></a>

Fills OutValue with the value of ErrorCode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a30d14e51dcb4aaf9051e1679c873f89c)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a30d14e51dcb4aaf9051e1679c873f89c"></a>

Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a7d2267309d1ddb7104f03c41c2b0c78e)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a7d2267309d1ddb7104f03c41c2b0c78e"></a>

Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1aefe747378402bcaa9988b200e3598043)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1aefe747378402bcaa9988b200e3598043"></a>

Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true.

#### `public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a3179a1856f040ba8d5a7afa4b57b5629)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a3179a1856f040ba8d5a7afa4b57b5629"></a>

Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true using move semantics.

#### `public inline void `[`ClearErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a93ec866a89fb160d53864189c43c91ce)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a93ec866a89fb160d53864189c43c91ce"></a>

Clears the value of ErrorCode_Optional and sets ErrorCode_IsSet to false.

#### `public inline FORCEINLINE void `[`SetErrorCodeToNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a19b5f9598ac7e11791272887ec58d917)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a19b5f9598ac7e11791272887ec58d917"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsErrorCodeNull`](#structFRHAPI__PlatformEntitlementProcessResult_1adc1154c96037544ba21395679f4b1b29)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1adc1154c96037544ba21395679f4b1b29"></a>

Checks whether ErrorCode_Optional is set to null.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a5c956d4fac2fe6f62f6839029e4ac62a)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a5c956d4fac2fe6f62f6839029e4ac62a"></a>

Gets the value of ClientEntitlements_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a71cefb816ef227ffa013546344e72c7b)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a71cefb816ef227ffa013546344e72c7b"></a>

Gets the value of ClientEntitlements_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1af983c05efd30a523f27e4d486bf621cd)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1af983c05efd30a523f27e4d486bf621cd"></a>

Gets the value of ClientEntitlements_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a45057f57e5a0a018a26c5a19f3eb4c23)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a45057f57e5a0a018a26c5a19f3eb4c23"></a>

Fills OutValue with the value of ClientEntitlements_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetClientEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1ae96ce0a1472bd3523d7c8dbb711a5d55)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ae96ce0a1472bd3523d7c8dbb711a5d55"></a>

Returns a pointer to ClientEntitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetClientEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1ae0f25f29dc86ed1da3200225e7389901)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ae0f25f29dc86ed1da3200225e7389901"></a>

Returns a pointer to ClientEntitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a4eb3e9b4e5ddcdb4c417385ad5c70065)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a4eb3e9b4e5ddcdb4c417385ad5c70065"></a>

Sets the value of ClientEntitlements_Optional and also sets ClientEntitlements_IsSet to true.

#### `public inline FORCEINLINE void `[`SetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1ae7b252e0436b52d4c2985ff787cdd551)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ae7b252e0436b52d4c2985ff787cdd551"></a>

Sets the value of ClientEntitlements_Optional and also sets ClientEntitlements_IsSet to true using move semantics.

#### `public inline void `[`ClearClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1af651efecd120bf707ceb0030de1faaa5)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1af651efecd120bf707ceb0030de1faaa5"></a>

Clears the value of ClientEntitlements_Optional and sets ClientEntitlements_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a3957f7a5e82adacf743053eae9039423)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a3957f7a5e82adacf743053eae9039423"></a>

Gets the value of ServerEntitlements_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1add046e68855aa74b32c3f21a08f15990)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1add046e68855aa74b32c3f21a08f15990"></a>

Gets the value of ServerEntitlements_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a569db2d919f2d3d45b1989c12378303d)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a569db2d919f2d3d45b1989c12378303d"></a>

Gets the value of ServerEntitlements_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1ac4f22e09d4291d162a4ef058d3682c12)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ac4f22e09d4291d162a4ef058d3682c12"></a>

Fills OutValue with the value of ServerEntitlements_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetServerEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a7278ebf302c45805abceefbcbe267035)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a7278ebf302c45805abceefbcbe267035"></a>

Returns a pointer to ServerEntitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetServerEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a4ff4546e771492fe81ef24f8698504e0)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a4ff4546e771492fe81ef24f8698504e0"></a>

Returns a pointer to ServerEntitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a28e9ef6fa3b571f58c23394736200099)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a28e9ef6fa3b571f58c23394736200099"></a>

Sets the value of ServerEntitlements_Optional and also sets ServerEntitlements_IsSet to true.

#### `public inline FORCEINLINE void `[`SetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a4b31ff2c4c56bfd7cae42b7447f2ff51)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a4b31ff2c4c56bfd7cae42b7447f2ff51"></a>

Sets the value of ServerEntitlements_Optional and also sets ServerEntitlements_IsSet to true using move semantics.

#### `public inline void `[`ClearServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1aa079715cdcbcf91c7ce6dc1f2bc5f0d6)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1aa079715cdcbcf91c7ce6dc1f2bc5f0d6"></a>

Clears the value of ServerEntitlements_Optional and sets ServerEntitlements_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_InventoryPlatform & `[`GetPlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1a5307c93422b50af1efbf9136e3ad316d)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a5307c93422b50af1efbf9136e3ad316d"></a>

Gets the value of PlatformId.

#### `public inline FORCEINLINE const ERHAPI_InventoryPlatform & `[`GetPlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1a057bf4e0b0777ab358f07ab52aed3784)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a057bf4e0b0777ab358f07ab52aed3784"></a>

Gets the value of PlatformId.

#### `public inline FORCEINLINE void `[`SetPlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1ac59358f312d76915c3e9edcf9008aae3)`(const ERHAPI_InventoryPlatform & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ac59358f312d76915c3e9edcf9008aae3"></a>

Sets the value of PlatformId.

#### `public inline FORCEINLINE void `[`SetPlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1ac46542705778921ea1c39738d763364c)`(ERHAPI_InventoryPlatform && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ac46542705778921ea1c39738d763364c"></a>

Sets the value of PlatformId using move semantics.

#### `public inline FORCEINLINE FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1ad3856f65b04cd4668957388bc3412928)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ad3856f65b04cd4668957388bc3412928"></a>

Gets the value of PlatformUserId.

#### `public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1aa1f8fc3d2716a1f722627ca3c40d1e35)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1aa1f8fc3d2716a1f722627ca3c40d1e35"></a>

Gets the value of PlatformUserId.

#### `public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1a761b95030f1c194a1b37c4c36e1a0ed9)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a761b95030f1c194a1b37c4c36e1a0ed9"></a>

Sets the value of PlatformUserId.

#### `public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1a273005a698156986e191cb94cf1c5b32)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a273005a698156986e191cb94cf1c5b32"></a>

Sets the value of PlatformUserId using move semantics.

#### `public inline FORCEINLINE bool & `[`GetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a33cc1b2ed52b2fd8035a2f20ac6df645)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a33cc1b2ed52b2fd8035a2f20ac6df645"></a>

Gets the value of SkippedServerEntitlements_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a20ee7a1ed0da0f0dcaa1dc77f898adb7)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a20ee7a1ed0da0f0dcaa1dc77f898adb7"></a>

Gets the value of SkippedServerEntitlements_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a40dc198d4964f32389e1019dd2543b1c)`(const bool & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a40dc198d4964f32389e1019dd2543b1c"></a>

Gets the value of SkippedServerEntitlements_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1ace6f423c979f4618b66d64416af50f0f)`(bool & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ace6f423c979f4618b66d64416af50f0f"></a>

Fills OutValue with the value of SkippedServerEntitlements_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetSkippedServerEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1ac95ed1d5b7610ce76f54674b69297334)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ac95ed1d5b7610ce76f54674b69297334"></a>

Returns a pointer to SkippedServerEntitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetSkippedServerEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a5e08c9af9cee82bc75660b74febc5f30)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a5e08c9af9cee82bc75660b74febc5f30"></a>

Returns a pointer to SkippedServerEntitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a846726aef47fc3fd138aa127979a802a)`(const bool & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a846726aef47fc3fd138aa127979a802a"></a>

Sets the value of SkippedServerEntitlements_Optional and also sets SkippedServerEntitlements_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a3ef418626f0a988d9651c644802f9dcd)`(bool && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a3ef418626f0a988d9651c644802f9dcd"></a>

Sets the value of SkippedServerEntitlements_Optional and also sets SkippedServerEntitlements_IsSet to true using move semantics.

#### `public inline void `[`ClearSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a06090335dcdb3a2b4fbb0521e5fa685e)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a06090335dcdb3a2b4fbb0521e5fa685e"></a>

Clears the value of SkippedServerEntitlements_Optional and sets SkippedServerEntitlements_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_SkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a2acf65c4a1e14c6d465432754660d752)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a2acf65c4a1e14c6d465432754660d752"></a>

Returns the default value of SkippedServerEntitlements.

