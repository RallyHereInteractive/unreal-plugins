# group `RHAPI_MarketingCampaign` <a id="group__RHAPI__MarketingCampaign"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MarketingCampaign`](#structFRHAPI__MarketingCampaign) | A Marketing Campaign is a set of external keys that can be claimed by players.The key claims are assigned to the player based on.

## struct `FRHAPI_MarketingCampaign` <a id="structFRHAPI__MarketingCampaign"></a>

```
struct FRHAPI_MarketingCampaign
  : public FRHAPI_Model
```

A Marketing Campaign is a set of external keys that can be claimed by players.The key claims are assigned to the player based on.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`Uuid`](#structFRHAPI__MarketingCampaign_1a589be2b0982738de14e8d98b16436a64) | The unique identifier for the Marketing Campaign.
`public FString `[`Name`](#structFRHAPI__MarketingCampaign_1a99687e46e9281d06d4c5c295d6bc42a5) | The name of the Marketing Campaign.
`public ERHAPI_Portal `[`PortalId_Optional`](#structFRHAPI__MarketingCampaign_1a31b0b077ed1ad08557c16d620802c1b4) | Platform for the Marketing Campaign.
`public bool `[`PortalId_IsSet`](#structFRHAPI__MarketingCampaign_1a91a202384b8e443bfabf183ef18fe555) | true if PortalId_Optional has been set to a value
`public TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > `[`KeyTypes`](#structFRHAPI__MarketingCampaign_1ac277f1290b832a4d25e273b803263187) | The types of keys that can be claimed from this campaign.
`public FString `[`CreatedOn_Optional`](#structFRHAPI__MarketingCampaign_1ab6949176b14e548b9b2d7055e733d5e5) | The time the MarketingCampaign was created.
`public bool `[`CreatedOn_IsSet`](#structFRHAPI__MarketingCampaign_1a7ada46f3e46bb0c26d381a399176aecd) | true if CreatedOn_Optional has been set to a value
`public FString `[`LastModifiedOn_Optional`](#structFRHAPI__MarketingCampaign_1ae169c5a829c7a9335301a8896e250749) | The time the MarketingCampaign was last modified.
`public bool `[`LastModifiedOn_IsSet`](#structFRHAPI__MarketingCampaign_1aa6039d64c799ad7309e69d7ebb67084a) | true if LastModifiedOn_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MarketingCampaign_1a117c660e8a3b29aa49fca0b7659a6257)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MarketingCampaign_1afc1372471524c0d87f44889c5ce67008)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetUuid`](#structFRHAPI__MarketingCampaign_1afea3c2144a9946be7b97627fe96c82c5)`()` | Gets the value of Uuid.
`public inline const FGuid & `[`GetUuid`](#structFRHAPI__MarketingCampaign_1a23193be74250e1626329d01416cdade3)`() const` | Gets the value of Uuid.
`public inline void `[`SetUuid`](#structFRHAPI__MarketingCampaign_1af25f9c5b255153e29a04239857fc5243)`(const FGuid & NewValue)` | Sets the value of Uuid.
`public inline void `[`SetUuid`](#structFRHAPI__MarketingCampaign_1a6a1b6952c2593161192c7bdfd353996d)`(FGuid && NewValue)` | Sets the value of Uuid using move semantics.
`public inline FString & `[`GetName`](#structFRHAPI__MarketingCampaign_1a4d1656a7c3c5ee9b7139d5c8ce31e90d)`()` | Gets the value of Name.
`public inline const FString & `[`GetName`](#structFRHAPI__MarketingCampaign_1a3b052047bead420245b451ec7759e8b4)`() const` | Gets the value of Name.
`public inline void `[`SetName`](#structFRHAPI__MarketingCampaign_1a71de4a767bd7fe754798ef35615fc599)`(const FString & NewValue)` | Sets the value of Name.
`public inline void `[`SetName`](#structFRHAPI__MarketingCampaign_1aa0b4e9040a4d2e6344ac0b81928d009a)`(FString && NewValue)` | Sets the value of Name using move semantics.
`public inline ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__MarketingCampaign_1afefb2ec2fc173cd53c0b3591d8e4bf3b)`()` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__MarketingCampaign_1ad7162fd470886e6684e797e143ef6570)`() const` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__MarketingCampaign_1ac65237e926e5521e602737d1befbfa7b)`(const ERHAPI_Portal & DefaultValue) const` | Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalId`](#structFRHAPI__MarketingCampaign_1a785a09229a439d5dee598899d56edeff)`(ERHAPI_Portal & OutValue) const` | Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__MarketingCampaign_1a78000ff02df5641ac43b29bc1afc70ad)`()` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__MarketingCampaign_1a2f2f5ba03022ff2bc63592980564e2bc)`() const` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalId`](#structFRHAPI__MarketingCampaign_1a07d6dc4e1e08dc6e173a25632370b2fa)`(const ERHAPI_Portal & NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.
`public inline void `[`SetPortalId`](#structFRHAPI__MarketingCampaign_1a166990b58e244fa580a14ecb4c7a82c5)`(ERHAPI_Portal && NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.
`public inline void `[`ClearPortalId`](#structFRHAPI__MarketingCampaign_1a18a4f2fa4cfe73481188dd0d065b2899)`()` | Clears the value of PortalId_Optional and sets PortalId_IsSet to false.
`public inline TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > & `[`GetKeyTypes`](#structFRHAPI__MarketingCampaign_1ab1a2efa3ebfc416759425bc944c14751)`()` | Gets the value of KeyTypes.
`public inline const TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > & `[`GetKeyTypes`](#structFRHAPI__MarketingCampaign_1a6e04603948a382008325629abc892da6)`() const` | Gets the value of KeyTypes.
`public inline void `[`SetKeyTypes`](#structFRHAPI__MarketingCampaign_1a12eccfc6a4324cea720b7b0c52f5286c)`(const TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > & NewValue)` | Sets the value of KeyTypes.
`public inline void `[`SetKeyTypes`](#structFRHAPI__MarketingCampaign_1a21f67e838a95b4cdb5c03b2e4b642784)`(TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > && NewValue)` | Sets the value of KeyTypes using move semantics.
`public inline FString & `[`GetCreatedOn`](#structFRHAPI__MarketingCampaign_1afb006821fee42ef311e97deebb4158b8)`()` | Gets the value of CreatedOn_Optional, regardless of it having been set.
`public inline const FString & `[`GetCreatedOn`](#structFRHAPI__MarketingCampaign_1aa77d50f39e725ceb84e27175db0bfa06)`() const` | Gets the value of CreatedOn_Optional, regardless of it having been set.
`public inline const FString & `[`GetCreatedOn`](#structFRHAPI__MarketingCampaign_1af52eab87f90c083d1270394b1abff39b)`(const FString & DefaultValue) const` | Gets the value of CreatedOn_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCreatedOn`](#structFRHAPI__MarketingCampaign_1ac65c3bb3193e8d64fad5765b6a2998bc)`(FString & OutValue) const` | Fills OutValue with the value of CreatedOn_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCreatedOnOrNull`](#structFRHAPI__MarketingCampaign_1ab7e50b5a72c019e9323b71378b52475b)`()` | Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCreatedOnOrNull`](#structFRHAPI__MarketingCampaign_1a14b5ec70aa6af84e07486c3ff4a7e3d5)`() const` | Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCreatedOn`](#structFRHAPI__MarketingCampaign_1a1813ad0f80d93e5b070d3248e7c1b9a9)`(const FString & NewValue)` | Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true.
`public inline void `[`SetCreatedOn`](#structFRHAPI__MarketingCampaign_1a12eac65c30b80961096e75080ff4389b)`(FString && NewValue)` | Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true using move semantics.
`public inline void `[`ClearCreatedOn`](#structFRHAPI__MarketingCampaign_1af2065e3b9fe351f08930a45f42c57a1f)`()` | Clears the value of CreatedOn_Optional and sets CreatedOn_IsSet to false.
`public inline FString & `[`GetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1a934bb894ebc2082869ab21944d003f00)`()` | Gets the value of LastModifiedOn_Optional, regardless of it having been set.
`public inline const FString & `[`GetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1acae329d0b3570a0e0ef7331b6bc3169e)`() const` | Gets the value of LastModifiedOn_Optional, regardless of it having been set.
`public inline const FString & `[`GetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1a747d9d73cc209c09d60e9a95924352bc)`(const FString & DefaultValue) const` | Gets the value of LastModifiedOn_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1aab3f28c30cb0f0c84d40ab37071c0564)`(FString & OutValue) const` | Fills OutValue with the value of LastModifiedOn_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetLastModifiedOnOrNull`](#structFRHAPI__MarketingCampaign_1a0dc98da2de551cb295b39bf705038de2)`()` | Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetLastModifiedOnOrNull`](#structFRHAPI__MarketingCampaign_1a6259718ff0ead9c36ad3da1f969c6034)`() const` | Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1ac83cabbb7471de49476689f033ef517b)`(const FString & NewValue)` | Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true.
`public inline void `[`SetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1a86861434091b0ddae3034fb6a4caad27)`(FString && NewValue)` | Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true using move semantics.
`public inline void `[`ClearLastModifiedOn`](#structFRHAPI__MarketingCampaign_1aa16796a166b316f0d75b6a9f6f667d21)`()` | Clears the value of LastModifiedOn_Optional and sets LastModifiedOn_IsSet to false.

### Members

#### `public FGuid `[`Uuid`](#structFRHAPI__MarketingCampaign_1a589be2b0982738de14e8d98b16436a64) <a id="structFRHAPI__MarketingCampaign_1a589be2b0982738de14e8d98b16436a64"></a>

The unique identifier for the Marketing Campaign.

#### `public FString `[`Name`](#structFRHAPI__MarketingCampaign_1a99687e46e9281d06d4c5c295d6bc42a5) <a id="structFRHAPI__MarketingCampaign_1a99687e46e9281d06d4c5c295d6bc42a5"></a>

The name of the Marketing Campaign.

#### `public ERHAPI_Portal `[`PortalId_Optional`](#structFRHAPI__MarketingCampaign_1a31b0b077ed1ad08557c16d620802c1b4) <a id="structFRHAPI__MarketingCampaign_1a31b0b077ed1ad08557c16d620802c1b4"></a>

Platform for the Marketing Campaign.

#### `public bool `[`PortalId_IsSet`](#structFRHAPI__MarketingCampaign_1a91a202384b8e443bfabf183ef18fe555) <a id="structFRHAPI__MarketingCampaign_1a91a202384b8e443bfabf183ef18fe555"></a>

true if PortalId_Optional has been set to a value

#### `public TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > `[`KeyTypes`](#structFRHAPI__MarketingCampaign_1ac277f1290b832a4d25e273b803263187) <a id="structFRHAPI__MarketingCampaign_1ac277f1290b832a4d25e273b803263187"></a>

The types of keys that can be claimed from this campaign.

#### `public FString `[`CreatedOn_Optional`](#structFRHAPI__MarketingCampaign_1ab6949176b14e548b9b2d7055e733d5e5) <a id="structFRHAPI__MarketingCampaign_1ab6949176b14e548b9b2d7055e733d5e5"></a>

The time the MarketingCampaign was created.

#### `public bool `[`CreatedOn_IsSet`](#structFRHAPI__MarketingCampaign_1a7ada46f3e46bb0c26d381a399176aecd) <a id="structFRHAPI__MarketingCampaign_1a7ada46f3e46bb0c26d381a399176aecd"></a>

true if CreatedOn_Optional has been set to a value

#### `public FString `[`LastModifiedOn_Optional`](#structFRHAPI__MarketingCampaign_1ae169c5a829c7a9335301a8896e250749) <a id="structFRHAPI__MarketingCampaign_1ae169c5a829c7a9335301a8896e250749"></a>

The time the MarketingCampaign was last modified.

#### `public bool `[`LastModifiedOn_IsSet`](#structFRHAPI__MarketingCampaign_1aa6039d64c799ad7309e69d7ebb67084a) <a id="structFRHAPI__MarketingCampaign_1aa6039d64c799ad7309e69d7ebb67084a"></a>

true if LastModifiedOn_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MarketingCampaign_1a117c660e8a3b29aa49fca0b7659a6257)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MarketingCampaign_1a117c660e8a3b29aa49fca0b7659a6257"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MarketingCampaign_1afc1372471524c0d87f44889c5ce67008)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MarketingCampaign_1afc1372471524c0d87f44889c5ce67008"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetUuid`](#structFRHAPI__MarketingCampaign_1afea3c2144a9946be7b97627fe96c82c5)`()` <a id="structFRHAPI__MarketingCampaign_1afea3c2144a9946be7b97627fe96c82c5"></a>

Gets the value of Uuid.

#### `public inline const FGuid & `[`GetUuid`](#structFRHAPI__MarketingCampaign_1a23193be74250e1626329d01416cdade3)`() const` <a id="structFRHAPI__MarketingCampaign_1a23193be74250e1626329d01416cdade3"></a>

Gets the value of Uuid.

#### `public inline void `[`SetUuid`](#structFRHAPI__MarketingCampaign_1af25f9c5b255153e29a04239857fc5243)`(const FGuid & NewValue)` <a id="structFRHAPI__MarketingCampaign_1af25f9c5b255153e29a04239857fc5243"></a>

Sets the value of Uuid.

#### `public inline void `[`SetUuid`](#structFRHAPI__MarketingCampaign_1a6a1b6952c2593161192c7bdfd353996d)`(FGuid && NewValue)` <a id="structFRHAPI__MarketingCampaign_1a6a1b6952c2593161192c7bdfd353996d"></a>

Sets the value of Uuid using move semantics.

#### `public inline FString & `[`GetName`](#structFRHAPI__MarketingCampaign_1a4d1656a7c3c5ee9b7139d5c8ce31e90d)`()` <a id="structFRHAPI__MarketingCampaign_1a4d1656a7c3c5ee9b7139d5c8ce31e90d"></a>

Gets the value of Name.

#### `public inline const FString & `[`GetName`](#structFRHAPI__MarketingCampaign_1a3b052047bead420245b451ec7759e8b4)`() const` <a id="structFRHAPI__MarketingCampaign_1a3b052047bead420245b451ec7759e8b4"></a>

Gets the value of Name.

#### `public inline void `[`SetName`](#structFRHAPI__MarketingCampaign_1a71de4a767bd7fe754798ef35615fc599)`(const FString & NewValue)` <a id="structFRHAPI__MarketingCampaign_1a71de4a767bd7fe754798ef35615fc599"></a>

Sets the value of Name.

#### `public inline void `[`SetName`](#structFRHAPI__MarketingCampaign_1aa0b4e9040a4d2e6344ac0b81928d009a)`(FString && NewValue)` <a id="structFRHAPI__MarketingCampaign_1aa0b4e9040a4d2e6344ac0b81928d009a"></a>

Sets the value of Name using move semantics.

#### `public inline ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__MarketingCampaign_1afefb2ec2fc173cd53c0b3591d8e4bf3b)`()` <a id="structFRHAPI__MarketingCampaign_1afefb2ec2fc173cd53c0b3591d8e4bf3b"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__MarketingCampaign_1ad7162fd470886e6684e797e143ef6570)`() const` <a id="structFRHAPI__MarketingCampaign_1ad7162fd470886e6684e797e143ef6570"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__MarketingCampaign_1ac65237e926e5521e602737d1befbfa7b)`(const ERHAPI_Portal & DefaultValue) const` <a id="structFRHAPI__MarketingCampaign_1ac65237e926e5521e602737d1befbfa7b"></a>

Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalId`](#structFRHAPI__MarketingCampaign_1a785a09229a439d5dee598899d56edeff)`(ERHAPI_Portal & OutValue) const` <a id="structFRHAPI__MarketingCampaign_1a785a09229a439d5dee598899d56edeff"></a>

Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__MarketingCampaign_1a78000ff02df5641ac43b29bc1afc70ad)`()` <a id="structFRHAPI__MarketingCampaign_1a78000ff02df5641ac43b29bc1afc70ad"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__MarketingCampaign_1a2f2f5ba03022ff2bc63592980564e2bc)`() const` <a id="structFRHAPI__MarketingCampaign_1a2f2f5ba03022ff2bc63592980564e2bc"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalId`](#structFRHAPI__MarketingCampaign_1a07d6dc4e1e08dc6e173a25632370b2fa)`(const ERHAPI_Portal & NewValue)` <a id="structFRHAPI__MarketingCampaign_1a07d6dc4e1e08dc6e173a25632370b2fa"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.

#### `public inline void `[`SetPortalId`](#structFRHAPI__MarketingCampaign_1a166990b58e244fa580a14ecb4c7a82c5)`(ERHAPI_Portal && NewValue)` <a id="structFRHAPI__MarketingCampaign_1a166990b58e244fa580a14ecb4c7a82c5"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalId`](#structFRHAPI__MarketingCampaign_1a18a4f2fa4cfe73481188dd0d065b2899)`()` <a id="structFRHAPI__MarketingCampaign_1a18a4f2fa4cfe73481188dd0d065b2899"></a>

Clears the value of PortalId_Optional and sets PortalId_IsSet to false.

#### `public inline TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > & `[`GetKeyTypes`](#structFRHAPI__MarketingCampaign_1ab1a2efa3ebfc416759425bc944c14751)`()` <a id="structFRHAPI__MarketingCampaign_1ab1a2efa3ebfc416759425bc944c14751"></a>

Gets the value of KeyTypes.

#### `public inline const TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > & `[`GetKeyTypes`](#structFRHAPI__MarketingCampaign_1a6e04603948a382008325629abc892da6)`() const` <a id="structFRHAPI__MarketingCampaign_1a6e04603948a382008325629abc892da6"></a>

Gets the value of KeyTypes.

#### `public inline void `[`SetKeyTypes`](#structFRHAPI__MarketingCampaign_1a12eccfc6a4324cea720b7b0c52f5286c)`(const TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > & NewValue)` <a id="structFRHAPI__MarketingCampaign_1a12eccfc6a4324cea720b7b0c52f5286c"></a>

Sets the value of KeyTypes.

#### `public inline void `[`SetKeyTypes`](#structFRHAPI__MarketingCampaign_1a21f67e838a95b4cdb5c03b2e4b642784)`(TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > && NewValue)` <a id="structFRHAPI__MarketingCampaign_1a21f67e838a95b4cdb5c03b2e4b642784"></a>

Sets the value of KeyTypes using move semantics.

#### `public inline FString & `[`GetCreatedOn`](#structFRHAPI__MarketingCampaign_1afb006821fee42ef311e97deebb4158b8)`()` <a id="structFRHAPI__MarketingCampaign_1afb006821fee42ef311e97deebb4158b8"></a>

Gets the value of CreatedOn_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCreatedOn`](#structFRHAPI__MarketingCampaign_1aa77d50f39e725ceb84e27175db0bfa06)`() const` <a id="structFRHAPI__MarketingCampaign_1aa77d50f39e725ceb84e27175db0bfa06"></a>

Gets the value of CreatedOn_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCreatedOn`](#structFRHAPI__MarketingCampaign_1af52eab87f90c083d1270394b1abff39b)`(const FString & DefaultValue) const` <a id="structFRHAPI__MarketingCampaign_1af52eab87f90c083d1270394b1abff39b"></a>

Gets the value of CreatedOn_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCreatedOn`](#structFRHAPI__MarketingCampaign_1ac65c3bb3193e8d64fad5765b6a2998bc)`(FString & OutValue) const` <a id="structFRHAPI__MarketingCampaign_1ac65c3bb3193e8d64fad5765b6a2998bc"></a>

Fills OutValue with the value of CreatedOn_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCreatedOnOrNull`](#structFRHAPI__MarketingCampaign_1ab7e50b5a72c019e9323b71378b52475b)`()` <a id="structFRHAPI__MarketingCampaign_1ab7e50b5a72c019e9323b71378b52475b"></a>

Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCreatedOnOrNull`](#structFRHAPI__MarketingCampaign_1a14b5ec70aa6af84e07486c3ff4a7e3d5)`() const` <a id="structFRHAPI__MarketingCampaign_1a14b5ec70aa6af84e07486c3ff4a7e3d5"></a>

Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCreatedOn`](#structFRHAPI__MarketingCampaign_1a1813ad0f80d93e5b070d3248e7c1b9a9)`(const FString & NewValue)` <a id="structFRHAPI__MarketingCampaign_1a1813ad0f80d93e5b070d3248e7c1b9a9"></a>

Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true.

#### `public inline void `[`SetCreatedOn`](#structFRHAPI__MarketingCampaign_1a12eac65c30b80961096e75080ff4389b)`(FString && NewValue)` <a id="structFRHAPI__MarketingCampaign_1a12eac65c30b80961096e75080ff4389b"></a>

Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true using move semantics.

#### `public inline void `[`ClearCreatedOn`](#structFRHAPI__MarketingCampaign_1af2065e3b9fe351f08930a45f42c57a1f)`()` <a id="structFRHAPI__MarketingCampaign_1af2065e3b9fe351f08930a45f42c57a1f"></a>

Clears the value of CreatedOn_Optional and sets CreatedOn_IsSet to false.

#### `public inline FString & `[`GetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1a934bb894ebc2082869ab21944d003f00)`()` <a id="structFRHAPI__MarketingCampaign_1a934bb894ebc2082869ab21944d003f00"></a>

Gets the value of LastModifiedOn_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1acae329d0b3570a0e0ef7331b6bc3169e)`() const` <a id="structFRHAPI__MarketingCampaign_1acae329d0b3570a0e0ef7331b6bc3169e"></a>

Gets the value of LastModifiedOn_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1a747d9d73cc209c09d60e9a95924352bc)`(const FString & DefaultValue) const` <a id="structFRHAPI__MarketingCampaign_1a747d9d73cc209c09d60e9a95924352bc"></a>

Gets the value of LastModifiedOn_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1aab3f28c30cb0f0c84d40ab37071c0564)`(FString & OutValue) const` <a id="structFRHAPI__MarketingCampaign_1aab3f28c30cb0f0c84d40ab37071c0564"></a>

Fills OutValue with the value of LastModifiedOn_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetLastModifiedOnOrNull`](#structFRHAPI__MarketingCampaign_1a0dc98da2de551cb295b39bf705038de2)`()` <a id="structFRHAPI__MarketingCampaign_1a0dc98da2de551cb295b39bf705038de2"></a>

Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetLastModifiedOnOrNull`](#structFRHAPI__MarketingCampaign_1a6259718ff0ead9c36ad3da1f969c6034)`() const` <a id="structFRHAPI__MarketingCampaign_1a6259718ff0ead9c36ad3da1f969c6034"></a>

Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1ac83cabbb7471de49476689f033ef517b)`(const FString & NewValue)` <a id="structFRHAPI__MarketingCampaign_1ac83cabbb7471de49476689f033ef517b"></a>

Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true.

#### `public inline void `[`SetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1a86861434091b0ddae3034fb6a4caad27)`(FString && NewValue)` <a id="structFRHAPI__MarketingCampaign_1a86861434091b0ddae3034fb6a4caad27"></a>

Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true using move semantics.

#### `public inline void `[`ClearLastModifiedOn`](#structFRHAPI__MarketingCampaign_1aa16796a166b316f0d75b6a9f6f667d21)`()` <a id="structFRHAPI__MarketingCampaign_1aa16796a166b316f0d75b6a9f6f667d21"></a>

Clears the value of LastModifiedOn_Optional and sets LastModifiedOn_IsSet to false.

