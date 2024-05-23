# group `RHAPI_UpdateInventoryRequest` <a id="group__RHAPI__UpdateInventoryRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_UpdateInventoryRequest`](#structFRHAPI__UpdateInventoryRequest) | Request to Update an existing Inventory entry. If the Inventory entry does not exist, then the request will fail.

## struct `FRHAPI_UpdateInventoryRequest` <a id="structFRHAPI__UpdateInventoryRequest"></a>

```
struct FRHAPI_UpdateInventoryRequest
  : public FRHAPI_Model
```

Request to Update an existing Inventory entry. If the Inventory entry does not exist, then the request will fail.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__UpdateInventoryRequest_1a572870eb8d72f3f11e19d10a1b715054) | Source of this Inventory Operation.
`public bool `[`Source_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a49b6c64de83ac40dbc5413b8baae81fd) | true if Source_Optional has been set to a value
`public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__UpdateInventoryRequest_1a50bdf580faea52f516462a76bedcfb48) | Arbitrary UUID that can be used by clients to correlate Order requests with Order responses.
`public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a9f4d05f5fac79be2b6531db04add170f) | true if ClientOrderRefId_Optional has been set to a value
`public ERHAPI_InventoryBucket `[`Bucket_Optional`](#structFRHAPI__UpdateInventoryRequest_1ad7084cc1cf879f9ab7afa14f246f5144) | Inventory Bucket for this Inventory Operation.
`public bool `[`Bucket_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a768c1a8f8b4afc8d1d900d6848bd6dbb) | true if Bucket_Optional has been set to a value
`public int32 `[`Count_Optional`](#structFRHAPI__UpdateInventoryRequest_1a84bd93733d280cf1f14ca521646be230) | Count for this Inventory Operation.
`public bool `[`Count_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a33bc89b54bcb2b794cd8b53b0b9f6bf3) | true if Count_Optional has been set to a value
`public FDateTime `[`Expires_Optional`](#structFRHAPI__UpdateInventoryRequest_1af3c92bce4bb168b350c52ece0d1f1924) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`Expires_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a5f7acd9fcd7bbe61d73fdccbf2c15cd4) | true if Expires_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__UpdateInventoryRequest_1aaedbb86b7b311b43abadfdb5c68241cd) | Arbitrary data map that can be set to add additional data to Inventory.
`public bool `[`CustomData_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a25fc95aff0ab9731e31bc2c2048eef68) | true if CustomData_Optional has been set to a value
`public int32 `[`ItemId_Optional`](#structFRHAPI__UpdateInventoryRequest_1a818c5214deb7bb7f614db54bd3e9e47d) | Item ID for this Inventory Operation. If the Item ID is not set during an Update Inventory Request, then the Item ID will not be modified on the existing Inventory Record.
`public bool `[`ItemId_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a80ed649b2b03c882285c73cce3aa94c6) | true if ItemId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__UpdateInventoryRequest_1ae70155fa9c5e02731a3ae083a5db8685)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__UpdateInventoryRequest_1a7ba32b8b10c222f2b9e3eb5232bbe60f)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequest_1a57169cd738d407c44f957683abde1924)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequest_1adf9d6ce28430852000eba36f8870fc89)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequest_1ad8afbe1ef767e8918c82b7bd19ef7622)`(const ERHAPI_Source & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSource`](#structFRHAPI__UpdateInventoryRequest_1a9ab944d63536a517abffe9cf0283c2f9)`(ERHAPI_Source & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__UpdateInventoryRequest_1a3fccf692236a0254cd77475513ddcbc0)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__UpdateInventoryRequest_1ab3b27ea06a1ff6c312c5b497d2523f30)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSource`](#structFRHAPI__UpdateInventoryRequest_1aaab05872ea3f90013982f54b24a9906d)`(const ERHAPI_Source & NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline void `[`SetSource`](#structFRHAPI__UpdateInventoryRequest_1a367142e95b6b49113cdc79b4c8ff0ee4)`(ERHAPI_Source && NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.
`public inline void `[`ClearSource`](#structFRHAPI__UpdateInventoryRequest_1ae21fc186dd7da6d10f132d1058daf0b2)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1a3466db7f0539d8409f8f01ff33787cef)`()` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1a2d139f68cd57d3beab1eb934cd1ab504)`() const` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1af823665c4e1740eddcf9952ebe907c4c)`(const FGuid & DefaultValue) const` | Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1ae5398b9e64a90a80fd6177d9d34768d2)`(FGuid & OutValue) const` | Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__UpdateInventoryRequest_1a9013fced6f8b4aac4d2f799bbd890f0a)`()` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__UpdateInventoryRequest_1adca834faccbaa1881bbaa76c01f7c5ba)`() const` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1ad704a0d5b069ca9c3ad5d2818669bd9c)`(const FGuid & NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.
`public inline void `[`SetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1ab3ea7e940d6c53bee95b3ff93787f71d)`(FGuid && NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.
`public inline void `[`ClearClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1a52322b28cb9d71dd236cfb0f5a5d0110)`()` | Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.
`public inline ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequest_1a2e4f73d6a8fa16b4b6204eda6cfd8ccd)`()` | Gets the value of Bucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequest_1a4d15d38506b6038483fe338f4e5f01e4)`() const` | Gets the value of Bucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequest_1a9ee9d6ab1413281ec941336d92ad45f9)`(const ERHAPI_InventoryBucket & DefaultValue) const` | Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetBucket`](#structFRHAPI__UpdateInventoryRequest_1a15e3816b7e44c9c85d714b499b201a2d)`(ERHAPI_InventoryBucket & OutValue) const` | Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__UpdateInventoryRequest_1a2063e8d13ebb99ab5eee6de8e9b59d75)`()` | Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__UpdateInventoryRequest_1a20e911d6238e68a9cd279c56934ccffa)`() const` | Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetBucket`](#structFRHAPI__UpdateInventoryRequest_1a9d93802adc2b6481a25ad10ac5ed1683)`(const ERHAPI_InventoryBucket & NewValue)` | Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.
`public inline void `[`SetBucket`](#structFRHAPI__UpdateInventoryRequest_1a2ed2ec59792e18bdff4aa8583c0945fd)`(ERHAPI_InventoryBucket && NewValue)` | Sets the value of Bucket_Optional and also sets Bucket_IsSet to true using move semantics.
`public inline void `[`ClearBucket`](#structFRHAPI__UpdateInventoryRequest_1ae6b64c7a747a2a36ccda81290f93c35f)`()` | Clears the value of Bucket_Optional and sets Bucket_IsSet to false.
`public inline int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequest_1a5873d1b962ee52cdccd163696b40cea9)`()` | Gets the value of Count_Optional, regardless of it having been set.
`public inline const int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequest_1afdaa22930897d2f26ced1e5d9fe009e9)`() const` | Gets the value of Count_Optional, regardless of it having been set.
`public inline const int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequest_1a1b0f009c8cf49f4f0147004716f3f1c7)`(const int32 & DefaultValue) const` | Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCount`](#structFRHAPI__UpdateInventoryRequest_1a038ab2b14746a20a0c443059c25a5acb)`(int32 & OutValue) const` | Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetCountOrNull`](#structFRHAPI__UpdateInventoryRequest_1ab33e66be1fbca6b09f7eba54c630de07)`()` | Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetCountOrNull`](#structFRHAPI__UpdateInventoryRequest_1a21718474f91f63c99cab7c87d747b088)`() const` | Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCount`](#structFRHAPI__UpdateInventoryRequest_1a245e53ba64162c8ef3232f0adff14f47)`(const int32 & NewValue)` | Sets the value of Count_Optional and also sets Count_IsSet to true.
`public inline void `[`SetCount`](#structFRHAPI__UpdateInventoryRequest_1a0af9199c83578caf84d01a5e2d4b79cf)`(int32 && NewValue)` | Sets the value of Count_Optional and also sets Count_IsSet to true using move semantics.
`public inline void `[`ClearCount`](#structFRHAPI__UpdateInventoryRequest_1abc478f61cff8135826588a9c4a7bd512)`()` | Clears the value of Count_Optional and sets Count_IsSet to false.
`public inline bool `[`IsCountDefaultValue`](#structFRHAPI__UpdateInventoryRequest_1aab5e6a51cdd54d2b66d2b48765421b8a)`() const` | Returns true if Count_Optional is set and matches the default value.
`public inline void `[`SetCountToDefault`](#structFRHAPI__UpdateInventoryRequest_1aa0e45b196edcd66daa9e790ea9052352)`()` | Sets the value of Count_Optional to its default and also sets Count_IsSet to true.
`public inline FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequest_1a2768ca11a9a8e9995127099d536105de)`()` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequest_1aab7bcfef4eba64b45fecedc3e166272a)`() const` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequest_1a55bd52a965ae3f0e5ddef6a3a9f1f35f)`(const FDateTime & DefaultValue) const` | Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExpires`](#structFRHAPI__UpdateInventoryRequest_1a937b4f983a15093712d24f60ec87b774)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__UpdateInventoryRequest_1a578eaa18bc072f86faf3f0e67166c691)`()` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__UpdateInventoryRequest_1ae7c1534a56d4b5776c53c9924b62714b)`() const` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExpires`](#structFRHAPI__UpdateInventoryRequest_1aa8b064f0e6fc014dec67e834069889b8)`(const FDateTime & NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true.
`public inline void `[`SetExpires`](#structFRHAPI__UpdateInventoryRequest_1ad7cdc08de12a438ef83161e443542a27)`(FDateTime && NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.
`public inline void `[`ClearExpires`](#structFRHAPI__UpdateInventoryRequest_1a2c377a3ce655cd29ac5bdc1f9f9bbf6a)`()` | Clears the value of Expires_Optional and sets Expires_IsSet to false.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequest_1ae7bfce74be19e09fb35621bff68709b5)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequest_1ae609c8168511f13ba255927fdd4a7721)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequest_1ad04a26a22d44f8eec1b3022d89a8750a)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequest_1a2210a7ccc9715d9dd2384210932edf1a)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__UpdateInventoryRequest_1ad1606208ef97e66ecd0bf93057210a41)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__UpdateInventoryRequest_1a9aa0affdf62a4dfe65c8f8be782249a3)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__UpdateInventoryRequest_1a68a8cb347a5aba6a97e70cd6200fb875)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__UpdateInventoryRequest_1a9d873938289c332106696f9da034ee95)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__UpdateInventoryRequest_1ad439f11cd2027fdd8b1c533d1ffb0cfb)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequest_1ab3c70a024cb3cf974ce31b16df8ca82d)`()` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequest_1ae9cf927cccc7361e4ba7beafad7cf3ff)`() const` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequest_1a2a3a6738f8dbd227857c9dd59e7ff545)`(const int32 & DefaultValue) const` | Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetItemId`](#structFRHAPI__UpdateInventoryRequest_1a76b858794e9456d48463b82b7dd0e046)`(int32 & OutValue) const` | Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__UpdateInventoryRequest_1a854ae5448a4b0a9d9029055cc81c02bf)`()` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__UpdateInventoryRequest_1a884a4a9a3d4044e5c237d752af7d811b)`() const` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetItemId`](#structFRHAPI__UpdateInventoryRequest_1a1b4b114c23a2a7471bb7967ad1f7dc62)`(const int32 & NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.
`public inline void `[`SetItemId`](#structFRHAPI__UpdateInventoryRequest_1acfd0d6771ac92b6ebecd6f54d735d8a3)`(int32 && NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.
`public inline void `[`ClearItemId`](#structFRHAPI__UpdateInventoryRequest_1aec5ba46c40f111dce16dbbb057251001)`()` | Clears the value of ItemId_Optional and sets ItemId_IsSet to false.
`public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__UpdateInventoryRequest_1a3d1b3d8f181533b01ecb89b627949b5f)`() const` | Returns true if ItemId_Optional is set and matches the default value.
`public inline void `[`SetItemIdToDefault`](#structFRHAPI__UpdateInventoryRequest_1ac994fb467690e1e6b6f00bf32ccd390d)`()` | Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.

### Members

#### `public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__UpdateInventoryRequest_1a572870eb8d72f3f11e19d10a1b715054) <a id="structFRHAPI__UpdateInventoryRequest_1a572870eb8d72f3f11e19d10a1b715054"></a>

Source of this Inventory Operation.

#### `public bool `[`Source_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a49b6c64de83ac40dbc5413b8baae81fd) <a id="structFRHAPI__UpdateInventoryRequest_1a49b6c64de83ac40dbc5413b8baae81fd"></a>

true if Source_Optional has been set to a value

#### `public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__UpdateInventoryRequest_1a50bdf580faea52f516462a76bedcfb48) <a id="structFRHAPI__UpdateInventoryRequest_1a50bdf580faea52f516462a76bedcfb48"></a>

Arbitrary UUID that can be used by clients to correlate Order requests with Order responses.

#### `public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a9f4d05f5fac79be2b6531db04add170f) <a id="structFRHAPI__UpdateInventoryRequest_1a9f4d05f5fac79be2b6531db04add170f"></a>

true if ClientOrderRefId_Optional has been set to a value

#### `public ERHAPI_InventoryBucket `[`Bucket_Optional`](#structFRHAPI__UpdateInventoryRequest_1ad7084cc1cf879f9ab7afa14f246f5144) <a id="structFRHAPI__UpdateInventoryRequest_1ad7084cc1cf879f9ab7afa14f246f5144"></a>

Inventory Bucket for this Inventory Operation.

#### `public bool `[`Bucket_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a768c1a8f8b4afc8d1d900d6848bd6dbb) <a id="structFRHAPI__UpdateInventoryRequest_1a768c1a8f8b4afc8d1d900d6848bd6dbb"></a>

true if Bucket_Optional has been set to a value

#### `public int32 `[`Count_Optional`](#structFRHAPI__UpdateInventoryRequest_1a84bd93733d280cf1f14ca521646be230) <a id="structFRHAPI__UpdateInventoryRequest_1a84bd93733d280cf1f14ca521646be230"></a>

Count for this Inventory Operation.

#### `public bool `[`Count_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a33bc89b54bcb2b794cd8b53b0b9f6bf3) <a id="structFRHAPI__UpdateInventoryRequest_1a33bc89b54bcb2b794cd8b53b0b9f6bf3"></a>

true if Count_Optional has been set to a value

#### `public FDateTime `[`Expires_Optional`](#structFRHAPI__UpdateInventoryRequest_1af3c92bce4bb168b350c52ece0d1f1924) <a id="structFRHAPI__UpdateInventoryRequest_1af3c92bce4bb168b350c52ece0d1f1924"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`Expires_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a5f7acd9fcd7bbe61d73fdccbf2c15cd4) <a id="structFRHAPI__UpdateInventoryRequest_1a5f7acd9fcd7bbe61d73fdccbf2c15cd4"></a>

true if Expires_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__UpdateInventoryRequest_1aaedbb86b7b311b43abadfdb5c68241cd) <a id="structFRHAPI__UpdateInventoryRequest_1aaedbb86b7b311b43abadfdb5c68241cd"></a>

Arbitrary data map that can be set to add additional data to Inventory.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a25fc95aff0ab9731e31bc2c2048eef68) <a id="structFRHAPI__UpdateInventoryRequest_1a25fc95aff0ab9731e31bc2c2048eef68"></a>

true if CustomData_Optional has been set to a value

#### `public int32 `[`ItemId_Optional`](#structFRHAPI__UpdateInventoryRequest_1a818c5214deb7bb7f614db54bd3e9e47d) <a id="structFRHAPI__UpdateInventoryRequest_1a818c5214deb7bb7f614db54bd3e9e47d"></a>

Item ID for this Inventory Operation. If the Item ID is not set during an Update Inventory Request, then the Item ID will not be modified on the existing Inventory Record.

#### `public bool `[`ItemId_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a80ed649b2b03c882285c73cce3aa94c6) <a id="structFRHAPI__UpdateInventoryRequest_1a80ed649b2b03c882285c73cce3aa94c6"></a>

true if ItemId_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__UpdateInventoryRequest_1ae70155fa9c5e02731a3ae083a5db8685)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__UpdateInventoryRequest_1ae70155fa9c5e02731a3ae083a5db8685"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__UpdateInventoryRequest_1a7ba32b8b10c222f2b9e3eb5232bbe60f)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__UpdateInventoryRequest_1a7ba32b8b10c222f2b9e3eb5232bbe60f"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequest_1a57169cd738d407c44f957683abde1924)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a57169cd738d407c44f957683abde1924"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequest_1adf9d6ce28430852000eba36f8870fc89)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1adf9d6ce28430852000eba36f8870fc89"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequest_1ad8afbe1ef767e8918c82b7bd19ef7622)`(const ERHAPI_Source & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1ad8afbe1ef767e8918c82b7bd19ef7622"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSource`](#structFRHAPI__UpdateInventoryRequest_1a9ab944d63536a517abffe9cf0283c2f9)`(ERHAPI_Source & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a9ab944d63536a517abffe9cf0283c2f9"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__UpdateInventoryRequest_1a3fccf692236a0254cd77475513ddcbc0)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a3fccf692236a0254cd77475513ddcbc0"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__UpdateInventoryRequest_1ab3b27ea06a1ff6c312c5b497d2523f30)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1ab3b27ea06a1ff6c312c5b497d2523f30"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSource`](#structFRHAPI__UpdateInventoryRequest_1aaab05872ea3f90013982f54b24a9906d)`(const ERHAPI_Source & NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1aaab05872ea3f90013982f54b24a9906d"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

#### `public inline void `[`SetSource`](#structFRHAPI__UpdateInventoryRequest_1a367142e95b6b49113cdc79b4c8ff0ee4)`(ERHAPI_Source && NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1a367142e95b6b49113cdc79b4c8ff0ee4"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.

#### `public inline void `[`ClearSource`](#structFRHAPI__UpdateInventoryRequest_1ae21fc186dd7da6d10f132d1058daf0b2)`()` <a id="structFRHAPI__UpdateInventoryRequest_1ae21fc186dd7da6d10f132d1058daf0b2"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

#### `public inline FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1a3466db7f0539d8409f8f01ff33787cef)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a3466db7f0539d8409f8f01ff33787cef"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1a2d139f68cd57d3beab1eb934cd1ab504)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a2d139f68cd57d3beab1eb934cd1ab504"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1af823665c4e1740eddcf9952ebe907c4c)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1af823665c4e1740eddcf9952ebe907c4c"></a>

Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1ae5398b9e64a90a80fd6177d9d34768d2)`(FGuid & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1ae5398b9e64a90a80fd6177d9d34768d2"></a>

Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__UpdateInventoryRequest_1a9013fced6f8b4aac4d2f799bbd890f0a)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a9013fced6f8b4aac4d2f799bbd890f0a"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__UpdateInventoryRequest_1adca834faccbaa1881bbaa76c01f7c5ba)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1adca834faccbaa1881bbaa76c01f7c5ba"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1ad704a0d5b069ca9c3ad5d2818669bd9c)`(const FGuid & NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1ad704a0d5b069ca9c3ad5d2818669bd9c"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.

#### `public inline void `[`SetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1ab3ea7e940d6c53bee95b3ff93787f71d)`(FGuid && NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1ab3ea7e940d6c53bee95b3ff93787f71d"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.

#### `public inline void `[`ClearClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1a52322b28cb9d71dd236cfb0f5a5d0110)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a52322b28cb9d71dd236cfb0f5a5d0110"></a>

Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.

#### `public inline ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequest_1a2e4f73d6a8fa16b4b6204eda6cfd8ccd)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a2e4f73d6a8fa16b4b6204eda6cfd8ccd"></a>

Gets the value of Bucket_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequest_1a4d15d38506b6038483fe338f4e5f01e4)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a4d15d38506b6038483fe338f4e5f01e4"></a>

Gets the value of Bucket_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequest_1a9ee9d6ab1413281ec941336d92ad45f9)`(const ERHAPI_InventoryBucket & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a9ee9d6ab1413281ec941336d92ad45f9"></a>

Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetBucket`](#structFRHAPI__UpdateInventoryRequest_1a15e3816b7e44c9c85d714b499b201a2d)`(ERHAPI_InventoryBucket & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a15e3816b7e44c9c85d714b499b201a2d"></a>

Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__UpdateInventoryRequest_1a2063e8d13ebb99ab5eee6de8e9b59d75)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a2063e8d13ebb99ab5eee6de8e9b59d75"></a>

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__UpdateInventoryRequest_1a20e911d6238e68a9cd279c56934ccffa)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a20e911d6238e68a9cd279c56934ccffa"></a>

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetBucket`](#structFRHAPI__UpdateInventoryRequest_1a9d93802adc2b6481a25ad10ac5ed1683)`(const ERHAPI_InventoryBucket & NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1a9d93802adc2b6481a25ad10ac5ed1683"></a>

Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.

#### `public inline void `[`SetBucket`](#structFRHAPI__UpdateInventoryRequest_1a2ed2ec59792e18bdff4aa8583c0945fd)`(ERHAPI_InventoryBucket && NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1a2ed2ec59792e18bdff4aa8583c0945fd"></a>

Sets the value of Bucket_Optional and also sets Bucket_IsSet to true using move semantics.

#### `public inline void `[`ClearBucket`](#structFRHAPI__UpdateInventoryRequest_1ae6b64c7a747a2a36ccda81290f93c35f)`()` <a id="structFRHAPI__UpdateInventoryRequest_1ae6b64c7a747a2a36ccda81290f93c35f"></a>

Clears the value of Bucket_Optional and sets Bucket_IsSet to false.

#### `public inline int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequest_1a5873d1b962ee52cdccd163696b40cea9)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a5873d1b962ee52cdccd163696b40cea9"></a>

Gets the value of Count_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequest_1afdaa22930897d2f26ced1e5d9fe009e9)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1afdaa22930897d2f26ced1e5d9fe009e9"></a>

Gets the value of Count_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequest_1a1b0f009c8cf49f4f0147004716f3f1c7)`(const int32 & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a1b0f009c8cf49f4f0147004716f3f1c7"></a>

Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCount`](#structFRHAPI__UpdateInventoryRequest_1a038ab2b14746a20a0c443059c25a5acb)`(int32 & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a038ab2b14746a20a0c443059c25a5acb"></a>

Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetCountOrNull`](#structFRHAPI__UpdateInventoryRequest_1ab33e66be1fbca6b09f7eba54c630de07)`()` <a id="structFRHAPI__UpdateInventoryRequest_1ab33e66be1fbca6b09f7eba54c630de07"></a>

Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetCountOrNull`](#structFRHAPI__UpdateInventoryRequest_1a21718474f91f63c99cab7c87d747b088)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a21718474f91f63c99cab7c87d747b088"></a>

Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCount`](#structFRHAPI__UpdateInventoryRequest_1a245e53ba64162c8ef3232f0adff14f47)`(const int32 & NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1a245e53ba64162c8ef3232f0adff14f47"></a>

Sets the value of Count_Optional and also sets Count_IsSet to true.

#### `public inline void `[`SetCount`](#structFRHAPI__UpdateInventoryRequest_1a0af9199c83578caf84d01a5e2d4b79cf)`(int32 && NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1a0af9199c83578caf84d01a5e2d4b79cf"></a>

Sets the value of Count_Optional and also sets Count_IsSet to true using move semantics.

#### `public inline void `[`ClearCount`](#structFRHAPI__UpdateInventoryRequest_1abc478f61cff8135826588a9c4a7bd512)`()` <a id="structFRHAPI__UpdateInventoryRequest_1abc478f61cff8135826588a9c4a7bd512"></a>

Clears the value of Count_Optional and sets Count_IsSet to false.

#### `public inline bool `[`IsCountDefaultValue`](#structFRHAPI__UpdateInventoryRequest_1aab5e6a51cdd54d2b66d2b48765421b8a)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1aab5e6a51cdd54d2b66d2b48765421b8a"></a>

Returns true if Count_Optional is set and matches the default value.

#### `public inline void `[`SetCountToDefault`](#structFRHAPI__UpdateInventoryRequest_1aa0e45b196edcd66daa9e790ea9052352)`()` <a id="structFRHAPI__UpdateInventoryRequest_1aa0e45b196edcd66daa9e790ea9052352"></a>

Sets the value of Count_Optional to its default and also sets Count_IsSet to true.

#### `public inline FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequest_1a2768ca11a9a8e9995127099d536105de)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a2768ca11a9a8e9995127099d536105de"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequest_1aab7bcfef4eba64b45fecedc3e166272a)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1aab7bcfef4eba64b45fecedc3e166272a"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequest_1a55bd52a965ae3f0e5ddef6a3a9f1f35f)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a55bd52a965ae3f0e5ddef6a3a9f1f35f"></a>

Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExpires`](#structFRHAPI__UpdateInventoryRequest_1a937b4f983a15093712d24f60ec87b774)`(FDateTime & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a937b4f983a15093712d24f60ec87b774"></a>

Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__UpdateInventoryRequest_1a578eaa18bc072f86faf3f0e67166c691)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a578eaa18bc072f86faf3f0e67166c691"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__UpdateInventoryRequest_1ae7c1534a56d4b5776c53c9924b62714b)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1ae7c1534a56d4b5776c53c9924b62714b"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExpires`](#structFRHAPI__UpdateInventoryRequest_1aa8b064f0e6fc014dec67e834069889b8)`(const FDateTime & NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1aa8b064f0e6fc014dec67e834069889b8"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true.

#### `public inline void `[`SetExpires`](#structFRHAPI__UpdateInventoryRequest_1ad7cdc08de12a438ef83161e443542a27)`(FDateTime && NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1ad7cdc08de12a438ef83161e443542a27"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.

#### `public inline void `[`ClearExpires`](#structFRHAPI__UpdateInventoryRequest_1a2c377a3ce655cd29ac5bdc1f9f9bbf6a)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a2c377a3ce655cd29ac5bdc1f9f9bbf6a"></a>

Clears the value of Expires_Optional and sets Expires_IsSet to false.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequest_1ae7bfce74be19e09fb35621bff68709b5)`()` <a id="structFRHAPI__UpdateInventoryRequest_1ae7bfce74be19e09fb35621bff68709b5"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequest_1ae609c8168511f13ba255927fdd4a7721)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1ae609c8168511f13ba255927fdd4a7721"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequest_1ad04a26a22d44f8eec1b3022d89a8750a)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1ad04a26a22d44f8eec1b3022d89a8750a"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequest_1a2210a7ccc9715d9dd2384210932edf1a)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a2210a7ccc9715d9dd2384210932edf1a"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__UpdateInventoryRequest_1ad1606208ef97e66ecd0bf93057210a41)`()` <a id="structFRHAPI__UpdateInventoryRequest_1ad1606208ef97e66ecd0bf93057210a41"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__UpdateInventoryRequest_1a9aa0affdf62a4dfe65c8f8be782249a3)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a9aa0affdf62a4dfe65c8f8be782249a3"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__UpdateInventoryRequest_1a68a8cb347a5aba6a97e70cd6200fb875)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1a68a8cb347a5aba6a97e70cd6200fb875"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__UpdateInventoryRequest_1a9d873938289c332106696f9da034ee95)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1a9d873938289c332106696f9da034ee95"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__UpdateInventoryRequest_1ad439f11cd2027fdd8b1c533d1ffb0cfb)`()` <a id="structFRHAPI__UpdateInventoryRequest_1ad439f11cd2027fdd8b1c533d1ffb0cfb"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequest_1ab3c70a024cb3cf974ce31b16df8ca82d)`()` <a id="structFRHAPI__UpdateInventoryRequest_1ab3c70a024cb3cf974ce31b16df8ca82d"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequest_1ae9cf927cccc7361e4ba7beafad7cf3ff)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1ae9cf927cccc7361e4ba7beafad7cf3ff"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequest_1a2a3a6738f8dbd227857c9dd59e7ff545)`(const int32 & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a2a3a6738f8dbd227857c9dd59e7ff545"></a>

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetItemId`](#structFRHAPI__UpdateInventoryRequest_1a76b858794e9456d48463b82b7dd0e046)`(int32 & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a76b858794e9456d48463b82b7dd0e046"></a>

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__UpdateInventoryRequest_1a854ae5448a4b0a9d9029055cc81c02bf)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a854ae5448a4b0a9d9029055cc81c02bf"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__UpdateInventoryRequest_1a884a4a9a3d4044e5c237d752af7d811b)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a884a4a9a3d4044e5c237d752af7d811b"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetItemId`](#structFRHAPI__UpdateInventoryRequest_1a1b4b114c23a2a7471bb7967ad1f7dc62)`(const int32 & NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1a1b4b114c23a2a7471bb7967ad1f7dc62"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.

#### `public inline void `[`SetItemId`](#structFRHAPI__UpdateInventoryRequest_1acfd0d6771ac92b6ebecd6f54d735d8a3)`(int32 && NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1acfd0d6771ac92b6ebecd6f54d735d8a3"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearItemId`](#structFRHAPI__UpdateInventoryRequest_1aec5ba46c40f111dce16dbbb057251001)`()` <a id="structFRHAPI__UpdateInventoryRequest_1aec5ba46c40f111dce16dbbb057251001"></a>

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.

#### `public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__UpdateInventoryRequest_1a3d1b3d8f181533b01ecb89b627949b5f)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a3d1b3d8f181533b01ecb89b627949b5f"></a>

Returns true if ItemId_Optional is set and matches the default value.

#### `public inline void `[`SetItemIdToDefault`](#structFRHAPI__UpdateInventoryRequest_1ac994fb467690e1e6b6f00bf32ccd390d)`()` <a id="structFRHAPI__UpdateInventoryRequest_1ac994fb467690e1e6b6f00bf32ccd390d"></a>

Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.

