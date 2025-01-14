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
`public virtual bool `[`FromJson`](#structFRHAPI__InventoryRecord_1ae7ede53a3c480ddb5181bbbdce0f4401)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InventoryRecord_1a132aa4ef0eacce492be7b70e6a447ad8)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetInventoryId`](#structFRHAPI__InventoryRecord_1a3096e834012f697b64f5fb1ff070f436)`()` | Gets the value of InventoryId.
`public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__InventoryRecord_1a17718cfa7e60fcd0f2bead0138f1276d)`() const` | Gets the value of InventoryId.
`public inline void `[`SetInventoryId`](#structFRHAPI__InventoryRecord_1a97a011ec53a3ee85bcc66ed4379ab49c)`(const FGuid & NewValue)` | Sets the value of InventoryId.
`public inline void `[`SetInventoryId`](#structFRHAPI__InventoryRecord_1af5b718a096a02187b680a399523a406b)`(FGuid && NewValue)` | Sets the value of InventoryId using move semantics.
`public inline ERHAPI_InventoryType & `[`GetType`](#structFRHAPI__InventoryRecord_1a19aa859911df73feb7f3c6a601fa3c4b)`()` | Gets the value of Type.
`public inline const ERHAPI_InventoryType & `[`GetType`](#structFRHAPI__InventoryRecord_1a4cafeb62fbd942373676cfd687582dd0)`() const` | Gets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__InventoryRecord_1a38970fc7707d382090c04492bc824546)`(const ERHAPI_InventoryType & NewValue)` | Sets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__InventoryRecord_1afc36a0fe0386722a112832ebc82ada66)`(ERHAPI_InventoryType && NewValue)` | Sets the value of Type using move semantics.
`public inline int64 & `[`GetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1adbee697f9efe5bdbec16ab590fb6ec59)`()` | Gets the value of LegacyInventoryId_Optional, regardless of it having been set.
`public inline const int64 & `[`GetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1a4f4bb5a092a56d2631ae18e108b3ca2d)`() const` | Gets the value of LegacyInventoryId_Optional, regardless of it having been set.
`public inline const int64 & `[`GetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1a305c22843efb4aabde37f72ae64c4252)`(const int64 & DefaultValue) const` | Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1a924fee5b96ce7a27ce78f2ca22fb53ce)`(int64 & OutValue) const` | Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.
`public inline int64 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__InventoryRecord_1a4d51b23c5189133132d7ae3fbd10e66b)`()` | Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int64 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__InventoryRecord_1a1d7e221d501b2b33e7b7f07987a7ce98)`() const` | Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1af0cdfd7c1dd8ed60995c9cbdaeabd31f)`(const int64 & NewValue)` | Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.
`public inline void `[`SetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1ad7bd0fa8421616b7eda433e4e9c1f0ed)`(int64 && NewValue)` | Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true using move semantics.
`public inline void `[`ClearLegacyInventoryId`](#structFRHAPI__InventoryRecord_1aaf472c325358c57db16dd0f9ebf59d92)`()` | Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.
`public inline bool `[`IsLegacyInventoryIdSet`](#structFRHAPI__InventoryRecord_1a9c47b9059eaaa3d08efa878a56648fc0)`() const` | Checks whether LegacyInventoryId_Optional has been set.
`public inline bool `[`IsLegacyInventoryIdDefaultValue`](#structFRHAPI__InventoryRecord_1a5e6439100c244b919e743144ab3955f9)`() const` | Returns true if LegacyInventoryId_Optional is set and matches the default value.
`public inline void `[`SetLegacyInventoryIdToDefault`](#structFRHAPI__InventoryRecord_1a8c218ecf9118863b1763fc91d1d224da)`()` | Sets the value of LegacyInventoryId_Optional to its default and also sets LegacyInventoryId_IsSet to true.
`public inline ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__InventoryRecord_1a98397e12338744bc967f25b2ffcf3ed3)`()` | Gets the value of Bucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__InventoryRecord_1abfcfe6017e5f8e0f17beab52e22bec99)`() const` | Gets the value of Bucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__InventoryRecord_1aa3c2106aac90d1994ceab25a66faa54b)`(const ERHAPI_InventoryBucket & DefaultValue) const` | Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetBucket`](#structFRHAPI__InventoryRecord_1a26cf9d02b0b0461d4f8985b678ba7984)`(ERHAPI_InventoryBucket & OutValue) const` | Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__InventoryRecord_1a75de1572b05055caf6471d6a14cfb702)`()` | Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__InventoryRecord_1ae523e487df9da6fc5071e958eae76413)`() const` | Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetBucket`](#structFRHAPI__InventoryRecord_1a4a46afc391dd427fa321233a751c076c)`(const ERHAPI_InventoryBucket & NewValue)` | Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.
`public inline void `[`SetBucket`](#structFRHAPI__InventoryRecord_1acd9fcb190ac768702963e4c1ae9380ed)`(ERHAPI_InventoryBucket && NewValue)` | Sets the value of Bucket_Optional and also sets Bucket_IsSet to true using move semantics.
`public inline void `[`ClearBucket`](#structFRHAPI__InventoryRecord_1ab17dce2e9f368e3fc89f9830d1e6c6c9)`()` | Clears the value of Bucket_Optional and sets Bucket_IsSet to false.
`public inline bool `[`IsBucketSet`](#structFRHAPI__InventoryRecord_1a43cbbe666518beef20e93be0e242bbfe)`() const` | Checks whether Bucket_Optional has been set.
`public inline int32 & `[`GetCount`](#structFRHAPI__InventoryRecord_1a4106945f71989b27ac2e1b92f853b75f)`()` | Gets the value of Count.
`public inline const int32 & `[`GetCount`](#structFRHAPI__InventoryRecord_1a141cd7845d611416e066b113573f092f)`() const` | Gets the value of Count.
`public inline void `[`SetCount`](#structFRHAPI__InventoryRecord_1ab2a76f526d6d1d7b16c3610bef63eb90)`(const int32 & NewValue)` | Sets the value of Count.
`public inline void `[`SetCount`](#structFRHAPI__InventoryRecord_1a98458b65e014808368e13ae252ea5edf)`(int32 && NewValue)` | Sets the value of Count using move semantics.
`public inline bool `[`IsCountDefaultValue`](#structFRHAPI__InventoryRecord_1a34f33c463881190a246dc0fa8018a5c9)`() const` | Returns true if Count matches the default value.
`public inline void `[`SetCountToDefault`](#structFRHAPI__InventoryRecord_1a2e3d6d0ddecafa323bc6fe91806ffda2)`()` | Sets the value of Count to its default
`public inline FDateTime & `[`GetAcquired`](#structFRHAPI__InventoryRecord_1a68c1ed3b28757d7f542c11186deb4c34)`()` | Gets the value of Acquired.
`public inline const FDateTime & `[`GetAcquired`](#structFRHAPI__InventoryRecord_1a5641436f7488c3ed31362532db8d5024)`() const` | Gets the value of Acquired.
`public inline void `[`SetAcquired`](#structFRHAPI__InventoryRecord_1a62738c509e372a44d33957c0091d1e64)`(const FDateTime & NewValue)` | Sets the value of Acquired.
`public inline void `[`SetAcquired`](#structFRHAPI__InventoryRecord_1ac2cc3fa9f6413ae764bda3ac95faf4bf)`(FDateTime && NewValue)` | Sets the value of Acquired using move semantics.
`public inline FDateTime & `[`GetExpires`](#structFRHAPI__InventoryRecord_1a2c9053ed3e76ed0a281c207e0a0498db)`()` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpires`](#structFRHAPI__InventoryRecord_1a9068c1f2f00a24b032fc7660b3207e01)`() const` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpires`](#structFRHAPI__InventoryRecord_1a7e0aed10352391d1f6248207a5dc5135)`(const FDateTime & DefaultValue) const` | Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExpires`](#structFRHAPI__InventoryRecord_1a1e7b15dbbf77d1f5bb180da2ae13a0f4)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__InventoryRecord_1a39c479091114c341f14b3ef052826955)`()` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__InventoryRecord_1afa4ee2c8518fed90f6c7e723cfb3a171)`() const` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExpires`](#structFRHAPI__InventoryRecord_1a91b41b88c673b0125181652d30d8211a)`(const FDateTime & NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true.
`public inline void `[`SetExpires`](#structFRHAPI__InventoryRecord_1ab3d55edc57951df64e28d32734efde5c)`(FDateTime && NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.
`public inline void `[`ClearExpires`](#structFRHAPI__InventoryRecord_1a54ea52c0937d7f5df39a63e308800bad)`()` | Clears the value of Expires_Optional and sets Expires_IsSet to false.
`public inline bool `[`IsExpiresSet`](#structFRHAPI__InventoryRecord_1a4d31995080add52f93b45d613f59f434)`() const` | Checks whether Expires_Optional has been set.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryRecord_1a8aa5145cbe6015e1dea668c5b0537cf8)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryRecord_1a8f6273de42becf2c71cb2ca600e9393a)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryRecord_1ab1e218bdcd7b084eaf273c1c8563f515)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__InventoryRecord_1a4c02526a4d51a60841a90cd696d9a0e0)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InventoryRecord_1adb6a4968dade3de3174c5cdbb3ac37c5)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InventoryRecord_1a7b788367aea23721a720366c500e7857)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__InventoryRecord_1afba00ad1cdd903dc067b269084874c7e)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__InventoryRecord_1a7571a24709322c2fb0ca6b97aaf4a039)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__InventoryRecord_1adef59732fd95e39cd8699d8fae251ec7)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__InventoryRecord_1a5365a7f3c875f0b868798c00fde9e0d6)`() const` | Checks whether CustomData_Optional has been set.

### Members

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

#### `public inline FGuid & `[`GetInventoryId`](#structFRHAPI__InventoryRecord_1a3096e834012f697b64f5fb1ff070f436)`()` <a id="structFRHAPI__InventoryRecord_1a3096e834012f697b64f5fb1ff070f436"></a>

Gets the value of InventoryId.

#### `public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__InventoryRecord_1a17718cfa7e60fcd0f2bead0138f1276d)`() const` <a id="structFRHAPI__InventoryRecord_1a17718cfa7e60fcd0f2bead0138f1276d"></a>

Gets the value of InventoryId.

#### `public inline void `[`SetInventoryId`](#structFRHAPI__InventoryRecord_1a97a011ec53a3ee85bcc66ed4379ab49c)`(const FGuid & NewValue)` <a id="structFRHAPI__InventoryRecord_1a97a011ec53a3ee85bcc66ed4379ab49c"></a>

Sets the value of InventoryId.

#### `public inline void `[`SetInventoryId`](#structFRHAPI__InventoryRecord_1af5b718a096a02187b680a399523a406b)`(FGuid && NewValue)` <a id="structFRHAPI__InventoryRecord_1af5b718a096a02187b680a399523a406b"></a>

Sets the value of InventoryId using move semantics.

#### `public inline ERHAPI_InventoryType & `[`GetType`](#structFRHAPI__InventoryRecord_1a19aa859911df73feb7f3c6a601fa3c4b)`()` <a id="structFRHAPI__InventoryRecord_1a19aa859911df73feb7f3c6a601fa3c4b"></a>

Gets the value of Type.

#### `public inline const ERHAPI_InventoryType & `[`GetType`](#structFRHAPI__InventoryRecord_1a4cafeb62fbd942373676cfd687582dd0)`() const` <a id="structFRHAPI__InventoryRecord_1a4cafeb62fbd942373676cfd687582dd0"></a>

Gets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__InventoryRecord_1a38970fc7707d382090c04492bc824546)`(const ERHAPI_InventoryType & NewValue)` <a id="structFRHAPI__InventoryRecord_1a38970fc7707d382090c04492bc824546"></a>

Sets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__InventoryRecord_1afc36a0fe0386722a112832ebc82ada66)`(ERHAPI_InventoryType && NewValue)` <a id="structFRHAPI__InventoryRecord_1afc36a0fe0386722a112832ebc82ada66"></a>

Sets the value of Type using move semantics.

#### `public inline int64 & `[`GetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1adbee697f9efe5bdbec16ab590fb6ec59)`()` <a id="structFRHAPI__InventoryRecord_1adbee697f9efe5bdbec16ab590fb6ec59"></a>

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.

#### `public inline const int64 & `[`GetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1a4f4bb5a092a56d2631ae18e108b3ca2d)`() const` <a id="structFRHAPI__InventoryRecord_1a4f4bb5a092a56d2631ae18e108b3ca2d"></a>

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.

#### `public inline const int64 & `[`GetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1a305c22843efb4aabde37f72ae64c4252)`(const int64 & DefaultValue) const` <a id="structFRHAPI__InventoryRecord_1a305c22843efb4aabde37f72ae64c4252"></a>

Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1a924fee5b96ce7a27ce78f2ca22fb53ce)`(int64 & OutValue) const` <a id="structFRHAPI__InventoryRecord_1a924fee5b96ce7a27ce78f2ca22fb53ce"></a>

Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int64 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__InventoryRecord_1a4d51b23c5189133132d7ae3fbd10e66b)`()` <a id="structFRHAPI__InventoryRecord_1a4d51b23c5189133132d7ae3fbd10e66b"></a>

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int64 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__InventoryRecord_1a1d7e221d501b2b33e7b7f07987a7ce98)`() const` <a id="structFRHAPI__InventoryRecord_1a1d7e221d501b2b33e7b7f07987a7ce98"></a>

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1af0cdfd7c1dd8ed60995c9cbdaeabd31f)`(const int64 & NewValue)` <a id="structFRHAPI__InventoryRecord_1af0cdfd7c1dd8ed60995c9cbdaeabd31f"></a>

Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.

#### `public inline void `[`SetLegacyInventoryId`](#structFRHAPI__InventoryRecord_1ad7bd0fa8421616b7eda433e4e9c1f0ed)`(int64 && NewValue)` <a id="structFRHAPI__InventoryRecord_1ad7bd0fa8421616b7eda433e4e9c1f0ed"></a>

Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true using move semantics.

#### `public inline void `[`ClearLegacyInventoryId`](#structFRHAPI__InventoryRecord_1aaf472c325358c57db16dd0f9ebf59d92)`()` <a id="structFRHAPI__InventoryRecord_1aaf472c325358c57db16dd0f9ebf59d92"></a>

Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.

#### `public inline bool `[`IsLegacyInventoryIdSet`](#structFRHAPI__InventoryRecord_1a9c47b9059eaaa3d08efa878a56648fc0)`() const` <a id="structFRHAPI__InventoryRecord_1a9c47b9059eaaa3d08efa878a56648fc0"></a>

Checks whether LegacyInventoryId_Optional has been set.

#### `public inline bool `[`IsLegacyInventoryIdDefaultValue`](#structFRHAPI__InventoryRecord_1a5e6439100c244b919e743144ab3955f9)`() const` <a id="structFRHAPI__InventoryRecord_1a5e6439100c244b919e743144ab3955f9"></a>

Returns true if LegacyInventoryId_Optional is set and matches the default value.

#### `public inline void `[`SetLegacyInventoryIdToDefault`](#structFRHAPI__InventoryRecord_1a8c218ecf9118863b1763fc91d1d224da)`()` <a id="structFRHAPI__InventoryRecord_1a8c218ecf9118863b1763fc91d1d224da"></a>

Sets the value of LegacyInventoryId_Optional to its default and also sets LegacyInventoryId_IsSet to true.

#### `public inline ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__InventoryRecord_1a98397e12338744bc967f25b2ffcf3ed3)`()` <a id="structFRHAPI__InventoryRecord_1a98397e12338744bc967f25b2ffcf3ed3"></a>

Gets the value of Bucket_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__InventoryRecord_1abfcfe6017e5f8e0f17beab52e22bec99)`() const` <a id="structFRHAPI__InventoryRecord_1abfcfe6017e5f8e0f17beab52e22bec99"></a>

Gets the value of Bucket_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__InventoryRecord_1aa3c2106aac90d1994ceab25a66faa54b)`(const ERHAPI_InventoryBucket & DefaultValue) const` <a id="structFRHAPI__InventoryRecord_1aa3c2106aac90d1994ceab25a66faa54b"></a>

Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetBucket`](#structFRHAPI__InventoryRecord_1a26cf9d02b0b0461d4f8985b678ba7984)`(ERHAPI_InventoryBucket & OutValue) const` <a id="structFRHAPI__InventoryRecord_1a26cf9d02b0b0461d4f8985b678ba7984"></a>

Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__InventoryRecord_1a75de1572b05055caf6471d6a14cfb702)`()` <a id="structFRHAPI__InventoryRecord_1a75de1572b05055caf6471d6a14cfb702"></a>

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__InventoryRecord_1ae523e487df9da6fc5071e958eae76413)`() const` <a id="structFRHAPI__InventoryRecord_1ae523e487df9da6fc5071e958eae76413"></a>

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetBucket`](#structFRHAPI__InventoryRecord_1a4a46afc391dd427fa321233a751c076c)`(const ERHAPI_InventoryBucket & NewValue)` <a id="structFRHAPI__InventoryRecord_1a4a46afc391dd427fa321233a751c076c"></a>

Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.

#### `public inline void `[`SetBucket`](#structFRHAPI__InventoryRecord_1acd9fcb190ac768702963e4c1ae9380ed)`(ERHAPI_InventoryBucket && NewValue)` <a id="structFRHAPI__InventoryRecord_1acd9fcb190ac768702963e4c1ae9380ed"></a>

Sets the value of Bucket_Optional and also sets Bucket_IsSet to true using move semantics.

#### `public inline void `[`ClearBucket`](#structFRHAPI__InventoryRecord_1ab17dce2e9f368e3fc89f9830d1e6c6c9)`()` <a id="structFRHAPI__InventoryRecord_1ab17dce2e9f368e3fc89f9830d1e6c6c9"></a>

Clears the value of Bucket_Optional and sets Bucket_IsSet to false.

#### `public inline bool `[`IsBucketSet`](#structFRHAPI__InventoryRecord_1a43cbbe666518beef20e93be0e242bbfe)`() const` <a id="structFRHAPI__InventoryRecord_1a43cbbe666518beef20e93be0e242bbfe"></a>

Checks whether Bucket_Optional has been set.

#### `public inline int32 & `[`GetCount`](#structFRHAPI__InventoryRecord_1a4106945f71989b27ac2e1b92f853b75f)`()` <a id="structFRHAPI__InventoryRecord_1a4106945f71989b27ac2e1b92f853b75f"></a>

Gets the value of Count.

#### `public inline const int32 & `[`GetCount`](#structFRHAPI__InventoryRecord_1a141cd7845d611416e066b113573f092f)`() const` <a id="structFRHAPI__InventoryRecord_1a141cd7845d611416e066b113573f092f"></a>

Gets the value of Count.

#### `public inline void `[`SetCount`](#structFRHAPI__InventoryRecord_1ab2a76f526d6d1d7b16c3610bef63eb90)`(const int32 & NewValue)` <a id="structFRHAPI__InventoryRecord_1ab2a76f526d6d1d7b16c3610bef63eb90"></a>

Sets the value of Count.

#### `public inline void `[`SetCount`](#structFRHAPI__InventoryRecord_1a98458b65e014808368e13ae252ea5edf)`(int32 && NewValue)` <a id="structFRHAPI__InventoryRecord_1a98458b65e014808368e13ae252ea5edf"></a>

Sets the value of Count using move semantics.

#### `public inline bool `[`IsCountDefaultValue`](#structFRHAPI__InventoryRecord_1a34f33c463881190a246dc0fa8018a5c9)`() const` <a id="structFRHAPI__InventoryRecord_1a34f33c463881190a246dc0fa8018a5c9"></a>

Returns true if Count matches the default value.

#### `public inline void `[`SetCountToDefault`](#structFRHAPI__InventoryRecord_1a2e3d6d0ddecafa323bc6fe91806ffda2)`()` <a id="structFRHAPI__InventoryRecord_1a2e3d6d0ddecafa323bc6fe91806ffda2"></a>

Sets the value of Count to its default

#### `public inline FDateTime & `[`GetAcquired`](#structFRHAPI__InventoryRecord_1a68c1ed3b28757d7f542c11186deb4c34)`()` <a id="structFRHAPI__InventoryRecord_1a68c1ed3b28757d7f542c11186deb4c34"></a>

Gets the value of Acquired.

#### `public inline const FDateTime & `[`GetAcquired`](#structFRHAPI__InventoryRecord_1a5641436f7488c3ed31362532db8d5024)`() const` <a id="structFRHAPI__InventoryRecord_1a5641436f7488c3ed31362532db8d5024"></a>

Gets the value of Acquired.

#### `public inline void `[`SetAcquired`](#structFRHAPI__InventoryRecord_1a62738c509e372a44d33957c0091d1e64)`(const FDateTime & NewValue)` <a id="structFRHAPI__InventoryRecord_1a62738c509e372a44d33957c0091d1e64"></a>

Sets the value of Acquired.

#### `public inline void `[`SetAcquired`](#structFRHAPI__InventoryRecord_1ac2cc3fa9f6413ae764bda3ac95faf4bf)`(FDateTime && NewValue)` <a id="structFRHAPI__InventoryRecord_1ac2cc3fa9f6413ae764bda3ac95faf4bf"></a>

Sets the value of Acquired using move semantics.

#### `public inline FDateTime & `[`GetExpires`](#structFRHAPI__InventoryRecord_1a2c9053ed3e76ed0a281c207e0a0498db)`()` <a id="structFRHAPI__InventoryRecord_1a2c9053ed3e76ed0a281c207e0a0498db"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpires`](#structFRHAPI__InventoryRecord_1a9068c1f2f00a24b032fc7660b3207e01)`() const` <a id="structFRHAPI__InventoryRecord_1a9068c1f2f00a24b032fc7660b3207e01"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpires`](#structFRHAPI__InventoryRecord_1a7e0aed10352391d1f6248207a5dc5135)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__InventoryRecord_1a7e0aed10352391d1f6248207a5dc5135"></a>

Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExpires`](#structFRHAPI__InventoryRecord_1a1e7b15dbbf77d1f5bb180da2ae13a0f4)`(FDateTime & OutValue) const` <a id="structFRHAPI__InventoryRecord_1a1e7b15dbbf77d1f5bb180da2ae13a0f4"></a>

Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__InventoryRecord_1a39c479091114c341f14b3ef052826955)`()` <a id="structFRHAPI__InventoryRecord_1a39c479091114c341f14b3ef052826955"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__InventoryRecord_1afa4ee2c8518fed90f6c7e723cfb3a171)`() const` <a id="structFRHAPI__InventoryRecord_1afa4ee2c8518fed90f6c7e723cfb3a171"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExpires`](#structFRHAPI__InventoryRecord_1a91b41b88c673b0125181652d30d8211a)`(const FDateTime & NewValue)` <a id="structFRHAPI__InventoryRecord_1a91b41b88c673b0125181652d30d8211a"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true.

#### `public inline void `[`SetExpires`](#structFRHAPI__InventoryRecord_1ab3d55edc57951df64e28d32734efde5c)`(FDateTime && NewValue)` <a id="structFRHAPI__InventoryRecord_1ab3d55edc57951df64e28d32734efde5c"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.

#### `public inline void `[`ClearExpires`](#structFRHAPI__InventoryRecord_1a54ea52c0937d7f5df39a63e308800bad)`()` <a id="structFRHAPI__InventoryRecord_1a54ea52c0937d7f5df39a63e308800bad"></a>

Clears the value of Expires_Optional and sets Expires_IsSet to false.

#### `public inline bool `[`IsExpiresSet`](#structFRHAPI__InventoryRecord_1a4d31995080add52f93b45d613f59f434)`() const` <a id="structFRHAPI__InventoryRecord_1a4d31995080add52f93b45d613f59f434"></a>

Checks whether Expires_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryRecord_1a8aa5145cbe6015e1dea668c5b0537cf8)`()` <a id="structFRHAPI__InventoryRecord_1a8aa5145cbe6015e1dea668c5b0537cf8"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryRecord_1a8f6273de42becf2c71cb2ca600e9393a)`() const` <a id="structFRHAPI__InventoryRecord_1a8f6273de42becf2c71cb2ca600e9393a"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryRecord_1ab1e218bdcd7b084eaf273c1c8563f515)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__InventoryRecord_1ab1e218bdcd7b084eaf273c1c8563f515"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__InventoryRecord_1a4c02526a4d51a60841a90cd696d9a0e0)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__InventoryRecord_1a4c02526a4d51a60841a90cd696d9a0e0"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InventoryRecord_1adb6a4968dade3de3174c5cdbb3ac37c5)`()` <a id="structFRHAPI__InventoryRecord_1adb6a4968dade3de3174c5cdbb3ac37c5"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InventoryRecord_1a7b788367aea23721a720366c500e7857)`() const` <a id="structFRHAPI__InventoryRecord_1a7b788367aea23721a720366c500e7857"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__InventoryRecord_1afba00ad1cdd903dc067b269084874c7e)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__InventoryRecord_1afba00ad1cdd903dc067b269084874c7e"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__InventoryRecord_1a7571a24709322c2fb0ca6b97aaf4a039)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__InventoryRecord_1a7571a24709322c2fb0ca6b97aaf4a039"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__InventoryRecord_1adef59732fd95e39cd8699d8fae251ec7)`()` <a id="structFRHAPI__InventoryRecord_1adef59732fd95e39cd8699d8fae251ec7"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__InventoryRecord_1a5365a7f3c875f0b868798c00fde9e0d6)`() const` <a id="structFRHAPI__InventoryRecord_1a5365a7f3c875f0b868798c00fde9e0d6"></a>

Checks whether CustomData_Optional has been set.

