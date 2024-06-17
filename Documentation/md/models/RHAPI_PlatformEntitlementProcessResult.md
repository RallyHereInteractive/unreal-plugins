# group `RHAPI_PlatformEntitlementProcessResult` <a id="group__RHAPI__PlatformEntitlementProcessResult"></a>

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
`public ERHAPI_ClientType `[`ClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1a617fe403bc85562d6bd5085c2b72fe00) | client type this purchase was made on
`public FString `[`TransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1ac4e5064b8dd8dce73c0d93ff4bc196d8) | unique id for this transaction on the platform
`public ERHAPI_PlatformRegion `[`PlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1adb311eefbbc7b0e7e34a2189e7c2edaf) | region this purchase was made in
`public FString `[`Status_Optional`](#structFRHAPI__PlatformEntitlementProcessResult_1a8d74f677f67627a8b0a1367d99655fdf) | status of this result
`public bool `[`Status_IsSet`](#structFRHAPI__PlatformEntitlementProcessResult_1abca3d4ab6149c9cb2998b0b41ed8ef7c) | true if Status_Optional has been set to a value
`public FString `[`ErrorCode_Optional`](#structFRHAPI__PlatformEntitlementProcessResult_1aae6a30857286c415c7961ae56e4792e9) | Error code for failures not associated with a specific entitlement.
`public bool `[`ErrorCode_IsSet`](#structFRHAPI__PlatformEntitlementProcessResult_1aee512a01a4abab2afb14b0b2ca678efe) | true if ErrorCode_Optional has been set to a value
`public TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > `[`ClientEntitlements_Optional`](#structFRHAPI__PlatformEntitlementProcessResult_1ab364b54bdebc6777f9ffe6e046161b6c) | Client entitlements that have been processed.
`public bool `[`ClientEntitlements_IsSet`](#structFRHAPI__PlatformEntitlementProcessResult_1a53fc5f42cd21746352e77d4e11ff1e35) | true if ClientEntitlements_Optional has been set to a value
`public TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > `[`ServerEntitlements_Optional`](#structFRHAPI__PlatformEntitlementProcessResult_1aa5c0162acdebd1b679a3a532480f56f1) | Server entitlements that have been processed.
`public bool `[`ServerEntitlements_IsSet`](#structFRHAPI__PlatformEntitlementProcessResult_1a7811dbb2ed9aa8c86ebf55e7b65a5f1f) | true if ServerEntitlements_Optional has been set to a value
`public ERHAPI_Platform `[`PlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1a3942cf5bfee604460bfb00c0bda56728) | Platform these transactions were processed on.
`public FString `[`PlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1a5e27e7e6c68e086ec3a2eb805c2d6488) | Unique identifier for the platform user that processed this entitlement.
`public bool `[`SkippedServerEntitlements_Optional`](#structFRHAPI__PlatformEntitlementProcessResult_1aedc8e7425204af954d95b39faaef2e53) | True if the server entitlements were skipped.
`public bool `[`SkippedServerEntitlements_IsSet`](#structFRHAPI__PlatformEntitlementProcessResult_1a1588a5d0d180aff1f81430371a93a6e0) | true if SkippedServerEntitlements_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformEntitlementProcessResult_1ad108abc48df6c4c617e0fe351747dc01)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformEntitlementProcessResult_1aba0657945dfaf09647ac494f0c0e6ae5)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetRequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1ad91f9ad6322419576a16fa20ae6f024c)`()` | Gets the value of RequestId.
`public inline const FString & `[`GetRequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1a670729b04ecca6b3fbd9eba1f0030bf6)`() const` | Gets the value of RequestId.
`public inline void `[`SetRequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1ad2aab3c733cbe131b97c43c18cc4648f)`(const FString & NewValue)` | Sets the value of RequestId.
`public inline void `[`SetRequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1a17f0405b2999da698b4dcb5ada2811fb)`(FString && NewValue)` | Sets the value of RequestId using move semantics.
`public inline ERHAPI_ClientType & `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1a8a807f7b00f898958aa1ca1ac40e6089)`()` | Gets the value of ClientType.
`public inline const ERHAPI_ClientType & `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1a98a9c8edeabca820a66ab0777a256168)`() const` | Gets the value of ClientType.
`public inline void `[`SetClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1a231b528ffa48320eaf7383f92fa1187f)`(const ERHAPI_ClientType & NewValue)` | Sets the value of ClientType.
`public inline void `[`SetClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1ab7c621c7f7d20a96d4a205c212259d20)`(ERHAPI_ClientType && NewValue)` | Sets the value of ClientType using move semantics.
`public inline FString & `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1a50babcdd3fee3fd2be24c39d7e207ee5)`()` | Gets the value of TransactionId.
`public inline const FString & `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1a61eb2bad09ee850069cf8b17f60bf330)`() const` | Gets the value of TransactionId.
`public inline void `[`SetTransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1a4169cdc5aa01c78fba62b46cd907196d)`(const FString & NewValue)` | Sets the value of TransactionId.
`public inline void `[`SetTransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1a7dbca44d3487576d4562645537b93374)`(FString && NewValue)` | Sets the value of TransactionId using move semantics.
`public inline ERHAPI_PlatformRegion & `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1a9349613c3dfcffe134a3346461da14d3)`()` | Gets the value of PlatformRegion.
`public inline const ERHAPI_PlatformRegion & `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1a7b3cf321a18a94bcd4f1a15bf155e202)`() const` | Gets the value of PlatformRegion.
`public inline void `[`SetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1a613610ac409ad0341d7cc573dec46cb7)`(const ERHAPI_PlatformRegion & NewValue)` | Sets the value of PlatformRegion.
`public inline void `[`SetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1a09570f36962de53e208a5831f3fdef1c)`(ERHAPI_PlatformRegion && NewValue)` | Sets the value of PlatformRegion using move semantics.
`public inline FString & `[`GetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1a33026d1703c93269fb8c0d570a7f6cd8)`()` | Gets the value of Status_Optional, regardless of it having been set.
`public inline const FString & `[`GetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1a14aecf516930c582ef19093ba68e2a36)`() const` | Gets the value of Status_Optional, regardless of it having been set.
`public inline const FString & `[`GetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1a0ca92dbcc87160e09c5f9ddef68ca5f7)`(const FString & DefaultValue) const` | Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1ad2d20b01df86f12578ffadacc7ec0a7a)`(FString & OutValue) const` | Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStatusOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a9a89192ad77bc1fae2888bc8d69d4326)`()` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStatusOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a02188a9702b28bd5bd5f6b8fc851a58d)`() const` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1adb0151a121028f0bacefc2dfeb0f36f6)`(const FString & NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true.
`public inline void `[`SetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1a4a5f8ca8e26f8994d49d7b866eebff4d)`(FString && NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.
`public inline void `[`ClearStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1ad2735d15394bd2b76d3291a0790cec96)`()` | Clears the value of Status_Optional and sets Status_IsSet to false.
`public inline bool `[`IsStatusDefaultValue`](#structFRHAPI__PlatformEntitlementProcessResult_1a87e997a54582d7f013b354e3489f60dc)`() const` | Returns true if Status_Optional is set and matches the default value.
`public inline void `[`SetStatusToDefault`](#structFRHAPI__PlatformEntitlementProcessResult_1a15d890c6ce1c2c6f535b6868932b5664)`()` | Sets the value of Status_Optional to its default and also sets Status_IsSet to true.
`public inline FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a1870188bc33fea7e643edeb737d6fc48)`()` | Gets the value of ErrorCode_Optional, regardless of it having been set.
`public inline const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a9d71b9d22179d01e2e3d4a90a54fb14f)`() const` | Gets the value of ErrorCode_Optional, regardless of it having been set.
`public inline const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a16d0d15a5d0ab057f295e87d7fbc7ee0)`(const FString & DefaultValue) const` | Gets the value of ErrorCode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a9d8aeb8cc843338c9a182221b75fd4ef)`(FString & OutValue) const` | Fills OutValue with the value of ErrorCode_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a8457b11145df5eb9fdf19ea97035e395)`()` | Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a7bf49f1b35f9b7e446c50b7762a00174)`() const` | Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a65841c2ac942ab03bc18ac8b674afd1f)`(const FString & NewValue)` | Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true.
`public inline void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1ad34ba6e275d1e94533c55a375b3c2107)`(FString && NewValue)` | Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true using move semantics.
`public inline void `[`ClearErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a93ec866a89fb160d53864189c43c91ce)`()` | Clears the value of ErrorCode_Optional and sets ErrorCode_IsSet to false.
`public inline TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1ace2fa9dcbf9c9ced3c956a60efb6cb2b)`()` | Gets the value of ClientEntitlements_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1ad7276a2b47f6e251330e25604416ad7f)`() const` | Gets the value of ClientEntitlements_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a4d311cc311e31b455690fcd8e54df93d)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & DefaultValue) const` | Gets the value of ClientEntitlements_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a2fbb3228b6708d7898ef5f914187f140)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & OutValue) const` | Fills OutValue with the value of ClientEntitlements_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetClientEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a97a72289245fbef21ba70ca4c9d8bb8a)`()` | Returns a pointer to ClientEntitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetClientEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a7b724e483f4493ff591c91845da1d7a9)`() const` | Returns a pointer to ClientEntitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a5ced2a22c971b9b55150d6d2f290d657)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & NewValue)` | Sets the value of ClientEntitlements_Optional and also sets ClientEntitlements_IsSet to true.
`public inline void `[`SetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a89a1cfc6a3aa99a7fd443f9e115e091f)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > && NewValue)` | Sets the value of ClientEntitlements_Optional and also sets ClientEntitlements_IsSet to true using move semantics.
`public inline void `[`ClearClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1af651efecd120bf707ceb0030de1faaa5)`()` | Clears the value of ClientEntitlements_Optional and sets ClientEntitlements_IsSet to false.
`public inline TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a343c7db8c5068c4bbe6038fa2895cd06)`()` | Gets the value of ServerEntitlements_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1ab4559c62ee5964d0d60a2db04c01ceae)`() const` | Gets the value of ServerEntitlements_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a03801eab63d8d1ea1b63865738d626f7)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & DefaultValue) const` | Gets the value of ServerEntitlements_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a01c2734101ea487d2a46ce29c128d476)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & OutValue) const` | Fills OutValue with the value of ServerEntitlements_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetServerEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1adb7f2a3df2d63ce697f094ca2782c7c5)`()` | Returns a pointer to ServerEntitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetServerEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1aa725b81b2a5d43733241ccc8a2d95791)`() const` | Returns a pointer to ServerEntitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a2b34311d32fa7d37a22d88e358c90279)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & NewValue)` | Sets the value of ServerEntitlements_Optional and also sets ServerEntitlements_IsSet to true.
`public inline void `[`SetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1afcffdc50adb7bbb283bc5159774708a1)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > && NewValue)` | Sets the value of ServerEntitlements_Optional and also sets ServerEntitlements_IsSet to true using move semantics.
`public inline void `[`ClearServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1aa079715cdcbcf91c7ce6dc1f2bc5f0d6)`()` | Clears the value of ServerEntitlements_Optional and sets ServerEntitlements_IsSet to false.
`public inline ERHAPI_Platform & `[`GetPlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1ab72adc5136d6adfb22b38eb7d079b5c6)`()` | Gets the value of PlatformId.
`public inline const ERHAPI_Platform & `[`GetPlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1a9022daf3ec5d7955a01f8a1f1fa59c92)`() const` | Gets the value of PlatformId.
`public inline void `[`SetPlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1a58347440bfd05f90d90b163a54a87a31)`(const ERHAPI_Platform & NewValue)` | Sets the value of PlatformId.
`public inline void `[`SetPlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1adff47140afff66174b95b83c694c71e9)`(ERHAPI_Platform && NewValue)` | Sets the value of PlatformId using move semantics.
`public inline FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1a41545147a09fbaddd80eee600ca7c6a8)`()` | Gets the value of PlatformUserId.
`public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1a8376f3a70d8e352596e132f4835b76e1)`() const` | Gets the value of PlatformUserId.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1aeb0f248cba82b79677a170499a439acb)`(const FString & NewValue)` | Sets the value of PlatformUserId.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1a82366c739f6e0bca5099ac0ebc0bbbdf)`(FString && NewValue)` | Sets the value of PlatformUserId using move semantics.
`public inline bool & `[`GetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1aba052cf9707bc398e9f0736d949bec03)`()` | Gets the value of SkippedServerEntitlements_Optional, regardless of it having been set.
`public inline const bool & `[`GetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a118ca7f349f1fe9d7a06398919c5ed3f)`() const` | Gets the value of SkippedServerEntitlements_Optional, regardless of it having been set.
`public inline const bool & `[`GetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a7b2438905118d37739885ae4f2b8b403)`(const bool & DefaultValue) const` | Gets the value of SkippedServerEntitlements_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a72e1cfde5ebdb6d10d21e65c95cc5651)`(bool & OutValue) const` | Fills OutValue with the value of SkippedServerEntitlements_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetSkippedServerEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a407ef16410bdad9c8e71edf540dd5795)`()` | Returns a pointer to SkippedServerEntitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetSkippedServerEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a1ff559cd97945d0cd53426fbebcd3aae)`() const` | Returns a pointer to SkippedServerEntitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1ac084f78fed3ed8410e2c6a8132b30b2c)`(const bool & NewValue)` | Sets the value of SkippedServerEntitlements_Optional and also sets SkippedServerEntitlements_IsSet to true.
`public inline void `[`SetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a590028abdad3cbf4b6cd7744641e7744)`(bool && NewValue)` | Sets the value of SkippedServerEntitlements_Optional and also sets SkippedServerEntitlements_IsSet to true using move semantics.
`public inline void `[`ClearSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a06090335dcdb3a2b4fbb0521e5fa685e)`()` | Clears the value of SkippedServerEntitlements_Optional and sets SkippedServerEntitlements_IsSet to false.
`public inline bool `[`IsSkippedServerEntitlementsDefaultValue`](#structFRHAPI__PlatformEntitlementProcessResult_1ae124e63567ad85ca72f9ef7297f9dd4a)`() const` | Returns true if SkippedServerEntitlements_Optional is set and matches the default value.
`public inline void `[`SetSkippedServerEntitlementsToDefault`](#structFRHAPI__PlatformEntitlementProcessResult_1ac278ece6c8d1a8180f643b6f342f5a96)`()` | Sets the value of SkippedServerEntitlements_Optional to its default and also sets SkippedServerEntitlements_IsSet to true.

### Members

#### `public FString `[`RequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1ae996578068367b465028369b1e127b3e) <a id="structFRHAPI__PlatformEntitlementProcessResult_1ae996578068367b465028369b1e127b3e"></a>

