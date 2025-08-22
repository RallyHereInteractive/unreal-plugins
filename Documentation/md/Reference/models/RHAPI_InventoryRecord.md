---
title: RHAPI_InventoryRecord
---

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

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`InventoryId`](#structFRHAPI__InventoryRecord_1a3066d9f5f0c8542ce6c146c8bffe52d7) | Unique ID for this Inventory Record.
`public ERHAPI_InventoryType `[`Type`](#structFRHAPI__InventoryRecord_1ad1d64f8daeb1c6134e82c777a84d8d88) | 
`public int32 `[`LegacyInventoryId_Optional`](#structFRHAPI__InventoryRecord_1a4f38f47ec5f61a7ef9677c880556cd7d) | 
`public bool `[`LegacyInventoryId_IsSet`](#structFRHAPI__InventoryRecord_1add59aa8246c622850361c5ab462c115f) | true if LegacyInventoryId_Optional has been set to a value
`public bool `[`LegacyInventoryId_IsNull`](#structFRHAPI__InventoryRecord_1a1e254f41ea46168deffa85a421b3cca2) | true if LegacyInventoryId_Optional has been explicitly set to null
`public ERHAPI_InventoryBucket `[`Bucket_Optional`](#structFRHAPI__InventoryRecord_1a11fead5ff19c7fcb7daa91dfac137c6c) | 
`public bool `[`Bucket_IsSet`](#structFRHAPI__InventoryRecord_1a47df941858f320dcb7e7f558562838b7) | true if Bucket_Optional has been set to a value
`public int32 `[`Count`](#structFRHAPI__InventoryRecord_1aec2fa3f8808055381e28fa978221cb3c) | Instance count for this Inventory Record.
`public FDateTime `[`Acquired`](#structFRHAPI__InventoryRecord_1af556a5b7250364999456be5869d542d2) | When this Inventory Record was acquired.
`public FDateTime `[`Expires_Optional`](#structFRHAPI__InventoryRecord_1a7e8064cb82896b8a7b9d86c1643f10db) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`Expires_IsSet`](#structFRHAPI__InventoryRecord_1abf43a037e93daea3697d69dfc7934661) | true if Expires_Optional has been set to a value
`public bool `[`Expires_IsNull`](#structFRHAPI__InventoryRecord_1a464d6f62e802db0d328a493a8c1db55a) | true if Expires_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__InventoryRecord_1a696afe05e8ced2be8839d4d5af228d8d) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__InventoryRecord_1a9dc9fa9ebdd2679071fb816b57a17384) | true if CustomData_Optional has been set to a value
`public bool `[`CustomData_IsNull`](#structFRHAPI__InventoryRecord_1a05266dd739624a03057315a7203eb2c4) | true if CustomData_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__InventoryRecord_1ae7ede53a3c480ddb5181bbbdce0f4401)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InventoryRecord_1a132aa4ef0eacce492be7b70e6a447ad8)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetInventoryId`](#structFRHAPI__InventoryRecord_1abc7f9a3d0d249780b4002d443274ad41)`()` | Gets the value of InventoryId.
`public inline FORCEINLINE const FGuid & `[`GetInventoryId`](#structFRHAPI__InventoryRecord_1a4a52dce4a55713f553b6be1499b30692)`() const` | Gets the value of InventoryId.
`public inline FORCEINLINE void `[`SetInventoryId`](#structFRHAPI__InventoryRecord_1ac795a350d6ea26ec7febdda516e7ee57)`(const FGuid & NewValue)` | Sets the value of InventoryId.
`public inline FORCEINLINE void `[`SetInventoryId`](#structFRHAPI__InventoryRecord_1ace24abcf8e0f3696e5cc45c2d877d674)`(FGuid && NewValue)` | Sets the value of InventoryId using move semantics.
`public inline FORCEINLINE ERHAPI_InventoryType & `[`GetType`](#structFRHAPI__InventoryRecord_1afc7906f07a19079846346b38494aeaec)`()` | Gets the value of Type.
`public inline FORCEINLINE const ERHAPI_InventoryType & `[`GetType`](#structFRHAPI__InventoryRecord_1ab00b9cb498b72ebc5f0c8add09c0a105)`() const` | Gets the value of Type.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__InventoryRecord_1a65109d0a9832638e9eafd0beedb2c071)`(const ERHAPI_InventoryType & NewValue)` | Sets the value of Type.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__InventoryRecord_1af89a7b78a9343335c0ec8f191025e174)`(ERHAPI_InventoryType && NewValue)` | Sets the value of Type using move semantics.
`public inline FORCEINLINE int32 & `[`GetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1a7dc50bf692a3b1cafb90e9eb1065baa4)`()` | Gets the value of LegacyInventoryId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1a776e4757980ec1fe3a0cb9570afb358e)`() const` | Gets the value of LegacyInventoryId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1ac6458b361f60bcd3193c5168f922f7bc)`(const int32 & DefaultValue) const` | Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1a8d2efaab21ab8c69c8d1f6f282ae96c4)`(int32 & OutValue) const` | Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__InventoryRecord_1a337326444f298f0e8a670dc790ce7367)`()` | Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__InventoryRecord_1a3c2eb7ae2388bbf67270bfedbc0da7fd)`() const` | Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1a2550e8f10065dde28c443cb0ed85e7f0)`(const int32 & NewValue)` | Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.
`public inline FORCEINLINE void `[`SetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1a052cd08871bd61fcbbe9a3b946120f0b)`(int32 && NewValue)` | Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true using move semantics.
`public inline void `[`ClearLegacyInventoryId`](#structFRHAPI__InventoryRecord_1aaf472c325358c57db16dd0f9ebf59d92)`()` | Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_LegacyInventoryId`](#structFRHAPI__InventoryRecord_1a5e6d3c7cbabf0eb798e07c7308ffe433)`()` | Returns the default value of LegacyInventoryId.
`public inline FORCEINLINE void `[`SetLegacyInventoryIdToNull`](#structFRHAPI__InventoryRecord_1a492e1b02521b302cc9b57e6980871781)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsLegacyInventoryIdNull`](#structFRHAPI__InventoryRecord_1a2d84847f67bc05e3bc82959eec37a109)`() const` | Checks whether LegacyInventoryId_Optional is set to null.
`public inline FORCEINLINE ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__InventoryRecord_1a17cb872fef1cf7eb7581b3b385d3799f)`()` | Gets the value of Bucket_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__InventoryRecord_1a11bfbb142f80c86d3eacd974c20faa89)`() const` | Gets the value of Bucket_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__InventoryRecord_1a44eaa9f5df4381169314945fed95ce80)`(const ERHAPI_InventoryBucket & DefaultValue) const` | Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetBucket`](#structFRHAPI__InventoryRecord_1a4eb53179033539a554f8a3d8350620fc)`(ERHAPI_InventoryBucket & OutValue) const` | Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__InventoryRecord_1a1184ce5ed2730226c4fef3a8959ef479)`()` | Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__InventoryRecord_1aebfae49210dd6d3441c232a2c30cc764)`() const` | Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetBucket`](#structFRHAPI__InventoryRecord_1ab7acee62b898a189d3a32f4bf4da4836)`(const ERHAPI_InventoryBucket & NewValue)` | Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.
`public inline FORCEINLINE void `[`SetBucket`](#structFRHAPI__InventoryRecord_1a7ad87da7dfc0a82fb89ecdf04a085429)`(ERHAPI_InventoryBucket && NewValue)` | Sets the value of Bucket_Optional and also sets Bucket_IsSet to true using move semantics.
`public inline void `[`ClearBucket`](#structFRHAPI__InventoryRecord_1ab17dce2e9f368e3fc89f9830d1e6c6c9)`()` | Clears the value of Bucket_Optional and sets Bucket_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetCount`](#structFRHAPI__InventoryRecord_1a46ec3955ea270e20481d127a509a2a9d)`()` | Gets the value of Count.
`public inline FORCEINLINE const int32 & `[`GetCount`](#structFRHAPI__InventoryRecord_1a338d25f17363535020e9ceb26a961e6a)`() const` | Gets the value of Count.
`public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__InventoryRecord_1a309fd35f239987f80df17771fa5abfd5)`(const int32 & NewValue)` | Sets the value of Count.
`public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__InventoryRecord_1a80fe0f9e0d3f1b74648e491f30233fa9)`(int32 && NewValue)` | Sets the value of Count using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Count`](#structFRHAPI__InventoryRecord_1a7082b4c6636276958abc71bc2d2e61b1)`()` | Returns the default value of Count.
`public inline FORCEINLINE FDateTime & `[`GetAcquired`](#structFRHAPI__InventoryRecord_1ac7d87270a621a48cc15943c634eef57d)`()` | Gets the value of Acquired.
`public inline FORCEINLINE const FDateTime & `[`GetAcquired`](#structFRHAPI__InventoryRecord_1a672a20a74ddbd01407be171a1f0843e2)`() const` | Gets the value of Acquired.
`public inline FORCEINLINE void `[`SetAcquired`](#structFRHAPI__InventoryRecord_1ae1517778b22a4f600bc62a91061be2c7)`(const FDateTime & NewValue)` | Sets the value of Acquired.
`public inline FORCEINLINE void `[`SetAcquired`](#structFRHAPI__InventoryRecord_1a7e9d5beb90cec1e2f3eaaa4e24a1e1dd)`(FDateTime && NewValue)` | Sets the value of Acquired using move semantics.
`public inline FORCEINLINE FDateTime & `[`GetExpires`](#structFRHAPI__InventoryRecord_1a98b898ce9b480a3af2c25d5263f2afe9)`()` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__InventoryRecord_1a12e8ac5f936bf061d019bf1404b836ae)`() const` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__InventoryRecord_1a9e21881b5611c57d2a2238eaafd8084c)`(const FDateTime & DefaultValue) const` | Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExpires`](#structFRHAPI__InventoryRecord_1abed760543dbece133887c1cb14b62dcf)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__InventoryRecord_1a1408ecf2db07a02f11f7185d278bbece)`()` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__InventoryRecord_1ad2a04cd82a5a582f047f9e1654bfa9cb)`() const` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__InventoryRecord_1af6428ee027ed6b8deaabdc8b9661f4c4)`(const FDateTime & NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true.
`public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__InventoryRecord_1a21289956960173f9d780260341d42e9d)`(FDateTime && NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.
`public inline void `[`ClearExpires`](#structFRHAPI__InventoryRecord_1a54ea52c0937d7f5df39a63e308800bad)`()` | Clears the value of Expires_Optional and sets Expires_IsSet to false.
`public inline FORCEINLINE void `[`SetExpiresToNull`](#structFRHAPI__InventoryRecord_1aed1cc4314397ff89b876f4b9d0f5865c)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsExpiresNull`](#structFRHAPI__InventoryRecord_1a1218de851d95e812d106f724bf03928a)`() const` | Checks whether Expires_Optional is set to null.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryRecord_1a8e3cc54da2c438882c47ce22958008a5)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryRecord_1ac731d1029c465e7646da0c040e560d6f)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryRecord_1a863d693cfa569bb5bcca3d4e6a006708)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__InventoryRecord_1a1062fc80f866fa78e0ef3c31e24c4381)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InventoryRecord_1af98a46d46da0112781f9961cb21c75b0)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InventoryRecord_1aae7224e0758359d40dba34d38e28c888)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InventoryRecord_1a6b3f56dbfdbc49617d1b3e6b8510babe)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InventoryRecord_1a1793a5be189de95e8d93ec99dcb74a52)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__InventoryRecord_1adef59732fd95e39cd8699d8fae251ec7)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__InventoryRecord_1ac93c188e284ccd670fc2d9e5629d695f)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__InventoryRecord_1acf0cb60615d1c028061432d0adede064)`() const` | Checks whether CustomData_Optional is set to null.

### Members

#### `public FGuid `[`InventoryId`](#structFRHAPI__InventoryRecord_1a3066d9f5f0c8542ce6c146c8bffe52d7) <a id="structFRHAPI__InventoryRecord_1a3066d9f5f0c8542ce6c146c8bffe52d7"></a>

Unique ID for this Inventory Record.

#### `public ERHAPI_InventoryType `[`Type`](#structFRHAPI__InventoryRecord_1ad1d64f8daeb1c6134e82c777a84d8d88) <a id="structFRHAPI__InventoryRecord_1ad1d64f8daeb1c6134e82c777a84d8d88"></a>

#### `public int32 `[`LegacyInventoryId_Optional`](#structFRHAPI__InventoryRecord_1a4f38f47ec5f61a7ef9677c880556cd7d) <a id="structFRHAPI__InventoryRecord_1a4f38f47ec5f61a7ef9677c880556cd7d"></a>

#### `public bool `[`LegacyInventoryId_IsSet`](#structFRHAPI__InventoryRecord_1add59aa8246c622850361c5ab462c115f) <a id="structFRHAPI__InventoryRecord_1add59aa8246c622850361c5ab462c115f"></a>

true if LegacyInventoryId_Optional has been set to a value

#### `public bool `[`LegacyInventoryId_IsNull`](#structFRHAPI__InventoryRecord_1a1e254f41ea46168deffa85a421b3cca2) <a id="structFRHAPI__InventoryRecord_1a1e254f41ea46168deffa85a421b3cca2"></a>

true if LegacyInventoryId_Optional has been explicitly set to null

#### `public ERHAPI_InventoryBucket `[`Bucket_Optional`](#structFRHAPI__InventoryRecord_1a11fead5ff19c7fcb7daa91dfac137c6c) <a id="structFRHAPI__InventoryRecord_1a11fead5ff19c7fcb7daa91dfac137c6c"></a>

#### `public bool `[`Bucket_IsSet`](#structFRHAPI__InventoryRecord_1a47df941858f320dcb7e7f558562838b7) <a id="structFRHAPI__InventoryRecord_1a47df941858f320dcb7e7f558562838b7"></a>

true if Bucket_Optional has been set to a value

#### `public int32 `[`Count`](#structFRHAPI__InventoryRecord_1aec2fa3f8808055381e28fa978221cb3c) <a id="structFRHAPI__InventoryRecord_1aec2fa3f8808055381e28fa978221cb3c"></a>

Instance count for this Inventory Record.

#### `public FDateTime `[`Acquired`](#structFRHAPI__InventoryRecord_1af556a5b7250364999456be5869d542d2) <a id="structFRHAPI__InventoryRecord_1af556a5b7250364999456be5869d542d2"></a>

When this Inventory Record was acquired.

#### `public FDateTime `[`Expires_Optional`](#structFRHAPI__InventoryRecord_1a7e8064cb82896b8a7b9d86c1643f10db) <a id="structFRHAPI__InventoryRecord_1a7e8064cb82896b8a7b9d86c1643f10db"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`Expires_IsSet`](#structFRHAPI__InventoryRecord_1abf43a037e93daea3697d69dfc7934661) <a id="structFRHAPI__InventoryRecord_1abf43a037e93daea3697d69dfc7934661"></a>

true if Expires_Optional has been set to a value

#### `public bool `[`Expires_IsNull`](#structFRHAPI__InventoryRecord_1a464d6f62e802db0d328a493a8c1db55a) <a id="structFRHAPI__InventoryRecord_1a464d6f62e802db0d328a493a8c1db55a"></a>

true if Expires_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__InventoryRecord_1a696afe05e8ced2be8839d4d5af228d8d) <a id="structFRHAPI__InventoryRecord_1a696afe05e8ced2be8839d4d5af228d8d"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__InventoryRecord_1a9dc9fa9ebdd2679071fb816b57a17384) <a id="structFRHAPI__InventoryRecord_1a9dc9fa9ebdd2679071fb816b57a17384"></a>

true if CustomData_Optional has been set to a value

#### `public bool `[`CustomData_IsNull`](#structFRHAPI__InventoryRecord_1a05266dd739624a03057315a7203eb2c4) <a id="structFRHAPI__InventoryRecord_1a05266dd739624a03057315a7203eb2c4"></a>

true if CustomData_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__InventoryRecord_1ae7ede53a3c480ddb5181bbbdce0f4401)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InventoryRecord_1ae7ede53a3c480ddb5181bbbdce0f4401"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InventoryRecord_1a132aa4ef0eacce492be7b70e6a447ad8)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__InventoryRecord_1a132aa4ef0eacce492be7b70e6a447ad8"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetInventoryId`](#structFRHAPI__InventoryRecord_1abc7f9a3d0d249780b4002d443274ad41)`()` <a id="structFRHAPI__InventoryRecord_1abc7f9a3d0d249780b4002d443274ad41"></a>

Gets the value of InventoryId.

#### `public inline FORCEINLINE const FGuid & `[`GetInventoryId`](#structFRHAPI__InventoryRecord_1a4a52dce4a55713f553b6be1499b30692)`() const` <a id="structFRHAPI__InventoryRecord_1a4a52dce4a55713f553b6be1499b30692"></a>

Gets the value of InventoryId.

#### `public inline FORCEINLINE void `[`SetInventoryId`](#structFRHAPI__InventoryRecord_1ac795a350d6ea26ec7febdda516e7ee57)`(const FGuid & NewValue)` <a id="structFRHAPI__InventoryRecord_1ac795a350d6ea26ec7febdda516e7ee57"></a>

Sets the value of InventoryId.

#### `public inline FORCEINLINE void `[`SetInventoryId`](#structFRHAPI__InventoryRecord_1ace24abcf8e0f3696e5cc45c2d877d674)`(FGuid && NewValue)` <a id="structFRHAPI__InventoryRecord_1ace24abcf8e0f3696e5cc45c2d877d674"></a>

Sets the value of InventoryId using move semantics.

#### `public inline FORCEINLINE ERHAPI_InventoryType & `[`GetType`](#structFRHAPI__InventoryRecord_1afc7906f07a19079846346b38494aeaec)`()` <a id="structFRHAPI__InventoryRecord_1afc7906f07a19079846346b38494aeaec"></a>

Gets the value of Type.

#### `public inline FORCEINLINE const ERHAPI_InventoryType & `[`GetType`](#structFRHAPI__InventoryRecord_1ab00b9cb498b72ebc5f0c8add09c0a105)`() const` <a id="structFRHAPI__InventoryRecord_1ab00b9cb498b72ebc5f0c8add09c0a105"></a>

Gets the value of Type.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__InventoryRecord_1a65109d0a9832638e9eafd0beedb2c071)`(const ERHAPI_InventoryType & NewValue)` <a id="structFRHAPI__InventoryRecord_1a65109d0a9832638e9eafd0beedb2c071"></a>

Sets the value of Type.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__InventoryRecord_1af89a7b78a9343335c0ec8f191025e174)`(ERHAPI_InventoryType && NewValue)` <a id="structFRHAPI__InventoryRecord_1af89a7b78a9343335c0ec8f191025e174"></a>

Sets the value of Type using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1a7dc50bf692a3b1cafb90e9eb1065baa4)`()` <a id="structFRHAPI__InventoryRecord_1a7dc50bf692a3b1cafb90e9eb1065baa4"></a>

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1a776e4757980ec1fe3a0cb9570afb358e)`() const` <a id="structFRHAPI__InventoryRecord_1a776e4757980ec1fe3a0cb9570afb358e"></a>

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1ac6458b361f60bcd3193c5168f922f7bc)`(const int32 & DefaultValue) const` <a id="structFRHAPI__InventoryRecord_1ac6458b361f60bcd3193c5168f922f7bc"></a>

Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1a8d2efaab21ab8c69c8d1f6f282ae96c4)`(int32 & OutValue) const` <a id="structFRHAPI__InventoryRecord_1a8d2efaab21ab8c69c8d1f6f282ae96c4"></a>

Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__InventoryRecord_1a337326444f298f0e8a670dc790ce7367)`()` <a id="structFRHAPI__InventoryRecord_1a337326444f298f0e8a670dc790ce7367"></a>

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__InventoryRecord_1a3c2eb7ae2388bbf67270bfedbc0da7fd)`() const` <a id="structFRHAPI__InventoryRecord_1a3c2eb7ae2388bbf67270bfedbc0da7fd"></a>

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1a2550e8f10065dde28c443cb0ed85e7f0)`(const int32 & NewValue)` <a id="structFRHAPI__InventoryRecord_1a2550e8f10065dde28c443cb0ed85e7f0"></a>

Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1a052cd08871bd61fcbbe9a3b946120f0b)`(int32 && NewValue)` <a id="structFRHAPI__InventoryRecord_1a052cd08871bd61fcbbe9a3b946120f0b"></a>

Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true using move semantics.

#### `public inline void `[`ClearLegacyInventoryId`](#structFRHAPI__InventoryRecord_1aaf472c325358c57db16dd0f9ebf59d92)`()` <a id="structFRHAPI__InventoryRecord_1aaf472c325358c57db16dd0f9ebf59d92"></a>

Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_LegacyInventoryId`](#structFRHAPI__InventoryRecord_1a5e6d3c7cbabf0eb798e07c7308ffe433)`()` <a id="structFRHAPI__InventoryRecord_1a5e6d3c7cbabf0eb798e07c7308ffe433"></a>

Returns the default value of LegacyInventoryId.

#### `public inline FORCEINLINE void `[`SetLegacyInventoryIdToNull`](#structFRHAPI__InventoryRecord_1a492e1b02521b302cc9b57e6980871781)`()` <a id="structFRHAPI__InventoryRecord_1a492e1b02521b302cc9b57e6980871781"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsLegacyInventoryIdNull`](#structFRHAPI__InventoryRecord_1a2d84847f67bc05e3bc82959eec37a109)`() const` <a id="structFRHAPI__InventoryRecord_1a2d84847f67bc05e3bc82959eec37a109"></a>

Checks whether LegacyInventoryId_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__InventoryRecord_1a17cb872fef1cf7eb7581b3b385d3799f)`()` <a id="structFRHAPI__InventoryRecord_1a17cb872fef1cf7eb7581b3b385d3799f"></a>

Gets the value of Bucket_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__InventoryRecord_1a11bfbb142f80c86d3eacd974c20faa89)`() const` <a id="structFRHAPI__InventoryRecord_1a11bfbb142f80c86d3eacd974c20faa89"></a>

Gets the value of Bucket_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__InventoryRecord_1a44eaa9f5df4381169314945fed95ce80)`(const ERHAPI_InventoryBucket & DefaultValue) const` <a id="structFRHAPI__InventoryRecord_1a44eaa9f5df4381169314945fed95ce80"></a>

Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetBucket`](#structFRHAPI__InventoryRecord_1a4eb53179033539a554f8a3d8350620fc)`(ERHAPI_InventoryBucket & OutValue) const` <a id="structFRHAPI__InventoryRecord_1a4eb53179033539a554f8a3d8350620fc"></a>

Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__InventoryRecord_1a1184ce5ed2730226c4fef3a8959ef479)`()` <a id="structFRHAPI__InventoryRecord_1a1184ce5ed2730226c4fef3a8959ef479"></a>

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__InventoryRecord_1aebfae49210dd6d3441c232a2c30cc764)`() const` <a id="structFRHAPI__InventoryRecord_1aebfae49210dd6d3441c232a2c30cc764"></a>

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetBucket`](#structFRHAPI__InventoryRecord_1ab7acee62b898a189d3a32f4bf4da4836)`(const ERHAPI_InventoryBucket & NewValue)` <a id="structFRHAPI__InventoryRecord_1ab7acee62b898a189d3a32f4bf4da4836"></a>

Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.

#### `public inline FORCEINLINE void `[`SetBucket`](#structFRHAPI__InventoryRecord_1a7ad87da7dfc0a82fb89ecdf04a085429)`(ERHAPI_InventoryBucket && NewValue)` <a id="structFRHAPI__InventoryRecord_1a7ad87da7dfc0a82fb89ecdf04a085429"></a>

Sets the value of Bucket_Optional and also sets Bucket_IsSet to true using move semantics.

#### `public inline void `[`ClearBucket`](#structFRHAPI__InventoryRecord_1ab17dce2e9f368e3fc89f9830d1e6c6c9)`()` <a id="structFRHAPI__InventoryRecord_1ab17dce2e9f368e3fc89f9830d1e6c6c9"></a>

Clears the value of Bucket_Optional and sets Bucket_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetCount`](#structFRHAPI__InventoryRecord_1a46ec3955ea270e20481d127a509a2a9d)`()` <a id="structFRHAPI__InventoryRecord_1a46ec3955ea270e20481d127a509a2a9d"></a>

Gets the value of Count.

#### `public inline FORCEINLINE const int32 & `[`GetCount`](#structFRHAPI__InventoryRecord_1a338d25f17363535020e9ceb26a961e6a)`() const` <a id="structFRHAPI__InventoryRecord_1a338d25f17363535020e9ceb26a961e6a"></a>

Gets the value of Count.

#### `public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__InventoryRecord_1a309fd35f239987f80df17771fa5abfd5)`(const int32 & NewValue)` <a id="structFRHAPI__InventoryRecord_1a309fd35f239987f80df17771fa5abfd5"></a>

Sets the value of Count.

#### `public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__InventoryRecord_1a80fe0f9e0d3f1b74648e491f30233fa9)`(int32 && NewValue)` <a id="structFRHAPI__InventoryRecord_1a80fe0f9e0d3f1b74648e491f30233fa9"></a>

Sets the value of Count using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Count`](#structFRHAPI__InventoryRecord_1a7082b4c6636276958abc71bc2d2e61b1)`()` <a id="structFRHAPI__InventoryRecord_1a7082b4c6636276958abc71bc2d2e61b1"></a>

Returns the default value of Count.

#### `public inline FORCEINLINE FDateTime & `[`GetAcquired`](#structFRHAPI__InventoryRecord_1ac7d87270a621a48cc15943c634eef57d)`()` <a id="structFRHAPI__InventoryRecord_1ac7d87270a621a48cc15943c634eef57d"></a>

Gets the value of Acquired.

#### `public inline FORCEINLINE const FDateTime & `[`GetAcquired`](#structFRHAPI__InventoryRecord_1a672a20a74ddbd01407be171a1f0843e2)`() const` <a id="structFRHAPI__InventoryRecord_1a672a20a74ddbd01407be171a1f0843e2"></a>

Gets the value of Acquired.

#### `public inline FORCEINLINE void `[`SetAcquired`](#structFRHAPI__InventoryRecord_1ae1517778b22a4f600bc62a91061be2c7)`(const FDateTime & NewValue)` <a id="structFRHAPI__InventoryRecord_1ae1517778b22a4f600bc62a91061be2c7"></a>

Sets the value of Acquired.

#### `public inline FORCEINLINE void `[`SetAcquired`](#structFRHAPI__InventoryRecord_1a7e9d5beb90cec1e2f3eaaa4e24a1e1dd)`(FDateTime && NewValue)` <a id="structFRHAPI__InventoryRecord_1a7e9d5beb90cec1e2f3eaaa4e24a1e1dd"></a>

Sets the value of Acquired using move semantics.

#### `public inline FORCEINLINE FDateTime & `[`GetExpires`](#structFRHAPI__InventoryRecord_1a98b898ce9b480a3af2c25d5263f2afe9)`()` <a id="structFRHAPI__InventoryRecord_1a98b898ce9b480a3af2c25d5263f2afe9"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__InventoryRecord_1a12e8ac5f936bf061d019bf1404b836ae)`() const` <a id="structFRHAPI__InventoryRecord_1a12e8ac5f936bf061d019bf1404b836ae"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__InventoryRecord_1a9e21881b5611c57d2a2238eaafd8084c)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__InventoryRecord_1a9e21881b5611c57d2a2238eaafd8084c"></a>

Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExpires`](#structFRHAPI__InventoryRecord_1abed760543dbece133887c1cb14b62dcf)`(FDateTime & OutValue) const` <a id="structFRHAPI__InventoryRecord_1abed760543dbece133887c1cb14b62dcf"></a>

Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__InventoryRecord_1a1408ecf2db07a02f11f7185d278bbece)`()` <a id="structFRHAPI__InventoryRecord_1a1408ecf2db07a02f11f7185d278bbece"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__InventoryRecord_1ad2a04cd82a5a582f047f9e1654bfa9cb)`() const` <a id="structFRHAPI__InventoryRecord_1ad2a04cd82a5a582f047f9e1654bfa9cb"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__InventoryRecord_1af6428ee027ed6b8deaabdc8b9661f4c4)`(const FDateTime & NewValue)` <a id="structFRHAPI__InventoryRecord_1af6428ee027ed6b8deaabdc8b9661f4c4"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__InventoryRecord_1a21289956960173f9d780260341d42e9d)`(FDateTime && NewValue)` <a id="structFRHAPI__InventoryRecord_1a21289956960173f9d780260341d42e9d"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.

#### `public inline void `[`ClearExpires`](#structFRHAPI__InventoryRecord_1a54ea52c0937d7f5df39a63e308800bad)`()` <a id="structFRHAPI__InventoryRecord_1a54ea52c0937d7f5df39a63e308800bad"></a>

Clears the value of Expires_Optional and sets Expires_IsSet to false.

#### `public inline FORCEINLINE void `[`SetExpiresToNull`](#structFRHAPI__InventoryRecord_1aed1cc4314397ff89b876f4b9d0f5865c)`()` <a id="structFRHAPI__InventoryRecord_1aed1cc4314397ff89b876f4b9d0f5865c"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsExpiresNull`](#structFRHAPI__InventoryRecord_1a1218de851d95e812d106f724bf03928a)`() const` <a id="structFRHAPI__InventoryRecord_1a1218de851d95e812d106f724bf03928a"></a>

Checks whether Expires_Optional is set to null.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryRecord_1a8e3cc54da2c438882c47ce22958008a5)`()` <a id="structFRHAPI__InventoryRecord_1a8e3cc54da2c438882c47ce22958008a5"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryRecord_1ac731d1029c465e7646da0c040e560d6f)`() const` <a id="structFRHAPI__InventoryRecord_1ac731d1029c465e7646da0c040e560d6f"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryRecord_1a863d693cfa569bb5bcca3d4e6a006708)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__InventoryRecord_1a863d693cfa569bb5bcca3d4e6a006708"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__InventoryRecord_1a1062fc80f866fa78e0ef3c31e24c4381)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__InventoryRecord_1a1062fc80f866fa78e0ef3c31e24c4381"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InventoryRecord_1af98a46d46da0112781f9961cb21c75b0)`()` <a id="structFRHAPI__InventoryRecord_1af98a46d46da0112781f9961cb21c75b0"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InventoryRecord_1aae7224e0758359d40dba34d38e28c888)`() const` <a id="structFRHAPI__InventoryRecord_1aae7224e0758359d40dba34d38e28c888"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InventoryRecord_1a6b3f56dbfdbc49617d1b3e6b8510babe)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__InventoryRecord_1a6b3f56dbfdbc49617d1b3e6b8510babe"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InventoryRecord_1a1793a5be189de95e8d93ec99dcb74a52)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__InventoryRecord_1a1793a5be189de95e8d93ec99dcb74a52"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__InventoryRecord_1adef59732fd95e39cd8699d8fae251ec7)`()` <a id="structFRHAPI__InventoryRecord_1adef59732fd95e39cd8699d8fae251ec7"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__InventoryRecord_1ac93c188e284ccd670fc2d9e5629d695f)`()` <a id="structFRHAPI__InventoryRecord_1ac93c188e284ccd670fc2d9e5629d695f"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__InventoryRecord_1acf0cb60615d1c028061432d0adede064)`() const` <a id="structFRHAPI__InventoryRecord_1acf0cb60615d1c028061432d0adede064"></a>

Checks whether CustomData_Optional is set to null.

