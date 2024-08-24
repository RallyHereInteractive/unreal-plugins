# group `RHAPI_UpdateInventoryRequestById` <a id="group__RHAPI__UpdateInventoryRequestById"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_UpdateInventoryRequestById`](#structFRHAPI__UpdateInventoryRequestById) | Request to Update Inventory by an existing Inventory ID. If the Inventory entry does not exist, then the request will fail.

---
title: FRHAPI_UpdateInventoryRequestById
---

```
struct FRHAPI_UpdateInventoryRequestById
  : public FRHAPI_Model
```

Request to Update Inventory by an existing Inventory ID. If the Inventory entry does not exist, then the request will fail.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_InventoryBucket `[`Bucket_Optional`](#structFRHAPI__UpdateInventoryRequestById_1a8ca857e89d25ca0e98daf13f06a6efab) | Inventory Bucket for this Inventory Operation.
`public bool `[`Bucket_IsSet`](#structFRHAPI__UpdateInventoryRequestById_1ac41a3118be44c4165a398617c96162ea) | true if Bucket_Optional has been set to a value
`public int32 `[`Count_Optional`](#structFRHAPI__UpdateInventoryRequestById_1a1954e9b67818fea34a60cc71e5490e5b) | Count for this Inventory Operation.
`public bool `[`Count_IsSet`](#structFRHAPI__UpdateInventoryRequestById_1a753c17f614d56bf432f4d323856fdccc) | true if Count_Optional has been set to a value
`public FDateTime `[`Expires_Optional`](#structFRHAPI__UpdateInventoryRequestById_1a820cf3ed3654429b8872612c4ea91384) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`Expires_IsSet`](#structFRHAPI__UpdateInventoryRequestById_1ace18916ca2ca408374d528fc6103dc4c) | true if Expires_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__UpdateInventoryRequestById_1a838980eda31d6b59b0695e043b32ee67) | Arbitrary data map that can be set to add additional data to Inventory.
`public bool `[`CustomData_IsSet`](#structFRHAPI__UpdateInventoryRequestById_1ab4012dc2c645022e36c9906b69a9f31f) | true if CustomData_Optional has been set to a value
`public int32 `[`ItemId_Optional`](#structFRHAPI__UpdateInventoryRequestById_1af8e1b49c7470b5984d48561d1200ec4b) | Item ID for this Inventory Operation. If the Item ID is not set during an Update Inventory Request, then the Item ID will not be modified on the existing Inventory Record.
`public bool `[`ItemId_IsSet`](#structFRHAPI__UpdateInventoryRequestById_1a712999a198bdf14ac4d070bd1e99e666) | true if ItemId_Optional has been set to a value
`public FGuid `[`InventoryId`](#structFRHAPI__UpdateInventoryRequestById_1a2e4d3a8ca23b5b42fb25a19ccb38ee1a) | Inventory ID for this Inventory Operation.
`public virtual bool `[`FromJson`](#structFRHAPI__UpdateInventoryRequestById_1a83b0e83f3e601542ad8111897c08c3ae)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__UpdateInventoryRequestById_1a76da399e3741938f3b49feb98e4cbac8)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequestById_1a3d1f226f198aa556a34cdbfccbc82703)`()` | Gets the value of Bucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequestById_1a90b237f377d909868474ac8f301c7a43)`() const` | Gets the value of Bucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequestById_1accbe0124275dff1ccf9fd82c75513b3d)`(const ERHAPI_InventoryBucket & DefaultValue) const` | Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetBucket`](#structFRHAPI__UpdateInventoryRequestById_1a9dea35372560f239b64f704a0831f4ec)`(ERHAPI_InventoryBucket & OutValue) const` | Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__UpdateInventoryRequestById_1a7f26bbf0e8e86317f8eb2fc990e356b3)`()` | Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__UpdateInventoryRequestById_1ad141339f0e7cf51d2cbc1791642174da)`() const` | Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetBucket`](#structFRHAPI__UpdateInventoryRequestById_1af45e3ed3fb4b34167f40a23bb0d25209)`(const ERHAPI_InventoryBucket & NewValue)` | Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.
`public inline void `[`SetBucket`](#structFRHAPI__UpdateInventoryRequestById_1a51f9c2bb8ee96d0e7dfe8c6c52e4b1c6)`(ERHAPI_InventoryBucket && NewValue)` | Sets the value of Bucket_Optional and also sets Bucket_IsSet to true using move semantics.
`public inline void `[`ClearBucket`](#structFRHAPI__UpdateInventoryRequestById_1ad14f798244ea05e8654e6e4cde09b9c5)`()` | Clears the value of Bucket_Optional and sets Bucket_IsSet to false.
`public inline bool `[`IsBucketSet`](#structFRHAPI__UpdateInventoryRequestById_1adcc291701648c78c2bbb137f64e225cd)`() const` | Checks whether Bucket_Optional has been set.
`public inline int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequestById_1ad82a9ff10932f26fcd34f691a51a7e87)`()` | Gets the value of Count_Optional, regardless of it having been set.
`public inline const int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequestById_1a6cbd3d5e00dda12488bd94ffff40b322)`() const` | Gets the value of Count_Optional, regardless of it having been set.
`public inline const int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequestById_1adcda0097ff437f3a13d7d52778380a34)`(const int32 & DefaultValue) const` | Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCount`](#structFRHAPI__UpdateInventoryRequestById_1a4f8325eb8c2b059b8a8fbf6fde474e51)`(int32 & OutValue) const` | Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetCountOrNull`](#structFRHAPI__UpdateInventoryRequestById_1acd945c2489f644ab3b39e359c9d2021d)`()` | Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetCountOrNull`](#structFRHAPI__UpdateInventoryRequestById_1ad800400bfaa195d5d767d0808cd45a2b)`() const` | Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCount`](#structFRHAPI__UpdateInventoryRequestById_1aa8f0dfca39530b9e6cad636a967174c5)`(const int32 & NewValue)` | Sets the value of Count_Optional and also sets Count_IsSet to true.
`public inline void `[`SetCount`](#structFRHAPI__UpdateInventoryRequestById_1afb8c30fae56a9afdb8b816ee2e1e60f9)`(int32 && NewValue)` | Sets the value of Count_Optional and also sets Count_IsSet to true using move semantics.
`public inline void `[`ClearCount`](#structFRHAPI__UpdateInventoryRequestById_1a4ba546d925732f3b22e323beca7b9ec0)`()` | Clears the value of Count_Optional and sets Count_IsSet to false.
`public inline bool `[`IsCountSet`](#structFRHAPI__UpdateInventoryRequestById_1aeabbda8bd184f86149b248d25a579c0a)`() const` | Checks whether Count_Optional has been set.
`public inline bool `[`IsCountDefaultValue`](#structFRHAPI__UpdateInventoryRequestById_1a90101fd151d48e7c46e9d9953aa24a1b)`() const` | Returns true if Count_Optional is set and matches the default value.
`public inline void `[`SetCountToDefault`](#structFRHAPI__UpdateInventoryRequestById_1a04e649028a20de8491d255c0f7c0385d)`()` | Sets the value of Count_Optional to its default and also sets Count_IsSet to true.
`public inline FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequestById_1a7e1761fe92b77a8dede5a630572fc95e)`()` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequestById_1a2b5c32595322f04e5e059f20743f1df8)`() const` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequestById_1a8dc5f11bbfb1017ea277e3867497def1)`(const FDateTime & DefaultValue) const` | Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExpires`](#structFRHAPI__UpdateInventoryRequestById_1a4e61374be0f9a4d5bee7f8bb34180c1a)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__UpdateInventoryRequestById_1af2de3fa18fd06aabb4b5ce4b6290322f)`()` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__UpdateInventoryRequestById_1ab9933f2509fff182987f64b6a3ad969b)`() const` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExpires`](#structFRHAPI__UpdateInventoryRequestById_1a019f49d2649934f4675a2988078685b9)`(const FDateTime & NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true.
`public inline void `[`SetExpires`](#structFRHAPI__UpdateInventoryRequestById_1a251c5c5c2a89c1dd06c19d58b3ff2d1f)`(FDateTime && NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.
`public inline void `[`ClearExpires`](#structFRHAPI__UpdateInventoryRequestById_1a100dee7b13d8b702376d702ae8b0b324)`()` | Clears the value of Expires_Optional and sets Expires_IsSet to false.
`public inline bool `[`IsExpiresSet`](#structFRHAPI__UpdateInventoryRequestById_1a78ff0969ba26d815839e7a03b20e7e66)`() const` | Checks whether Expires_Optional has been set.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequestById_1a65bbb901dc858c64401a790f9810f632)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequestById_1a67e1e212d9e0c15ee2ad2d8a237e6219)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequestById_1adc9a7530c55b3c5b337994d9671092f9)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequestById_1aa86e4244165e0073b66dbda18617e98d)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__UpdateInventoryRequestById_1aa99744cb35d5f53f1a51ad73157bd4a0)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__UpdateInventoryRequestById_1ad0c70e926eaed1a7e1663efa7c7bf1cd)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__UpdateInventoryRequestById_1a908455d7727e30a4c11435fd4aab49b9)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__UpdateInventoryRequestById_1a56a2d88d02d36fa9ae5afbae1b985337)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__UpdateInventoryRequestById_1a71e04e0947013cc2eca04cfd9c3f451f)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__UpdateInventoryRequestById_1ab67d68eed0a40d12076834f70d04235a)`() const` | Checks whether CustomData_Optional has been set.
`public inline int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequestById_1ad15222f98ee6b86f870ddfabbcfb5d99)`()` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequestById_1a603fe7259da23822134fac2dcae2f94a)`() const` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequestById_1aa19f045bda4ac8b8680a099ab6410cf1)`(const int32 & DefaultValue) const` | Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetItemId`](#structFRHAPI__UpdateInventoryRequestById_1a6f8a2bf06a0dcf82469b313ef3c0b8e3)`(int32 & OutValue) const` | Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__UpdateInventoryRequestById_1a06583e83d7b50ce6ab2327e2c3e3deb8)`()` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__UpdateInventoryRequestById_1a6bbfe8bb36b274517815cfb18f38a560)`() const` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetItemId`](#structFRHAPI__UpdateInventoryRequestById_1aaaccbc0c0bab0acd8181449052e27745)`(const int32 & NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.
`public inline void `[`SetItemId`](#structFRHAPI__UpdateInventoryRequestById_1a0f8879d4e59e039ecf35926923f84d10)`(int32 && NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.
`public inline void `[`ClearItemId`](#structFRHAPI__UpdateInventoryRequestById_1aa6e412766bdf2095a1d98d458806d8cf)`()` | Clears the value of ItemId_Optional and sets ItemId_IsSet to false.
`public inline bool `[`IsItemIdSet`](#structFRHAPI__UpdateInventoryRequestById_1a133431fee7a92d207ede7484182c1a33)`() const` | Checks whether ItemId_Optional has been set.
`public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__UpdateInventoryRequestById_1a56a421d6eafe28d3a53c8650e0d28623)`() const` | Returns true if ItemId_Optional is set and matches the default value.
`public inline void `[`SetItemIdToDefault`](#structFRHAPI__UpdateInventoryRequestById_1abec149f819d14ecba1cb51c3390d7eab)`()` | Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.
`public inline FGuid & `[`GetInventoryId`](#structFRHAPI__UpdateInventoryRequestById_1a97a528f8ec22a5abd5a7e5aa4f762a5d)`()` | Gets the value of InventoryId.
`public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__UpdateInventoryRequestById_1a8188f1c447a71c52e68def190a728bb8)`() const` | Gets the value of InventoryId.
`public inline void `[`SetInventoryId`](#structFRHAPI__UpdateInventoryRequestById_1a7399dc71b17ebbb591560782cc99ee75)`(const FGuid & NewValue)` | Sets the value of InventoryId.
`public inline void `[`SetInventoryId`](#structFRHAPI__UpdateInventoryRequestById_1a6645c3a16c4add10e1e9d9efc8193d10)`(FGuid && NewValue)` | Sets the value of InventoryId using move semantics.

### Members

#### `public ERHAPI_InventoryBucket `[`Bucket_Optional`](#structFRHAPI__UpdateInventoryRequestById_1a8ca857e89d25ca0e98daf13f06a6efab) <a id="structFRHAPI__UpdateInventoryRequestById_1a8ca857e89d25ca0e98daf13f06a6efab"></a>

Inventory Bucket for this Inventory Operation.

#### `public bool `[`Bucket_IsSet`](#structFRHAPI__UpdateInventoryRequestById_1ac41a3118be44c4165a398617c96162ea) <a id="structFRHAPI__UpdateInventoryRequestById_1ac41a3118be44c4165a398617c96162ea"></a>

true if Bucket_Optional has been set to a value

#### `public int32 `[`Count_Optional`](#structFRHAPI__UpdateInventoryRequestById_1a1954e9b67818fea34a60cc71e5490e5b) <a id="structFRHAPI__UpdateInventoryRequestById_1a1954e9b67818fea34a60cc71e5490e5b"></a>

Count for this Inventory Operation.

#### `public bool `[`Count_IsSet`](#structFRHAPI__UpdateInventoryRequestById_1a753c17f614d56bf432f4d323856fdccc) <a id="structFRHAPI__UpdateInventoryRequestById_1a753c17f614d56bf432f4d323856fdccc"></a>

true if Count_Optional has been set to a value

#### `public FDateTime `[`Expires_Optional`](#structFRHAPI__UpdateInventoryRequestById_1a820cf3ed3654429b8872612c4ea91384) <a id="structFRHAPI__UpdateInventoryRequestById_1a820cf3ed3654429b8872612c4ea91384"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`Expires_IsSet`](#structFRHAPI__UpdateInventoryRequestById_1ace18916ca2ca408374d528fc6103dc4c) <a id="structFRHAPI__UpdateInventoryRequestById_1ace18916ca2ca408374d528fc6103dc4c"></a>

true if Expires_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__UpdateInventoryRequestById_1a838980eda31d6b59b0695e043b32ee67) <a id="structFRHAPI__UpdateInventoryRequestById_1a838980eda31d6b59b0695e043b32ee67"></a>

Arbitrary data map that can be set to add additional data to Inventory.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__UpdateInventoryRequestById_1ab4012dc2c645022e36c9906b69a9f31f) <a id="structFRHAPI__UpdateInventoryRequestById_1ab4012dc2c645022e36c9906b69a9f31f"></a>

true if CustomData_Optional has been set to a value

#### `public int32 `[`ItemId_Optional`](#structFRHAPI__UpdateInventoryRequestById_1af8e1b49c7470b5984d48561d1200ec4b) <a id="structFRHAPI__UpdateInventoryRequestById_1af8e1b49c7470b5984d48561d1200ec4b"></a>

Item ID for this Inventory Operation. If the Item ID is not set during an Update Inventory Request, then the Item ID will not be modified on the existing Inventory Record.

#### `public bool `[`ItemId_IsSet`](#structFRHAPI__UpdateInventoryRequestById_1a712999a198bdf14ac4d070bd1e99e666) <a id="structFRHAPI__UpdateInventoryRequestById_1a712999a198bdf14ac4d070bd1e99e666"></a>

true if ItemId_Optional has been set to a value

#### `public FGuid `[`InventoryId`](#structFRHAPI__UpdateInventoryRequestById_1a2e4d3a8ca23b5b42fb25a19ccb38ee1a) <a id="structFRHAPI__UpdateInventoryRequestById_1a2e4d3a8ca23b5b42fb25a19ccb38ee1a"></a>

Inventory ID for this Inventory Operation.

#### `public virtual bool `[`FromJson`](#structFRHAPI__UpdateInventoryRequestById_1a83b0e83f3e601542ad8111897c08c3ae)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__UpdateInventoryRequestById_1a83b0e83f3e601542ad8111897c08c3ae"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__UpdateInventoryRequestById_1a76da399e3741938f3b49feb98e4cbac8)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__UpdateInventoryRequestById_1a76da399e3741938f3b49feb98e4cbac8"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequestById_1a3d1f226f198aa556a34cdbfccbc82703)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1a3d1f226f198aa556a34cdbfccbc82703"></a>

Gets the value of Bucket_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequestById_1a90b237f377d909868474ac8f301c7a43)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1a90b237f377d909868474ac8f301c7a43"></a>

Gets the value of Bucket_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequestById_1accbe0124275dff1ccf9fd82c75513b3d)`(const ERHAPI_InventoryBucket & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequestById_1accbe0124275dff1ccf9fd82c75513b3d"></a>

Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetBucket`](#structFRHAPI__UpdateInventoryRequestById_1a9dea35372560f239b64f704a0831f4ec)`(ERHAPI_InventoryBucket & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequestById_1a9dea35372560f239b64f704a0831f4ec"></a>

Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__UpdateInventoryRequestById_1a7f26bbf0e8e86317f8eb2fc990e356b3)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1a7f26bbf0e8e86317f8eb2fc990e356b3"></a>

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__UpdateInventoryRequestById_1ad141339f0e7cf51d2cbc1791642174da)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1ad141339f0e7cf51d2cbc1791642174da"></a>

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetBucket`](#structFRHAPI__UpdateInventoryRequestById_1af45e3ed3fb4b34167f40a23bb0d25209)`(const ERHAPI_InventoryBucket & NewValue)` <a id="structFRHAPI__UpdateInventoryRequestById_1af45e3ed3fb4b34167f40a23bb0d25209"></a>

Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.

#### `public inline void `[`SetBucket`](#structFRHAPI__UpdateInventoryRequestById_1a51f9c2bb8ee96d0e7dfe8c6c52e4b1c6)`(ERHAPI_InventoryBucket && NewValue)` <a id="structFRHAPI__UpdateInventoryRequestById_1a51f9c2bb8ee96d0e7dfe8c6c52e4b1c6"></a>

Sets the value of Bucket_Optional and also sets Bucket_IsSet to true using move semantics.

#### `public inline void `[`ClearBucket`](#structFRHAPI__UpdateInventoryRequestById_1ad14f798244ea05e8654e6e4cde09b9c5)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1ad14f798244ea05e8654e6e4cde09b9c5"></a>

Clears the value of Bucket_Optional and sets Bucket_IsSet to false.

#### `public inline bool `[`IsBucketSet`](#structFRHAPI__UpdateInventoryRequestById_1adcc291701648c78c2bbb137f64e225cd)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1adcc291701648c78c2bbb137f64e225cd"></a>

Checks whether Bucket_Optional has been set.

#### `public inline int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequestById_1ad82a9ff10932f26fcd34f691a51a7e87)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1ad82a9ff10932f26fcd34f691a51a7e87"></a>

Gets the value of Count_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequestById_1a6cbd3d5e00dda12488bd94ffff40b322)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1a6cbd3d5e00dda12488bd94ffff40b322"></a>

Gets the value of Count_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequestById_1adcda0097ff437f3a13d7d52778380a34)`(const int32 & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequestById_1adcda0097ff437f3a13d7d52778380a34"></a>

Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCount`](#structFRHAPI__UpdateInventoryRequestById_1a4f8325eb8c2b059b8a8fbf6fde474e51)`(int32 & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequestById_1a4f8325eb8c2b059b8a8fbf6fde474e51"></a>

Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetCountOrNull`](#structFRHAPI__UpdateInventoryRequestById_1acd945c2489f644ab3b39e359c9d2021d)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1acd945c2489f644ab3b39e359c9d2021d"></a>

Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetCountOrNull`](#structFRHAPI__UpdateInventoryRequestById_1ad800400bfaa195d5d767d0808cd45a2b)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1ad800400bfaa195d5d767d0808cd45a2b"></a>

Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCount`](#structFRHAPI__UpdateInventoryRequestById_1aa8f0dfca39530b9e6cad636a967174c5)`(const int32 & NewValue)` <a id="structFRHAPI__UpdateInventoryRequestById_1aa8f0dfca39530b9e6cad636a967174c5"></a>

Sets the value of Count_Optional and also sets Count_IsSet to true.

#### `public inline void `[`SetCount`](#structFRHAPI__UpdateInventoryRequestById_1afb8c30fae56a9afdb8b816ee2e1e60f9)`(int32 && NewValue)` <a id="structFRHAPI__UpdateInventoryRequestById_1afb8c30fae56a9afdb8b816ee2e1e60f9"></a>

Sets the value of Count_Optional and also sets Count_IsSet to true using move semantics.

#### `public inline void `[`ClearCount`](#structFRHAPI__UpdateInventoryRequestById_1a4ba546d925732f3b22e323beca7b9ec0)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1a4ba546d925732f3b22e323beca7b9ec0"></a>

Clears the value of Count_Optional and sets Count_IsSet to false.

#### `public inline bool `[`IsCountSet`](#structFRHAPI__UpdateInventoryRequestById_1aeabbda8bd184f86149b248d25a579c0a)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1aeabbda8bd184f86149b248d25a579c0a"></a>

Checks whether Count_Optional has been set.

#### `public inline bool `[`IsCountDefaultValue`](#structFRHAPI__UpdateInventoryRequestById_1a90101fd151d48e7c46e9d9953aa24a1b)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1a90101fd151d48e7c46e9d9953aa24a1b"></a>

Returns true if Count_Optional is set and matches the default value.

#### `public inline void `[`SetCountToDefault`](#structFRHAPI__UpdateInventoryRequestById_1a04e649028a20de8491d255c0f7c0385d)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1a04e649028a20de8491d255c0f7c0385d"></a>

Sets the value of Count_Optional to its default and also sets Count_IsSet to true.

#### `public inline FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequestById_1a7e1761fe92b77a8dede5a630572fc95e)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1a7e1761fe92b77a8dede5a630572fc95e"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequestById_1a2b5c32595322f04e5e059f20743f1df8)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1a2b5c32595322f04e5e059f20743f1df8"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequestById_1a8dc5f11bbfb1017ea277e3867497def1)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequestById_1a8dc5f11bbfb1017ea277e3867497def1"></a>

Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExpires`](#structFRHAPI__UpdateInventoryRequestById_1a4e61374be0f9a4d5bee7f8bb34180c1a)`(FDateTime & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequestById_1a4e61374be0f9a4d5bee7f8bb34180c1a"></a>

Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__UpdateInventoryRequestById_1af2de3fa18fd06aabb4b5ce4b6290322f)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1af2de3fa18fd06aabb4b5ce4b6290322f"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__UpdateInventoryRequestById_1ab9933f2509fff182987f64b6a3ad969b)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1ab9933f2509fff182987f64b6a3ad969b"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExpires`](#structFRHAPI__UpdateInventoryRequestById_1a019f49d2649934f4675a2988078685b9)`(const FDateTime & NewValue)` <a id="structFRHAPI__UpdateInventoryRequestById_1a019f49d2649934f4675a2988078685b9"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true.

#### `public inline void `[`SetExpires`](#structFRHAPI__UpdateInventoryRequestById_1a251c5c5c2a89c1dd06c19d58b3ff2d1f)`(FDateTime && NewValue)` <a id="structFRHAPI__UpdateInventoryRequestById_1a251c5c5c2a89c1dd06c19d58b3ff2d1f"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.

#### `public inline void `[`ClearExpires`](#structFRHAPI__UpdateInventoryRequestById_1a100dee7b13d8b702376d702ae8b0b324)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1a100dee7b13d8b702376d702ae8b0b324"></a>

Clears the value of Expires_Optional and sets Expires_IsSet to false.

#### `public inline bool `[`IsExpiresSet`](#structFRHAPI__UpdateInventoryRequestById_1a78ff0969ba26d815839e7a03b20e7e66)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1a78ff0969ba26d815839e7a03b20e7e66"></a>

Checks whether Expires_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequestById_1a65bbb901dc858c64401a790f9810f632)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1a65bbb901dc858c64401a790f9810f632"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequestById_1a67e1e212d9e0c15ee2ad2d8a237e6219)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1a67e1e212d9e0c15ee2ad2d8a237e6219"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequestById_1adc9a7530c55b3c5b337994d9671092f9)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequestById_1adc9a7530c55b3c5b337994d9671092f9"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequestById_1aa86e4244165e0073b66dbda18617e98d)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequestById_1aa86e4244165e0073b66dbda18617e98d"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__UpdateInventoryRequestById_1aa99744cb35d5f53f1a51ad73157bd4a0)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1aa99744cb35d5f53f1a51ad73157bd4a0"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__UpdateInventoryRequestById_1ad0c70e926eaed1a7e1663efa7c7bf1cd)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1ad0c70e926eaed1a7e1663efa7c7bf1cd"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__UpdateInventoryRequestById_1a908455d7727e30a4c11435fd4aab49b9)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__UpdateInventoryRequestById_1a908455d7727e30a4c11435fd4aab49b9"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__UpdateInventoryRequestById_1a56a2d88d02d36fa9ae5afbae1b985337)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__UpdateInventoryRequestById_1a56a2d88d02d36fa9ae5afbae1b985337"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__UpdateInventoryRequestById_1a71e04e0947013cc2eca04cfd9c3f451f)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1a71e04e0947013cc2eca04cfd9c3f451f"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__UpdateInventoryRequestById_1ab67d68eed0a40d12076834f70d04235a)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1ab67d68eed0a40d12076834f70d04235a"></a>

Checks whether CustomData_Optional has been set.

#### `public inline int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequestById_1ad15222f98ee6b86f870ddfabbcfb5d99)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1ad15222f98ee6b86f870ddfabbcfb5d99"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequestById_1a603fe7259da23822134fac2dcae2f94a)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1a603fe7259da23822134fac2dcae2f94a"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequestById_1aa19f045bda4ac8b8680a099ab6410cf1)`(const int32 & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequestById_1aa19f045bda4ac8b8680a099ab6410cf1"></a>

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetItemId`](#structFRHAPI__UpdateInventoryRequestById_1a6f8a2bf06a0dcf82469b313ef3c0b8e3)`(int32 & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequestById_1a6f8a2bf06a0dcf82469b313ef3c0b8e3"></a>

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__UpdateInventoryRequestById_1a06583e83d7b50ce6ab2327e2c3e3deb8)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1a06583e83d7b50ce6ab2327e2c3e3deb8"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__UpdateInventoryRequestById_1a6bbfe8bb36b274517815cfb18f38a560)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1a6bbfe8bb36b274517815cfb18f38a560"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetItemId`](#structFRHAPI__UpdateInventoryRequestById_1aaaccbc0c0bab0acd8181449052e27745)`(const int32 & NewValue)` <a id="structFRHAPI__UpdateInventoryRequestById_1aaaccbc0c0bab0acd8181449052e27745"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.

#### `public inline void `[`SetItemId`](#structFRHAPI__UpdateInventoryRequestById_1a0f8879d4e59e039ecf35926923f84d10)`(int32 && NewValue)` <a id="structFRHAPI__UpdateInventoryRequestById_1a0f8879d4e59e039ecf35926923f84d10"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearItemId`](#structFRHAPI__UpdateInventoryRequestById_1aa6e412766bdf2095a1d98d458806d8cf)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1aa6e412766bdf2095a1d98d458806d8cf"></a>

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.

#### `public inline bool `[`IsItemIdSet`](#structFRHAPI__UpdateInventoryRequestById_1a133431fee7a92d207ede7484182c1a33)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1a133431fee7a92d207ede7484182c1a33"></a>

Checks whether ItemId_Optional has been set.

#### `public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__UpdateInventoryRequestById_1a56a421d6eafe28d3a53c8650e0d28623)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1a56a421d6eafe28d3a53c8650e0d28623"></a>

Returns true if ItemId_Optional is set and matches the default value.

#### `public inline void `[`SetItemIdToDefault`](#structFRHAPI__UpdateInventoryRequestById_1abec149f819d14ecba1cb51c3390d7eab)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1abec149f819d14ecba1cb51c3390d7eab"></a>

Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.

#### `public inline FGuid & `[`GetInventoryId`](#structFRHAPI__UpdateInventoryRequestById_1a97a528f8ec22a5abd5a7e5aa4f762a5d)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1a97a528f8ec22a5abd5a7e5aa4f762a5d"></a>

Gets the value of InventoryId.

#### `public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__UpdateInventoryRequestById_1a8188f1c447a71c52e68def190a728bb8)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1a8188f1c447a71c52e68def190a728bb8"></a>

Gets the value of InventoryId.

#### `public inline void `[`SetInventoryId`](#structFRHAPI__UpdateInventoryRequestById_1a7399dc71b17ebbb591560782cc99ee75)`(const FGuid & NewValue)` <a id="structFRHAPI__UpdateInventoryRequestById_1a7399dc71b17ebbb591560782cc99ee75"></a>

Sets the value of InventoryId.

#### `public inline void `[`SetInventoryId`](#structFRHAPI__UpdateInventoryRequestById_1a6645c3a16c4add10e1e9d9efc8193d10)`(FGuid && NewValue)` <a id="structFRHAPI__UpdateInventoryRequestById_1a6645c3a16c4add10e1e9d9efc8193d10"></a>

Sets the value of InventoryId using move semantics.

