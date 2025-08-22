---
title: RHAPI_CreateInventoryRequest
---

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

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_InventoryBucket `[`Bucket_Optional`](#structFRHAPI__CreateInventoryRequest_1a76f5a8d3c702966a17c7bc29e675ddf3) | 
`public bool `[`Bucket_IsSet`](#structFRHAPI__CreateInventoryRequest_1a2ce32e4645f8267d3265ecb9b0cd77c4) | true if Bucket_Optional has been set to a value
`public int32 `[`Count_Optional`](#structFRHAPI__CreateInventoryRequest_1add764394cc2dc70fd1735a5e32cf42c7) | Count for this Inventory Operation.
`public bool `[`Count_IsSet`](#structFRHAPI__CreateInventoryRequest_1a6b47666c8a735bd51280663d72724e74) | true if Count_Optional has been set to a value
`public FDateTime `[`Expires_Optional`](#structFRHAPI__CreateInventoryRequest_1a41f1a997e28f8be5e66e682eb1332e7f) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`Expires_IsSet`](#structFRHAPI__CreateInventoryRequest_1ae7761ce45a85554d147a84c729dfbdbc) | true if Expires_Optional has been set to a value
`public bool `[`Expires_IsNull`](#structFRHAPI__CreateInventoryRequest_1a8f61d04200cbedc5d54f73ebff7d7c33) | true if Expires_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__CreateInventoryRequest_1aa8b9cc39c3c1663ffc28e082263bd1a6) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__CreateInventoryRequest_1aab3c76b73ebab73dff0bb8caefe3b94c) | true if CustomData_Optional has been set to a value
`public bool `[`CustomData_IsNull`](#structFRHAPI__CreateInventoryRequest_1a8f339ac276bc5a89e5cc2a08f43e8423) | true if CustomData_Optional has been explicitly set to null
`public int32 `[`ItemId`](#structFRHAPI__CreateInventoryRequest_1ac1d6ef6e996f613b1de9891c10f9a5e6) | 
`public ERHAPI_CreateInventoryType `[`Type_Optional`](#structFRHAPI__CreateInventoryRequest_1a6b9eee826b685cd1dc669c98fb789719) | 
`public bool `[`Type_IsSet`](#structFRHAPI__CreateInventoryRequest_1a75960a6ec28c5652a2c70632c5e792bc) | true if Type_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__CreateInventoryRequest_1aebe3b0d9595dfdf29a21b4cf6322b05d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__CreateInventoryRequest_1a32e48ad91672a22606aa5d72711c8bc4)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__CreateInventoryRequest_1a571e5e65142faad9ff9ade18b3542f5c)`()` | Gets the value of Bucket_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__CreateInventoryRequest_1a598aa5ac196d755b9fd83594c328e7ac)`() const` | Gets the value of Bucket_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__CreateInventoryRequest_1ad8083f04cd953b5c4ff9a55da37b6a01)`(const ERHAPI_InventoryBucket & DefaultValue) const` | Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetBucket`](#structFRHAPI__CreateInventoryRequest_1a2d788bd0c95ac99b6c4938b53dbfdc30)`(ERHAPI_InventoryBucket & OutValue) const` | Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__CreateInventoryRequest_1ad844ef369aa20730aa6907b39cec4533)`()` | Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__CreateInventoryRequest_1ab7d907ec5703f92c0cc79fbcd30bcf0a)`() const` | Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetBucket`](#structFRHAPI__CreateInventoryRequest_1a975c6a86999b3525c3f7a7bc0fdbe281)`(const ERHAPI_InventoryBucket & NewValue)` | Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.
`public inline FORCEINLINE void `[`SetBucket`](#structFRHAPI__CreateInventoryRequest_1abdd71c9c3ac48c3218f920fe9393ff8c)`(ERHAPI_InventoryBucket && NewValue)` | Sets the value of Bucket_Optional and also sets Bucket_IsSet to true using move semantics.
`public inline void `[`ClearBucket`](#structFRHAPI__CreateInventoryRequest_1af65d524d1fbd31b78cc01906c4664452)`()` | Clears the value of Bucket_Optional and sets Bucket_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetCount`](#structFRHAPI__CreateInventoryRequest_1ab1fffa21e751a58daf1244e0e2a9739a)`()` | Gets the value of Count_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetCount`](#structFRHAPI__CreateInventoryRequest_1aa91b6767fa8f23b06bf6b94ed04ba4c3)`() const` | Gets the value of Count_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetCount`](#structFRHAPI__CreateInventoryRequest_1adc183f4e363e9b1c88f91c94c59e1709)`(const int32 & DefaultValue) const` | Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCount`](#structFRHAPI__CreateInventoryRequest_1aeaa62551a4043c4cb3336662892ee6cd)`(int32 & OutValue) const` | Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetCountOrNull`](#structFRHAPI__CreateInventoryRequest_1acbc0df7bccfee5da5c901f18698e1181)`()` | Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetCountOrNull`](#structFRHAPI__CreateInventoryRequest_1a16f774ad6b7eefa32e7876b3bb705f44)`() const` | Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__CreateInventoryRequest_1a10f40d88053648bf01c843ff3c2aa19f)`(const int32 & NewValue)` | Sets the value of Count_Optional and also sets Count_IsSet to true.
`public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__CreateInventoryRequest_1aa439a5575d69ce14d736668ac4df47fb)`(int32 && NewValue)` | Sets the value of Count_Optional and also sets Count_IsSet to true using move semantics.
`public inline void `[`ClearCount`](#structFRHAPI__CreateInventoryRequest_1ab05cf66c182dabecdcd0531b3c66ff22)`()` | Clears the value of Count_Optional and sets Count_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Count`](#structFRHAPI__CreateInventoryRequest_1aabd542e0b56aee1df6a3eb705e6608c6)`()` | Returns the default value of Count.
`public inline FORCEINLINE FDateTime & `[`GetExpires`](#structFRHAPI__CreateInventoryRequest_1ad9216ac2833e139fe6a60db293f50191)`()` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__CreateInventoryRequest_1a1123ebde26975c259623539ce025dc62)`() const` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__CreateInventoryRequest_1a28f8cacc20d86fdb3d9ff045721fe4e8)`(const FDateTime & DefaultValue) const` | Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExpires`](#structFRHAPI__CreateInventoryRequest_1a3ab2b8dbb8a3c1c2cfe4f1233447af04)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__CreateInventoryRequest_1a31cc7cb14e63477318a41896cb7a1e93)`()` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__CreateInventoryRequest_1ae552bc62f6af8327f00dc40b910cc1ec)`() const` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__CreateInventoryRequest_1aa94e4e9215ad408615dbe008b04ee55b)`(const FDateTime & NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true.
`public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__CreateInventoryRequest_1aa6039658d06bc9db37e9360925bc659e)`(FDateTime && NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.
`public inline void `[`ClearExpires`](#structFRHAPI__CreateInventoryRequest_1a3ed93883ede8b9a88228ab07bcbc08e1)`()` | Clears the value of Expires_Optional and sets Expires_IsSet to false.
`public inline FORCEINLINE void `[`SetExpiresToNull`](#structFRHAPI__CreateInventoryRequest_1a9cce4c8d18325aa3991fb604f8c23e2b)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsExpiresNull`](#structFRHAPI__CreateInventoryRequest_1a941d116cce4ffcade323685cf5c626d4)`() const` | Checks whether Expires_Optional is set to null.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateInventoryRequest_1a8ec553fbff34047dd410e9301bb550ec)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateInventoryRequest_1a7d77975369a79187e50a3a86e77d9547)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateInventoryRequest_1a414816e32645fce2a3592201d9383169)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__CreateInventoryRequest_1a36d44890ec3e1bafef6249ebb0bd5bc3)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CreateInventoryRequest_1af90cebe52bd48cf68019fb063af94b19)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CreateInventoryRequest_1a47a5d7777d3a0a191986fcd65408c646)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__CreateInventoryRequest_1a1a6043c429130123fe3eb2535b8ed038)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__CreateInventoryRequest_1a53757784451e7488b788855862f61842)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__CreateInventoryRequest_1a1c28b8945d132420bcf24dbf79d90ae2)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__CreateInventoryRequest_1a3a13ab46fcfe7113ece55f8fbaa6a86d)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__CreateInventoryRequest_1a5b354de63f4e95f59b0129539691db4f)`() const` | Checks whether CustomData_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetItemId`](#structFRHAPI__CreateInventoryRequest_1a11b4f140dd07167b12b92f0d894ddab6)`()` | Gets the value of ItemId.
`public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__CreateInventoryRequest_1aadbc093aee59f70520148573b5958c9f)`() const` | Gets the value of ItemId.
`public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__CreateInventoryRequest_1a56ebbfb073b0da39e6113dbde24333de)`(const int32 & NewValue)` | Sets the value of ItemId.
`public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__CreateInventoryRequest_1a2115b938ceeac21e1fcf259b7e52299e)`(int32 && NewValue)` | Sets the value of ItemId using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_ItemId`](#structFRHAPI__CreateInventoryRequest_1a9b87d53f2d5e0720860b34d849a6ae93)`()` | Returns the default value of ItemId.
`public inline FORCEINLINE ERHAPI_CreateInventoryType & `[`GetType`](#structFRHAPI__CreateInventoryRequest_1a6a6038e48a66df8af55ec742f1356361)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_CreateInventoryType & `[`GetType`](#structFRHAPI__CreateInventoryRequest_1a7f5a48d258e51b752cabbe6d4ec784bc)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_CreateInventoryType & `[`GetType`](#structFRHAPI__CreateInventoryRequest_1accdbcb47bd7ab2fec75666e6348d292b)`(const ERHAPI_CreateInventoryType & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetType`](#structFRHAPI__CreateInventoryRequest_1a7f3ac46ef4f0f06c71334251c78ce0e6)`(ERHAPI_CreateInventoryType & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_CreateInventoryType * `[`GetTypeOrNull`](#structFRHAPI__CreateInventoryRequest_1a7aae8bf360540addb2bbafa173b6accc)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_CreateInventoryType * `[`GetTypeOrNull`](#structFRHAPI__CreateInventoryRequest_1ae2ee75ac53de4a527f9260058a651a74)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__CreateInventoryRequest_1a9136e020148c9a7e1892ed5d30fd57cc)`(const ERHAPI_CreateInventoryType & NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__CreateInventoryRequest_1a149517f4dd84b2e27c7074d3edd17378)`(ERHAPI_CreateInventoryType && NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.
`public inline void `[`ClearType`](#structFRHAPI__CreateInventoryRequest_1a2dd897e1570b1b1cf4803f48f9e15759)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.

### Members

#### `public ERHAPI_InventoryBucket `[`Bucket_Optional`](#structFRHAPI__CreateInventoryRequest_1a76f5a8d3c702966a17c7bc29e675ddf3) <a id="structFRHAPI__CreateInventoryRequest_1a76f5a8d3c702966a17c7bc29e675ddf3"></a>

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

#### `public bool `[`Expires_IsNull`](#structFRHAPI__CreateInventoryRequest_1a8f61d04200cbedc5d54f73ebff7d7c33) <a id="structFRHAPI__CreateInventoryRequest_1a8f61d04200cbedc5d54f73ebff7d7c33"></a>

true if Expires_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__CreateInventoryRequest_1aa8b9cc39c3c1663ffc28e082263bd1a6) <a id="structFRHAPI__CreateInventoryRequest_1aa8b9cc39c3c1663ffc28e082263bd1a6"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__CreateInventoryRequest_1aab3c76b73ebab73dff0bb8caefe3b94c) <a id="structFRHAPI__CreateInventoryRequest_1aab3c76b73ebab73dff0bb8caefe3b94c"></a>

true if CustomData_Optional has been set to a value

#### `public bool `[`CustomData_IsNull`](#structFRHAPI__CreateInventoryRequest_1a8f339ac276bc5a89e5cc2a08f43e8423) <a id="structFRHAPI__CreateInventoryRequest_1a8f339ac276bc5a89e5cc2a08f43e8423"></a>

true if CustomData_Optional has been explicitly set to null

#### `public int32 `[`ItemId`](#structFRHAPI__CreateInventoryRequest_1ac1d6ef6e996f613b1de9891c10f9a5e6) <a id="structFRHAPI__CreateInventoryRequest_1ac1d6ef6e996f613b1de9891c10f9a5e6"></a>

#### `public ERHAPI_CreateInventoryType `[`Type_Optional`](#structFRHAPI__CreateInventoryRequest_1a6b9eee826b685cd1dc669c98fb789719) <a id="structFRHAPI__CreateInventoryRequest_1a6b9eee826b685cd1dc669c98fb789719"></a>

#### `public bool `[`Type_IsSet`](#structFRHAPI__CreateInventoryRequest_1a75960a6ec28c5652a2c70632c5e792bc) <a id="structFRHAPI__CreateInventoryRequest_1a75960a6ec28c5652a2c70632c5e792bc"></a>

true if Type_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__CreateInventoryRequest_1aebe3b0d9595dfdf29a21b4cf6322b05d)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__CreateInventoryRequest_1aebe3b0d9595dfdf29a21b4cf6322b05d"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__CreateInventoryRequest_1a32e48ad91672a22606aa5d72711c8bc4)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__CreateInventoryRequest_1a32e48ad91672a22606aa5d72711c8bc4"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__CreateInventoryRequest_1a571e5e65142faad9ff9ade18b3542f5c)`()` <a id="structFRHAPI__CreateInventoryRequest_1a571e5e65142faad9ff9ade18b3542f5c"></a>

Gets the value of Bucket_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__CreateInventoryRequest_1a598aa5ac196d755b9fd83594c328e7ac)`() const` <a id="structFRHAPI__CreateInventoryRequest_1a598aa5ac196d755b9fd83594c328e7ac"></a>

Gets the value of Bucket_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__CreateInventoryRequest_1ad8083f04cd953b5c4ff9a55da37b6a01)`(const ERHAPI_InventoryBucket & DefaultValue) const` <a id="structFRHAPI__CreateInventoryRequest_1ad8083f04cd953b5c4ff9a55da37b6a01"></a>

Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetBucket`](#structFRHAPI__CreateInventoryRequest_1a2d788bd0c95ac99b6c4938b53dbfdc30)`(ERHAPI_InventoryBucket & OutValue) const` <a id="structFRHAPI__CreateInventoryRequest_1a2d788bd0c95ac99b6c4938b53dbfdc30"></a>

Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__CreateInventoryRequest_1ad844ef369aa20730aa6907b39cec4533)`()` <a id="structFRHAPI__CreateInventoryRequest_1ad844ef369aa20730aa6907b39cec4533"></a>

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__CreateInventoryRequest_1ab7d907ec5703f92c0cc79fbcd30bcf0a)`() const` <a id="structFRHAPI__CreateInventoryRequest_1ab7d907ec5703f92c0cc79fbcd30bcf0a"></a>

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetBucket`](#structFRHAPI__CreateInventoryRequest_1a975c6a86999b3525c3f7a7bc0fdbe281)`(const ERHAPI_InventoryBucket & NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1a975c6a86999b3525c3f7a7bc0fdbe281"></a>

Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.

#### `public inline FORCEINLINE void `[`SetBucket`](#structFRHAPI__CreateInventoryRequest_1abdd71c9c3ac48c3218f920fe9393ff8c)`(ERHAPI_InventoryBucket && NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1abdd71c9c3ac48c3218f920fe9393ff8c"></a>

Sets the value of Bucket_Optional and also sets Bucket_IsSet to true using move semantics.

#### `public inline void `[`ClearBucket`](#structFRHAPI__CreateInventoryRequest_1af65d524d1fbd31b78cc01906c4664452)`()` <a id="structFRHAPI__CreateInventoryRequest_1af65d524d1fbd31b78cc01906c4664452"></a>

Clears the value of Bucket_Optional and sets Bucket_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetCount`](#structFRHAPI__CreateInventoryRequest_1ab1fffa21e751a58daf1244e0e2a9739a)`()` <a id="structFRHAPI__CreateInventoryRequest_1ab1fffa21e751a58daf1244e0e2a9739a"></a>

Gets the value of Count_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetCount`](#structFRHAPI__CreateInventoryRequest_1aa91b6767fa8f23b06bf6b94ed04ba4c3)`() const` <a id="structFRHAPI__CreateInventoryRequest_1aa91b6767fa8f23b06bf6b94ed04ba4c3"></a>

Gets the value of Count_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetCount`](#structFRHAPI__CreateInventoryRequest_1adc183f4e363e9b1c88f91c94c59e1709)`(const int32 & DefaultValue) const` <a id="structFRHAPI__CreateInventoryRequest_1adc183f4e363e9b1c88f91c94c59e1709"></a>

Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCount`](#structFRHAPI__CreateInventoryRequest_1aeaa62551a4043c4cb3336662892ee6cd)`(int32 & OutValue) const` <a id="structFRHAPI__CreateInventoryRequest_1aeaa62551a4043c4cb3336662892ee6cd"></a>

Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetCountOrNull`](#structFRHAPI__CreateInventoryRequest_1acbc0df7bccfee5da5c901f18698e1181)`()` <a id="structFRHAPI__CreateInventoryRequest_1acbc0df7bccfee5da5c901f18698e1181"></a>

Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetCountOrNull`](#structFRHAPI__CreateInventoryRequest_1a16f774ad6b7eefa32e7876b3bb705f44)`() const` <a id="structFRHAPI__CreateInventoryRequest_1a16f774ad6b7eefa32e7876b3bb705f44"></a>

Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__CreateInventoryRequest_1a10f40d88053648bf01c843ff3c2aa19f)`(const int32 & NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1a10f40d88053648bf01c843ff3c2aa19f"></a>

Sets the value of Count_Optional and also sets Count_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__CreateInventoryRequest_1aa439a5575d69ce14d736668ac4df47fb)`(int32 && NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1aa439a5575d69ce14d736668ac4df47fb"></a>

Sets the value of Count_Optional and also sets Count_IsSet to true using move semantics.

#### `public inline void `[`ClearCount`](#structFRHAPI__CreateInventoryRequest_1ab05cf66c182dabecdcd0531b3c66ff22)`()` <a id="structFRHAPI__CreateInventoryRequest_1ab05cf66c182dabecdcd0531b3c66ff22"></a>

Clears the value of Count_Optional and sets Count_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Count`](#structFRHAPI__CreateInventoryRequest_1aabd542e0b56aee1df6a3eb705e6608c6)`()` <a id="structFRHAPI__CreateInventoryRequest_1aabd542e0b56aee1df6a3eb705e6608c6"></a>

Returns the default value of Count.

#### `public inline FORCEINLINE FDateTime & `[`GetExpires`](#structFRHAPI__CreateInventoryRequest_1ad9216ac2833e139fe6a60db293f50191)`()` <a id="structFRHAPI__CreateInventoryRequest_1ad9216ac2833e139fe6a60db293f50191"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__CreateInventoryRequest_1a1123ebde26975c259623539ce025dc62)`() const` <a id="structFRHAPI__CreateInventoryRequest_1a1123ebde26975c259623539ce025dc62"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__CreateInventoryRequest_1a28f8cacc20d86fdb3d9ff045721fe4e8)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__CreateInventoryRequest_1a28f8cacc20d86fdb3d9ff045721fe4e8"></a>

Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExpires`](#structFRHAPI__CreateInventoryRequest_1a3ab2b8dbb8a3c1c2cfe4f1233447af04)`(FDateTime & OutValue) const` <a id="structFRHAPI__CreateInventoryRequest_1a3ab2b8dbb8a3c1c2cfe4f1233447af04"></a>

Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__CreateInventoryRequest_1a31cc7cb14e63477318a41896cb7a1e93)`()` <a id="structFRHAPI__CreateInventoryRequest_1a31cc7cb14e63477318a41896cb7a1e93"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__CreateInventoryRequest_1ae552bc62f6af8327f00dc40b910cc1ec)`() const` <a id="structFRHAPI__CreateInventoryRequest_1ae552bc62f6af8327f00dc40b910cc1ec"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__CreateInventoryRequest_1aa94e4e9215ad408615dbe008b04ee55b)`(const FDateTime & NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1aa94e4e9215ad408615dbe008b04ee55b"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__CreateInventoryRequest_1aa6039658d06bc9db37e9360925bc659e)`(FDateTime && NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1aa6039658d06bc9db37e9360925bc659e"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.

#### `public inline void `[`ClearExpires`](#structFRHAPI__CreateInventoryRequest_1a3ed93883ede8b9a88228ab07bcbc08e1)`()` <a id="structFRHAPI__CreateInventoryRequest_1a3ed93883ede8b9a88228ab07bcbc08e1"></a>

Clears the value of Expires_Optional and sets Expires_IsSet to false.

#### `public inline FORCEINLINE void `[`SetExpiresToNull`](#structFRHAPI__CreateInventoryRequest_1a9cce4c8d18325aa3991fb604f8c23e2b)`()` <a id="structFRHAPI__CreateInventoryRequest_1a9cce4c8d18325aa3991fb604f8c23e2b"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsExpiresNull`](#structFRHAPI__CreateInventoryRequest_1a941d116cce4ffcade323685cf5c626d4)`() const` <a id="structFRHAPI__CreateInventoryRequest_1a941d116cce4ffcade323685cf5c626d4"></a>

Checks whether Expires_Optional is set to null.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateInventoryRequest_1a8ec553fbff34047dd410e9301bb550ec)`()` <a id="structFRHAPI__CreateInventoryRequest_1a8ec553fbff34047dd410e9301bb550ec"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateInventoryRequest_1a7d77975369a79187e50a3a86e77d9547)`() const` <a id="structFRHAPI__CreateInventoryRequest_1a7d77975369a79187e50a3a86e77d9547"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateInventoryRequest_1a414816e32645fce2a3592201d9383169)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__CreateInventoryRequest_1a414816e32645fce2a3592201d9383169"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__CreateInventoryRequest_1a36d44890ec3e1bafef6249ebb0bd5bc3)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__CreateInventoryRequest_1a36d44890ec3e1bafef6249ebb0bd5bc3"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CreateInventoryRequest_1af90cebe52bd48cf68019fb063af94b19)`()` <a id="structFRHAPI__CreateInventoryRequest_1af90cebe52bd48cf68019fb063af94b19"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CreateInventoryRequest_1a47a5d7777d3a0a191986fcd65408c646)`() const` <a id="structFRHAPI__CreateInventoryRequest_1a47a5d7777d3a0a191986fcd65408c646"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__CreateInventoryRequest_1a1a6043c429130123fe3eb2535b8ed038)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1a1a6043c429130123fe3eb2535b8ed038"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__CreateInventoryRequest_1a53757784451e7488b788855862f61842)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1a53757784451e7488b788855862f61842"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__CreateInventoryRequest_1a1c28b8945d132420bcf24dbf79d90ae2)`()` <a id="structFRHAPI__CreateInventoryRequest_1a1c28b8945d132420bcf24dbf79d90ae2"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__CreateInventoryRequest_1a3a13ab46fcfe7113ece55f8fbaa6a86d)`()` <a id="structFRHAPI__CreateInventoryRequest_1a3a13ab46fcfe7113ece55f8fbaa6a86d"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__CreateInventoryRequest_1a5b354de63f4e95f59b0129539691db4f)`() const` <a id="structFRHAPI__CreateInventoryRequest_1a5b354de63f4e95f59b0129539691db4f"></a>