unique id to allow tracking the request

#### `public ERHAPI_ClientType `[`ClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1a617fe403bc85562d6bd5085c2b72fe00) <a id="structFRHAPI__PlatformEntitlementProcessResult_1a617fe403bc85562d6bd5085c2b72fe00"></a>

client type this purchase was made on

#### `public FString `[`TransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1ac4e5064b8dd8dce73c0d93ff4bc196d8) <a id="structFRHAPI__PlatformEntitlementProcessResult_1ac4e5064b8dd8dce73c0d93ff4bc196d8"></a>

unique id for this transaction on the platform

#### `public ERHAPI_PlatformRegion `[`PlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1adb311eefbbc7b0e7e34a2189e7c2edaf) <a id="structFRHAPI__PlatformEntitlementProcessResult_1adb311eefbbc7b0e7e34a2189e7c2edaf"></a>

region this purchase was made in

#### `public FString `[`Status_Optional`](#structFRHAPI__PlatformEntitlementProcessResult_1a8d74f677f67627a8b0a1367d99655fdf) <a id="structFRHAPI__PlatformEntitlementProcessResult_1a8d74f677f67627a8b0a1367d99655fdf"></a>

status of this result

#### `public bool `[`Status_IsSet`](#structFRHAPI__PlatformEntitlementProcessResult_1abca3d4ab6149c9cb2998b0b41ed8ef7c) <a id="structFRHAPI__PlatformEntitlementProcessResult_1abca3d4ab6149c9cb2998b0b41ed8ef7c"></a>

