---
title: RHAPI_MarketingCampaign
---

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
`public virtual bool `[`FromJson`](#structFRHAPI__MarketingCampaign_1af66e5db4ed8a79d90a4ac062d70a0712)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MarketingCampaign_1a0f3acc9577bc89ba48a62ca2b3d8c6df)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetUuid`](#structFRHAPI__MarketingCampaign_1a021904c12dbc7c74c447c0e435bece6f)`()` | Gets the value of Uuid.
`public inline const FGuid & `[`GetUuid`](#structFRHAPI__MarketingCampaign_1a2535923846f2e91af35de83861a910f8)`() const` | Gets the value of Uuid.
`public inline void `[`SetUuid`](#structFRHAPI__MarketingCampaign_1af25f9c5b255153e29a04239857fc5243)`(const FGuid & NewValue)` | Sets the value of Uuid.
`public inline void `[`SetUuid`](#structFRHAPI__MarketingCampaign_1a6a1b6952c2593161192c7bdfd353996d)`(FGuid && NewValue)` | Sets the value of Uuid using move semantics.
`public inline FString & `[`GetName`](#structFRHAPI__MarketingCampaign_1ada2d5516ee90c895e1a7b6ce00b73f83)`()` | Gets the value of Name.
`public inline const FString & `[`GetName`](#structFRHAPI__MarketingCampaign_1a68504490e6b88cd3a187ba76ed822acb)`() const` | Gets the value of Name.
`public inline void `[`SetName`](#structFRHAPI__MarketingCampaign_1a71de4a767bd7fe754798ef35615fc599)`(const FString & NewValue)` | Sets the value of Name.
`public inline void `[`SetName`](#structFRHAPI__MarketingCampaign_1aa0b4e9040a4d2e6344ac0b81928d009a)`(FString && NewValue)` | Sets the value of Name using move semantics.
`public inline ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__MarketingCampaign_1aeafb7d5b651c9087245b7b5190371d3f)`()` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__MarketingCampaign_1a7d193e53aad304c070aa01531ee59839)`() const` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__MarketingCampaign_1a18a5f4ecc69e69cd0361d6141ff3eab9)`(const ERHAPI_Portal & DefaultValue) const` | Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalId`](#structFRHAPI__MarketingCampaign_1a785a09229a439d5dee598899d56edeff)`(ERHAPI_Portal & OutValue) const` | Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__MarketingCampaign_1ab47502ea41ee1a930bdf8cbe083317aa)`()` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__MarketingCampaign_1a4a62f30ce5e86ab3ffd07e8da690df3d)`() const` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalId`](#structFRHAPI__MarketingCampaign_1a07d6dc4e1e08dc6e173a25632370b2fa)`(const ERHAPI_Portal & NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.
`public inline void `[`SetPortalId`](#structFRHAPI__MarketingCampaign_1a166990b58e244fa580a14ecb4c7a82c5)`(ERHAPI_Portal && NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.
`public inline void `[`ClearPortalId`](#structFRHAPI__MarketingCampaign_1a18a4f2fa4cfe73481188dd0d065b2899)`()` | Clears the value of PortalId_Optional and sets PortalId_IsSet to false.
`public inline bool `[`IsPortalIdSet`](#structFRHAPI__MarketingCampaign_1a1c2be5b531d3579c5dae2e8bd39704c3)`() const` | Checks whether PortalId_Optional has been set.
`public inline TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > & `[`GetKeyTypes`](#structFRHAPI__MarketingCampaign_1a67f905ccd05b819ed42983b7d4c7436f)`()` | Gets the value of KeyTypes.
`public inline const TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > & `[`GetKeyTypes`](#structFRHAPI__MarketingCampaign_1a1980e832cb20ec3ade39db4a86178efb)`() const` | Gets the value of KeyTypes.
`public inline void `[`SetKeyTypes`](#structFRHAPI__MarketingCampaign_1a12eccfc6a4324cea720b7b0c52f5286c)`(const TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > & NewValue)` | Sets the value of KeyTypes.
`public inline void `[`SetKeyTypes`](#structFRHAPI__MarketingCampaign_1a21f67e838a95b4cdb5c03b2e4b642784)`(TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > && NewValue)` | Sets the value of KeyTypes using move semantics.
`public inline FString & `[`GetCreatedOn`](#structFRHAPI__MarketingCampaign_1ab44e01db1dee6f585f48f4828a2c3e23)`()` | Gets the value of CreatedOn_Optional, regardless of it having been set.
`public inline const FString & `[`GetCreatedOn`](#structFRHAPI__MarketingCampaign_1aa0cf49fb84f7cee09867d2560882fc63)`() const` | Gets the value of CreatedOn_Optional, regardless of it having been set.
`public inline const FString & `[`GetCreatedOn`](#structFRHAPI__MarketingCampaign_1a8c7a3b52054d56326ad0c8f5ee5cc579)`(const FString & DefaultValue) const` | Gets the value of CreatedOn_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCreatedOn`](#structFRHAPI__MarketingCampaign_1ac65c3bb3193e8d64fad5765b6a2998bc)`(FString & OutValue) const` | Fills OutValue with the value of CreatedOn_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCreatedOnOrNull`](#structFRHAPI__MarketingCampaign_1a7172b8ba57ed5196bcc1bab66f60159f)`()` | Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCreatedOnOrNull`](#structFRHAPI__MarketingCampaign_1ac99a009810e363cfade9e4a72faa4b9e)`() const` | Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCreatedOn`](#structFRHAPI__MarketingCampaign_1a1813ad0f80d93e5b070d3248e7c1b9a9)`(const FString & NewValue)` | Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true.
`public inline void `[`SetCreatedOn`](#structFRHAPI__MarketingCampaign_1a12eac65c30b80961096e75080ff4389b)`(FString && NewValue)` | Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true using move semantics.
`public inline void `[`ClearCreatedOn`](#structFRHAPI__MarketingCampaign_1af2065e3b9fe351f08930a45f42c57a1f)`()` | Clears the value of CreatedOn_Optional and sets CreatedOn_IsSet to false.
`public inline bool `[`IsCreatedOnSet`](#structFRHAPI__MarketingCampaign_1ac874e3ab4407a92a9aa32e5d61c650cf)`() const` | Checks whether CreatedOn_Optional has been set.
`public inline FString & `[`GetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1ae456d555069976b3a0dddb7b1358f566)`()` | Gets the value of LastModifiedOn_Optional, regardless of it having been set.
`public inline const FString & `[`GetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1a38d499a1c8d0df6334207d43cc36d884)`() const` | Gets the value of LastModifiedOn_Optional, regardless of it having been set.
`public inline const FString & `[`GetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1aa88ca672b70bbd332adf6c5456bd56aa)`(const FString & DefaultValue) const` | Gets the value of LastModifiedOn_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1aab3f28c30cb0f0c84d40ab37071c0564)`(FString & OutValue) const` | Fills OutValue with the value of LastModifiedOn_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetLastModifiedOnOrNull`](#structFRHAPI__MarketingCampaign_1af1fafce62fac669383bab3c9c2aba969)`()` | Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetLastModifiedOnOrNull`](#structFRHAPI__MarketingCampaign_1a09b9fb49477c4bbc5275d8a7a3a31b66)`() const` | Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1ac83cabbb7471de49476689f033ef517b)`(const FString & NewValue)` | Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true.
`public inline void `[`SetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1a86861434091b0ddae3034fb6a4caad27)`(FString && NewValue)` | Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true using move semantics.
`public inline void `[`ClearLastModifiedOn`](#structFRHAPI__MarketingCampaign_1aa16796a166b316f0d75b6a9f6f667d21)`()` | Clears the value of LastModifiedOn_Optional and sets LastModifiedOn_IsSet to false.
`public inline bool `[`IsLastModifiedOnSet`](#structFRHAPI__MarketingCampaign_1a2a38ad5f9de88d12365f0cb2d9bae1ec)`() const` | Checks whether LastModifiedOn_Optional has been set.

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

#### `public virtual bool `[`FromJson`](#structFRHAPI__MarketingCampaign_1af66e5db4ed8a79d90a4ac062d70a0712)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MarketingCampaign_1af66e5db4ed8a79d90a4ac062d70a0712"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MarketingCampaign_1a0f3acc9577bc89ba48a62ca2b3d8c6df)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MarketingCampaign_1a0f3acc9577bc89ba48a62ca2b3d8c6df"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetUuid`](#structFRHAPI__MarketingCampaign_1a021904c12dbc7c74c447c0e435bece6f)`()` <a id="structFRHAPI__MarketingCampaign_1a021904c12dbc7c74c447c0e435bece6f"></a>

Gets the value of Uuid.

#### `public inline const FGuid & `[`GetUuid`](#structFRHAPI__MarketingCampaign_1a2535923846f2e91af35de83861a910f8)`() const` <a id="structFRHAPI__MarketingCampaign_1a2535923846f2e91af35de83861a910f8"></a>

Gets the value of Uuid.

#### `public inline void `[`SetUuid`](#structFRHAPI__MarketingCampaign_1af25f9c5b255153e29a04239857fc5243)`(const FGuid & NewValue)` <a id="structFRHAPI__MarketingCampaign_1af25f9c5b255153e29a04239857fc5243"></a>

Sets the value of Uuid.

#### `public inline void `[`SetUuid`](#structFRHAPI__MarketingCampaign_1a6a1b6952c2593161192c7bdfd353996d)`(FGuid && NewValue)` <a id="structFRHAPI__MarketingCampaign_1a6a1b6952c2593161192c7bdfd353996d"></a>

Sets the value of Uuid using move semantics.

#### `public inline FString & `[`GetName`](#structFRHAPI__MarketingCampaign_1ada2d5516ee90c895e1a7b6ce00b73f83)`()` <a id="structFRHAPI__MarketingCampaign_1ada2d5516ee90c895e1a7b6ce00b73f83"></a>

Gets the value of Name.

#### `public inline const FString & `[`GetName`](#structFRHAPI__MarketingCampaign_1a68504490e6b88cd3a187ba76ed822acb)`() const` <a id="structFRHAPI__MarketingCampaign_1a68504490e6b88cd3a187ba76ed822acb"></a>

Gets the value of Name.

#### `public inline void `[`SetName`](#structFRHAPI__MarketingCampaign_1a71de4a767bd7fe754798ef35615fc599)`(const FString & NewValue)` <a id="structFRHAPI__MarketingCampaign_1a71de4a767bd7fe754798ef35615fc599"></a>

Sets the value of Name.

#### `public inline void `[`SetName`](#structFRHAPI__MarketingCampaign_1aa0b4e9040a4d2e6344ac0b81928d009a)`(FString && NewValue)` <a id="structFRHAPI__MarketingCampaign_1aa0b4e9040a4d2e6344ac0b81928d009a"></a>

Sets the value of Name using move semantics.

#### `public inline ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__MarketingCampaign_1aeafb7d5b651c9087245b7b5190371d3f)`()` <a id="structFRHAPI__MarketingCampaign_1aeafb7d5b651c9087245b7b5190371d3f"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__MarketingCampaign_1a7d193e53aad304c070aa01531ee59839)`() const` <a id="structFRHAPI__MarketingCampaign_1a7d193e53aad304c070aa01531ee59839"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__MarketingCampaign_1a18a5f4ecc69e69cd0361d6141ff3eab9)`(const ERHAPI_Portal & DefaultValue) const` <a id="structFRHAPI__MarketingCampaign_1a18a5f4ecc69e69cd0361d6141ff3eab9"></a>

Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalId`](#structFRHAPI__MarketingCampaign_1a785a09229a439d5dee598899d56edeff)`(ERHAPI_Portal & OutValue) const` <a id="structFRHAPI__MarketingCampaign_1a785a09229a439d5dee598899d56edeff"></a>

Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__MarketingCampaign_1ab47502ea41ee1a930bdf8cbe083317aa)`()` <a id="structFRHAPI__MarketingCampaign_1ab47502ea41ee1a930bdf8cbe083317aa"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__MarketingCampaign_1a4a62f30ce5e86ab3ffd07e8da690df3d)`() const` <a id="structFRHAPI__MarketingCampaign_1a4a62f30ce5e86ab3ffd07e8da690df3d"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalId`](#structFRHAPI__MarketingCampaign_1a07d6dc4e1e08dc6e173a25632370b2fa)`(const ERHAPI_Portal & NewValue)` <a id="structFRHAPI__MarketingCampaign_1a07d6dc4e1e08dc6e173a25632370b2fa"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.

#### `public inline void `[`SetPortalId`](#structFRHAPI__MarketingCampaign_1a166990b58e244fa580a14ecb4c7a82c5)`(ERHAPI_Portal && NewValue)` <a id="structFRHAPI__MarketingCampaign_1a166990b58e244fa580a14ecb4c7a82c5"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalId`](#structFRHAPI__MarketingCampaign_1a18a4f2fa4cfe73481188dd0d065b2899)`()` <a id="structFRHAPI__MarketingCampaign_1a18a4f2fa4cfe73481188dd0d065b2899"></a>

Clears the value of PortalId_Optional and sets PortalId_IsSet to false.

#### `public inline bool `[`IsPortalIdSet`](#structFRHAPI__MarketingCampaign_1a1c2be5b531d3579c5dae2e8bd39704c3)`() const` <a id="structFRHAPI__MarketingCampaign_1a1c2be5b531d3579c5dae2e8bd39704c3"></a>

Checks whether PortalId_Optional has been set.

#### `public inline TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > & `[`GetKeyTypes`](#structFRHAPI__MarketingCampaign_1a67f905ccd05b819ed42983b7d4c7436f)`()` <a id="structFRHAPI__MarketingCampaign_1a67f905ccd05b819ed42983b7d4c7436f"></a>

Gets the value of KeyTypes.

#### `public inline const TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > & `[`GetKeyTypes`](#structFRHAPI__MarketingCampaign_1a1980e832cb20ec3ade39db4a86178efb)`() const` <a id="structFRHAPI__MarketingCampaign_1a1980e832cb20ec3ade39db4a86178efb"></a>

Gets the value of KeyTypes.

#### `public inline void `[`SetKeyTypes`](#structFRHAPI__MarketingCampaign_1a12eccfc6a4324cea720b7b0c52f5286c)`(const TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > & NewValue)` <a id="structFRHAPI__MarketingCampaign_1a12eccfc6a4324cea720b7b0c52f5286c"></a>

Sets the value of KeyTypes.

#### `public inline void `[`SetKeyTypes`](#structFRHAPI__MarketingCampaign_1a21f67e838a95b4cdb5c03b2e4b642784)`(TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > && NewValue)` <a id="structFRHAPI__MarketingCampaign_1a21f67e838a95b4cdb5c03b2e4b642784"></a>

Sets the value of KeyTypes using move semantics.

#### `public inline FString & `[`GetCreatedOn`](#structFRHAPI__MarketingCampaign_1ab44e01db1dee6f585f48f4828a2c3e23)`()` <a id="structFRHAPI__MarketingCampaign_1ab44e01db1dee6f585f48f4828a2c3e23"></a>

Gets the value of CreatedOn_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCreatedOn`](#structFRHAPI__MarketingCampaign_1aa0cf49fb84f7cee09867d2560882fc63)`() const` <a id="structFRHAPI__MarketingCampaign_1aa0cf49fb84f7cee09867d2560882fc63"></a>

Gets the value of CreatedOn_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCreatedOn`](#structFRHAPI__MarketingCampaign_1a8c7a3b52054d56326ad0c8f5ee5cc579)`(const FString & DefaultValue) const` <a id="structFRHAPI__MarketingCampaign_1a8c7a3b52054d56326ad0c8f5ee5cc579"></a>

Gets the value of CreatedOn_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCreatedOn`](#structFRHAPI__MarketingCampaign_1ac65c3bb3193e8d64fad5765b6a2998bc)`(FString & OutValue) const` <a id="structFRHAPI__MarketingCampaign_1ac65c3bb3193e8d64fad5765b6a2998bc"></a>

Fills OutValue with the value of CreatedOn_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCreatedOnOrNull`](#structFRHAPI__MarketingCampaign_1a7172b8ba57ed5196bcc1bab66f60159f)`()` <a id="structFRHAPI__MarketingCampaign_1a7172b8ba57ed5196bcc1bab66f60159f"></a>

Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCreatedOnOrNull`](#structFRHAPI__MarketingCampaign_1ac99a009810e363cfade9e4a72faa4b9e)`() const` <a id="structFRHAPI__MarketingCampaign_1ac99a009810e363cfade9e4a72faa4b9e"></a>

Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCreatedOn`](#structFRHAPI__MarketingCampaign_1a1813ad0f80d93e5b070d3248e7c1b9a9)`(const FString & NewValue)` <a id="structFRHAPI__MarketingCampaign_1a1813ad0f80d93e5b070d3248e7c1b9a9"></a>

Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true.

#### `public inline void `[`SetCreatedOn`](#structFRHAPI__MarketingCampaign_1a12eac65c30b80961096e75080ff4389b)`(FString && NewValue)` <a id="structFRHAPI__MarketingCampaign_1a12eac65c30b80961096e75080ff4389b"></a>

Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true using move semantics.

#### `public inline void `[`ClearCreatedOn`](#structFRHAPI__MarketingCampaign_1af2065e3b9fe351f08930a45f42c57a1f)`()` <a id="structFRHAPI__MarketingCampaign_1af2065e3b9fe351f08930a45f42c57a1f"></a>

Clears the value of CreatedOn_Optional and sets CreatedOn_IsSet to false.

#### `public inline bool `[`IsCreatedOnSet`](#structFRHAPI__MarketingCampaign_1ac874e3ab4407a92a9aa32e5d61c650cf)`() const` <a id="structFRHAPI__MarketingCampaign_1ac874e3ab4407a92a9aa32e5d61c650cf"></a>

Checks whether CreatedOn_Optional has been set.

#### `public inline FString & `[`GetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1ae456d555069976b3a0dddb7b1358f566)`()` <a id="structFRHAPI__MarketingCampaign_1ae456d555069976b3a0dddb7b1358f566"></a>

Gets the value of LastModifiedOn_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1a38d499a1c8d0df6334207d43cc36d884)`() const` <a id="structFRHAPI__MarketingCampaign_1a38d499a1c8d0df6334207d43cc36d884"></a>

Gets the value of LastModifiedOn_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1aa88ca672b70bbd332adf6c5456bd56aa)`(const FString & DefaultValue) const` <a id="structFRHAPI__MarketingCampaign_1aa88ca672b70bbd332adf6c5456bd56aa"></a>

Gets the value of LastModifiedOn_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1aab3f28c30cb0f0c84d40ab37071c0564)`(FString & OutValue) const` <a id="structFRHAPI__MarketingCampaign_1aab3f28c30cb0f0c84d40ab37071c0564"></a>

Fills OutValue with the value of LastModifiedOn_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetLastModifiedOnOrNull`](#structFRHAPI__MarketingCampaign_1af1fafce62fac669383bab3c9c2aba969)`()` <a id="structFRHAPI__MarketingCampaign_1af1fafce62fac669383bab3c9c2aba969"></a>

Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetLastModifiedOnOrNull`](#structFRHAPI__MarketingCampaign_1a09b9fb49477c4bbc5275d8a7a3a31b66)`() const` <a id="structFRHAPI__MarketingCampaign_1a09b9fb49477c4bbc5275d8a7a3a31b66"></a>

Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1ac83cabbb7471de49476689f033ef517b)`(const FString & NewValue)` <a id="structFRHAPI__MarketingCampaign_1ac83cabbb7471de49476689f033ef517b"></a>

Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true.

#### `public inline void `[`SetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1a86861434091b0ddae3034fb6a4caad27)`(FString && NewValue)` <a id="structFRHAPI__MarketingCampaign_1a86861434091b0ddae3034fb6a4caad27"></a>

Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true using move semantics.

#### `public inline void `[`ClearLastModifiedOn`](#structFRHAPI__MarketingCampaign_1aa16796a166b316f0d75b6a9f6f667d21)`()` <a id="structFRHAPI__MarketingCampaign_1aa16796a166b316f0d75b6a9f6f667d21"></a>

Clears the value of LastModifiedOn_Optional and sets LastModifiedOn_IsSet to false.

#### `public inline bool `[`IsLastModifiedOnSet`](#structFRHAPI__MarketingCampaign_1a2a38ad5f9de88d12365f0cb2d9bae1ec)`() const` <a id="structFRHAPI__MarketingCampaign_1a2a38ad5f9de88d12365f0cb2d9bae1ec"></a>

Checks whether LastModifiedOn_Optional has been set.

