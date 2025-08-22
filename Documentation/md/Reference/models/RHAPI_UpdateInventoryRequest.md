---
title: RHAPI_UpdateInventoryRequest
---

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
`public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__UpdateInventoryRequest_1a572870eb8d72f3f11e19d10a1b715054) | 
`public bool `[`Source_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a49b6c64de83ac40dbc5413b8baae81fd) | true if Source_Optional has been set to a value
`public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__UpdateInventoryRequest_1a50bdf580faea52f516462a76bedcfb48) | 
`public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a9f4d05f5fac79be2b6531db04add170f) | true if ClientOrderRefId_Optional has been set to a value
`public bool `[`ClientOrderRefId_IsNull`](#structFRHAPI__UpdateInventoryRequest_1a7065ca93798dd9119fafe090fc0c1635) | true if ClientOrderRefId_Optional has been explicitly set to null
`public ERHAPI_InventoryBucket `[`Bucket_Optional`](#structFRHAPI__UpdateInventoryRequest_1ad7084cc1cf879f9ab7afa14f246f5144) | 
`public bool `[`Bucket_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a768c1a8f8b4afc8d1d900d6848bd6dbb) | true if Bucket_Optional has been set to a value
`public int32 `[`Count_Optional`](#structFRHAPI__UpdateInventoryRequest_1a84bd93733d280cf1f14ca521646be230) | Count for this Inventory Operation.
`public bool `[`Count_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a33bc89b54bcb2b794cd8b53b0b9f6bf3) | true if Count_Optional has been set to a value
`public FDateTime `[`Expires_Optional`](#structFRHAPI__UpdateInventoryRequest_1af3c92bce4bb168b350c52ece0d1f1924) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`Expires_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a5f7acd9fcd7bbe61d73fdccbf2c15cd4) | true if Expires_Optional has been set to a value
`public bool `[`Expires_IsNull`](#structFRHAPI__UpdateInventoryRequest_1a8bdb443171e1df08c90bd6f87f9fabee) | true if Expires_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__UpdateInventoryRequest_1aaedbb86b7b311b43abadfdb5c68241cd) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a25fc95aff0ab9731e31bc2c2048eef68) | true if CustomData_Optional has been set to a value
`public bool `[`CustomData_IsNull`](#structFRHAPI__UpdateInventoryRequest_1a6030499108156b55e608fd7f2c8e5465) | true if CustomData_Optional has been explicitly set to null
`public int32 `[`ItemId_Optional`](#structFRHAPI__UpdateInventoryRequest_1a818c5214deb7bb7f614db54bd3e9e47d) | 
`public bool `[`ItemId_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a80ed649b2b03c882285c73cce3aa94c6) | true if ItemId_Optional has been set to a value
`public bool `[`ItemId_IsNull`](#structFRHAPI__UpdateInventoryRequest_1a4cbd050ac90f8813d291162adcce1ef4) | true if ItemId_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__UpdateInventoryRequest_1a81c2178a7e923e2ebc26343b035e9db0)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__UpdateInventoryRequest_1a7d40bda9fb664373b0130e0ebc62b3ad)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequest_1aa007826e40049d39b05b622c941f5fd4)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequest_1a38ffe31efec7f8a01bd86eae14b87e91)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequest_1aa49f3dd8aa3349b1fb5f79e533761bba)`(const ERHAPI_Source & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSource`](#structFRHAPI__UpdateInventoryRequest_1a8b734aa8c9a129df169df88da7c43c99)`(ERHAPI_Source & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__UpdateInventoryRequest_1ac121b6b2432678ed591d918753b8aa1a)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__UpdateInventoryRequest_1a6122ab131085d49a7d93ada26979cbe2)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__UpdateInventoryRequest_1ae9e29f76bc54639e0ee72cf698c4671a)`(const ERHAPI_Source & NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__UpdateInventoryRequest_1a7b3391a1e4febee5c1e5915883c0e919)`(ERHAPI_Source && NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.
`public inline void `[`ClearSource`](#structFRHAPI__UpdateInventoryRequest_1ae21fc186dd7da6d10f132d1058daf0b2)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1a45fe1372b17bb98fbcf28ef177f4eab1)`()` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1a4086ebb94e4ab2a2e36d799fbd85fd77)`() const` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1a9c029a35d0408633df6d84b903186a7d)`(const FGuid & DefaultValue) const` | Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1a6a0c2848ef9119bcb3d915206004a7ab)`(FGuid & OutValue) const` | Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__UpdateInventoryRequest_1ae5d040ffc6467b17d1e1576df616a20f)`()` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__UpdateInventoryRequest_1aaac2c7f4a0f5ba051bacb3f99eac06e8)`() const` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1aaa87e32673f1e8c595e5f07b244e584b)`(const FGuid & NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.
`public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1a611c4979d5d30556b2727804821467c1)`(FGuid && NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.
`public inline void `[`ClearClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1a52322b28cb9d71dd236cfb0f5a5d0110)`()` | Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.
`public inline FORCEINLINE void `[`SetClientOrderRefIdToNull`](#structFRHAPI__UpdateInventoryRequest_1ad5f990cad03d9d486210b203557c46fe)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsClientOrderRefIdNull`](#structFRHAPI__UpdateInventoryRequest_1a728b99fb6a4a54daa496ec7275058a4b)`() const` | Checks whether ClientOrderRefId_Optional is set to null.
`public inline FORCEINLINE ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequest_1a66283cd7c180877ecacf7c176a37af1f)`()` | Gets the value of Bucket_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequest_1a7e66d784a3ee7230d94626eb72fe98ac)`() const` | Gets the value of Bucket_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequest_1a1a1d340d8b67a98e581335a14c84c58f)`(const ERHAPI_InventoryBucket & DefaultValue) const` | Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetBucket`](#structFRHAPI__UpdateInventoryRequest_1a6f4d9fab5af267dc8a02411138e97cae)`(ERHAPI_InventoryBucket & OutValue) const` | Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__UpdateInventoryRequest_1a244f10e8fa7ba4f07d621701e611a023)`()` | Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__UpdateInventoryRequest_1a2f11f8c6b46f986562923ca29636e23a)`() const` | Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetBucket`](#structFRHAPI__UpdateInventoryRequest_1ae4c1dd826f095356b43fd002890981b2)`(const ERHAPI_InventoryBucket & NewValue)` | Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.
`public inline FORCEINLINE void `[`SetBucket`](#structFRHAPI__UpdateInventoryRequest_1a32cd3c800d2dae55edeb41fb1f3b63a9)`(ERHAPI_InventoryBucket && NewValue)` | Sets the value of Bucket_Optional and also sets Bucket_IsSet to true using move semantics.
`public inline void `[`ClearBucket`](#structFRHAPI__UpdateInventoryRequest_1ae6b64c7a747a2a36ccda81290f93c35f)`()` | Clears the value of Bucket_Optional and sets Bucket_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequest_1afb8978f847f43ed15db00f0af50b17fc)`()` | Gets the value of Count_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequest_1a7ab23dfcd99227708faefc7462a7c1e7)`() const` | Gets the value of Count_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequest_1a88cb4a6c37cd216180a6b083090c2885)`(const int32 & DefaultValue) const` | Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCount`](#structFRHAPI__UpdateInventoryRequest_1af0220ae45080bcdd380d440d27063f59)`(int32 & OutValue) const` | Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetCountOrNull`](#structFRHAPI__UpdateInventoryRequest_1aac03e38f92f6073c4c15ba02a85a82b5)`()` | Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetCountOrNull`](#structFRHAPI__UpdateInventoryRequest_1a00ab2229f32e5b50342e123ec0894914)`() const` | Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__UpdateInventoryRequest_1abb1fdc66e4b2edab46ff161153542130)`(const int32 & NewValue)` | Sets the value of Count_Optional and also sets Count_IsSet to true.
`public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__UpdateInventoryRequest_1a2194fdd32b3f1ee9674d01d2817edcf3)`(int32 && NewValue)` | Sets the value of Count_Optional and also sets Count_IsSet to true using move semantics.
`public inline void `[`ClearCount`](#structFRHAPI__UpdateInventoryRequest_1abc478f61cff8135826588a9c4a7bd512)`()` | Clears the value of Count_Optional and sets Count_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Count`](#structFRHAPI__UpdateInventoryRequest_1ada74dfdaeddda6c2aef9a04a92e06998)`()` | Returns the default value of Count.
`public inline FORCEINLINE FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequest_1a3ed1620bac38abe291f49be3a5c92eb7)`()` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequest_1a142af74d94a1b21b26b17df1c9b2756b)`() const` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequest_1abb6cb4499bcf6e0650bbc1734a8dfc75)`(const FDateTime & DefaultValue) const` | Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExpires`](#structFRHAPI__UpdateInventoryRequest_1a62719d5771f795c9d804478730ed77ea)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__UpdateInventoryRequest_1aff1f7c979fd7a108e5ff0f9814a256ef)`()` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__UpdateInventoryRequest_1a01e4f435e1e3473e580c02defc0a3e88)`() const` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__UpdateInventoryRequest_1a1af5804dc09e3f14ca174f1a4b10fcf7)`(const FDateTime & NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true.
`public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__UpdateInventoryRequest_1a37041f53150ad3f23356ea4b3cd26561)`(FDateTime && NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.
`public inline void `[`ClearExpires`](#structFRHAPI__UpdateInventoryRequest_1a2c377a3ce655cd29ac5bdc1f9f9bbf6a)`()` | Clears the value of Expires_Optional and sets Expires_IsSet to false.
`public inline FORCEINLINE void `[`SetExpiresToNull`](#structFRHAPI__UpdateInventoryRequest_1ae29ce65f6889c2b3e834ef706300518c)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsExpiresNull`](#structFRHAPI__UpdateInventoryRequest_1a11f4ba11c02dfa4bd98377d3e4a6bd0a)`() const` | Checks whether Expires_Optional is set to null.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequest_1a0796a97d15e144801cb25c768e4a23df)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequest_1af488aa9d7709fa886f8d0dc1480fa7ea)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequest_1a5e2973f52ed6604052a56a8103671de1)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequest_1a454c9a2b4b69584659e103212520a064)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__UpdateInventoryRequest_1a6ac0ce501689458a40aacff993661add)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__UpdateInventoryRequest_1a934631ab9665e3b2246e69d442265727)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__UpdateInventoryRequest_1ab9eb0ed8cedd8f0a4c5613a9a7348002)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__UpdateInventoryRequest_1aba72c7dc6113b623a3f4fe196919bbd4)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__UpdateInventoryRequest_1ad439f11cd2027fdd8b1c533d1ffb0cfb)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__UpdateInventoryRequest_1a034e3032fe09bf7a22bd648b5916c0bd)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__UpdateInventoryRequest_1ad76536ce636a0711fb61c51c25c33691)`() const` | Checks whether CustomData_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequest_1a1793e51de693b309fd7d88ee92ad1ff6)`()` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequest_1ac5ce7429cb20fc080adc45f2d44fb28b)`() const` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequest_1a57ce540a62f1cc8c95a56ff202c630b4)`(const int32 & DefaultValue) const` | Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetItemId`](#structFRHAPI__UpdateInventoryRequest_1add42d418a5c63b3293ce3ad209720748)`(int32 & OutValue) const` | Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetItemIdOrNull`](#structFRHAPI__UpdateInventoryRequest_1ad1c2f8e5d989ead88cebcd9e33c29aa3)`()` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetItemIdOrNull`](#structFRHAPI__UpdateInventoryRequest_1acaef8d09ca1f906bd04ed646923209ff)`() const` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__UpdateInventoryRequest_1aa31674a9b4b1646fd6a2c1b2ecce115f)`(const int32 & NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.
`public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__UpdateInventoryRequest_1a218ea06974bebddd2e31d67c4d173c76)`(int32 && NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.
`public inline void `[`ClearItemId`](#structFRHAPI__UpdateInventoryRequest_1aec5ba46c40f111dce16dbbb057251001)`()` | Clears the value of ItemId_Optional and sets ItemId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_ItemId`](#structFRHAPI__UpdateInventoryRequest_1a1c82025c6e8b827b0e7c171c12cb8235)`()` | Returns the default value of ItemId.
`public inline FORCEINLINE void `[`SetItemIdToNull`](#structFRHAPI__UpdateInventoryRequest_1afd33b53bebafc37d27182d28c83bbb3d)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsItemIdNull`](#structFRHAPI__UpdateInventoryRequest_1a8fc14f4184d1040578b8fae0b8a61fdd)`() const` | Checks whether ItemId_Optional is set to null.

### Members

#### `public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__UpdateInventoryRequest_1a572870eb8d72f3f11e19d10a1b715054) <a id="structFRHAPI__UpdateInventoryRequest_1a572870eb8d72f3f11e19d10a1b715054"></a>

#### `public bool `[`Source_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a49b6c64de83ac40dbc5413b8baae81fd) <a id="structFRHAPI__UpdateInventoryRequest_1a49b6c64de83ac40dbc5413b8baae81fd"></a>

true if Source_Optional has been set to a value

#### `public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__UpdateInventoryRequest_1a50bdf580faea52f516462a76bedcfb48) <a id="structFRHAPI__UpdateInventoryRequest_1a50bdf580faea52f516462a76bedcfb48"></a>

#### `public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a9f4d05f5fac79be2b6531db04add170f) <a id="structFRHAPI__UpdateInventoryRequest_1a9f4d05f5fac79be2b6531db04add170f"></a>

true if ClientOrderRefId_Optional has been set to a value

#### `public bool `[`ClientOrderRefId_IsNull`](#structFRHAPI__UpdateInventoryRequest_1a7065ca93798dd9119fafe090fc0c1635) <a id="structFRHAPI__UpdateInventoryRequest_1a7065ca93798dd9119fafe090fc0c1635"></a>

true if ClientOrderRefId_Optional has been explicitly set to null

#### `public ERHAPI_InventoryBucket `[`Bucket_Optional`](#structFRHAPI__UpdateInventoryRequest_1ad7084cc1cf879f9ab7afa14f246f5144) <a id="structFRHAPI__UpdateInventoryRequest_1ad7084cc1cf879f9ab7afa14f246f5144"></a>

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

#### `public bool `[`Expires_IsNull`](#structFRHAPI__UpdateInventoryRequest_1a8bdb443171e1df08c90bd6f87f9fabee) <a id="structFRHAPI__UpdateInventoryRequest_1a8bdb443171e1df08c90bd6f87f9fabee"></a>

true if Expires_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__UpdateInventoryRequest_1aaedbb86b7b311b43abadfdb5c68241cd) <a id="structFRHAPI__UpdateInventoryRequest_1aaedbb86b7b311b43abadfdb5c68241cd"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a25fc95aff0ab9731e31bc2c2048eef68) <a id="structFRHAPI__UpdateInventoryRequest_1a25fc95aff0ab9731e31bc2c2048eef68"></a>

true if CustomData_Optional has been set to a value

#### `public bool `[`CustomData_IsNull`](#structFRHAPI__UpdateInventoryRequest_1a6030499108156b55e608fd7f2c8e5465) <a id="structFRHAPI__UpdateInventoryRequest_1a6030499108156b55e608fd7f2c8e5465"></a>

true if CustomData_Optional has been explicitly set to null

#### `public int32 `[`ItemId_Optional`](#structFRHAPI__UpdateInventoryRequest_1a818c5214deb7bb7f614db54bd3e9e47d) <a id="structFRHAPI__UpdateInventoryRequest_1a818c5214deb7bb7f614db54bd3e9e47d"></a>

#### `public bool `[`ItemId_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a80ed649b2b03c882285c73cce3aa94c6) <a id="structFRHAPI__UpdateInventoryRequest_1a80ed649b2b03c882285c73cce3aa94c6"></a>

true if ItemId_Optional has been set to a value

#### `public bool `[`ItemId_IsNull`](#structFRHAPI__UpdateInventoryRequest_1a4cbd050ac90f8813d291162adcce1ef4) <a id="structFRHAPI__UpdateInventoryRequest_1a4cbd050ac90f8813d291162adcce1ef4"></a>

true if ItemId_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__UpdateInventoryRequest_1a81c2178a7e923e2ebc26343b035e9db0)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__UpdateInventoryRequest_1a81c2178a7e923e2ebc26343b035e9db0"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__UpdateInventoryRequest_1a7d40bda9fb664373b0130e0ebc62b3ad)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__UpdateInventoryRequest_1a7d40bda9fb664373b0130e0ebc62b3ad"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequest_1aa007826e40049d39b05b622c941f5fd4)`()` <a id="structFRHAPI__UpdateInventoryRequest_1aa007826e40049d39b05b622c941f5fd4"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequest_1a38ffe31efec7f8a01bd86eae14b87e91)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a38ffe31efec7f8a01bd86eae14b87e91"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequest_1aa49f3dd8aa3349b1fb5f79e533761bba)`(const ERHAPI_Source & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1aa49f3dd8aa3349b1fb5f79e533761bba"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSource`](#structFRHAPI__UpdateInventoryRequest_1a8b734aa8c9a129df169df88da7c43c99)`(ERHAPI_Source & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a8b734aa8c9a129df169df88da7c43c99"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__UpdateInventoryRequest_1ac121b6b2432678ed591d918753b8aa1a)`()` <a id="structFRHAPI__UpdateInventoryRequest_1ac121b6b2432678ed591d918753b8aa1a"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__UpdateInventoryRequest_1a6122ab131085d49a7d93ada26979cbe2)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a6122ab131085d49a7d93ada26979cbe2"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__UpdateInventoryRequest_1ae9e29f76bc54639e0ee72cf698c4671a)`(const ERHAPI_Source & NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1ae9e29f76bc54639e0ee72cf698c4671a"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__UpdateInventoryRequest_1a7b3391a1e4febee5c1e5915883c0e919)`(ERHAPI_Source && NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1a7b3391a1e4febee5c1e5915883c0e919"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.

#### `public inline void `[`ClearSource`](#structFRHAPI__UpdateInventoryRequest_1ae21fc186dd7da6d10f132d1058daf0b2)`()` <a id="structFRHAPI__UpdateInventoryRequest_1ae21fc186dd7da6d10f132d1058daf0b2"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1a45fe1372b17bb98fbcf28ef177f4eab1)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a45fe1372b17bb98fbcf28ef177f4eab1"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1a4086ebb94e4ab2a2e36d799fbd85fd77)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a4086ebb94e4ab2a2e36d799fbd85fd77"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1a9c029a35d0408633df6d84b903186a7d)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a9c029a35d0408633df6d84b903186a7d"></a>

Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1a6a0c2848ef9119bcb3d915206004a7ab)`(FGuid & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a6a0c2848ef9119bcb3d915206004a7ab"></a>

Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__UpdateInventoryRequest_1ae5d040ffc6467b17d1e1576df616a20f)`()` <a id="structFRHAPI__UpdateInventoryRequest_1ae5d040ffc6467b17d1e1576df616a20f"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__UpdateInventoryRequest_1aaac2c7f4a0f5ba051bacb3f99eac06e8)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1aaac2c7f4a0f5ba051bacb3f99eac06e8"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1aaa87e32673f1e8c595e5f07b244e584b)`(const FGuid & NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1aaa87e32673f1e8c595e5f07b244e584b"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1a611c4979d5d30556b2727804821467c1)`(FGuid && NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1a611c4979d5d30556b2727804821467c1"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.

#### `public inline void `[`ClearClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1a52322b28cb9d71dd236cfb0f5a5d0110)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a52322b28cb9d71dd236cfb0f5a5d0110"></a>

Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetClientOrderRefIdToNull`](#structFRHAPI__UpdateInventoryRequest_1ad5f990cad03d9d486210b203557c46fe)`()` <a id="structFRHAPI__UpdateInventoryRequest_1ad5f990cad03d9d486210b203557c46fe"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsClientOrderRefIdNull`](#structFRHAPI__UpdateInventoryRequest_1a728b99fb6a4a54daa496ec7275058a4b)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a728b99fb6a4a54daa496ec7275058a4b"></a>

Checks whether ClientOrderRefId_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequest_1a66283cd7c180877ecacf7c176a37af1f)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a66283cd7c180877ecacf7c176a37af1f"></a>

Gets the value of Bucket_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequest_1a7e66d784a3ee7230d94626eb72fe98ac)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a7e66d784a3ee7230d94626eb72fe98ac"></a>

Gets the value of Bucket_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequest_1a1a1d340d8b67a98e581335a14c84c58f)`(const ERHAPI_InventoryBucket & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a1a1d340d8b67a98e581335a14c84c58f"></a>

Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetBucket`](#structFRHAPI__UpdateInventoryRequest_1a6f4d9fab5af267dc8a02411138e97cae)`(ERHAPI_InventoryBucket & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a6f4d9fab5af267dc8a02411138e97cae"></a>

Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__UpdateInventoryRequest_1a244f10e8fa7ba4f07d621701e611a023)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a244f10e8fa7ba4f07d621701e611a023"></a>

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__UpdateInventoryRequest_1a2f11f8c6b46f986562923ca29636e23a)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a2f11f8c6b46f986562923ca29636e23a"></a>

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetBucket`](#structFRHAPI__UpdateInventoryRequest_1ae4c1dd826f095356b43fd002890981b2)`(const ERHAPI_InventoryBucket & NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1ae4c1dd826f095356b43fd002890981b2"></a>

Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.

#### `public inline FORCEINLINE void `[`SetBucket`](#structFRHAPI__UpdateInventoryRequest_1a32cd3c800d2dae55edeb41fb1f3b63a9)`(ERHAPI_InventoryBucket && NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1a32cd3c800d2dae55edeb41fb1f3b63a9"></a>

Sets the value of Bucket_Optional and also sets Bucket_IsSet to true using move semantics.

#### `public inline void `[`ClearBucket`](#structFRHAPI__UpdateInventoryRequest_1ae6b64c7a747a2a36ccda81290f93c35f)`()` <a id="structFRHAPI__UpdateInventoryRequest_1ae6b64c7a747a2a36ccda81290f93c35f"></a>

Clears the value of Bucket_Optional and sets Bucket_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequest_1afb8978f847f43ed15db00f0af50b17fc)`()` <a id="structFRHAPI__UpdateInventoryRequest_1afb8978f847f43ed15db00f0af50b17fc"></a>

Gets the value of Count_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequest_1a7ab23dfcd99227708faefc7462a7c1e7)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a7ab23dfcd99227708faefc7462a7c1e7"></a>

Gets the value of Count_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequest_1a88cb4a6c37cd216180a6b083090c2885)`(const int32 & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a88cb4a6c37cd216180a6b083090c2885"></a>

Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCount`](#structFRHAPI__UpdateInventoryRequest_1af0220ae45080bcdd380d440d27063f59)`(int32 & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1af0220ae45080bcdd380d440d27063f59"></a>

Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetCountOrNull`](#structFRHAPI__UpdateInventoryRequest_1aac03e38f92f6073c4c15ba02a85a82b5)`()` <a id="structFRHAPI__UpdateInventoryRequest_1aac03e38f92f6073c4c15ba02a85a82b5"></a>

Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetCountOrNull`](#structFRHAPI__UpdateInventoryRequest_1a00ab2229f32e5b50342e123ec0894914)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a00ab2229f32e5b50342e123ec0894914"></a>

Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__UpdateInventoryRequest_1abb1fdc66e4b2edab46ff161153542130)`(const int32 & NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1abb1fdc66e4b2edab46ff161153542130"></a>

Sets the value of Count_Optional and also sets Count_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__UpdateInventoryRequest_1a2194fdd32b3f1ee9674d01d2817edcf3)`(int32 && NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1a2194fdd32b3f1ee9674d01d2817edcf3"></a>

Sets the value of Count_Optional and also sets Count_IsSet to true using move semantics.

#### `public inline void `[`ClearCount`](#structFRHAPI__UpdateInventoryRequest_1abc478f61cff8135826588a9c4a7bd512)`()` <a id="structFRHAPI__UpdateInventoryRequest_1abc478f61cff8135826588a9c4a7bd512"></a>

Clears the value of Count_Optional and sets Count_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Count`](#structFRHAPI__UpdateInventoryRequest_1ada74dfdaeddda6c2aef9a04a92e06998)`()` <a id="structFRHAPI__UpdateInventoryRequest_1ada74dfdaeddda6c2aef9a04a92e06998"></a>

Returns the default value of Count.

#### `public inline FORCEINLINE FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequest_1a3ed1620bac38abe291f49be3a5c92eb7)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a3ed1620bac38abe291f49be3a5c92eb7"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequest_1a142af74d94a1b21b26b17df1c9b2756b)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a142af74d94a1b21b26b17df1c9b2756b"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequest_1abb6cb4499bcf6e0650bbc1734a8dfc75)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1abb6cb4499bcf6e0650bbc1734a8dfc75"></a>

Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExpires`](#structFRHAPI__UpdateInventoryRequest_1a62719d5771f795c9d804478730ed77ea)`(FDateTime & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a62719d5771f795c9d804478730ed77ea"></a>

Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__UpdateInventoryRequest_1aff1f7c979fd7a108e5ff0f9814a256ef)`()` <a id="structFRHAPI__UpdateInventoryRequest_1aff1f7c979fd7a108e5ff0f9814a256ef"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__UpdateInventoryRequest_1a01e4f435e1e3473e580c02defc0a3e88)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a01e4f435e1e3473e580c02defc0a3e88"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__UpdateInventoryRequest_1a1af5804dc09e3f14ca174f1a4b10fcf7)`(const FDateTime & NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1a1af5804dc09e3f14ca174f1a4b10fcf7"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__UpdateInventoryRequest_1a37041f53150ad3f23356ea4b3cd26561)`(FDateTime && NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1a37041f53150ad3f23356ea4b3cd26561"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.

#### `public inline void `[`ClearExpires`](#structFRHAPI__UpdateInventoryRequest_1a2c377a3ce655cd29ac5bdc1f9f9bbf6a)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a2c377a3ce655cd29ac5bdc1f9f9bbf6a"></a>

Clears the value of Expires_Optional and sets Expires_IsSet to false.

#### `public inline FORCEINLINE void `[`SetExpiresToNull`](#structFRHAPI__UpdateInventoryRequest_1ae29ce65f6889c2b3e834ef706300518c)`()` <a id="structFRHAPI__UpdateInventoryRequest_1ae29ce65f6889c2b3e834ef706300518c"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsExpiresNull`](#structFRHAPI__UpdateInventoryRequest_1a11f4ba11c02dfa4bd98377d3e4a6bd0a)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a11f4ba11c02dfa4bd98377d3e4a6bd0a"></a>

Checks whether Expires_Optional is set to null.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequest_1a0796a97d15e144801cb25c768e4a23df)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a0796a97d15e144801cb25c768e4a23df"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequest_1af488aa9d7709fa886f8d0dc1480fa7ea)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1af488aa9d7709fa886f8d0dc1480fa7ea"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequest_1a5e2973f52ed6604052a56a8103671de1)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a5e2973f52ed6604052a56a8103671de1"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequest_1a454c9a2b4b69584659e103212520a064)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a454c9a2b4b69584659e103212520a064"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__UpdateInventoryRequest_1a6ac0ce501689458a40aacff993661add)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a6ac0ce501689458a40aacff993661add"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__UpdateInventoryRequest_1a934631ab9665e3b2246e69d442265727)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a934631ab9665e3b2246e69d442265727"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__UpdateInventoryRequest_1ab9eb0ed8cedd8f0a4c5613a9a7348002)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1ab9eb0ed8cedd8f0a4c5613a9a7348002"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__UpdateInventoryRequest_1aba72c7dc6113b623a3f4fe196919bbd4)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1aba72c7dc6113b623a3f4fe196919bbd4"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__UpdateInventoryRequest_1ad439f11cd2027fdd8b1c533d1ffb0cfb)`()` <a id="structFRHAPI__UpdateInventoryRequest_1ad439f11cd2027fdd8b1c533d1ffb0cfb"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__UpdateInventoryRequest_1a034e3032fe09bf7a22bd648b5916c0bd)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a034e3032fe09bf7a22bd648b5916c0bd"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__UpdateInventoryRequest_1ad76536ce636a0711fb61c51c25c33691)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1ad76536ce636a0711fb61c51c25c33691"></a>