true if Status_Optional has been set to a value

#### `public FString `[`ErrorCode_Optional`](#structFRHAPI__PlatformEntitlementProcessResult_1aae6a30857286c415c7961ae56e4792e9) <a id="structFRHAPI__PlatformEntitlementProcessResult_1aae6a30857286c415c7961ae56e4792e9"></a>

Error code for failures not associated with a specific entitlement.

#### `public bool `[`ErrorCode_IsSet`](#structFRHAPI__PlatformEntitlementProcessResult_1aee512a01a4abab2afb14b0b2ca678efe) <a id="structFRHAPI__PlatformEntitlementProcessResult_1aee512a01a4abab2afb14b0b2ca678efe"></a>

true if ErrorCode_Optional has been set to a value

#### `public TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > `[`ClientEntitlements_Optional`](#structFRHAPI__PlatformEntitlementProcessResult_1ab364b54bdebc6777f9ffe6e046161b6c) <a id="structFRHAPI__PlatformEntitlementProcessResult_1ab364b54bdebc6777f9ffe6e046161b6c"></a>

Client entitlements that have been processed.

#### `public bool `[`ClientEntitlements_IsSet`](#structFRHAPI__PlatformEntitlementProcessResult_1a53fc5f42cd21746352e77d4e11ff1e35) <a id="structFRHAPI__PlatformEntitlementProcessResult_1a53fc5f42cd21746352e77d4e11ff1e35"></a>

