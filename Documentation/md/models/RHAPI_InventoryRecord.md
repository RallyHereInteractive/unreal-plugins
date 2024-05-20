# RHAPI_InventoryRecord <a id="group__RHAPI__InventoryRecord"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_InventoryRecord`](#structFRHAPI__InventoryRecord) | Inventory Record for a Player.

## struct `FRHAPI_InventoryRecord` <a id="structFRHAPI__InventoryRecord"></a>

```
struct FRHAPI_InventoryRecord
  : public FRHAPI_Model
```

Inventory Record for a Player.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`InventoryId`](#structFRHAPI__InventoryRecord_1a3066d9f5f0c8542ce6c146c8bffe52d7) | Unique ID for this Inventory Record.
`public ERHAPI_InventoryType `[`Type`](#structFRHAPI__InventoryRecord_1ad1d64f8daeb1c6134e82c777a84d8d88) | Type of Inventory Record.
`public int64 `[`LegacyInventoryId_Optional`](#structFRHAPI__InventoryRecord_1aa0f620a4a9e126d8396a710071523a79) | Legacy Inventory ID.
`public bool `[`LegacyInventoryId_IsSet`](#structFRHAPI__InventoryRecord_1add59aa8246c622850361c5ab462c115f) | true if LegacyInventoryId_Optional has been set to a value
`public ERHAPI_InventoryBucket `[`Bucket_Optional`](#structFRHAPI__InventoryRecord_1a11fead5ff19c7fcb7daa91dfac137c6c) | Bucket for this Inventory Record.
`public bool `[`Bucket_IsSet`](#structFRHAPI__InventoryRecord_1a47df941858f320dcb7e7f558562838b7) | true if Bucket_Optional has been set to a value
`public int32 `[`Count`](#structFRHAPI__InventoryRecord_1aec2fa3f8808055381e28fa978221cb3c) | Instance count for this Inventory Record.
`public FDateTime `[`Acquired`](#structFRHAPI__InventoryRecord_1af556a5b7250364999456be5869d542d2) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public FDateTime `[`Expires_Optional`](#structFRHAPI__InventoryRecord_1a7e8064cb82896b8a7b9d86c1643f10db) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`Expires_IsSet`](#structFRHAPI__InventoryRecord_1abf43a037e93daea3697d69dfc7934661) | true if Expires_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__InventoryRecord_1a696afe05e8ced2be8839d4d5af228d8d) | Arbitrary map of data for this Inventory Record.
`public bool `[`CustomData_IsSet`](#structFRHAPI__InventoryRecord_1a9dc9fa9ebdd2679071fb816b57a17384) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__InventoryRecord_1a10e72b7ebba9fa0e15d29318a9fa7705)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InventoryRecord_1a507d662df00fd0187e69a3cb3e6487cf)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetInventoryId`](#structFRHAPI__InventoryRecord_1a94bb21199671283b41bfb6f26819da4b)`()` | Gets the value of InventoryId.
`public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__InventoryRecord_1a80004630cabe078cd5b608f3a7027827)`() const` | Gets the value of InventoryId.
`public inline void `[`SetInventoryId`](#structFRHAPI__InventoryRecord_1aa0c70d6354e9fa93f9bbfcee853439c2)`(FGuid NewValue)` | Sets the value of InventoryId.
`public inline ERHAPI_InventoryType & `[`GetType`](#structFRHAPI__InventoryRecord_1a5ca30fb5643ffe145ac7b58e374c9b1e)`()` | Gets the value of Type.
`public inline const ERHAPI_InventoryType & `[`GetType`](#structFRHAPI__InventoryRecord_1ab435243d849a30b353f05a2de80ef9a5)`() const` | Gets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__InventoryRecord_1adc58676d2d90f112efaf4558a479b733)`(ERHAPI_InventoryType NewValue)` | Sets the value of Type.
`public inline int64 & `[`GetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1aa41c67f28495b9569a418e4a7842ed44)`()` | Gets the value of LegacyInventoryId_Optional, regardless of it having been set.
`public inline const int64 & `[`GetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1a560edee90d67d6eaf21c45de6903eea8)`() const` | Gets the value of LegacyInventoryId_Optional, regardless of it having been set.
`public inline const int64 & `[`GetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1ae307f6d3053dd439c1d1e0175ffbc31e)`(const int64 & DefaultValue) const` | Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1a924fee5b96ce7a27ce78f2ca22fb53ce)`(int64 & OutValue) const` | Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.
`public inline int64 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__InventoryRecord_1a13eb2be839a080301957a145e9ecdc1d)`()` | Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int64 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__InventoryRecord_1ab330a1aeb4b84d7c0b60844c4db3020a)`() const` | Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1a502e9a3d7d98036f0f9ac647db3d3a9b)`(int64 NewValue)` | Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.
`public inline void `[`ClearLegacyInventoryId`](#structFRHAPI__InventoryRecord_1aaf472c325358c57db16dd0f9ebf59d92)`()` | Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.
`public inline bool `[`IsLegacyInventoryIdDefaultValue`](#structFRHAPI__InventoryRecord_1a5e6439100c244b919e743144ab3955f9)`() const` | Returns true if LegacyInventoryId_Optional is set and matches the default value.
`public inline void `[`SetLegacyInventoryIdToDefault`](#structFRHAPI__InventoryRecord_1a8c218ecf9118863b1763fc91d1d224da)`()` | Sets the value of LegacyInventoryId_Optional to its default and also sets LegacyInventoryId_IsSet to true.
`public inline ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__InventoryRecord_1a86d117f09a70be7dbea3798b492440af)`()` | Gets the value of Bucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__InventoryRecord_1ada4e475abcd8cb4c84b0d1dccac02539)`() const` | Gets the value of Bucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__InventoryRecord_1a56571aceda540c4788f2ac6b9c5d189f)`(const ERHAPI_InventoryBucket & DefaultValue) const` | Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetBucket`](#structFRHAPI__InventoryRecord_1a26cf9d02b0b0461d4f8985b678ba7984)`(ERHAPI_InventoryBucket & OutValue) const` | Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__InventoryRecord_1a2d52f44b7f2e8d56ec75d785eaa1c1a2)`()` | Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__InventoryRecord_1a39bc8c4912fbb1e08d5e3b423b8bc38e)`() const` | Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetBucket`](#structFRHAPI__InventoryRecord_1ad3c6cd3cf2e373f5024845ba89fb1255)`(ERHAPI_InventoryBucket NewValue)` | Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.
`public inline void `[`ClearBucket`](#structFRHAPI__InventoryRecord_1ab17dce2e9f368e3fc89f9830d1e6c6c9)`()` | Clears the value of Bucket_Optional and sets Bucket_IsSet to false.
`public inline int32 & `[`GetCount`](#structFRHAPI__InventoryRecord_1a113ae247db921a17a2d6da8fef790af6)`()` | Gets the value of Count.
`public inline const int32 & `[`GetCount`](#structFRHAPI__InventoryRecord_1a88dd0330bbda1b30f07284c4e8d1aaa7)`() const` | Gets the value of Count.
`public inline void `[`SetCount`](#structFRHAPI__InventoryRecord_1a291ed91859cbe8c4a09d1571a8676552)`(int32 NewValue)` | Sets the value of Count.
`public inline bool `[`IsCountDefaultValue`](#structFRHAPI__InventoryRecord_1a34f33c463881190a246dc0fa8018a5c9)`() const` | Returns true if Count matches the default value.
`public inline void `[`SetCountToDefault`](#structFRHAPI__InventoryRecord_1a2e3d6d0ddecafa323bc6fe91806ffda2)`()` | Sets the value of Count to its default
`public inline FDateTime & `[`GetAcquired`](#structFRHAPI__InventoryRecord_1ab7cdf8d762ea462bafcf6afb5a5da157)`()` | Gets the value of Acquired.
`public inline const FDateTime & `[`GetAcquired`](#structFRHAPI__InventoryRecord_1a94959f164b05716b82795d7f3bd11f02)`() const` | Gets the value of Acquired.
`public inline void `[`SetAcquired`](#structFRHAPI__InventoryRecord_1a9d28cce12b3de288b1d4d688bc23a394)`(FDateTime NewValue)` | Sets the value of Acquired.
`public inline FDateTime & `[`GetExpires`](#structFRHAPI__InventoryRecord_1a2984a315e1787dc9340e6eed9d77d6ba)`()` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpires`](#structFRHAPI__InventoryRecord_1a4945117e4341c26b44c528415714ca8d)`() const` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpires`](#structFRHAPI__InventoryRecord_1a01c2479e453ed5e15d6dc9a034387e68)`(const FDateTime & DefaultValue) const` | Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExpires`](#structFRHAPI__InventoryRecord_1a1e7b15dbbf77d1f5bb180da2ae13a0f4)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__InventoryRecord_1af8dccf708e058fbf2600546d32d42ec0)`()` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__InventoryRecord_1a6ab1e15b4ae07928318bdf010f263fac)`() const` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExpires`](#structFRHAPI__InventoryRecord_1ab8a9d31b883900a6ba991eb8e3f57d5f)`(FDateTime NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true.
`public inline void `[`ClearExpires`](#structFRHAPI__InventoryRecord_1a54ea52c0937d7f5df39a63e308800bad)`()` | Clears the value of Expires_Optional and sets Expires_IsSet to false.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryRecord_1adffbd7516ddcd9927933676864699c95)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryRecord_1aa4687c79bc3956291cc24688c8fd351a)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryRecord_1ad961452f6d97b614413c4a51d71c1165)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__InventoryRecord_1a4c02526a4d51a60841a90cd696d9a0e0)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InventoryRecord_1aee39f13ca4edbf16b673dcb729e91d0d)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InventoryRecord_1adfc7d677db6c3ca01b84a45e72720342)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__InventoryRecord_1a4d512c49c6baa3295b90513f8cbe17a8)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__InventoryRecord_1adef59732fd95e39cd8699d8fae251ec7)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### Members

#### `public FGuid `[`InventoryId`](#structFRHAPI__InventoryRecord_1a3066d9f5f0c8542ce6c146c8bffe52d7) <a id="structFRHAPI__InventoryRecord_1a3066d9f5f0c8542ce6c146c8bffe52d7"></a>

Unique ID for this Inventory Record.

#### `public ERHAPI_InventoryType `[`Type`](#structFRHAPI__InventoryRecord_1ad1d64f8daeb1c6134e82c777a84d8d88) <a id="structFRHAPI__InventoryRecord_1ad1d64f8daeb1c6134e82c777a84d8d88"></a>

Type of Inventory Record.

#### `public int64 `[`LegacyInventoryId_Optional`](#structFRHAPI__InventoryRecord_1aa0f620a4a9e126d8396a710071523a79) <a id="structFRHAPI__InventoryRecord_1aa0f620a4a9e126d8396a710071523a79"></a>

Legacy Inventory ID.

#### `public bool `[`LegacyInventoryId_IsSet`](#structFRHAPI__InventoryRecord_1add59aa8246c622850361c5ab462c115f) <a id="structFRHAPI__InventoryRecord_1add59aa8246c622850361c5ab462c115f"></a>

true if LegacyInventoryId_Optional has been set to a value

#### `public ERHAPI_InventoryBucket `[`Bucket_Optional`](#structFRHAPI__InventoryRecord_1a11fead5ff19c7fcb7daa91dfac137c6c) <a id="structFRHAPI__InventoryRecord_1a11fead5ff19c7fcb7daa91dfac137c6c"></a>

Bucket for this Inventory Record.

#### `public bool `[`Bucket_IsSet`](#structFRHAPI__InventoryRecord_1a47df941858f320dcb7e7f558562838b7) <a id="structFRHAPI__InventoryRecord_1a47df941858f320dcb7e7f558562838b7"></a>

true if Bucket_Optional has been set to a value

#### `public int32 `[`Count`](#structFRHAPI__InventoryRecord_1aec2fa3f8808055381e28fa978221cb3c) <a id="structFRHAPI__InventoryRecord_1aec2fa3f8808055381e28fa978221cb3c"></a>

Instance count for this Inventory Record.

#### `public FDateTime `[`Acquired`](#structFRHAPI__InventoryRecord_1af556a5b7250364999456be5869d542d2) <a id="structFRHAPI__InventoryRecord_1af556a5b7250364999456be5869d542d2"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public FDateTime `[`Expires_Optional`](#structFRHAPI__InventoryRecord_1a7e8064cb82896b8a7b9d86c1643f10db) <a id="structFRHAPI__InventoryRecord_1a7e8064cb82896b8a7b9d86c1643f10db"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`Expires_IsSet`](#structFRHAPI__InventoryRecord_1abf43a037e93daea3697d69dfc7934661) <a id="structFRHAPI__InventoryRecord_1abf43a037e93daea3697d69dfc7934661"></a>

true if Expires_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__InventoryRecord_1a696afe05e8ced2be8839d4d5af228d8d) <a id="structFRHAPI__InventoryRecord_1a696afe05e8ced2be8839d4d5af228d8d"></a>

Arbitrary map of data for this Inventory Record.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__InventoryRecord_1a9dc9fa9ebdd2679071fb816b57a17384) <a id="structFRHAPI__InventoryRecord_1a9dc9fa9ebdd2679071fb816b57a17384"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__InventoryRecord_1a10e72b7ebba9fa0e15d29318a9fa7705)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InventoryRecord_1a10e72b7ebba9fa0e15d29318a9fa7705"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InventoryRecord_1a507d662df00fd0187e69a3cb3e6487cf)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__InventoryRecord_1a507d662df00fd0187e69a3cb3e6487cf"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetInventoryId`](#structFRHAPI__InventoryRecord_1a94bb21199671283b41bfb6f26819da4b)`()` <a id="structFRHAPI__InventoryRecord_1a94bb21199671283b41bfb6f26819da4b"></a>

Gets the value of InventoryId.

#### `public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__InventoryRecord_1a80004630cabe078cd5b608f3a7027827)`() const` <a id="structFRHAPI__InventoryRecord_1a80004630cabe078cd5b608f3a7027827"></a>

Gets the value of InventoryId.

#### `public inline void `[`SetInventoryId`](#structFRHAPI__InventoryRecord_1aa0c70d6354e9fa93f9bbfcee853439c2)`(FGuid NewValue)` <a id="structFRHAPI__InventoryRecord_1aa0c70d6354e9fa93f9bbfcee853439c2"></a>

Sets the value of InventoryId.

#### `public inline ERHAPI_InventoryType & `[`GetType`](#structFRHAPI__InventoryRecord_1a5ca30fb5643ffe145ac7b58e374c9b1e)`()` <a id="structFRHAPI__InventoryRecord_1a5ca30fb5643ffe145ac7b58e374c9b1e"></a>

Gets the value of Type.

#### `public inline const ERHAPI_InventoryType & `[`GetType`](#structFRHAPI__InventoryRecord_1ab435243d849a30b353f05a2de80ef9a5)`() const` <a id="structFRHAPI__InventoryRecord_1ab435243d849a30b353f05a2de80ef9a5"></a>

Gets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__InventoryRecord_1adc58676d2d90f112efaf4558a479b733)`(ERHAPI_InventoryType NewValue)` <a id="structFRHAPI__InventoryRecord_1adc58676d2d90f112efaf4558a479b733"></a>

Sets the value of Type.

#### `public inline int64 & `[`GetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1aa41c67f28495b9569a418e4a7842ed44)`()` <a id="structFRHAPI__InventoryRecord_1aa41c67f28495b9569a418e4a7842ed44"></a>

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.

#### `public inline const int64 & `[`GetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1a560edee90d67d6eaf21c45de6903eea8)`() const` <a id="structFRHAPI__InventoryRecord_1a560edee90d67d6eaf21c45de6903eea8"></a>

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.

#### `public inline const int64 & `[`GetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1ae307f6d3053dd439c1d1e0175ffbc31e)`(const int64 & DefaultValue) const` <a id="structFRHAPI__InventoryRecord_1ae307f6d3053dd439c1d1e0175ffbc31e"></a>

Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1a924fee5b96ce7a27ce78f2ca22fb53ce)`(int64 & OutValue) const` <a id="structFRHAPI__InventoryRecord_1a924fee5b96ce7a27ce78f2ca22fb53ce"></a>

Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int64 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__InventoryRecord_1a13eb2be839a080301957a145e9ecdc1d)`()` <a id="structFRHAPI__InventoryRecord_1a13eb2be839a080301957a145e9ecdc1d"></a>

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int64 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__InventoryRecord_1ab330a1aeb4b84d7c0b60844c4db3020a)`() const` <a id="structFRHAPI__InventoryRecord_1ab330a1aeb4b84d7c0b60844c4db3020a"></a>

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1a502e9a3d7d98036f0f9ac647db3d3a9b)`(int64 NewValue)` <a id="structFRHAPI__InventoryRecord_1a502e9a3d7d98036f0f9ac647db3d3a9b"></a>

Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.

#### `public inline void `[`ClearLegacyInventoryId`](#structFRHAPI__InventoryRecord_1aaf472c325358c57db16dd0f9ebf59d92)`()` <a id="structFRHAPI__InventoryRecord_1aaf472c325358c57db16dd0f9ebf59d92"></a>

Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.

#### `public inline bool `[`IsLegacyInventoryIdDefaultValue`](#structFRHAPI__InventoryRecord_1a5e6439100c244b919e743144ab3955f9)`() const` <a id="structFRHAPI__InventoryRecord_1a5e6439100c244b919e743144ab3955f9"></a>

Returns true if LegacyInventoryId_Optional is set and matches the default value.

#### `public inline void `[`SetLegacyInventoryIdToDefault`](#structFRHAPI__InventoryRecord_1a8c218ecf9118863b1763fc91d1d224da)`()` <a id="structFRHAPI__InventoryRecord_1a8c218ecf9118863b1763fc91d1d224da"></a>

Sets the value of LegacyInventoryId_Optional to its default and also sets LegacyInventoryId_IsSet to true.

#### `public inline ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__InventoryRecord_1a86d117f09a70be7dbea3798b492440af)`()` <a id="structFRHAPI__InventoryRecord_1a86d117f09a70be7dbea3798b492440af"></a>

Gets the value of Bucket_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__InventoryRecord_1ada4e475abcd8cb4c84b0d1dccac02539)`() const` <a id="structFRHAPI__InventoryRecord_1ada4e475abcd8cb4c84b0d1dccac02539"></a>

Gets the value of Bucket_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__InventoryRecord_1a56571aceda540c4788f2ac6b9c5d189f)`(const ERHAPI_InventoryBucket & DefaultValue) const` <a id="structFRHAPI__InventoryRecord_1a56571aceda540c4788f2ac6b9c5d189f"></a>

Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetBucket`](#structFRHAPI__InventoryRecord_1a26cf9d02b0b0461d4f8985b678ba7984)`(ERHAPI_InventoryBucket & OutValue) const` <a id="structFRHAPI__InventoryRecord_1a26cf9d02b0b0461d4f8985b678ba7984"></a>

Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__InventoryRecord_1a2d52f44b7f2e8d56ec75d785eaa1c1a2)`()` <a id="structFRHAPI__InventoryRecord_1a2d52f44b7f2e8d56ec75d785eaa1c1a2"></a>

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__InventoryRecord_1a39bc8c4912fbb1e08d5e3b423b8bc38e)`() const` <a id="structFRHAPI__InventoryRecord_1a39bc8c4912fbb1e08d5e3b423b8bc38e"></a>

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetBucket`](#structFRHAPI__InventoryRecord_1ad3c6cd3cf2e373f5024845ba89fb1255)`(ERHAPI_InventoryBucket NewValue)` <a id="structFRHAPI__InventoryRecord_1ad3c6cd3cf2e373f5024845ba89fb1255"></a>

Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.

#### `public inline void `[`ClearBucket`](#structFRHAPI__InventoryRecord_1ab17dce2e9f368e3fc89f9830d1e6c6c9)`()` <a id="structFRHAPI__InventoryRecord_1ab17dce2e9f368e3fc89f9830d1e6c6c9"></a>

Clears the value of Bucket_Optional and sets Bucket_IsSet to false.

#### `public inline int32 & `[`GetCount`](#structFRHAPI__InventoryRecord_1a113ae247db921a17a2d6da8fef790af6)`()` <a id="structFRHAPI__InventoryRecord_1a113ae247db921a17a2d6da8fef790af6"></a>

Gets the value of Count.

#### `public inline const int32 & `[`GetCount`](#structFRHAPI__InventoryRecord_1a88dd0330bbda1b30f07284c4e8d1aaa7)`() const` <a id="structFRHAPI__InventoryRecord_1a88dd0330bbda1b30f07284c4e8d1aaa7"></a>

Gets the value of Count.

#### `public inline void `[`SetCount`](#structFRHAPI__InventoryRecord_1a291ed91859cbe8c4a09d1571a8676552)`(int32 NewValue)` <a id="structFRHAPI__InventoryRecord_1a291ed91859cbe8c4a09d1571a8676552"></a>

Sets the value of Count.

#### `public inline bool `[`IsCountDefaultValue`](#structFRHAPI__InventoryRecord_1a34f33c463881190a246dc0fa8018a5c9)`() const` <a id="structFRHAPI__InventoryRecord_1a34f33c463881190a246dc0fa8018a5c9"></a>

Returns true if Count matches the default value.

#### `public inline void `[`SetCountToDefault`](#structFRHAPI__InventoryRecord_1a2e3d6d0ddecafa323bc6fe91806ffda2)`()` <a id="structFRHAPI__InventoryRecord_1a2e3d6d0ddecafa323bc6fe91806ffda2"></a>

Sets the value of Count to its default

#### `public inline FDateTime & `[`GetAcquired`](#structFRHAPI__InventoryRecord_1ab7cdf8d762ea462bafcf6afb5a5da157)`()` <a id="structFRHAPI__InventoryRecord_1ab7cdf8d762ea462bafcf6afb5a5da157"></a>

Gets the value of Acquired.

#### `public inline const FDateTime & `[`GetAcquired`](#structFRHAPI__InventoryRecord_1a94959f164b05716b82795d7f3bd11f02)`() const` <a id="structFRHAPI__InventoryRecord_1a94959f164b05716b82795d7f3bd11f02"></a>

Gets the value of Acquired.

#### `public inline void `[`SetAcquired`](#structFRHAPI__InventoryRecord_1a9d28cce12b3de288b1d4d688bc23a394)`(FDateTime NewValue)` <a id="structFRHAPI__InventoryRecord_1a9d28cce12b3de288b1d4d688bc23a394"></a>

Sets the value of Acquired.

#### `public inline FDateTime & `[`GetExpires`](#structFRHAPI__InventoryRecord_1a2984a315e1787dc9340e6eed9d77d6ba)`()` <a id="structFRHAPI__InventoryRecord_1a2984a315e1787dc9340e6eed9d77d6ba"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpires`](#structFRHAPI__InventoryRecord_1a4945117e4341c26b44c528415714ca8d)`() const` <a id="structFRHAPI__InventoryRecord_1a4945117e4341c26b44c528415714ca8d"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpires`](#structFRHAPI__InventoryRecord_1a01c2479e453ed5e15d6dc9a034387e68)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__InventoryRecord_1a01c2479e453ed5e15d6dc9a034387e68"></a>

Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExpires`](#structFRHAPI__InventoryRecord_1a1e7b15dbbf77d1f5bb180da2ae13a0f4)`(FDateTime & OutValue) const` <a id="structFRHAPI__InventoryRecord_1a1e7b15dbbf77d1f5bb180da2ae13a0f4"></a>

Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__InventoryRecord_1af8dccf708e058fbf2600546d32d42ec0)`()` <a id="structFRHAPI__InventoryRecord_1af8dccf708e058fbf2600546d32d42ec0"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__InventoryRecord_1a6ab1e15b4ae07928318bdf010f263fac)`() const` <a id="structFRHAPI__InventoryRecord_1a6ab1e15b4ae07928318bdf010f263fac"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExpires`](#structFRHAPI__InventoryRecord_1ab8a9d31b883900a6ba991eb8e3f57d5f)`(FDateTime NewValue)` <a id="structFRHAPI__InventoryRecord_1ab8a9d31b883900a6ba991eb8e3f57d5f"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true.

#### `public inline void `[`ClearExpires`](#structFRHAPI__InventoryRecord_1a54ea52c0937d7f5df39a63e308800bad)`()` <a id="structFRHAPI__InventoryRecord_1a54ea52c0937d7f5df39a63e308800bad"></a>

Clears the value of Expires_Optional and sets Expires_IsSet to false.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryRecord_1adffbd7516ddcd9927933676864699c95)`()` <a id="structFRHAPI__InventoryRecord_1adffbd7516ddcd9927933676864699c95"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryRecord_1aa4687c79bc3956291cc24688c8fd351a)`() const` <a id="structFRHAPI__InventoryRecord_1aa4687c79bc3956291cc24688c8fd351a"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryRecord_1ad961452f6d97b614413c4a51d71c1165)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__InventoryRecord_1ad961452f6d97b614413c4a51d71c1165"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__InventoryRecord_1a4c02526a4d51a60841a90cd696d9a0e0)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__InventoryRecord_1a4c02526a4d51a60841a90cd696d9a0e0"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InventoryRecord_1aee39f13ca4edbf16b673dcb729e91d0d)`()` <a id="structFRHAPI__InventoryRecord_1aee39f13ca4edbf16b673dcb729e91d0d"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InventoryRecord_1adfc7d677db6c3ca01b84a45e72720342)`() const` <a id="structFRHAPI__InventoryRecord_1adfc7d677db6c3ca01b84a45e72720342"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__InventoryRecord_1a4d512c49c6baa3295b90513f8cbe17a8)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__InventoryRecord_1a4d512c49c6baa3295b90513f8cbe17a8"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__InventoryRecord_1adef59732fd95e39cd8699d8fae251ec7)`()` <a id="structFRHAPI__InventoryRecord_1adef59732fd95e39cd8699d8fae251ec7"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

