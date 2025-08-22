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
`public ERHAPI_Portal `[`PortalId_Optional`](#structFRHAPI__MarketingCampaign_1a31b0b077ed1ad08557c16d620802c1b4) | 
`public bool `[`PortalId_IsSet`](#structFRHAPI__MarketingCampaign_1a91a202384b8e443bfabf183ef18fe555) | true if PortalId_Optional has been set to a value
`public bool `[`PortalId_IsNull`](#structFRHAPI__MarketingCampaign_1a999a53262c1fe09daa5c73fbd7398982) | true if PortalId_Optional has been explicitly set to null
`public TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > `[`KeyTypes`](#structFRHAPI__MarketingCampaign_1ac277f1290b832a4d25e273b803263187) | The types of keys that can be claimed from this campaign.
`public FString `[`CreatedOn_Optional`](#structFRHAPI__MarketingCampaign_1ab6949176b14e548b9b2d7055e733d5e5) | 
`public bool `[`CreatedOn_IsSet`](#structFRHAPI__MarketingCampaign_1a7ada46f3e46bb0c26d381a399176aecd) | true if CreatedOn_Optional has been set to a value
`public bool `[`CreatedOn_IsNull`](#structFRHAPI__MarketingCampaign_1a5cbf65d1620035e77304954a4ee2b1f7) | true if CreatedOn_Optional has been explicitly set to null
`public FString `[`LastModifiedOn_Optional`](#structFRHAPI__MarketingCampaign_1ae169c5a829c7a9335301a8896e250749) | 
`public bool `[`LastModifiedOn_IsSet`](#structFRHAPI__MarketingCampaign_1aa6039d64c799ad7309e69d7ebb67084a) | true if LastModifiedOn_Optional has been set to a value
`public bool `[`LastModifiedOn_IsNull`](#structFRHAPI__MarketingCampaign_1a0925045d837d2de0d73ced9e5353dfb3) | true if LastModifiedOn_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__MarketingCampaign_1af66e5db4ed8a79d90a4ac062d70a0712)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MarketingCampaign_1a0f3acc9577bc89ba48a62ca2b3d8c6df)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetUuid`](#structFRHAPI__MarketingCampaign_1af70a002a23ee54b9f9af62cacc884f76)`()` | Gets the value of Uuid.
`public inline FORCEINLINE const FGuid & `[`GetUuid`](#structFRHAPI__MarketingCampaign_1ae9007b57e13c673cab57e8d83d0f9e2b)`() const` | Gets the value of Uuid.
`public inline FORCEINLINE void `[`SetUuid`](#structFRHAPI__MarketingCampaign_1a3f9c1b9522a776ceebf70d3e6e9b8b9d)`(const FGuid & NewValue)` | Sets the value of Uuid.
`public inline FORCEINLINE void `[`SetUuid`](#structFRHAPI__MarketingCampaign_1a7527c85dd31228cb02416512f0b98a03)`(FGuid && NewValue)` | Sets the value of Uuid using move semantics.
`public inline FORCEINLINE FString & `[`GetName`](#structFRHAPI__MarketingCampaign_1a958414817c435b32107abfeb29d0caf9)`()` | Gets the value of Name.
`public inline FORCEINLINE const FString & `[`GetName`](#structFRHAPI__MarketingCampaign_1ac9041767607ee567578b60a9c38eb7a7)`() const` | Gets the value of Name.
`public inline FORCEINLINE void `[`SetName`](#structFRHAPI__MarketingCampaign_1a660b3e88487decb49ad7fbb7f2e3b5d3)`(const FString & NewValue)` | Sets the value of Name.
`public inline FORCEINLINE void `[`SetName`](#structFRHAPI__MarketingCampaign_1a3e337312e904d3f8ab5854a751ce1e1d)`(FString && NewValue)` | Sets the value of Name using move semantics.
`public inline FORCEINLINE ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__MarketingCampaign_1a7f62cf59291685acce4eb082417503e1)`()` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__MarketingCampaign_1af2c705de48d94bc6748bdc2912049a4e)`() const` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__MarketingCampaign_1a7d2a74a110eb6e45f7e0f9d3dc61a223)`(const ERHAPI_Portal & DefaultValue) const` | Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPortalId`](#structFRHAPI__MarketingCampaign_1af0d9d6217d15ddf39f1f64acea67d58a)`(ERHAPI_Portal & OutValue) const` | Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__MarketingCampaign_1a480c9ca2f7f530dca894d3893dee6cea)`()` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__MarketingCampaign_1a9a5c8c4d17e0753d452f98f921cfbd3a)`() const` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__MarketingCampaign_1aa54a8f5286084e02c92081c34f9c9fb3)`(const ERHAPI_Portal & NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.
`public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__MarketingCampaign_1a7021e437a4727d7926ddf8b39f7d3b3f)`(ERHAPI_Portal && NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.
`public inline void `[`ClearPortalId`](#structFRHAPI__MarketingCampaign_1a18a4f2fa4cfe73481188dd0d065b2899)`()` | Clears the value of PortalId_Optional and sets PortalId_IsSet to false.
`public inline FORCEINLINE void `[`SetPortalIdToNull`](#structFRHAPI__MarketingCampaign_1ab32df3e476e2d2150911d0f7e0419b06)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPortalIdNull`](#structFRHAPI__MarketingCampaign_1a6a50594cfbdc620134939300d8f3dd26)`() const` | Checks whether PortalId_Optional is set to null.
`public inline FORCEINLINE TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > & `[`GetKeyTypes`](#structFRHAPI__MarketingCampaign_1ac29152bfa5ba538eae42dce00cead498)`()` | Gets the value of KeyTypes.
`public inline FORCEINLINE const TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > & `[`GetKeyTypes`](#structFRHAPI__MarketingCampaign_1a983381651b9398e5bc7cfeb9ed95a8f7)`() const` | Gets the value of KeyTypes.
`public inline FORCEINLINE void `[`SetKeyTypes`](#structFRHAPI__MarketingCampaign_1abfc10ef9bf300ba59fa1b73bb1e2fd36)`(const TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > & NewValue)` | Sets the value of KeyTypes.
`public inline FORCEINLINE void `[`SetKeyTypes`](#structFRHAPI__MarketingCampaign_1a73c1b74792019bb27466a5b3135c047e)`(TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > && NewValue)` | Sets the value of KeyTypes using move semantics.
`public inline FORCEINLINE FString & `[`GetCreatedOn`](#structFRHAPI__MarketingCampaign_1adb69bdb1f4e57779b65df16b5a0119b8)`()` | Gets the value of CreatedOn_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCreatedOn`](#structFRHAPI__MarketingCampaign_1a8d712f0bedd8d8f99497114441e1c291)`() const` | Gets the value of CreatedOn_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCreatedOn`](#structFRHAPI__MarketingCampaign_1af4719aadb9114d0f717eeae33eadac13)`(const FString & DefaultValue) const` | Gets the value of CreatedOn_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCreatedOn`](#structFRHAPI__MarketingCampaign_1a85eb812cfb3b9d978d0113f709c81a78)`(FString & OutValue) const` | Fills OutValue with the value of CreatedOn_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetCreatedOnOrNull`](#structFRHAPI__MarketingCampaign_1a02bb50143d6e9f7b3906edc890adc861)`()` | Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetCreatedOnOrNull`](#structFRHAPI__MarketingCampaign_1ab740c0d37705533d12b3c41961ff27ad)`() const` | Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCreatedOn`](#structFRHAPI__MarketingCampaign_1a1bcaf4d72ec69aaf29beacef72c51e0a)`(const FString & NewValue)` | Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true.
`public inline FORCEINLINE void `[`SetCreatedOn`](#structFRHAPI__MarketingCampaign_1a2e642a13751616d2dc74d6c6c3c29134)`(FString && NewValue)` | Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true using move semantics.
`public inline void `[`ClearCreatedOn`](#structFRHAPI__MarketingCampaign_1af2065e3b9fe351f08930a45f42c57a1f)`()` | Clears the value of CreatedOn_Optional and sets CreatedOn_IsSet to false.
`public inline FORCEINLINE void `[`SetCreatedOnToNull`](#structFRHAPI__MarketingCampaign_1aba08ab17219d636669003f69b1cafcf8)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCreatedOnNull`](#structFRHAPI__MarketingCampaign_1a680dd89fbbe870cde43531f1d26c73d9)`() const` | Checks whether CreatedOn_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1a41a22fe26c7996551afbdcaf61302ce5)`()` | Gets the value of LastModifiedOn_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1abdf345a2295d8fa68a4c6373ac324116)`() const` | Gets the value of LastModifiedOn_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1ab05ef059ca1951c71802f885a334fbb0)`(const FString & DefaultValue) const` | Gets the value of LastModifiedOn_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1a6a35af5b98e657d06f9a12ce508f0344)`(FString & OutValue) const` | Fills OutValue with the value of LastModifiedOn_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetLastModifiedOnOrNull`](#structFRHAPI__MarketingCampaign_1ac3ef22c9637cfa9b90577db16e836896)`()` | Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetLastModifiedOnOrNull`](#structFRHAPI__MarketingCampaign_1a28fa608830fe10a2076972f368dc106a)`() const` | Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1aefffdbcbe3095de230562cf0409b8d2b)`(const FString & NewValue)` | Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true.
`public inline FORCEINLINE void `[`SetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1afd048156af428ef6aa43d8e851457fc1)`(FString && NewValue)` | Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true using move semantics.
`public inline void `[`ClearLastModifiedOn`](#structFRHAPI__MarketingCampaign_1aa16796a166b316f0d75b6a9f6f667d21)`()` | Clears the value of LastModifiedOn_Optional and sets LastModifiedOn_IsSet to false.
`public inline FORCEINLINE void `[`SetLastModifiedOnToNull`](#structFRHAPI__MarketingCampaign_1aaadea2b5316e9b78750af1a1d0b9b758)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsLastModifiedOnNull`](#structFRHAPI__MarketingCampaign_1aee92303adb426046fd9fc1c87c0c5e31)`() const` | Checks whether LastModifiedOn_Optional is set to null.

### Members

#### `public FGuid `[`Uuid`](#structFRHAPI__MarketingCampaign_1a589be2b0982738de14e8d98b16436a64) <a id="structFRHAPI__MarketingCampaign_1a589be2b0982738de14e8d98b16436a64"></a>

The unique identifier for the Marketing Campaign.

#### `public FString `[`Name`](#structFRHAPI__MarketingCampaign_1a99687e46e9281d06d4c5c295d6bc42a5) <a id="structFRHAPI__MarketingCampaign_1a99687e46e9281d06d4c5c295d6bc42a5"></a>

The name of the Marketing Campaign.

#### `public ERHAPI_Portal `[`PortalId_Optional`](#structFRHAPI__MarketingCampaign_1a31b0b077ed1ad08557c16d620802c1b4) <a id="structFRHAPI__MarketingCampaign_1a31b0b077ed1ad08557c16d620802c1b4"></a>

#### `public bool `[`PortalId_IsSet`](#structFRHAPI__MarketingCampaign_1a91a202384b8e443bfabf183ef18fe555) <a id="structFRHAPI__MarketingCampaign_1a91a202384b8e443bfabf183ef18fe555"></a>

true if PortalId_Optional has been set to a value

#### `public bool `[`PortalId_IsNull`](#structFRHAPI__MarketingCampaign_1a999a53262c1fe09daa5c73fbd7398982) <a id="structFRHAPI__MarketingCampaign_1a999a53262c1fe09daa5c73fbd7398982"></a>

true if PortalId_Optional has been explicitly set to null

#### `public TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > `[`KeyTypes`](#structFRHAPI__MarketingCampaign_1ac277f1290b832a4d25e273b803263187) <a id="structFRHAPI__MarketingCampaign_1ac277f1290b832a4d25e273b803263187"></a>

The types of keys that can be claimed from this campaign.

#### `public FString `[`CreatedOn_Optional`](#structFRHAPI__MarketingCampaign_1ab6949176b14e548b9b2d7055e733d5e5) <a id="structFRHAPI__MarketingCampaign_1ab6949176b14e548b9b2d7055e733d5e5"></a>

#### `public bool `[`CreatedOn_IsSet`](#structFRHAPI__MarketingCampaign_1a7ada46f3e46bb0c26d381a399176aecd) <a id="structFRHAPI__MarketingCampaign_1a7ada46f3e46bb0c26d381a399176aecd"></a>

true if CreatedOn_Optional has been set to a value

#### `public bool `[`CreatedOn_IsNull`](#structFRHAPI__MarketingCampaign_1a5cbf65d1620035e77304954a4ee2b1f7) <a id="structFRHAPI__MarketingCampaign_1a5cbf65d1620035e77304954a4ee2b1f7"></a>

true if CreatedOn_Optional has been explicitly set to null

#### `public FString `[`LastModifiedOn_Optional`](#structFRHAPI__MarketingCampaign_1ae169c5a829c7a9335301a8896e250749) <a id="structFRHAPI__MarketingCampaign_1ae169c5a829c7a9335301a8896e250749"></a>

#### `public bool `[`LastModifiedOn_IsSet`](#structFRHAPI__MarketingCampaign_1aa6039d64c799ad7309e69d7ebb67084a) <a id="structFRHAPI__MarketingCampaign_1aa6039d64c799ad7309e69d7ebb67084a"></a>

true if LastModifiedOn_Optional has been set to a value

#### `public bool `[`LastModifiedOn_IsNull`](#structFRHAPI__MarketingCampaign_1a0925045d837d2de0d73ced9e5353dfb3) <a id="structFRHAPI__MarketingCampaign_1a0925045d837d2de0d73ced9e5353dfb3"></a>

true if LastModifiedOn_Optional has been explicitly set to null

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

#### `public inline FORCEINLINE FGuid & `[`GetUuid`](#structFRHAPI__MarketingCampaign_1af70a002a23ee54b9f9af62cacc884f76)`()` <a id="structFRHAPI__MarketingCampaign_1af70a002a23ee54b9f9af62cacc884f76"></a>

Gets the value of Uuid.

#### `public inline FORCEINLINE const FGuid & `[`GetUuid`](#structFRHAPI__MarketingCampaign_1ae9007b57e13c673cab57e8d83d0f9e2b)`() const` <a id="structFRHAPI__MarketingCampaign_1ae9007b57e13c673cab57e8d83d0f9e2b"></a>

Gets the value of Uuid.

#### `public inline FORCEINLINE void `[`SetUuid`](#structFRHAPI__MarketingCampaign_1a3f9c1b9522a776ceebf70d3e6e9b8b9d)`(const FGuid & NewValue)` <a id="structFRHAPI__MarketingCampaign_1a3f9c1b9522a776ceebf70d3e6e9b8b9d"></a>

Sets the value of Uuid.

#### `public inline FORCEINLINE void `[`SetUuid`](#structFRHAPI__MarketingCampaign_1a7527c85dd31228cb02416512f0b98a03)`(FGuid && NewValue)` <a id="structFRHAPI__MarketingCampaign_1a7527c85dd31228cb02416512f0b98a03"></a>

Sets the value of Uuid using move semantics.

#### `public inline FORCEINLINE FString & `[`GetName`](#structFRHAPI__MarketingCampaign_1a958414817c435b32107abfeb29d0caf9)`()` <a id="structFRHAPI__MarketingCampaign_1a958414817c435b32107abfeb29d0caf9"></a>

Gets the value of Name.

#### `public inline FORCEINLINE const FString & `[`GetName`](#structFRHAPI__MarketingCampaign_1ac9041767607ee567578b60a9c38eb7a7)`() const` <a id="structFRHAPI__MarketingCampaign_1ac9041767607ee567578b60a9c38eb7a7"></a>

Gets the value of Name.

#### `public inline FORCEINLINE void `[`SetName`](#structFRHAPI__MarketingCampaign_1a660b3e88487decb49ad7fbb7f2e3b5d3)`(const FString & NewValue)` <a id="structFRHAPI__MarketingCampaign_1a660b3e88487decb49ad7fbb7f2e3b5d3"></a>

Sets the value of Name.

#### `public inline FORCEINLINE void `[`SetName`](#structFRHAPI__MarketingCampaign_1a3e337312e904d3f8ab5854a751ce1e1d)`(FString && NewValue)` <a id="structFRHAPI__MarketingCampaign_1a3e337312e904d3f8ab5854a751ce1e1d"></a>

Sets the value of Name using move semantics.

#### `public inline FORCEINLINE ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__MarketingCampaign_1a7f62cf59291685acce4eb082417503e1)`()` <a id="structFRHAPI__MarketingCampaign_1a7f62cf59291685acce4eb082417503e1"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__MarketingCampaign_1af2c705de48d94bc6748bdc2912049a4e)`() const` <a id="structFRHAPI__MarketingCampaign_1af2c705de48d94bc6748bdc2912049a4e"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__MarketingCampaign_1a7d2a74a110eb6e45f7e0f9d3dc61a223)`(const ERHAPI_Portal & DefaultValue) const` <a id="structFRHAPI__MarketingCampaign_1a7d2a74a110eb6e45f7e0f9d3dc61a223"></a>

Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPortalId`](#structFRHAPI__MarketingCampaign_1af0d9d6217d15ddf39f1f64acea67d58a)`(ERHAPI_Portal & OutValue) const` <a id="structFRHAPI__MarketingCampaign_1af0d9d6217d15ddf39f1f64acea67d58a"></a>

Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__MarketingCampaign_1a480c9ca2f7f530dca894d3893dee6cea)`()` <a id="structFRHAPI__MarketingCampaign_1a480c9ca2f7f530dca894d3893dee6cea"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__MarketingCampaign_1a9a5c8c4d17e0753d452f98f921cfbd3a)`() const` <a id="structFRHAPI__MarketingCampaign_1a9a5c8c4d17e0753d452f98f921cfbd3a"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__MarketingCampaign_1aa54a8f5286084e02c92081c34f9c9fb3)`(const ERHAPI_Portal & NewValue)` <a id="structFRHAPI__MarketingCampaign_1aa54a8f5286084e02c92081c34f9c9fb3"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__MarketingCampaign_1a7021e437a4727d7926ddf8b39f7d3b3f)`(ERHAPI_Portal && NewValue)` <a id="structFRHAPI__MarketingCampaign_1a7021e437a4727d7926ddf8b39f7d3b3f"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalId`](#structFRHAPI__MarketingCampaign_1a18a4f2fa4cfe73481188dd0d065b2899)`()` <a id="structFRHAPI__MarketingCampaign_1a18a4f2fa4cfe73481188dd0d065b2899"></a>

Clears the value of PortalId_Optional and sets PortalId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPortalIdToNull`](#structFRHAPI__MarketingCampaign_1ab32df3e476e2d2150911d0f7e0419b06)`()` <a id="structFRHAPI__MarketingCampaign_1ab32df3e476e2d2150911d0f7e0419b06"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPortalIdNull`](#structFRHAPI__MarketingCampaign_1a6a50594cfbdc620134939300d8f3dd26)`() const` <a id="structFRHAPI__MarketingCampaign_1a6a50594cfbdc620134939300d8f3dd26"></a>

Checks whether PortalId_Optional is set to null.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > & `[`GetKeyTypes`](#structFRHAPI__MarketingCampaign_1ac29152bfa5ba538eae42dce00cead498)`()` <a id="structFRHAPI__MarketingCampaign_1ac29152bfa5ba538eae42dce00cead498"></a>

Gets the value of KeyTypes.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > & `[`GetKeyTypes`](#structFRHAPI__MarketingCampaign_1a983381651b9398e5bc7cfeb9ed95a8f7)`() const` <a id="structFRHAPI__MarketingCampaign_1a983381651b9398e5bc7cfeb9ed95a8f7"></a>

Gets the value of KeyTypes.

#### `public inline FORCEINLINE void `[`SetKeyTypes`](#structFRHAPI__MarketingCampaign_1abfc10ef9bf300ba59fa1b73bb1e2fd36)`(const TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > & NewValue)` <a id="structFRHAPI__MarketingCampaign_1abfc10ef9bf300ba59fa1b73bb1e2fd36"></a>

Sets the value of KeyTypes.

#### `public inline FORCEINLINE void `[`SetKeyTypes`](#structFRHAPI__MarketingCampaign_1a73c1b74792019bb27466a5b3135c047e)`(TArray< `[`FRHAPI_KeyType`](RHAPI_KeyType.md#structFRHAPI__KeyType)` > && NewValue)` <a id="structFRHAPI__MarketingCampaign_1a73c1b74792019bb27466a5b3135c047e"></a>

Sets the value of KeyTypes using move semantics.

#### `public inline FORCEINLINE FString & `[`GetCreatedOn`](#structFRHAPI__MarketingCampaign_1adb69bdb1f4e57779b65df16b5a0119b8)`()` <a id="structFRHAPI__MarketingCampaign_1adb69bdb1f4e57779b65df16b5a0119b8"></a>

Gets the value of CreatedOn_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCreatedOn`](#structFRHAPI__MarketingCampaign_1a8d712f0bedd8d8f99497114441e1c291)`() const` <a id="structFRHAPI__MarketingCampaign_1a8d712f0bedd8d8f99497114441e1c291"></a>

Gets the value of CreatedOn_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCreatedOn`](#structFRHAPI__MarketingCampaign_1af4719aadb9114d0f717eeae33eadac13)`(const FString & DefaultValue) const` <a id="structFRHAPI__MarketingCampaign_1af4719aadb9114d0f717eeae33eadac13"></a>

Gets the value of CreatedOn_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCreatedOn`](#structFRHAPI__MarketingCampaign_1a85eb812cfb3b9d978d0113f709c81a78)`(FString & OutValue) const` <a id="structFRHAPI__MarketingCampaign_1a85eb812cfb3b9d978d0113f709c81a78"></a>

Fills OutValue with the value of CreatedOn_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetCreatedOnOrNull`](#structFRHAPI__MarketingCampaign_1a02bb50143d6e9f7b3906edc890adc861)`()` <a id="structFRHAPI__MarketingCampaign_1a02bb50143d6e9f7b3906edc890adc861"></a>

Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetCreatedOnOrNull`](#structFRHAPI__MarketingCampaign_1ab740c0d37705533d12b3c41961ff27ad)`() const` <a id="structFRHAPI__MarketingCampaign_1ab740c0d37705533d12b3c41961ff27ad"></a>

Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCreatedOn`](#structFRHAPI__MarketingCampaign_1a1bcaf4d72ec69aaf29beacef72c51e0a)`(const FString & NewValue)` <a id="structFRHAPI__MarketingCampaign_1a1bcaf4d72ec69aaf29beacef72c51e0a"></a>

Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCreatedOn`](#structFRHAPI__MarketingCampaign_1a2e642a13751616d2dc74d6c6c3c29134)`(FString && NewValue)` <a id="structFRHAPI__MarketingCampaign_1a2e642a13751616d2dc74d6c6c3c29134"></a>

Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true using move semantics.

#### `public inline void `[`ClearCreatedOn`](#structFRHAPI__MarketingCampaign_1af2065e3b9fe351f08930a45f42c57a1f)`()` <a id="structFRHAPI__MarketingCampaign_1af2065e3b9fe351f08930a45f42c57a1f"></a>

Clears the value of CreatedOn_Optional and sets CreatedOn_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCreatedOnToNull`](#structFRHAPI__MarketingCampaign_1aba08ab17219d636669003f69b1cafcf8)`()` <a id="structFRHAPI__MarketingCampaign_1aba08ab17219d636669003f69b1cafcf8"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCreatedOnNull`](#structFRHAPI__MarketingCampaign_1a680dd89fbbe870cde43531f1d26c73d9)`() const` <a id="structFRHAPI__MarketingCampaign_1a680dd89fbbe870cde43531f1d26c73d9"></a>

Checks whether CreatedOn_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1a41a22fe26c7996551afbdcaf61302ce5)`()` <a id="structFRHAPI__MarketingCampaign_1a41a22fe26c7996551afbdcaf61302ce5"></a>

Gets the value of LastModifiedOn_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1abdf345a2295d8fa68a4c6373ac324116)`() const` <a id="structFRHAPI__MarketingCampaign_1abdf345a2295d8fa68a4c6373ac324116"></a>

Gets the value of LastModifiedOn_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1ab05ef059ca1951c71802f885a334fbb0)`(const FString & DefaultValue) const` <a id="structFRHAPI__MarketingCampaign_1ab05ef059ca1951c71802f885a334fbb0"></a>

Gets the value of LastModifiedOn_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1a6a35af5b98e657d06f9a12ce508f0344)`(FString & OutValue) const` <a id="structFRHAPI__MarketingCampaign_1a6a35af5b98e657d06f9a12ce508f0344"></a>

Fills OutValue with the value of LastModifiedOn_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetLastModifiedOnOrNull`](#structFRHAPI__MarketingCampaign_1ac3ef22c9637cfa9b90577db16e836896)`()` <a id="structFRHAPI__MarketingCampaign_1ac3ef22c9637cfa9b90577db16e836896"></a>

Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetLastModifiedOnOrNull`](#structFRHAPI__MarketingCampaign_1a28fa608830fe10a2076972f368dc106a)`() const` <a id="structFRHAPI__MarketingCampaign_1a28fa608830fe10a2076972f368dc106a"></a>

Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1aefffdbcbe3095de230562cf0409b8d2b)`(const FString & NewValue)` <a id="structFRHAPI__MarketingCampaign_1aefffdbcbe3095de230562cf0409b8d2b"></a>

Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLastModifiedOn`](#structFRHAPI__MarketingCampaign_1afd048156af428ef6aa43d8e851457fc1)`(FString && NewValue)` <a id="structFRHAPI__MarketingCampaign_1afd048156af428ef6aa43d8e851457fc1"></a>

Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true using move semantics.

#### `public inline void `[`ClearLastModifiedOn`](#structFRHAPI__MarketingCampaign_1aa16796a166b316f0d75b6a9f6f667d21)`()` <a id="structFRHAPI__MarketingCampaign_1aa16796a166b316f0d75b6a9f6f667d21"></a>

Clears the value of LastModifiedOn_Optional and sets LastModifiedOn_IsSet to false.

#### `public inline FORCEINLINE void `[`SetLastModifiedOnToNull`](#structFRHAPI__MarketingCampaign_1aaadea2b5316e9b78750af1a1d0b9b758)`()` <a id="structFRHAPI__MarketingCampaign_1aaadea2b5316e9b78750af1a1d0b9b758"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsLastModifiedOnNull`](#structFRHAPI__MarketingCampaign_1aee92303adb426046fd9fc1c87c0c5e31)`() const` <a id="structFRHAPI__MarketingCampaign_1aee92303adb426046fd9fc1c87c0c5e31"></a>

Checks whether LastModifiedOn_Optional is set to null.