true if ClientEntitlements_Optional has been set to a value

#### `public TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > `[`ServerEntitlements_Optional`](#structFRHAPI__PlatformEntitlementProcessResult_1aa5c0162acdebd1b679a3a532480f56f1) <a id="structFRHAPI__PlatformEntitlementProcessResult_1aa5c0162acdebd1b679a3a532480f56f1"></a>

Server entitlements that have been processed.

#### `public bool `[`ServerEntitlements_IsSet`](#structFRHAPI__PlatformEntitlementProcessResult_1a7811dbb2ed9aa8c86ebf55e7b65a5f1f) <a id="structFRHAPI__PlatformEntitlementProcessResult_1a7811dbb2ed9aa8c86ebf55e7b65a5f1f"></a>

true if ServerEntitlements_Optional has been set to a value

#### `public ERHAPI_Platform `[`PlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1a3942cf5bfee604460bfb00c0bda56728) <a id="structFRHAPI__PlatformEntitlementProcessResult_1a3942cf5bfee604460bfb00c0bda56728"></a>

Platform these transactions were processed on.

#### `public FString `[`PlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1a5e27e7e6c68e086ec3a2eb805c2d6488) <a id="structFRHAPI__PlatformEntitlementProcessResult_1a5e27e7e6c68e086ec3a2eb805c2d6488"></a>

