# group `RHAPI_PlatformEntitlementProcessRequest` <a id="group__RHAPI__PlatformEntitlementProcessRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlatformEntitlementProcessRequest`](#structFRHAPI__PlatformEntitlementProcessRequest) | Request to process a platform entitlement.

## struct `FRHAPI_PlatformEntitlementProcessRequest` <a id="structFRHAPI__PlatformEntitlementProcessRequest"></a>

```
struct FRHAPI_PlatformEntitlementProcessRequest
  : public FRHAPI_Model
```

Request to process a platform entitlement.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`TransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a4100419f0f52a6eb4762beac516b783d) | unique id for this transaction on the platform
`public FString `[`PlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1a746f9d065dc766bde99e6444dccd5d32) | Platform token that can be used to verify the identity of the user.
`public FString `[`PlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1aecab53e4d07a58f9224c82ad6da8c2c6) | Platform this entitlement was purchased was made on.
`public ERHAPI_PlatformRegion `[`PlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1a72ee6aadcdaa3a4c8bf1e482694d14db) | region this purchase was made in
`public ERHAPI_ClientType `[`ClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a9674cba794d55a042afd6040cbf260a7) | client type this purchase was made on
`public TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > `[`Entitlements_Optional`](#structFRHAPI__PlatformEntitlementProcessRequest_1adffb3e1d7d754a5bf42491736b963426) | Platform entitlements to process.
`public bool `[`Entitlements_IsSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1a1182b812111a8390a0f9ba60649e0755) | true if Entitlements_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformEntitlementProcessRequest_1a9e7f9a55d5149972e8d855bc22610868)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformEntitlementProcessRequest_1adef119a7ac18670cd8386e221d83d64d)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a51301f3004ef1dbbaf6340a1d18d5ff8)`()` | Gets the value of TransactionId.
`public inline const FString & `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1aadf7387ad49aafa891f81900413c8df7)`() const` | Gets the value of TransactionId.
`public inline void `[`SetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a42684c88f2421073ff3aa5c93a4d92f4)`(const FString & NewValue)` | Sets the value of TransactionId.
`public inline void `[`SetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1ae120b13e354eb92730661031c08ed9d5)`(FString && NewValue)` | Sets the value of TransactionId using move semantics.
`public inline FString & `[`GetPlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1a46c556ef651d060f6d30bb51cf6f6a34)`()` | Gets the value of PlatformToken.
`public inline const FString & `[`GetPlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1a6cd05cb4e91dab59f3ce419454a7b915)`() const` | Gets the value of PlatformToken.
`public inline void `[`SetPlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1a46a0856d880e6cb5940294e9723cd39c)`(const FString & NewValue)` | Sets the value of PlatformToken.
`public inline void `[`SetPlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1a8e290e471b1cea6865e1fb43ffc445e5)`(FString && NewValue)` | Sets the value of PlatformToken using move semantics.
`public inline FString & `[`GetPlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a45d91a4c47c73b3b28382d05e785ea0d)`()` | Gets the value of PlatformId.
`public inline const FString & `[`GetPlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1ab89c3edcccc8bc9d465296a82dec2976)`() const` | Gets the value of PlatformId.
`public inline void `[`SetPlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a3884b12d6f59454a08a4453991c7faec)`(const FString & NewValue)` | Sets the value of PlatformId.
`public inline void `[`SetPlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1af3279ab1e4cfd73fe390d096073e8cff)`(FString && NewValue)` | Sets the value of PlatformId using move semantics.
`public inline ERHAPI_PlatformRegion & `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1ab827b8b08f6bc72dc2cdf3626deb7f19)`()` | Gets the value of PlatformRegion.
`public inline const ERHAPI_PlatformRegion & `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1a8c0ca241313bb3e2f1d0d173a23dc372)`() const` | Gets the value of PlatformRegion.
`public inline void `[`SetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1a3b7c18aeb506667a110f623f4c635d9c)`(const ERHAPI_PlatformRegion & NewValue)` | Sets the value of PlatformRegion.
`public inline void `[`SetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1ad5f6b69be825a8ec7f0b1ab9b37d767f)`(ERHAPI_PlatformRegion && NewValue)` | Sets the value of PlatformRegion using move semantics.
`public inline ERHAPI_ClientType & `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a89fcf5846ed78023c699b6ca31d7c275)`()` | Gets the value of ClientType.
`public inline const ERHAPI_ClientType & `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a1e2eb1ee2959340470e82afb81ceea75)`() const` | Gets the value of ClientType.
`public inline void `[`SetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a2498ca3832ba4e9f44caff3b537a0f17)`(const ERHAPI_ClientType & NewValue)` | Sets the value of ClientType.
`public inline void `[`SetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a06ead50b187f385895d173b50a3692a6)`(ERHAPI_ClientType && NewValue)` | Sets the value of ClientType using move semantics.
`public inline TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a601120e574160eca58e98170e9d4b4e7)`()` | Gets the value of Entitlements_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a5e5780d5354d2f2e6a60d18933840e14)`() const` | Gets the value of Entitlements_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a375ef768b008aa6ecadbc0b2a4062761)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & DefaultValue) const` | Gets the value of Entitlements_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1ac72ca2c63c2fc3f571fb4475cbd96f82)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & OutValue) const` | Fills OutValue with the value of Entitlements_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1ad288e59a3bc25d6f4f6c33b802d38fdf)`()` | Returns a pointer to Entitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1addaede490193b8714cdf49552bceeac2)`() const` | Returns a pointer to Entitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a707f605277c2a1e3ad3b1ac4841dc16f)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & NewValue)` | Sets the value of Entitlements_Optional and also sets Entitlements_IsSet to true.
`public inline void `[`SetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1ad39bf35d93c1f427798647fba3aed0d8)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > && NewValue)` | Sets the value of Entitlements_Optional and also sets Entitlements_IsSet to true using move semantics.
`public inline void `[`ClearEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a9493313ad553516ff62bf102065e1344)`()` | Clears the value of Entitlements_Optional and sets Entitlements_IsSet to false.
`public inline bool `[`IsEntitlementsSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1a36806eac5075f88434404615ad626627)`() const` | Checks whether Entitlements_Optional has been set.

### Members

#### `public FString `[`TransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a4100419f0f52a6eb4762beac516b783d) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a4100419f0f52a6eb4762beac516b783d"></a>

unique id for this transaction on the platform

#### `public FString `[`PlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1a746f9d065dc766bde99e6444dccd5d32) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a746f9d065dc766bde99e6444dccd5d32"></a>

Platform token that can be used to verify the identity of the user.

#### `public FString `[`PlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1aecab53e4d07a58f9224c82ad6da8c2c6) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1aecab53e4d07a58f9224c82ad6da8c2c6"></a>

Platform this entitlement was purchased was made on.

#### `public ERHAPI_PlatformRegion `[`PlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1a72ee6aadcdaa3a4c8bf1e482694d14db) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a72ee6aadcdaa3a4c8bf1e482694d14db"></a>

region this purchase was made in

#### `public ERHAPI_ClientType `[`ClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a9674cba794d55a042afd6040cbf260a7) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a9674cba794d55a042afd6040cbf260a7"></a>

client type this purchase was made on

#### `public TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > `[`Entitlements_Optional`](#structFRHAPI__PlatformEntitlementProcessRequest_1adffb3e1d7d754a5bf42491736b963426) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1adffb3e1d7d754a5bf42491736b963426"></a>

Platform entitlements to process.

#### `public bool `[`Entitlements_IsSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1a1182b812111a8390a0f9ba60649e0755) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a1182b812111a8390a0f9ba60649e0755"></a>

true if Entitlements_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformEntitlementProcessRequest_1a9e7f9a55d5149972e8d855bc22610868)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a9e7f9a55d5149972e8d855bc22610868"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformEntitlementProcessRequest_1adef119a7ac18670cd8386e221d83d64d)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1adef119a7ac18670cd8386e221d83d64d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a51301f3004ef1dbbaf6340a1d18d5ff8)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a51301f3004ef1dbbaf6340a1d18d5ff8"></a>