Checks whether CustomData_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetItemId`](#structFRHAPI__CreateInventoryRequest_1a11b4f140dd07167b12b92f0d894ddab6)`()` <a id="structFRHAPI__CreateInventoryRequest_1a11b4f140dd07167b12b92f0d894ddab6"></a>

Gets the value of ItemId.

#### `public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__CreateInventoryRequest_1aadbc093aee59f70520148573b5958c9f)`() const` <a id="structFRHAPI__CreateInventoryRequest_1aadbc093aee59f70520148573b5958c9f"></a>

Gets the value of ItemId.

#### `public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__CreateInventoryRequest_1a56ebbfb073b0da39e6113dbde24333de)`(const int32 & NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1a56ebbfb073b0da39e6113dbde24333de"></a>

Sets the value of ItemId.

#### `public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__CreateInventoryRequest_1a2115b938ceeac21e1fcf259b7e52299e)`(int32 && NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1a2115b938ceeac21e1fcf259b7e52299e"></a>

Sets the value of ItemId using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_ItemId`](#structFRHAPI__CreateInventoryRequest_1a9b87d53f2d5e0720860b34d849a6ae93)`()` <a id="structFRHAPI__CreateInventoryRequest_1a9b87d53f2d5e0720860b34d849a6ae93"></a>

Returns the default value of ItemId.

#### `public inline FORCEINLINE ERHAPI_CreateInventoryType & `[`GetType`](#structFRHAPI__CreateInventoryRequest_1a6a6038e48a66df8af55ec742f1356361)`()` <a id="structFRHAPI__CreateInventoryRequest_1a6a6038e48a66df8af55ec742f1356361"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_CreateInventoryType & `[`GetType`](#structFRHAPI__CreateInventoryRequest_1a7f5a48d258e51b752cabbe6d4ec784bc)`() const` <a id="structFRHAPI__CreateInventoryRequest_1a7f5a48d258e51b752cabbe6d4ec784bc"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_CreateInventoryType & `[`GetType`](#structFRHAPI__CreateInventoryRequest_1accdbcb47bd7ab2fec75666e6348d292b)`(const ERHAPI_CreateInventoryType & DefaultValue) const` <a id="structFRHAPI__CreateInventoryRequest_1accdbcb47bd7ab2fec75666e6348d292b"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetType`](#structFRHAPI__CreateInventoryRequest_1a7f3ac46ef4f0f06c71334251c78ce0e6)`(ERHAPI_CreateInventoryType & OutValue) const` <a id="structFRHAPI__CreateInventoryRequest_1a7f3ac46ef4f0f06c71334251c78ce0e6"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_CreateInventoryType * `[`GetTypeOrNull`](#structFRHAPI__CreateInventoryRequest_1a7aae8bf360540addb2bbafa173b6accc)`()` <a id="structFRHAPI__CreateInventoryRequest_1a7aae8bf360540addb2bbafa173b6accc"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_CreateInventoryType * `[`GetTypeOrNull`](#structFRHAPI__CreateInventoryRequest_1ae2ee75ac53de4a527f9260058a651a74)`() const` <a id="structFRHAPI__CreateInventoryRequest_1ae2ee75ac53de4a527f9260058a651a74"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__CreateInventoryRequest_1a9136e020148c9a7e1892ed5d30fd57cc)`(const ERHAPI_CreateInventoryType & NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1a9136e020148c9a7e1892ed5d30fd57cc"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__CreateInventoryRequest_1a149517f4dd84b2e27c7074d3edd17378)`(ERHAPI_CreateInventoryType && NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1a149517f4dd84b2e27c7074d3edd17378"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.

#### `public inline void `[`ClearType`](#structFRHAPI__CreateInventoryRequest_1a2dd897e1570b1b1cf4803f48f9e15759)`()` <a id="structFRHAPI__CreateInventoryRequest_1a2dd897e1570b1b1cf4803f48f9e15759"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