Unique identifier for the platform user that processed this entitlement.

#### `public bool `[`SkippedServerEntitlements_Optional`](#structFRHAPI__PlatformEntitlementProcessResult_1aedc8e7425204af954d95b39faaef2e53) <a id="structFRHAPI__PlatformEntitlementProcessResult_1aedc8e7425204af954d95b39faaef2e53"></a>

True if the server entitlements were skipped.

#### `public bool `[`SkippedServerEntitlements_IsSet`](#structFRHAPI__PlatformEntitlementProcessResult_1a1588a5d0d180aff1f81430371a93a6e0) <a id="structFRHAPI__PlatformEntitlementProcessResult_1a1588a5d0d180aff1f81430371a93a6e0"></a>

true if SkippedServerEntitlements_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformEntitlementProcessResult_1ad108abc48df6c4c617e0fe351747dc01)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ad108abc48df6c4c617e0fe351747dc01"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformEntitlementProcessResult_1aba0657945dfaf09647ac494f0c0e6ae5)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1aba0657945dfaf09647ac494f0c0e6ae5"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetRequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1ad91f9ad6322419576a16fa20ae6f024c)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ad91f9ad6322419576a16fa20ae6f024c"></a>

Gets the value of RequestId.

#### `public inline const FString & `[`GetRequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1a670729b04ecca6b3fbd9eba1f0030bf6)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a670729b04ecca6b3fbd9eba1f0030bf6"></a>

Gets the value of RequestId.

#### `public inline void `[`SetRequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1ad2aab3c733cbe131b97c43c18cc4648f)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ad2aab3c733cbe131b97c43c18cc4648f"></a>

Sets the value of RequestId.

#### `public inline void `[`SetRequestId`](#structFRHAPI__PlatformEntitlementProcessResult_1a17f0405b2999da698b4dcb5ada2811fb)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a17f0405b2999da698b4dcb5ada2811fb"></a>

Sets the value of RequestId using move semantics.

#### `public inline ERHAPI_ClientType & `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1a8a807f7b00f898958aa1ca1ac40e6089)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a8a807f7b00f898958aa1ca1ac40e6089"></a>

Gets the value of ClientType.

#### `public inline const ERHAPI_ClientType & `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1a98a9c8edeabca820a66ab0777a256168)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a98a9c8edeabca820a66ab0777a256168"></a>

Gets the value of ClientType.

#### `public inline void `[`SetClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1a231b528ffa48320eaf7383f92fa1187f)`(const ERHAPI_ClientType & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a231b528ffa48320eaf7383f92fa1187f"></a>

Sets the value of ClientType.

#### `public inline void `[`SetClientType`](#structFRHAPI__PlatformEntitlementProcessResult_1ab7c621c7f7d20a96d4a205c212259d20)`(ERHAPI_ClientType && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ab7c621c7f7d20a96d4a205c212259d20"></a>

Sets the value of ClientType using move semantics.

#### `public inline FString & `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1a50babcdd3fee3fd2be24c39d7e207ee5)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a50babcdd3fee3fd2be24c39d7e207ee5"></a>

Gets the value of TransactionId.

#### `public inline const FString & `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1a61eb2bad09ee850069cf8b17f60bf330)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a61eb2bad09ee850069cf8b17f60bf330"></a>