Gets the value of TransactionId.

#### `public inline const FString & `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1aadf7387ad49aafa891f81900413c8df7)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1aadf7387ad49aafa891f81900413c8df7"></a>

Gets the value of TransactionId.

#### `public inline void `[`SetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a42684c88f2421073ff3aa5c93a4d92f4)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a42684c88f2421073ff3aa5c93a4d92f4"></a>

Sets the value of TransactionId.

#### `public inline void `[`SetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1ae120b13e354eb92730661031c08ed9d5)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ae120b13e354eb92730661031c08ed9d5"></a>

Sets the value of TransactionId using move semantics.

#### `public inline FString & `[`GetPlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1a46c556ef651d060f6d30bb51cf6f6a34)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a46c556ef651d060f6d30bb51cf6f6a34"></a>

Gets the value of PlatformToken.

#### `public inline const FString & `[`GetPlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1a6cd05cb4e91dab59f3ce419454a7b915)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a6cd05cb4e91dab59f3ce419454a7b915"></a>

Gets the value of PlatformToken.

#### `public inline void `[`SetPlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1a46a0856d880e6cb5940294e9723cd39c)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a46a0856d880e6cb5940294e9723cd39c"></a>

Sets the value of PlatformToken.

#### `public inline void `[`SetPlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1a8e290e471b1cea6865e1fb43ffc445e5)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a8e290e471b1cea6865e1fb43ffc445e5"></a>

