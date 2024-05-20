# RHAPI_CreateInventoryRequest <a id="group__RHAPI__CreateInventoryRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_CreateInventoryRequest`](#structFRHAPI__CreateInventoryRequest) | Request to Create a new Inventory.

## struct `FRHAPI_CreateInventoryRequest` <a id="structFRHAPI__CreateInventoryRequest"></a>

```
struct FRHAPI_CreateInventoryRequest
  : public FRHAPI_Model
```

Request to Create a new Inventory.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_InventoryBucket `[`Bucket_Optional`](#structFRHAPI__CreateInventoryRequest_1a76f5a8d3c702966a17c7bc29e675ddf3) | Inventory Bucket for this Inventory Operation.
`public bool `[`Bucket_IsSet`](#structFRHAPI__CreateInventoryRequest_1a2ce32e4645f8267d3265ecb9b0cd77c4) | true if Bucket_Optional has been set to a value
`public int32 `[`Count_Optional`](#structFRHAPI__CreateInventoryRequest_1add764394cc2dc70fd1735a5e32cf42c7) | Count for this Inventory Operation.
`public bool `[`Count_IsSet`](#structFRHAPI__CreateInventoryRequest_1a6b47666c8a735bd51280663d72724e74) | true if Count_Optional has been set to a value
`public FDateTime `[`Expires_Optional`](#structFRHAPI__CreateInventoryRequest_1a41f1a997e28f8be5e66e682eb1332e7f) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`Expires_IsSet`](#structFRHAPI__CreateInventoryRequest_1ae7761ce45a85554d147a84c729dfbdbc) | true if Expires_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__CreateInventoryRequest_1aa8b9cc39c3c1663ffc28e082263bd1a6) | Arbitrary data map that can be set to add additional data to Inventory.
`public bool `[`CustomData_IsSet`](#structFRHAPI__CreateInventoryRequest_1aab3c76b73ebab73dff0bb8caefe3b94c) | true if CustomData_Optional has been set to a value
`public int32 `[`ItemId`](#structFRHAPI__CreateInventoryRequest_1ac1d6ef6e996f613b1de9891c10f9a5e6) | 
`public ERHAPI_CreateInventoryType `[`Type_Optional`](#structFRHAPI__CreateInventoryRequest_1a6b9eee826b685cd1dc669c98fb789719) | 
`public bool `[`Type_IsSet`](#structFRHAPI__CreateInventoryRequest_1a75960a6ec28c5652a2c70632c5e792bc) | true if Type_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__CreateInventoryRequest_1ab09eb4d0768d95c9f03d22a97e5378b7)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__CreateInventoryRequest_1a35c9fbf757c3217424a69a6af9f122ad)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__CreateInventoryRequest_1a5029963fc3d9d06df3d40f4273c0515c)`()` | Gets the value of Bucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__CreateInventoryRequest_1ad6c16e1d4e2fd6020cb5504dc9cde26a)`() const` | Gets the value of Bucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__CreateInventoryRequest_1a6ace80d17635daae06a26bc881620707)`(const ERHAPI_InventoryBucket & DefaultValue) const` | Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetBucket`](#structFRHAPI__CreateInventoryRequest_1aa354de4886ec678357f6cfc0e3ca3d49)`(ERHAPI_InventoryBucket & OutValue) const` | Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__CreateInventoryRequest_1af7c119e4466f936fc4e8df9bd33b2313)`()` | Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__CreateInventoryRequest_1ac38e53ed4482b6937813e4d6d010c89b)`() const` | Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetBucket`](#structFRHAPI__CreateInventoryRequest_1a045fdd5e1be635d26a9307465354cf95)`(ERHAPI_InventoryBucket NewValue)` | Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.
`public inline void `[`ClearBucket`](#structFRHAPI__CreateInventoryRequest_1af65d524d1fbd31b78cc01906c4664452)`()` | Clears the value of Bucket_Optional and sets Bucket_IsSet to false.
`public inline int32 & `[`GetCount`](#structFRHAPI__CreateInventoryRequest_1aed4ce64e9f74edc358e2de99555da03e)`()` | Gets the value of Count_Optional, regardless of it having been set.
`public inline const int32 & `[`GetCount`](#structFRHAPI__CreateInventoryRequest_1a4b00e34df116d13c5f248c5882f695bf)`() const` | Gets the value of Count_Optional, regardless of it having been set.
`public inline const int32 & `[`GetCount`](#structFRHAPI__CreateInventoryRequest_1a34c050fa6fe6977f8a1ed28719118cf7)`(const int32 & DefaultValue) const` | Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCount`](#structFRHAPI__CreateInventoryRequest_1aa0ef4d427acc8c8e2a85b4afbcbf81ad)`(int32 & OutValue) const` | Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetCountOrNull`](#structFRHAPI__CreateInventoryRequest_1a29ddbb909f9e47a13ed0ae139006a5b8)`()` | Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetCountOrNull`](#structFRHAPI__CreateInventoryRequest_1ad02e50234f2f3103cf3d2537a671c411)`() const` | Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCount`](#structFRHAPI__CreateInventoryRequest_1a922ef8ef30fcdd98403ef14a7d4ba351)`(int32 NewValue)` | Sets the value of Count_Optional and also sets Count_IsSet to true.
`public inline void `[`ClearCount`](#structFRHAPI__CreateInventoryRequest_1ab05cf66c182dabecdcd0531b3c66ff22)`()` | Clears the value of Count_Optional and sets Count_IsSet to false.
`public inline bool `[`IsCountDefaultValue`](#structFRHAPI__CreateInventoryRequest_1a4a80312cc1071de3f6cc54e0c7c3cfed)`() const` | Returns true if Count_Optional is set and matches the default value.
`public inline void `[`SetCountToDefault`](#structFRHAPI__CreateInventoryRequest_1a388643174109779fe3dd3232304cf0a0)`()` | Sets the value of Count_Optional to its default and also sets Count_IsSet to true.
`public inline FDateTime & `[`GetExpires`](#structFRHAPI__CreateInventoryRequest_1a05bae93ed2e0b6930924ad1b8685cf56)`()` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpires`](#structFRHAPI__CreateInventoryRequest_1a56077cba75f09242a38a3a9fa7ad4cf4)`() const` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpires`](#structFRHAPI__CreateInventoryRequest_1ae91fe7b2fed22e36b094ca9506898597)`(const FDateTime & DefaultValue) const` | Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExpires`](#structFRHAPI__CreateInventoryRequest_1ab11ebe9f2134abb2b06a583117407871)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__CreateInventoryRequest_1af187cf86cc66df999cd4d44d56cae635)`()` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__CreateInventoryRequest_1a8fd750573443f58627a685a0e65aa970)`() const` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExpires`](#structFRHAPI__CreateInventoryRequest_1a5718a3c06768f394ac8fde77b5965468)`(FDateTime NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true.
`public inline void `[`ClearExpires`](#structFRHAPI__CreateInventoryRequest_1a3ed93883ede8b9a88228ab07bcbc08e1)`()` | Clears the value of Expires_Optional and sets Expires_IsSet to false.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateInventoryRequest_1ae691355f886faefae07d9ddf37ca3a94)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateInventoryRequest_1acae54ed4cd8680a36bda32ea6c2e66a9)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateInventoryRequest_1a23cc7e8e589b777d91848487845b282d)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__CreateInventoryRequest_1acf66285ff1cc76a356de7fcef50d524b)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CreateInventoryRequest_1ac994aa227aec7ccb1baa62a5462f49a6)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CreateInventoryRequest_1a573a54ec4b1c9a8655b0ac457797bf30)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__CreateInventoryRequest_1a65d051f9eefd5a537e74aa195180ac30)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__CreateInventoryRequest_1a1c28b8945d132420bcf24dbf79d90ae2)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline int32 & `[`GetItemId`](#structFRHAPI__CreateInventoryRequest_1a14a1819d0334533246ac6f6f3eee5673)`()` | Gets the value of ItemId.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__CreateInventoryRequest_1a43320c01fd8c61d0da8941562f779a06)`() const` | Gets the value of ItemId.
`public inline void `[`SetItemId`](#structFRHAPI__CreateInventoryRequest_1ad6e611525ed0f2133ae300a262cbf82f)`(int32 NewValue)` | Sets the value of ItemId.
`public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__CreateInventoryRequest_1aa452bb255788043b352a2f834ad56fb5)`() const` | Returns true if ItemId matches the default value.
`public inline void `[`SetItemIdToDefault`](#structFRHAPI__CreateInventoryRequest_1a76b10a0b5195cae811f70705445db116)`()` | Sets the value of ItemId to its default
`public inline ERHAPI_CreateInventoryType & `[`GetType`](#structFRHAPI__CreateInventoryRequest_1a7e409aa5a911abeb9a555cbdc0ef97e1)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const ERHAPI_CreateInventoryType & `[`GetType`](#structFRHAPI__CreateInventoryRequest_1a973a840c195f48fcb06454669a9911c6)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const ERHAPI_CreateInventoryType & `[`GetType`](#structFRHAPI__CreateInventoryRequest_1a64db54556a74b8dbfba6d19f468e2e5b)`(const ERHAPI_CreateInventoryType & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetType`](#structFRHAPI__CreateInventoryRequest_1a2f942c7682092c2d6b4d9c2e1048bbf1)`(ERHAPI_CreateInventoryType & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_CreateInventoryType * `[`GetTypeOrNull`](#structFRHAPI__CreateInventoryRequest_1af8a45272863173f952f0cb7e325b8a0a)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_CreateInventoryType * `[`GetTypeOrNull`](#structFRHAPI__CreateInventoryRequest_1aaada712b2ec0f8e231ef3bc2e91c6a7b)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetType`](#structFRHAPI__CreateInventoryRequest_1aef8ae330863b5cd5d64cf0997b225555)`(ERHAPI_CreateInventoryType NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline void `[`ClearType`](#structFRHAPI__CreateInventoryRequest_1a2dd897e1570b1b1cf4803f48f9e15759)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.

#### Members

#### `public ERHAPI_InventoryBucket `[`Bucket_Optional`](#structFRHAPI__CreateInventoryRequest_1a76f5a8d3c702966a17c7bc29e675ddf3) <a id="structFRHAPI__CreateInventoryRequest_1a76f5a8d3c702966a17c7bc29e675ddf3"></a>

Inventory Bucket for this Inventory Operation.

#### `public bool `[`Bucket_IsSet`](#structFRHAPI__CreateInventoryRequest_1a2ce32e4645f8267d3265ecb9b0cd77c4) <a id="structFRHAPI__CreateInventoryRequest_1a2ce32e4645f8267d3265ecb9b0cd77c4"></a>

true if Bucket_Optional has been set to a value

#### `public int32 `[`Count_Optional`](#structFRHAPI__CreateInventoryRequest_1add764394cc2dc70fd1735a5e32cf42c7) <a id="structFRHAPI__CreateInventoryRequest_1add764394cc2dc70fd1735a5e32cf42c7"></a>

Count for this Inventory Operation.

#### `public bool `[`Count_IsSet`](#structFRHAPI__CreateInventoryRequest_1a6b47666c8a735bd51280663d72724e74) <a id="structFRHAPI__CreateInventoryRequest_1a6b47666c8a735bd51280663d72724e74"></a>

true if Count_Optional has been set to a value

#### `public FDateTime `[`Expires_Optional`](#structFRHAPI__CreateInventoryRequest_1a41f1a997e28f8be5e66e682eb1332e7f) <a id="structFRHAPI__CreateInventoryRequest_1a41f1a997e28f8be5e66e682eb1332e7f"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`Expires_IsSet`](#structFRHAPI__CreateInventoryRequest_1ae7761ce45a85554d147a84c729dfbdbc) <a id="structFRHAPI__CreateInventoryRequest_1ae7761ce45a85554d147a84c729dfbdbc"></a>

true if Expires_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__CreateInventoryRequest_1aa8b9cc39c3c1663ffc28e082263bd1a6) <a id="structFRHAPI__CreateInventoryRequest_1aa8b9cc39c3c1663ffc28e082263bd1a6"></a>

Arbitrary data map that can be set to add additional data to Inventory.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__CreateInventoryRequest_1aab3c76b73ebab73dff0bb8caefe3b94c) <a id="structFRHAPI__CreateInventoryRequest_1aab3c76b73ebab73dff0bb8caefe3b94c"></a>

true if CustomData_Optional has been set to a value

#### `public int32 `[`ItemId`](#structFRHAPI__CreateInventoryRequest_1ac1d6ef6e996f613b1de9891c10f9a5e6) <a id="structFRHAPI__CreateInventoryRequest_1ac1d6ef6e996f613b1de9891c10f9a5e6"></a>

#### `public ERHAPI_CreateInventoryType `[`Type_Optional`](#structFRHAPI__CreateInventoryRequest_1a6b9eee826b685cd1dc669c98fb789719) <a id="structFRHAPI__CreateInventoryRequest_1a6b9eee826b685cd1dc669c98fb789719"></a>

#### `public bool `[`Type_IsSet`](#structFRHAPI__CreateInventoryRequest_1a75960a6ec28c5652a2c70632c5e792bc) <a id="structFRHAPI__CreateInventoryRequest_1a75960a6ec28c5652a2c70632c5e792bc"></a>

true if Type_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__CreateInventoryRequest_1ab09eb4d0768d95c9f03d22a97e5378b7)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__CreateInventoryRequest_1ab09eb4d0768d95c9f03d22a97e5378b7"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__CreateInventoryRequest_1a35c9fbf757c3217424a69a6af9f122ad)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__CreateInventoryRequest_1a35c9fbf757c3217424a69a6af9f122ad"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__CreateInventoryRequest_1a5029963fc3d9d06df3d40f4273c0515c)`()` <a id="structFRHAPI__CreateInventoryRequest_1a5029963fc3d9d06df3d40f4273c0515c"></a>

Gets the value of Bucket_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__CreateInventoryRequest_1ad6c16e1d4e2fd6020cb5504dc9cde26a)`() const` <a id="structFRHAPI__CreateInventoryRequest_1ad6c16e1d4e2fd6020cb5504dc9cde26a"></a>

Gets the value of Bucket_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__CreateInventoryRequest_1a6ace80d17635daae06a26bc881620707)`(const ERHAPI_InventoryBucket & DefaultValue) const` <a id="structFRHAPI__CreateInventoryRequest_1a6ace80d17635daae06a26bc881620707"></a>

Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetBucket`](#structFRHAPI__CreateInventoryRequest_1aa354de4886ec678357f6cfc0e3ca3d49)`(ERHAPI_InventoryBucket & OutValue) const` <a id="structFRHAPI__CreateInventoryRequest_1aa354de4886ec678357f6cfc0e3ca3d49"></a>

Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__CreateInventoryRequest_1af7c119e4466f936fc4e8df9bd33b2313)`()` <a id="structFRHAPI__CreateInventoryRequest_1af7c119e4466f936fc4e8df9bd33b2313"></a>

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__CreateInventoryRequest_1ac38e53ed4482b6937813e4d6d010c89b)`() const` <a id="structFRHAPI__CreateInventoryRequest_1ac38e53ed4482b6937813e4d6d010c89b"></a>

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetBucket`](#structFRHAPI__CreateInventoryRequest_1a045fdd5e1be635d26a9307465354cf95)`(ERHAPI_InventoryBucket NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1a045fdd5e1be635d26a9307465354cf95"></a>

Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.

#### `public inline void `[`ClearBucket`](#structFRHAPI__CreateInventoryRequest_1af65d524d1fbd31b78cc01906c4664452)`()` <a id="structFRHAPI__CreateInventoryRequest_1af65d524d1fbd31b78cc01906c4664452"></a>

Clears the value of Bucket_Optional and sets Bucket_IsSet to false.

#### `public inline int32 & `[`GetCount`](#structFRHAPI__CreateInventoryRequest_1aed4ce64e9f74edc358e2de99555da03e)`()` <a id="structFRHAPI__CreateInventoryRequest_1aed4ce64e9f74edc358e2de99555da03e"></a>

Gets the value of Count_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetCount`](#structFRHAPI__CreateInventoryRequest_1a4b00e34df116d13c5f248c5882f695bf)`() const` <a id="structFRHAPI__CreateInventoryRequest_1a4b00e34df116d13c5f248c5882f695bf"></a>

Gets the value of Count_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetCount`](#structFRHAPI__CreateInventoryRequest_1a34c050fa6fe6977f8a1ed28719118cf7)`(const int32 & DefaultValue) const` <a id="structFRHAPI__CreateInventoryRequest_1a34c050fa6fe6977f8a1ed28719118cf7"></a>

Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCount`](#structFRHAPI__CreateInventoryRequest_1aa0ef4d427acc8c8e2a85b4afbcbf81ad)`(int32 & OutValue) const` <a id="structFRHAPI__CreateInventoryRequest_1aa0ef4d427acc8c8e2a85b4afbcbf81ad"></a>

Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetCountOrNull`](#structFRHAPI__CreateInventoryRequest_1a29ddbb909f9e47a13ed0ae139006a5b8)`()` <a id="structFRHAPI__CreateInventoryRequest_1a29ddbb909f9e47a13ed0ae139006a5b8"></a>

Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetCountOrNull`](#structFRHAPI__CreateInventoryRequest_1ad02e50234f2f3103cf3d2537a671c411)`() const` <a id="structFRHAPI__CreateInventoryRequest_1ad02e50234f2f3103cf3d2537a671c411"></a>

Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCount`](#structFRHAPI__CreateInventoryRequest_1a922ef8ef30fcdd98403ef14a7d4ba351)`(int32 NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1a922ef8ef30fcdd98403ef14a7d4ba351"></a>

Sets the value of Count_Optional and also sets Count_IsSet to true.

#### `public inline void `[`ClearCount`](#structFRHAPI__CreateInventoryRequest_1ab05cf66c182dabecdcd0531b3c66ff22)`()` <a id="structFRHAPI__CreateInventoryRequest_1ab05cf66c182dabecdcd0531b3c66ff22"></a>

Clears the value of Count_Optional and sets Count_IsSet to false.

#### `public inline bool `[`IsCountDefaultValue`](#structFRHAPI__CreateInventoryRequest_1a4a80312cc1071de3f6cc54e0c7c3cfed)`() const` <a id="structFRHAPI__CreateInventoryRequest_1a4a80312cc1071de3f6cc54e0c7c3cfed"></a>

Returns true if Count_Optional is set and matches the default value.

#### `public inline void `[`SetCountToDefault`](#structFRHAPI__CreateInventoryRequest_1a388643174109779fe3dd3232304cf0a0)`()` <a id="structFRHAPI__CreateInventoryRequest_1a388643174109779fe3dd3232304cf0a0"></a>

Sets the value of Count_Optional to its default and also sets Count_IsSet to true.

#### `public inline FDateTime & `[`GetExpires`](#structFRHAPI__CreateInventoryRequest_1a05bae93ed2e0b6930924ad1b8685cf56)`()` <a id="structFRHAPI__CreateInventoryRequest_1a05bae93ed2e0b6930924ad1b8685cf56"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpires`](#structFRHAPI__CreateInventoryRequest_1a56077cba75f09242a38a3a9fa7ad4cf4)`() const` <a id="structFRHAPI__CreateInventoryRequest_1a56077cba75f09242a38a3a9fa7ad4cf4"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpires`](#structFRHAPI__CreateInventoryRequest_1ae91fe7b2fed22e36b094ca9506898597)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__CreateInventoryRequest_1ae91fe7b2fed22e36b094ca9506898597"></a>

Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExpires`](#structFRHAPI__CreateInventoryRequest_1ab11ebe9f2134abb2b06a583117407871)`(FDateTime & OutValue) const` <a id="structFRHAPI__CreateInventoryRequest_1ab11ebe9f2134abb2b06a583117407871"></a>

Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__CreateInventoryRequest_1af187cf86cc66df999cd4d44d56cae635)`()` <a id="structFRHAPI__CreateInventoryRequest_1af187cf86cc66df999cd4d44d56cae635"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__CreateInventoryRequest_1a8fd750573443f58627a685a0e65aa970)`() const` <a id="structFRHAPI__CreateInventoryRequest_1a8fd750573443f58627a685a0e65aa970"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExpires`](#structFRHAPI__CreateInventoryRequest_1a5718a3c06768f394ac8fde77b5965468)`(FDateTime NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1a5718a3c06768f394ac8fde77b5965468"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true.

#### `public inline void `[`ClearExpires`](#structFRHAPI__CreateInventoryRequest_1a3ed93883ede8b9a88228ab07bcbc08e1)`()` <a id="structFRHAPI__CreateInventoryRequest_1a3ed93883ede8b9a88228ab07bcbc08e1"></a>

Clears the value of Expires_Optional and sets Expires_IsSet to false.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateInventoryRequest_1ae691355f886faefae07d9ddf37ca3a94)`()` <a id="structFRHAPI__CreateInventoryRequest_1ae691355f886faefae07d9ddf37ca3a94"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateInventoryRequest_1acae54ed4cd8680a36bda32ea6c2e66a9)`() const` <a id="structFRHAPI__CreateInventoryRequest_1acae54ed4cd8680a36bda32ea6c2e66a9"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateInventoryRequest_1a23cc7e8e589b777d91848487845b282d)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__CreateInventoryRequest_1a23cc7e8e589b777d91848487845b282d"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__CreateInventoryRequest_1acf66285ff1cc76a356de7fcef50d524b)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__CreateInventoryRequest_1acf66285ff1cc76a356de7fcef50d524b"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CreateInventoryRequest_1ac994aa227aec7ccb1baa62a5462f49a6)`()` <a id="structFRHAPI__CreateInventoryRequest_1ac994aa227aec7ccb1baa62a5462f49a6"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CreateInventoryRequest_1a573a54ec4b1c9a8655b0ac457797bf30)`() const` <a id="structFRHAPI__CreateInventoryRequest_1a573a54ec4b1c9a8655b0ac457797bf30"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__CreateInventoryRequest_1a65d051f9eefd5a537e74aa195180ac30)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1a65d051f9eefd5a537e74aa195180ac30"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__CreateInventoryRequest_1a1c28b8945d132420bcf24dbf79d90ae2)`()` <a id="structFRHAPI__CreateInventoryRequest_1a1c28b8945d132420bcf24dbf79d90ae2"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline int32 & `[`GetItemId`](#structFRHAPI__CreateInventoryRequest_1a14a1819d0334533246ac6f6f3eee5673)`()` <a id="structFRHAPI__CreateInventoryRequest_1a14a1819d0334533246ac6f6f3eee5673"></a>