Gets the value of TransactionId.

#### `public inline void `[`SetTransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1a4169cdc5aa01c78fba62b46cd907196d)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a4169cdc5aa01c78fba62b46cd907196d"></a>

Sets the value of TransactionId.

#### `public inline void `[`SetTransactionId`](#structFRHAPI__PlatformEntitlementProcessResult_1a7dbca44d3487576d4562645537b93374)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a7dbca44d3487576d4562645537b93374"></a>

Sets the value of TransactionId using move semantics.

#### `public inline ERHAPI_PlatformRegion & `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1a9349613c3dfcffe134a3346461da14d3)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a9349613c3dfcffe134a3346461da14d3"></a>

Gets the value of PlatformRegion.

#### `public inline const ERHAPI_PlatformRegion & `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1a7b3cf321a18a94bcd4f1a15bf155e202)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a7b3cf321a18a94bcd4f1a15bf155e202"></a>

Gets the value of PlatformRegion.

#### `public inline void `[`SetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1a613610ac409ad0341d7cc573dec46cb7)`(const ERHAPI_PlatformRegion & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a613610ac409ad0341d7cc573dec46cb7"></a>

Sets the value of PlatformRegion.

#### `public inline void `[`SetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessResult_1a09570f36962de53e208a5831f3fdef1c)`(ERHAPI_PlatformRegion && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a09570f36962de53e208a5831f3fdef1c"></a>

Sets the value of PlatformRegion using move semantics.

#### `public inline FString & `[`GetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1a33026d1703c93269fb8c0d570a7f6cd8)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a33026d1703c93269fb8c0d570a7f6cd8"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1a14aecf516930c582ef19093ba68e2a36)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a14aecf516930c582ef19093ba68e2a36"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1a0ca92dbcc87160e09c5f9ddef68ca5f7)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a0ca92dbcc87160e09c5f9ddef68ca5f7"></a>

Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1ad2d20b01df86f12578ffadacc7ec0a7a)`(FString & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ad2d20b01df86f12578ffadacc7ec0a7a"></a>

Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStatusOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a9a89192ad77bc1fae2888bc8d69d4326)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a9a89192ad77bc1fae2888bc8d69d4326"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStatusOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a02188a9702b28bd5bd5f6b8fc851a58d)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a02188a9702b28bd5bd5f6b8fc851a58d"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1adb0151a121028f0bacefc2dfeb0f36f6)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1adb0151a121028f0bacefc2dfeb0f36f6"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true.

#### `public inline void `[`SetStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1a4a5f8ca8e26f8994d49d7b866eebff4d)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a4a5f8ca8e26f8994d49d7b866eebff4d"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.

#### `public inline void `[`ClearStatus`](#structFRHAPI__PlatformEntitlementProcessResult_1ad2735d15394bd2b76d3291a0790cec96)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ad2735d15394bd2b76d3291a0790cec96"></a>

Clears the value of Status_Optional and sets Status_IsSet to false.

#### `public inline bool `[`IsStatusDefaultValue`](#structFRHAPI__PlatformEntitlementProcessResult_1a87e997a54582d7f013b354e3489f60dc)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a87e997a54582d7f013b354e3489f60dc"></a>

Returns true if Status_Optional is set and matches the default value.

#### `public inline void `[`SetStatusToDefault`](#structFRHAPI__PlatformEntitlementProcessResult_1a15d890c6ce1c2c6f535b6868932b5664)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a15d890c6ce1c2c6f535b6868932b5664"></a>

Sets the value of Status_Optional to its default and also sets Status_IsSet to true.

#### `public inline FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a1870188bc33fea7e643edeb737d6fc48)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a1870188bc33fea7e643edeb737d6fc48"></a>

Gets the value of ErrorCode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a9d71b9d22179d01e2e3d4a90a54fb14f)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a9d71b9d22179d01e2e3d4a90a54fb14f"></a>

Gets the value of ErrorCode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a16d0d15a5d0ab057f295e87d7fbc7ee0)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a16d0d15a5d0ab057f295e87d7fbc7ee0"></a>

Gets the value of ErrorCode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a9d8aeb8cc843338c9a182221b75fd4ef)`(FString & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a9d8aeb8cc843338c9a182221b75fd4ef"></a>

Fills OutValue with the value of ErrorCode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a8457b11145df5eb9fdf19ea97035e395)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a8457b11145df5eb9fdf19ea97035e395"></a>

Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a7bf49f1b35f9b7e446c50b7762a00174)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a7bf49f1b35f9b7e446c50b7762a00174"></a>

Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a65841c2ac942ab03bc18ac8b674afd1f)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a65841c2ac942ab03bc18ac8b674afd1f"></a>

Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true.

#### `public inline void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1ad34ba6e275d1e94533c55a375b3c2107)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ad34ba6e275d1e94533c55a375b3c2107"></a>

Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true using move semantics.

