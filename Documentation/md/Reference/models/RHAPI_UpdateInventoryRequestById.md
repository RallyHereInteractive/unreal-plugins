---
title: RHAPI_UpdateInventoryRequestById
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_UpdateInventoryRequestById`](#structFRHAPI__UpdateInventoryRequestById) | Request to Update Inventory by an existing Inventory ID. If the Inventory entry does not exist, then the request will fail.

## struct `FRHAPI_UpdateInventoryRequestById` <a id="structFRHAPI__UpdateInventoryRequestById"></a>

```
struct FRHAPI_UpdateInventoryRequestById
  : public FRHAPI_Model
```

Request to Update Inventory by an existing Inventory ID. If the Inventory entry does not exist, then the request will fail.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_InventoryBucket `[`Bucket_Optional`](#structFRHAPI__UpdateInventoryRequestById_1a8ca857e89d25ca0e98daf13f06a6efab) | 
`public bool `[`Bucket_IsSet`](#structFRHAPI__UpdateInventoryRequestById_1ac41a3118be44c4165a398617c96162ea) | true if Bucket_Optional has been set to a value
`public int32 `[`Count_Optional`](#structFRHAPI__UpdateInventoryRequestById_1a1954e9b67818fea34a60cc71e5490e5b) | Count for this Inventory Operation.
`public bool `[`Count_IsSet`](#structFRHAPI__UpdateInventoryRequestById_1a753c17f614d56bf432f4d323856fdccc) | true if Count_Optional has been set to a value
`public FDateTime `[`Expires_Optional`](#structFRHAPI__UpdateInventoryRequestById_1a820cf3ed3654429b8872612c4ea91384) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`Expires_IsSet`](#structFRHAPI__UpdateInventoryRequestById_1ace18916ca2ca408374d528fc6103dc4c) | true if Expires_Optional has been set to a value
`public bool `[`Expires_IsNull`](#structFRHAPI__UpdateInventoryRequestById_1a7169fb4ab48a678f36ca2e223798fbcb) | true if Expires_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__UpdateInventoryRequestById_1a838980eda31d6b59b0695e043b32ee67) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__UpdateInventoryRequestById_1ab4012dc2c645022e36c9906b69a9f31f) | true if CustomData_Optional has been set to a value
`public bool `[`CustomData_IsNull`](#structFRHAPI__UpdateInventoryRequestById_1a674d9b6a53712faad3e4423e2bd967b8) | true if CustomData_Optional has been explicitly set to null
`public int32 `[`ItemId_Optional`](#structFRHAPI__UpdateInventoryRequestById_1af8e1b49c7470b5984d48561d1200ec4b) | 
`public bool `[`ItemId_IsSet`](#structFRHAPI__UpdateInventoryRequestById_1a712999a198bdf14ac4d070bd1e99e666) | true if ItemId_Optional has been set to a value
`public bool `[`ItemId_IsNull`](#structFRHAPI__UpdateInventoryRequestById_1aa7b82c324643f01878d1542ca2ba18e9) | true if ItemId_Optional has been explicitly set to null
`public FGuid `[`InventoryId`](#structFRHAPI__UpdateInventoryRequestById_1a2e4d3a8ca23b5b42fb25a19ccb38ee1a) | Inventory ID for this Inventory Operation.
`public virtual bool `[`FromJson`](#structFRHAPI__UpdateInventoryRequestById_1a83b0e83f3e601542ad8111897c08c3ae)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__UpdateInventoryRequestById_1a1820a3b246d128429937f0af5095d97b)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequestById_1a25af0d2cf786ee392322643a0e61ef97)`()` | Gets the value of Bucket_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequestById_1a30dfd8af4822bfb5118fa67f696743be)`() const` | Gets the value of Bucket_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequestById_1a1f384ee7fa4a53ce3ef5e75793e36e79)`(const ERHAPI_InventoryBucket & DefaultValue) const` | Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetBucket`](#structFRHAPI__UpdateInventoryRequestById_1a862585f772c3743fbb6584cf06c2e4aa)`(ERHAPI_InventoryBucket & OutValue) const` | Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__UpdateInventoryRequestById_1a59d81e46e1a00bd583d2bde70c8aeb43)`()` | Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__UpdateInventoryRequestById_1a57554d46ee0037b058d007d581edeb56)`() const` | Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetBucket`](#structFRHAPI__UpdateInventoryRequestById_1a5450b8c565840680e9dd21f6a11937cf)`(const ERHAPI_InventoryBucket & NewValue)` | Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.
`public inline FORCEINLINE void `[`SetBucket`](#structFRHAPI__UpdateInventoryRequestById_1a9b996de6ce426a950dee56855a591205)`(ERHAPI_InventoryBucket && NewValue)` | Sets the value of Bucket_Optional and also sets Bucket_IsSet to true using move semantics.
`public inline void `[`ClearBucket`](#structFRHAPI__UpdateInventoryRequestById_1ad14f798244ea05e8654e6e4cde09b9c5)`()` | Clears the value of Bucket_Optional and sets Bucket_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequestById_1ad87616395bfef942aa82abeecd1d8f00)`()` | Gets the value of Count_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequestById_1a68e668ece137a7db3780c3f7df0c65dd)`() const` | Gets the value of Count_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequestById_1abb4bad8d8ba32893674c4f1d3784a3df)`(const int32 & DefaultValue) const` | Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCount`](#structFRHAPI__UpdateInventoryRequestById_1a769ece188ef5511980967c4a13b601b6)`(int32 & OutValue) const` | Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetCountOrNull`](#structFRHAPI__UpdateInventoryRequestById_1a2dfdbfc45e4006c99f6e86d49335a04f)`()` | Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetCountOrNull`](#structFRHAPI__UpdateInventoryRequestById_1a794161a74b9284a74f70f27d59a79ec0)`() const` | Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__UpdateInventoryRequestById_1a938f558872c0f84456f6eb0998e5f819)`(const int32 & NewValue)` | Sets the value of Count_Optional and also sets Count_IsSet to true.
`public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__UpdateInventoryRequestById_1a977b1e0506048e3c2abd48d958db89a5)`(int32 && NewValue)` | Sets the value of Count_Optional and also sets Count_IsSet to true using move semantics.
`public inline void `[`ClearCount`](#structFRHAPI__UpdateInventoryRequestById_1a4ba546d925732f3b22e323beca7b9ec0)`()` | Clears the value of Count_Optional and sets Count_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Count`](#structFRHAPI__UpdateInventoryRequestById_1aee51f6a935aa0b226abf9bbcbb105755)`()` | Returns the default value of Count.
`public inline FORCEINLINE FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequestById_1ab534c417ba43ce85ebd62eb3259c7526)`()` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequestById_1ae6e0c81ed7487adc2a23f5601205beca)`() const` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequestById_1a4d0dd6320729c040d7e25cb69801759c)`(const FDateTime & DefaultValue) const` | Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExpires`](#structFRHAPI__UpdateInventoryRequestById_1a97b6abf995a19bf3aec59bea2180bea8)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__UpdateInventoryRequestById_1ad0bb6bf7984d294fa5be260eb1ddc828)`()` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__UpdateInventoryRequestById_1a5c611a5e7d28b45039bc0e58d6b7ecd1)`() const` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__UpdateInventoryRequestById_1adf0dbf7ddec0b5cb074c756434f39b70)`(const FDateTime & NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true.
`public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__UpdateInventoryRequestById_1aa3221609d24808bf3702ee212b01cd9b)`(FDateTime && NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.
`public inline void `[`ClearExpires`](#structFRHAPI__UpdateInventoryRequestById_1a100dee7b13d8b702376d702ae8b0b324)`()` | Clears the value of Expires_Optional and sets Expires_IsSet to false.
`public inline FORCEINLINE void `[`SetExpiresToNull`](#structFRHAPI__UpdateInventoryRequestById_1add8f10d2dd9ceed916bdf8734a242be6)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsExpiresNull`](#structFRHAPI__UpdateInventoryRequestById_1a5e73c10ca1990b6b651b9080b7ef2b14)`() const` | Checks whether Expires_Optional is set to null.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequestById_1a8824f11c6e69f41ba87faddded9732e0)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequestById_1a28a5c88322d7541358386971a445859d)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequestById_1aba9b5e47893c0985ec3279f24e5e0d46)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequestById_1a80ead03b3ebc70fb837eacd4c7666e83)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__UpdateInventoryRequestById_1abfb46df9137df583460034af77cc528a)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__UpdateInventoryRequestById_1a20ee3068fd27775b48729de6c7824637)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__UpdateInventoryRequestById_1a0ded0ae1a44f45a95c4fc3b5100c32bd)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__UpdateInventoryRequestById_1abf6a1961dc9c5737e876766ecdda4926)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__UpdateInventoryRequestById_1a71e04e0947013cc2eca04cfd9c3f451f)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__UpdateInventoryRequestById_1adc65a599bea17d78b8656f2a2f68a8d8)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__UpdateInventoryRequestById_1a100bff2cf04b5d78f3347afabc20e467)`() const` | Checks whether CustomData_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequestById_1a713de5cf392f4fdc25b6322e7b89ae31)`()` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequestById_1a7cf61d5703ecc2b2fb67bed9c2167100)`() const` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequestById_1ab756758b9a4e71b2b016294a71693df9)`(const int32 & DefaultValue) const` | Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetItemId`](#structFRHAPI__UpdateInventoryRequestById_1aefb0bb237456c65b35959fb28178c197)`(int32 & OutValue) const` | Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetItemIdOrNull`](#structFRHAPI__UpdateInventoryRequestById_1a2ce0ff96175bfdb3326339022c49810d)`()` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetItemIdOrNull`](#structFRHAPI__UpdateInventoryRequestById_1af61d46a550b20167416c2e92e4029195)`() const` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__UpdateInventoryRequestById_1afc8c81b193702693e3dbbd0c3f6d57f9)`(const int32 & NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.
`public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__UpdateInventoryRequestById_1a2a9b2487b3281ed9ffffe4d3bd3e1e91)`(int32 && NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.
`public inline void `[`ClearItemId`](#structFRHAPI__UpdateInventoryRequestById_1aa6e412766bdf2095a1d98d458806d8cf)`()` | Clears the value of ItemId_Optional and sets ItemId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_ItemId`](#structFRHAPI__UpdateInventoryRequestById_1a1079490a176cb778e06686814b2e553d)`()` | Returns the default value of ItemId.
`public inline FORCEINLINE void `[`SetItemIdToNull`](#structFRHAPI__UpdateInventoryRequestById_1a4a0a2cbc1158ad73f1f11ce431634485)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsItemIdNull`](#structFRHAPI__UpdateInventoryRequestById_1abba3d27481f2b7dc0e300aa65a629f9c)`() const` | Checks whether ItemId_Optional is set to null.
`public inline FORCEINLINE FGuid & `[`GetInventoryId`](#structFRHAPI__UpdateInventoryRequestById_1ad3cbf7be5c37a5d5bbb3d8d7abf382e5)`()` | Gets the value of InventoryId.
`public inline FORCEINLINE const FGuid & `[`GetInventoryId`](#structFRHAPI__UpdateInventoryRequestById_1aa457e08f3dc2bfa9113b76fc228623b0)`() const` | Gets the value of InventoryId.
`public inline FORCEINLINE void `[`SetInventoryId`](#structFRHAPI__UpdateInventoryRequestById_1af66a0391058c850e65199c23b7cc4085)`(const FGuid & NewValue)` | Sets the value of InventoryId.
`public inline FORCEINLINE void `[`SetInventoryId`](#structFRHAPI__UpdateInventoryRequestById_1a6012de7ebe0cd48e85a512285f93e9e6)`(FGuid && NewValue)` | Sets the value of InventoryId using move semantics.

### Members

#### `public ERHAPI_InventoryBucket `[`Bucket_Optional`](#structFRHAPI__UpdateInventoryRequestById_1a8ca857e89d25ca0e98daf13f06a6efab) <a id="structFRHAPI__UpdateInventoryRequestById_1a8ca857e89d25ca0e98daf13f06a6efab"></a>

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

#### `public bool `[`Expires_IsNull`](#structFRHAPI__UpdateInventoryRequestById_1a7169fb4ab48a678f36ca2e223798fbcb) <a id="structFRHAPI__UpdateInventoryRequestById_1a7169fb4ab48a678f36ca2e223798fbcb"></a>

true if Expires_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__UpdateInventoryRequestById_1a838980eda31d6b59b0695e043b32ee67) <a id="structFRHAPI__UpdateInventoryRequestById_1a838980eda31d6b59b0695e043b32ee67"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__UpdateInventoryRequestById_1ab4012dc2c645022e36c9906b69a9f31f) <a id="structFRHAPI__UpdateInventoryRequestById_1ab4012dc2c645022e36c9906b69a9f31f"></a>

true if CustomData_Optional has been set to a value

#### `public bool `[`CustomData_IsNull`](#structFRHAPI__UpdateInventoryRequestById_1a674d9b6a53712faad3e4423e2bd967b8) <a id="structFRHAPI__UpdateInventoryRequestById_1a674d9b6a53712faad3e4423e2bd967b8"></a>

true if CustomData_Optional has been explicitly set to null

#### `public int32 `[`ItemId_Optional`](#structFRHAPI__UpdateInventoryRequestById_1af8e1b49c7470b5984d48561d1200ec4b) <a id="structFRHAPI__UpdateInventoryRequestById_1af8e1b49c7470b5984d48561d1200ec4b"></a>

#### `public bool `[`ItemId_IsSet`](#structFRHAPI__UpdateInventoryRequestById_1a712999a198bdf14ac4d070bd1e99e666) <a id="structFRHAPI__UpdateInventoryRequestById_1a712999a198bdf14ac4d070bd1e99e666"></a>

true if ItemId_Optional has been set to a value

#### `public bool `[`ItemId_IsNull`](#structFRHAPI__UpdateInventoryRequestById_1aa7b82c324643f01878d1542ca2ba18e9) <a id="structFRHAPI__UpdateInventoryRequestById_1aa7b82c324643f01878d1542ca2ba18e9"></a>

true if ItemId_Optional has been explicitly set to null

#### `public FGuid `[`InventoryId`](#structFRHAPI__UpdateInventoryRequestById_1a2e4d3a8ca23b5b42fb25a19ccb38ee1a) <a id="structFRHAPI__UpdateInventoryRequestById_1a2e4d3a8ca23b5b42fb25a19ccb38ee1a"></a>

Inventory ID for this Inventory Operation.

#### `public virtual bool `[`FromJson`](#structFRHAPI__UpdateInventoryRequestById_1a83b0e83f3e601542ad8111897c08c3ae)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__UpdateInventoryRequestById_1a83b0e83f3e601542ad8111897c08c3ae"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__UpdateInventoryRequestById_1a1820a3b246d128429937f0af5095d97b)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__UpdateInventoryRequestById_1a1820a3b246d128429937f0af5095d97b"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequestById_1a25af0d2cf786ee392322643a0e61ef97)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1a25af0d2cf786ee392322643a0e61ef97"></a>

Gets the value of Bucket_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequestById_1a30dfd8af4822bfb5118fa67f696743be)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1a30dfd8af4822bfb5118fa67f696743be"></a>

Gets the value of Bucket_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequestById_1a1f384ee7fa4a53ce3ef5e75793e36e79)`(const ERHAPI_InventoryBucket & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequestById_1a1f384ee7fa4a53ce3ef5e75793e36e79"></a>

Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetBucket`](#structFRHAPI__UpdateInventoryRequestById_1a862585f772c3743fbb6584cf06c2e4aa)`(ERHAPI_InventoryBucket & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequestById_1a862585f772c3743fbb6584cf06c2e4aa"></a>

Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__UpdateInventoryRequestById_1a59d81e46e1a00bd583d2bde70c8aeb43)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1a59d81e46e1a00bd583d2bde70c8aeb43"></a>

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__UpdateInventoryRequestById_1a57554d46ee0037b058d007d581edeb56)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1a57554d46ee0037b058d007d581edeb56"></a>

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetBucket`](#structFRHAPI__UpdateInventoryRequestById_1a5450b8c565840680e9dd21f6a11937cf)`(const ERHAPI_InventoryBucket & NewValue)` <a id="structFRHAPI__UpdateInventoryRequestById_1a5450b8c565840680e9dd21f6a11937cf"></a>

Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.

#### `public inline FORCEINLINE void `[`SetBucket`](#structFRHAPI__UpdateInventoryRequestById_1a9b996de6ce426a950dee56855a591205)`(ERHAPI_InventoryBucket && NewValue)` <a id="structFRHAPI__UpdateInventoryRequestById_1a9b996de6ce426a950dee56855a591205"></a>

Sets the value of Bucket_Optional and also sets Bucket_IsSet to true using move semantics.

#### `public inline void `[`ClearBucket`](#structFRHAPI__UpdateInventoryRequestById_1ad14f798244ea05e8654e6e4cde09b9c5)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1ad14f798244ea05e8654e6e4cde09b9c5"></a>

Clears the value of Bucket_Optional and sets Bucket_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequestById_1ad87616395bfef942aa82abeecd1d8f00)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1ad87616395bfef942aa82abeecd1d8f00"></a>

Gets the value of Count_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequestById_1a68e668ece137a7db3780c3f7df0c65dd)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1a68e668ece137a7db3780c3f7df0c65dd"></a>

Gets the value of Count_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequestById_1abb4bad8d8ba32893674c4f1d3784a3df)`(const int32 & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequestById_1abb4bad8d8ba32893674c4f1d3784a3df"></a>

Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCount`](#structFRHAPI__UpdateInventoryRequestById_1a769ece188ef5511980967c4a13b601b6)`(int32 & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequestById_1a769ece188ef5511980967c4a13b601b6"></a>

Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetCountOrNull`](#structFRHAPI__UpdateInventoryRequestById_1a2dfdbfc45e4006c99f6e86d49335a04f)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1a2dfdbfc45e4006c99f6e86d49335a04f"></a>

Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetCountOrNull`](#structFRHAPI__UpdateInventoryRequestById_1a794161a74b9284a74f70f27d59a79ec0)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1a794161a74b9284a74f70f27d59a79ec0"></a>

Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__UpdateInventoryRequestById_1a938f558872c0f84456f6eb0998e5f819)`(const int32 & NewValue)` <a id="structFRHAPI__UpdateInventoryRequestById_1a938f558872c0f84456f6eb0998e5f819"></a>

Sets the value of Count_Optional and also sets Count_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__UpdateInventoryRequestById_1a977b1e0506048e3c2abd48d958db89a5)`(int32 && NewValue)` <a id="structFRHAPI__UpdateInventoryRequestById_1a977b1e0506048e3c2abd48d958db89a5"></a>

Sets the value of Count_Optional and also sets Count_IsSet to true using move semantics.

#### `public inline void `[`ClearCount`](#structFRHAPI__UpdateInventoryRequestById_1a4ba546d925732f3b22e323beca7b9ec0)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1a4ba546d925732f3b22e323beca7b9ec0"></a>

Clears the value of Count_Optional and sets Count_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Count`](#structFRHAPI__UpdateInventoryRequestById_1aee51f6a935aa0b226abf9bbcbb105755)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1aee51f6a935aa0b226abf9bbcbb105755"></a>

Returns the default value of Count.

#### `public inline FORCEINLINE FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequestById_1ab534c417ba43ce85ebd62eb3259c7526)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1ab534c417ba43ce85ebd62eb3259c7526"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequestById_1ae6e0c81ed7487adc2a23f5601205beca)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1ae6e0c81ed7487adc2a23f5601205beca"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequestById_1a4d0dd6320729c040d7e25cb69801759c)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequestById_1a4d0dd6320729c040d7e25cb69801759c"></a>

Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExpires`](#structFRHAPI__UpdateInventoryRequestById_1a97b6abf995a19bf3aec59bea2180bea8)`(FDateTime & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequestById_1a97b6abf995a19bf3aec59bea2180bea8"></a>

Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__UpdateInventoryRequestById_1ad0bb6bf7984d294fa5be260eb1ddc828)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1ad0bb6bf7984d294fa5be260eb1ddc828"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__UpdateInventoryRequestById_1a5c611a5e7d28b45039bc0e58d6b7ecd1)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1a5c611a5e7d28b45039bc0e58d6b7ecd1"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__UpdateInventoryRequestById_1adf0dbf7ddec0b5cb074c756434f39b70)`(const FDateTime & NewValue)` <a id="structFRHAPI__UpdateInventoryRequestById_1adf0dbf7ddec0b5cb074c756434f39b70"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__UpdateInventoryRequestById_1aa3221609d24808bf3702ee212b01cd9b)`(FDateTime && NewValue)` <a id="structFRHAPI__UpdateInventoryRequestById_1aa3221609d24808bf3702ee212b01cd9b"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.

#### `public inline void `[`ClearExpires`](#structFRHAPI__UpdateInventoryRequestById_1a100dee7b13d8b702376d702ae8b0b324)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1a100dee7b13d8b702376d702ae8b0b324"></a>

Clears the value of Expires_Optional and sets Expires_IsSet to false.

#### `public inline FORCEINLINE void `[`SetExpiresToNull`](#structFRHAPI__UpdateInventoryRequestById_1add8f10d2dd9ceed916bdf8734a242be6)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1add8f10d2dd9ceed916bdf8734a242be6"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsExpiresNull`](#structFRHAPI__UpdateInventoryRequestById_1a5e73c10ca1990b6b651b9080b7ef2b14)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1a5e73c10ca1990b6b651b9080b7ef2b14"></a>

Checks whether Expires_Optional is set to null.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequestById_1a8824f11c6e69f41ba87faddded9732e0)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1a8824f11c6e69f41ba87faddded9732e0"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequestById_1a28a5c88322d7541358386971a445859d)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1a28a5c88322d7541358386971a445859d"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequestById_1aba9b5e47893c0985ec3279f24e5e0d46)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequestById_1aba9b5e47893c0985ec3279f24e5e0d46"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequestById_1a80ead03b3ebc70fb837eacd4c7666e83)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequestById_1a80ead03b3ebc70fb837eacd4c7666e83"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__UpdateInventoryRequestById_1abfb46df9137df583460034af77cc528a)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1abfb46df9137df583460034af77cc528a"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__UpdateInventoryRequestById_1a20ee3068fd27775b48729de6c7824637)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1a20ee3068fd27775b48729de6c7824637"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__UpdateInventoryRequestById_1a0ded0ae1a44f45a95c4fc3b5100c32bd)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__UpdateInventoryRequestById_1a0ded0ae1a44f45a95c4fc3b5100c32bd"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__UpdateInventoryRequestById_1abf6a1961dc9c5737e876766ecdda4926)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__UpdateInventoryRequestById_1abf6a1961dc9c5737e876766ecdda4926"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__UpdateInventoryRequestById_1a71e04e0947013cc2eca04cfd9c3f451f)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1a71e04e0947013cc2eca04cfd9c3f451f"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__UpdateInventoryRequestById_1adc65a599bea17d78b8656f2a2f68a8d8)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1adc65a599bea17d78b8656f2a2f68a8d8"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__UpdateInventoryRequestById_1a100bff2cf04b5d78f3347afabc20e467)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1a100bff2cf04b5d78f3347afabc20e467"></a>

Checks whether CustomData_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequestById_1a713de5cf392f4fdc25b6322e7b89ae31)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1a713de5cf392f4fdc25b6322e7b89ae31"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequestById_1a7cf61d5703ecc2b2fb67bed9c2167100)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1a7cf61d5703ecc2b2fb67bed9c2167100"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequestById_1ab756758b9a4e71b2b016294a71693df9)`(const int32 & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequestById_1ab756758b9a4e71b2b016294a71693df9"></a>

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetItemId`](#structFRHAPI__UpdateInventoryRequestById_1aefb0bb237456c65b35959fb28178c197)`(int32 & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequestById_1aefb0bb237456c65b35959fb28178c197"></a>

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetItemIdOrNull`](#structFRHAPI__UpdateInventoryRequestById_1a2ce0ff96175bfdb3326339022c49810d)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1a2ce0ff96175bfdb3326339022c49810d"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetItemIdOrNull`](#structFRHAPI__UpdateInventoryRequestById_1af61d46a550b20167416c2e92e4029195)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1af61d46a550b20167416c2e92e4029195"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__UpdateInventoryRequestById_1afc8c81b193702693e3dbbd0c3f6d57f9)`(const int32 & NewValue)` <a id="structFRHAPI__UpdateInventoryRequestById_1afc8c81b193702693e3dbbd0c3f6d57f9"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__UpdateInventoryRequestById_1a2a9b2487b3281ed9ffffe4d3bd3e1e91)`(int32 && NewValue)` <a id="structFRHAPI__UpdateInventoryRequestById_1a2a9b2487b3281ed9ffffe4d3bd3e1e91"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearItemId`](#structFRHAPI__UpdateInventoryRequestById_1aa6e412766bdf2095a1d98d458806d8cf)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1aa6e412766bdf2095a1d98d458806d8cf"></a>

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_ItemId`](#structFRHAPI__UpdateInventoryRequestById_1a1079490a176cb778e06686814b2e553d)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1a1079490a176cb778e06686814b2e553d"></a>

Returns the default value of ItemId.

#### `public inline FORCEINLINE void `[`SetItemIdToNull`](#structFRHAPI__UpdateInventoryRequestById_1a4a0a2cbc1158ad73f1f11ce431634485)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1a4a0a2cbc1158ad73f1f11ce431634485"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsItemIdNull`](#structFRHAPI__UpdateInventoryRequestById_1abba3d27481f2b7dc0e300aa65a629f9c)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1abba3d27481f2b7dc0e300aa65a629f9c"></a>

Checks whether ItemId_Optional is set to null.

#### `public inline FORCEINLINE FGuid & `[`GetInventoryId`](#structFRHAPI__UpdateInventoryRequestById_1ad3cbf7be5c37a5d5bbb3d8d7abf382e5)`()` <a id="structFRHAPI__UpdateInventoryRequestById_1ad3cbf7be5c37a5d5bbb3d8d7abf382e5"></a>

Gets the value of InventoryId.

#### `public inline FORCEINLINE const FGuid & `[`GetInventoryId`](#structFRHAPI__UpdateInventoryRequestById_1aa457e08f3dc2bfa9113b76fc228623b0)`() const` <a id="structFRHAPI__UpdateInventoryRequestById_1aa457e08f3dc2bfa9113b76fc228623b0"></a>

Gets the value of InventoryId.

#### `public inline FORCEINLINE void `[`SetInventoryId`](#structFRHAPI__UpdateInventoryRequestById_1af66a0391058c850e65199c23b7cc4085)`(const FGuid & NewValue)` <a id="structFRHAPI__UpdateInventoryRequestById_1af66a0391058c850e65199c23b7cc4085"></a>

Sets the value of InventoryId.

#### `public inline FORCEINLINE void `[`SetInventoryId`](#structFRHAPI__UpdateInventoryRequestById_1a6012de7ebe0cd48e85a512285f93e9e6)`(FGuid && NewValue)` <a id="structFRHAPI__UpdateInventoryRequestById_1a6012de7ebe0cd48e85a512285f93e9e6"></a>

Sets the value of InventoryId using move semantics.