Checks whether CustomData_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequest_1a1793e51de693b309fd7d88ee92ad1ff6)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a1793e51de693b309fd7d88ee92ad1ff6"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequest_1ac5ce7429cb20fc080adc45f2d44fb28b)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1ac5ce7429cb20fc080adc45f2d44fb28b"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequest_1a57ce540a62f1cc8c95a56ff202c630b4)`(const int32 & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a57ce540a62f1cc8c95a56ff202c630b4"></a>

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetItemId`](#structFRHAPI__UpdateInventoryRequest_1add42d418a5c63b3293ce3ad209720748)`(int32 & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1add42d418a5c63b3293ce3ad209720748"></a>

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetItemIdOrNull`](#structFRHAPI__UpdateInventoryRequest_1ad1c2f8e5d989ead88cebcd9e33c29aa3)`()` <a id="structFRHAPI__UpdateInventoryRequest_1ad1c2f8e5d989ead88cebcd9e33c29aa3"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetItemIdOrNull`](#structFRHAPI__UpdateInventoryRequest_1acaef8d09ca1f906bd04ed646923209ff)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1acaef8d09ca1f906bd04ed646923209ff"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__UpdateInventoryRequest_1aa31674a9b4b1646fd6a2c1b2ecce115f)`(const int32 & NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1aa31674a9b4b1646fd6a2c1b2ecce115f"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__UpdateInventoryRequest_1a218ea06974bebddd2e31d67c4d173c76)`(int32 && NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1a218ea06974bebddd2e31d67c4d173c76"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearItemId`](#structFRHAPI__UpdateInventoryRequest_1aec5ba46c40f111dce16dbbb057251001)`()` <a id="structFRHAPI__UpdateInventoryRequest_1aec5ba46c40f111dce16dbbb057251001"></a>

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_ItemId`](#structFRHAPI__UpdateInventoryRequest_1a1c82025c6e8b827b0e7c171c12cb8235)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a1c82025c6e8b827b0e7c171c12cb8235"></a>

Returns the default value of ItemId.

#### `public inline FORCEINLINE void `[`SetItemIdToNull`](#structFRHAPI__UpdateInventoryRequest_1afd33b53bebafc37d27182d28c83bbb3d)`()` <a id="structFRHAPI__UpdateInventoryRequest_1afd33b53bebafc37d27182d28c83bbb3d"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsItemIdNull`](#structFRHAPI__UpdateInventoryRequest_1a8fc14f4184d1040578b8fae0b8a61fdd)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a8fc14f4184d1040578b8fae0b8a61fdd"></a>

Checks whether ItemId_Optional is set to null.