#### `public inline void `[`ClearErrorCode`](#structFRHAPI__PlatformEntitlementProcessResult_1a93ec866a89fb160d53864189c43c91ce)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a93ec866a89fb160d53864189c43c91ce"></a>

Clears the value of ErrorCode_Optional and sets ErrorCode_IsSet to false.

#### `public inline TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1ace2fa9dcbf9c9ced3c956a60efb6cb2b)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ace2fa9dcbf9c9ced3c956a60efb6cb2b"></a>

Gets the value of ClientEntitlements_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1ad7276a2b47f6e251330e25604416ad7f)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ad7276a2b47f6e251330e25604416ad7f"></a>

Gets the value of ClientEntitlements_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a4d311cc311e31b455690fcd8e54df93d)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a4d311cc311e31b455690fcd8e54df93d"></a>

Gets the value of ClientEntitlements_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a2fbb3228b6708d7898ef5f914187f140)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a2fbb3228b6708d7898ef5f914187f140"></a>

Fills OutValue with the value of ClientEntitlements_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetClientEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a97a72289245fbef21ba70ca4c9d8bb8a)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a97a72289245fbef21ba70ca4c9d8bb8a"></a>

Returns a pointer to ClientEntitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetClientEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a7b724e483f4493ff591c91845da1d7a9)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a7b724e483f4493ff591c91845da1d7a9"></a>

Returns a pointer to ClientEntitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a5ced2a22c971b9b55150d6d2f290d657)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a5ced2a22c971b9b55150d6d2f290d657"></a>

Sets the value of ClientEntitlements_Optional and also sets ClientEntitlements_IsSet to true.

#### `public inline void `[`SetClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a89a1cfc6a3aa99a7fd443f9e115e091f)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a89a1cfc6a3aa99a7fd443f9e115e091f"></a>

Sets the value of ClientEntitlements_Optional and also sets ClientEntitlements_IsSet to true using move semantics.

#### `public inline void `[`ClearClientEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1af651efecd120bf707ceb0030de1faaa5)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1af651efecd120bf707ceb0030de1faaa5"></a>

Clears the value of ClientEntitlements_Optional and sets ClientEntitlements_IsSet to false.

#### `public inline TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a343c7db8c5068c4bbe6038fa2895cd06)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a343c7db8c5068c4bbe6038fa2895cd06"></a>

Gets the value of ServerEntitlements_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1ab4559c62ee5964d0d60a2db04c01ceae)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ab4559c62ee5964d0d60a2db04c01ceae"></a>

Gets the value of ServerEntitlements_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a03801eab63d8d1ea1b63865738d626f7)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a03801eab63d8d1ea1b63865738d626f7"></a>

Gets the value of ServerEntitlements_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a01c2734101ea487d2a46ce29c128d476)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a01c2734101ea487d2a46ce29c128d476"></a>

Fills OutValue with the value of ServerEntitlements_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetServerEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1adb7f2a3df2d63ce697f094ca2782c7c5)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1adb7f2a3df2d63ce697f094ca2782c7c5"></a>

Returns a pointer to ServerEntitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetServerEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1aa725b81b2a5d43733241ccc8a2d95791)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1aa725b81b2a5d43733241ccc8a2d95791"></a>

Returns a pointer to ServerEntitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a2b34311d32fa7d37a22d88e358c90279)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a2b34311d32fa7d37a22d88e358c90279"></a>

Sets the value of ServerEntitlements_Optional and also sets ServerEntitlements_IsSet to true.

#### `public inline void `[`SetServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1afcffdc50adb7bbb283bc5159774708a1)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1afcffdc50adb7bbb283bc5159774708a1"></a>

Sets the value of ServerEntitlements_Optional and also sets ServerEntitlements_IsSet to true using move semantics.

#### `public inline void `[`ClearServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1aa079715cdcbcf91c7ce6dc1f2bc5f0d6)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1aa079715cdcbcf91c7ce6dc1f2bc5f0d6"></a>

Clears the value of ServerEntitlements_Optional and sets ServerEntitlements_IsSet to false.

#### `public inline ERHAPI_Platform & `[`GetPlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1ab72adc5136d6adfb22b38eb7d079b5c6)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ab72adc5136d6adfb22b38eb7d079b5c6"></a>