Gets the value of ItemId.

#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__CreateInventoryRequest_1a43320c01fd8c61d0da8941562f779a06)`() const` <a id="structFRHAPI__CreateInventoryRequest_1a43320c01fd8c61d0da8941562f779a06"></a>

Gets the value of ItemId.

#### `public inline void `[`SetItemId`](#structFRHAPI__CreateInventoryRequest_1ad6e611525ed0f2133ae300a262cbf82f)`(int32 NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1ad6e611525ed0f2133ae300a262cbf82f"></a>

Sets the value of ItemId.

#### `public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__CreateInventoryRequest_1aa452bb255788043b352a2f834ad56fb5)`() const` <a id="structFRHAPI__CreateInventoryRequest_1aa452bb255788043b352a2f834ad56fb5"></a>

Returns true if ItemId matches the default value.

#### `public inline void `[`SetItemIdToDefault`](#structFRHAPI__CreateInventoryRequest_1a76b10a0b5195cae811f70705445db116)`()` <a id="structFRHAPI__CreateInventoryRequest_1a76b10a0b5195cae811f70705445db116"></a>

Sets the value of ItemId to its default

#### `public inline ERHAPI_CreateInventoryType & `[`GetType`](#structFRHAPI__CreateInventoryRequest_1a7e409aa5a911abeb9a555cbdc0ef97e1)`()` <a id="structFRHAPI__CreateInventoryRequest_1a7e409aa5a911abeb9a555cbdc0ef97e1"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const ERHAPI_CreateInventoryType & `[`GetType`](#structFRHAPI__CreateInventoryRequest_1a973a840c195f48fcb06454669a9911c6)`() const` <a id="structFRHAPI__CreateInventoryRequest_1a973a840c195f48fcb06454669a9911c6"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const ERHAPI_CreateInventoryType & `[`GetType`](#structFRHAPI__CreateInventoryRequest_1a64db54556a74b8dbfba6d19f468e2e5b)`(const ERHAPI_CreateInventoryType & DefaultValue) const` <a id="structFRHAPI__CreateInventoryRequest_1a64db54556a74b8dbfba6d19f468e2e5b"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetType`](#structFRHAPI__CreateInventoryRequest_1a2f942c7682092c2d6b4d9c2e1048bbf1)`(ERHAPI_CreateInventoryType & OutValue) const` <a id="structFRHAPI__CreateInventoryRequest_1a2f942c7682092c2d6b4d9c2e1048bbf1"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_CreateInventoryType * `[`GetTypeOrNull`](#structFRHAPI__CreateInventoryRequest_1af8a45272863173f952f0cb7e325b8a0a)`()` <a id="structFRHAPI__CreateInventoryRequest_1af8a45272863173f952f0cb7e325b8a0a"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_CreateInventoryType * `[`GetTypeOrNull`](#structFRHAPI__CreateInventoryRequest_1aaada712b2ec0f8e231ef3bc2e91c6a7b)`() const` <a id="structFRHAPI__CreateInventoryRequest_1aaada712b2ec0f8e231ef3bc2e91c6a7b"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetType`](#structFRHAPI__CreateInventoryRequest_1aef8ae330863b5cd5d64cf0997b225555)`(ERHAPI_CreateInventoryType NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1aef8ae330863b5cd5d64cf0997b225555"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

#### `public inline void `[`ClearType`](#structFRHAPI__CreateInventoryRequest_1a2dd897e1570b1b1cf4803f48f9e15759)`()` <a id="structFRHAPI__CreateInventoryRequest_1a2dd897e1570b1b1cf4803f48f9e15759"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