Sets the value of PlatformToken using move semantics.

#### `public inline FString & `[`GetPlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a45d91a4c47c73b3b28382d05e785ea0d)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a45d91a4c47c73b3b28382d05e785ea0d"></a>

Gets the value of PlatformId.

#### `public inline const FString & `[`GetPlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1ab89c3edcccc8bc9d465296a82dec2976)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ab89c3edcccc8bc9d465296a82dec2976"></a>

Gets the value of PlatformId.

#### `public inline void `[`SetPlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a3884b12d6f59454a08a4453991c7faec)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a3884b12d6f59454a08a4453991c7faec"></a>

Sets the value of PlatformId.

#### `public inline void `[`SetPlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1af3279ab1e4cfd73fe390d096073e8cff)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1af3279ab1e4cfd73fe390d096073e8cff"></a>

Sets the value of PlatformId using move semantics.

#### `public inline ERHAPI_PlatformRegion & `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1ab827b8b08f6bc72dc2cdf3626deb7f19)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ab827b8b08f6bc72dc2cdf3626deb7f19"></a>

Gets the value of PlatformRegion.

#### `public inline const ERHAPI_PlatformRegion & `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1a8c0ca241313bb3e2f1d0d173a23dc372)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a8c0ca241313bb3e2f1d0d173a23dc372"></a>

Gets the value of PlatformRegion.

#### `public inline void `[`SetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1a3b7c18aeb506667a110f623f4c635d9c)`(const ERHAPI_PlatformRegion & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a3b7c18aeb506667a110f623f4c635d9c"></a>

Sets the value of PlatformRegion.

#### `public inline void `[`SetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1ad5f6b69be825a8ec7f0b1ab9b37d767f)`(ERHAPI_PlatformRegion && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ad5f6b69be825a8ec7f0b1ab9b37d767f"></a>

Sets the value of PlatformRegion using move semantics.

#### `public inline ERHAPI_ClientType & `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a89fcf5846ed78023c699b6ca31d7c275)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a89fcf5846ed78023c699b6ca31d7c275"></a>

Gets the value of ClientType.

#### `public inline const ERHAPI_ClientType & `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a1e2eb1ee2959340470e82afb81ceea75)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a1e2eb1ee2959340470e82afb81ceea75"></a>

Gets the value of ClientType.

#### `public inline void `[`SetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a2498ca3832ba4e9f44caff3b537a0f17)`(const ERHAPI_ClientType & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a2498ca3832ba4e9f44caff3b537a0f17"></a>

Sets the value of ClientType.

#### `public inline void `[`SetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a06ead50b187f385895d173b50a3692a6)`(ERHAPI_ClientType && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a06ead50b187f385895d173b50a3692a6"></a>

Sets the value of ClientType using move semantics.

#### `public inline TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a601120e574160eca58e98170e9d4b4e7)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a601120e574160eca58e98170e9d4b4e7"></a>

Gets the value of Entitlements_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a5e5780d5354d2f2e6a60d18933840e14)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a5e5780d5354d2f2e6a60d18933840e14"></a>

Gets the value of Entitlements_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a375ef768b008aa6ecadbc0b2a4062761)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a375ef768b008aa6ecadbc0b2a4062761"></a>

Gets the value of Entitlements_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1ac72ca2c63c2fc3f571fb4475cbd96f82)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ac72ca2c63c2fc3f571fb4475cbd96f82"></a>

Fills OutValue with the value of Entitlements_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1ad288e59a3bc25d6f4f6c33b802d38fdf)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ad288e59a3bc25d6f4f6c33b802d38fdf"></a>

Returns a pointer to Entitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1addaede490193b8714cdf49552bceeac2)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1addaede490193b8714cdf49552bceeac2"></a>

Returns a pointer to Entitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a707f605277c2a1e3ad3b1ac4841dc16f)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a707f605277c2a1e3ad3b1ac4841dc16f"></a>

Sets the value of Entitlements_Optional and also sets Entitlements_IsSet to true.

#### `public inline void `[`SetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1ad39bf35d93c1f427798647fba3aed0d8)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ad39bf35d93c1f427798647fba3aed0d8"></a>

Sets the value of Entitlements_Optional and also sets Entitlements_IsSet to true using move semantics.

#### `public inline void `[`ClearEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a9493313ad553516ff62bf102065e1344)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a9493313ad553516ff62bf102065e1344"></a>

Clears the value of Entitlements_Optional and sets Entitlements_IsSet to false.

#### `public inline bool `[`IsEntitlementsSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1a36806eac5075f88434404615ad626627)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a36806eac5075f88434404615ad626627"></a>

Checks whether Entitlements_Optional has been set.