Gets the value of PlatformId.

#### `public inline const ERHAPI_Platform & `[`GetPlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1a9022daf3ec5d7955a01f8a1f1fa59c92)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a9022daf3ec5d7955a01f8a1f1fa59c92"></a>

Gets the value of PlatformId.

#### `public inline void `[`SetPlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1a58347440bfd05f90d90b163a54a87a31)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a58347440bfd05f90d90b163a54a87a31"></a>

Sets the value of PlatformId.

#### `public inline void `[`SetPlatformId`](#structFRHAPI__PlatformEntitlementProcessResult_1adff47140afff66174b95b83c694c71e9)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1adff47140afff66174b95b83c694c71e9"></a>

Sets the value of PlatformId using move semantics.

#### `public inline FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1a41545147a09fbaddd80eee600ca7c6a8)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a41545147a09fbaddd80eee600ca7c6a8"></a>

Gets the value of PlatformUserId.

#### `public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1a8376f3a70d8e352596e132f4835b76e1)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a8376f3a70d8e352596e132f4835b76e1"></a>

Gets the value of PlatformUserId.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1aeb0f248cba82b79677a170499a439acb)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1aeb0f248cba82b79677a170499a439acb"></a>

Sets the value of PlatformUserId.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__PlatformEntitlementProcessResult_1a82366c739f6e0bca5099ac0ebc0bbbdf)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a82366c739f6e0bca5099ac0ebc0bbbdf"></a>

Sets the value of PlatformUserId using move semantics.

#### `public inline bool & `[`GetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1aba052cf9707bc398e9f0736d949bec03)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1aba052cf9707bc398e9f0736d949bec03"></a>

Gets the value of SkippedServerEntitlements_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a118ca7f349f1fe9d7a06398919c5ed3f)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a118ca7f349f1fe9d7a06398919c5ed3f"></a>

Gets the value of SkippedServerEntitlements_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a7b2438905118d37739885ae4f2b8b403)`(const bool & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a7b2438905118d37739885ae4f2b8b403"></a>

Gets the value of SkippedServerEntitlements_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a72e1cfde5ebdb6d10d21e65c95cc5651)`(bool & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a72e1cfde5ebdb6d10d21e65c95cc5651"></a>

Fills OutValue with the value of SkippedServerEntitlements_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetSkippedServerEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a407ef16410bdad9c8e71edf540dd5795)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a407ef16410bdad9c8e71edf540dd5795"></a>

Returns a pointer to SkippedServerEntitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetSkippedServerEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessResult_1a1ff559cd97945d0cd53426fbebcd3aae)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a1ff559cd97945d0cd53426fbebcd3aae"></a>

Returns a pointer to SkippedServerEntitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1ac084f78fed3ed8410e2c6a8132b30b2c)`(const bool & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ac084f78fed3ed8410e2c6a8132b30b2c"></a>

Sets the value of SkippedServerEntitlements_Optional and also sets SkippedServerEntitlements_IsSet to true.

#### `public inline void `[`SetSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a590028abdad3cbf4b6cd7744641e7744)`(bool && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a590028abdad3cbf4b6cd7744641e7744"></a>

Sets the value of SkippedServerEntitlements_Optional and also sets SkippedServerEntitlements_IsSet to true using move semantics.

#### `public inline void `[`ClearSkippedServerEntitlements`](#structFRHAPI__PlatformEntitlementProcessResult_1a06090335dcdb3a2b4fbb0521e5fa685e)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1a06090335dcdb3a2b4fbb0521e5fa685e"></a>

Clears the value of SkippedServerEntitlements_Optional and sets SkippedServerEntitlements_IsSet to false.

#### `public inline bool `[`IsSkippedServerEntitlementsDefaultValue`](#structFRHAPI__PlatformEntitlementProcessResult_1ae124e63567ad85ca72f9ef7297f9dd4a)`() const` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ae124e63567ad85ca72f9ef7297f9dd4a"></a>

Returns true if SkippedServerEntitlements_Optional is set and matches the default value.

#### `public inline void `[`SetSkippedServerEntitlementsToDefault`](#structFRHAPI__PlatformEntitlementProcessResult_1ac278ece6c8d1a8180f643b6f342f5a96)`()` <a id="structFRHAPI__PlatformEntitlementProcessResult_1ac278ece6c8d1a8180f643b6f342f5a96"></a>

Sets the value of SkippedServerEntitlements_Optional to its default and also sets SkippedServerEntitlements_IsSet to true.

