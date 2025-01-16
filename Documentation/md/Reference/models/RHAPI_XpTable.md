---
title: RHAPI_XpTable
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_XpTable`](#structFRHAPI__XpTable) | A collection of XP Levels from 1 to N. Each level has a minimum XP value.

## struct `FRHAPI_XpTable` <a id="structFRHAPI__XpTable"></a>

```
struct FRHAPI_XpTable
  : public FRHAPI_Model
```

A collection of XP Levels from 1 to N. Each level has a minimum XP value.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__XpTable_1af1d0f6100d26e90a9c94c41d719bbab4) | Custom data associated with the resource.
`public bool `[`CustomData_IsSet`](#structFRHAPI__XpTable_1a91f78eae595931b545702560639fe2b1) | true if CustomData_Optional has been set to a value
`public FGuid `[`XpUuid_Optional`](#structFRHAPI__XpTable_1acb2f31eb7fa32f1056dcfd64a90f0e95) | 
`public bool `[`XpUuid_IsSet`](#structFRHAPI__XpTable_1aa14640432399209965372fa806902813) | true if XpUuid_Optional has been set to a value
`public bool `[`XpUuid_IsNull`](#structFRHAPI__XpTable_1a190c3a6476609af4000514d1839732af) | true if XpUuid_Optional has been explicitly set to null
`public TMap< FString, int32 > `[`XpEntries_Optional`](#structFRHAPI__XpTable_1a6fce5a0a8d2d65c0049771d51bf6b2cf) | 
`public bool `[`XpEntries_IsSet`](#structFRHAPI__XpTable_1a0d1d82acc42c1ad029117cd1ea15cb12) | true if XpEntries_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__XpTable_1a0785200adbf808bdd25fab3cb5f01b0b) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__XpTable_1a90dc3ba87a1ecdef6402df456d2389f8) | true if CacheInfo_Optional has been set to a value
`public bool `[`CacheInfo_IsNull`](#structFRHAPI__XpTable_1af4eccd3dc47255dbbca263c04d57a623) | true if CacheInfo_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__XpTable_1a93218d75d5ca30eea726486a9f5d9646)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__XpTable_1a61c4cbe9dae0d8cbebd2a6b873c76d14)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__XpTable_1accc47d6ae9f1fbdb47a6dbeced7570ab)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__XpTable_1a73aba188ed4a04599d2510320629b4a8)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__XpTable_1ac69c9845ee33b33b4bc048b1533084ba)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__XpTable_1ab510bf011a4173a01f6f536a3fe7b3be)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__XpTable_1ab420789570010f694a034a3f6fd781ce)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__XpTable_1a3ced2b63f765da8bcc2cc88847969c01)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__XpTable_1aebdb72d296e7b1dc2f64928bfecf7956)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__XpTable_1aa8b701ac1c2dc04473e74ca442cec53b)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__XpTable_1ae84305fd00b049e142b7ca609225e959)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__XpTable_1af11cb504877443551cb33d15d8a80c2b)`() const` | Checks whether CustomData_Optional has been set.
`public inline FGuid & `[`GetXpUuid`](#structFRHAPI__XpTable_1a8057debe8c0a7a860fc2950cef0c0a6c)`()` | Gets the value of XpUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetXpUuid`](#structFRHAPI__XpTable_1a1247e35831bc4423d1822f99902061f5)`() const` | Gets the value of XpUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetXpUuid`](#structFRHAPI__XpTable_1a5fb50dc1209af4573ecbc93c3a7c3edc)`(const FGuid & DefaultValue) const` | Gets the value of XpUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetXpUuid`](#structFRHAPI__XpTable_1a3397f6ce21c649115fef7400cca188f8)`(FGuid & OutValue) const` | Fills OutValue with the value of XpUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetXpUuidOrNull`](#structFRHAPI__XpTable_1a17850746f15b0648c8cb7dc044a75aae)`()` | Returns a pointer to XpUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetXpUuidOrNull`](#structFRHAPI__XpTable_1a50181fd0561fabdab2f4acafbd634032)`() const` | Returns a pointer to XpUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetXpUuid`](#structFRHAPI__XpTable_1aec23d5448ffdd4512ad1451a7852edb7)`(const FGuid & NewValue)` | Sets the value of XpUuid_Optional and also sets XpUuid_IsSet to true.
`public inline void `[`SetXpUuid`](#structFRHAPI__XpTable_1a6004024ca9a2b27ce968ec767e212bf1)`(FGuid && NewValue)` | Sets the value of XpUuid_Optional and also sets XpUuid_IsSet to true using move semantics.
`public inline void `[`ClearXpUuid`](#structFRHAPI__XpTable_1acb556ad5b7af78430e60dc1f7ffa63ae)`()` | Clears the value of XpUuid_Optional and sets XpUuid_IsSet to false.
`public inline bool `[`IsXpUuidSet`](#structFRHAPI__XpTable_1ab638cd3628fdfef2ce62e1f8b508bcc8)`() const` | Checks whether XpUuid_Optional has been set.
`public inline void `[`SetXpUuidToNull`](#structFRHAPI__XpTable_1a46750a4a4f128ea01157a1ea5eb770c4)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsXpUuidNull`](#structFRHAPI__XpTable_1a99ca3d2efb08c5323158529648bdd917)`() const` | Checks whether XpUuid_Optional is set to null.
`public inline TMap< FString, int32 > & `[`GetXpEntries`](#structFRHAPI__XpTable_1ac03c7a11e96cb91a34f01bd77a8fd63e)`()` | Gets the value of XpEntries_Optional, regardless of it having been set.
`public inline const TMap< FString, int32 > & `[`GetXpEntries`](#structFRHAPI__XpTable_1ace6218b7f369af822e057d1f5afbe03b)`() const` | Gets the value of XpEntries_Optional, regardless of it having been set.
`public inline const TMap< FString, int32 > & `[`GetXpEntries`](#structFRHAPI__XpTable_1a35e989cee0cc81c221a08fd3c308841b)`(const TMap< FString, int32 > & DefaultValue) const` | Gets the value of XpEntries_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetXpEntries`](#structFRHAPI__XpTable_1a9f905a87e09cf2d84b6ae98e0f7ec030)`(TMap< FString, int32 > & OutValue) const` | Fills OutValue with the value of XpEntries_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, int32 > * `[`GetXpEntriesOrNull`](#structFRHAPI__XpTable_1afe7b93f2b48b457595e3030091202265)`()` | Returns a pointer to XpEntries_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, int32 > * `[`GetXpEntriesOrNull`](#structFRHAPI__XpTable_1a63a81550dbff929a706fd393738ae376)`() const` | Returns a pointer to XpEntries_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetXpEntries`](#structFRHAPI__XpTable_1a18ec58bc91b6ea5f076f3bc1964a3474)`(const TMap< FString, int32 > & NewValue)` | Sets the value of XpEntries_Optional and also sets XpEntries_IsSet to true.
`public inline void `[`SetXpEntries`](#structFRHAPI__XpTable_1a851aa6c3f38e11c331168309d2febc21)`(TMap< FString, int32 > && NewValue)` | Sets the value of XpEntries_Optional and also sets XpEntries_IsSet to true using move semantics.
`public inline void `[`ClearXpEntries`](#structFRHAPI__XpTable_1adfef2f411c225c0d6bfd1272ac300bb7)`()` | Clears the value of XpEntries_Optional and sets XpEntries_IsSet to false.
`public inline bool `[`IsXpEntriesSet`](#structFRHAPI__XpTable_1a624a5d3da6f80680c03189091db423ca)`() const` | Checks whether XpEntries_Optional has been set.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTable_1ad9f5d0b582bd10c04935308d80a5c388)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTable_1ac1aebbbcaa50efb248b9c8cbc812b291)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTable_1aebd8c9f0e561c23736a51f707b1deccc)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__XpTable_1ac2851870da4c14480a5f4db8b5c5c69a)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTable_1aead02321811f1360e6b7764bcf3fa816)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTable_1af97d32069125da24343f773c35076b9d)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__XpTable_1afbb435a7aa83de75f4b16c329fd93025)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`SetCacheInfo`](#structFRHAPI__XpTable_1ab8df1d7f48b45ceaa9c27f508dcbac3d)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__XpTable_1aa5ecb7e76cf1ff2ad80407b03a12f840)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline bool `[`IsCacheInfoSet`](#structFRHAPI__XpTable_1acb93c51e056a0a6093982f33b56e3e5c)`() const` | Checks whether CacheInfo_Optional has been set.
`public inline void `[`SetCacheInfoToNull`](#structFRHAPI__XpTable_1aeb918b22d1780319eb2f7eb5603f6857)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCacheInfoNull`](#structFRHAPI__XpTable_1a2910a6fb611c8ff2f7c470b75d7e53a7)`() const` | Checks whether CacheInfo_Optional is set to null.

### Members

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__XpTable_1af1d0f6100d26e90a9c94c41d719bbab4) <a id="structFRHAPI__XpTable_1af1d0f6100d26e90a9c94c41d719bbab4"></a>

Custom data associated with the resource.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__XpTable_1a91f78eae595931b545702560639fe2b1) <a id="structFRHAPI__XpTable_1a91f78eae595931b545702560639fe2b1"></a>

true if CustomData_Optional has been set to a value

#### `public FGuid `[`XpUuid_Optional`](#structFRHAPI__XpTable_1acb2f31eb7fa32f1056dcfd64a90f0e95) <a id="structFRHAPI__XpTable_1acb2f31eb7fa32f1056dcfd64a90f0e95"></a>

#### `public bool `[`XpUuid_IsSet`](#structFRHAPI__XpTable_1aa14640432399209965372fa806902813) <a id="structFRHAPI__XpTable_1aa14640432399209965372fa806902813"></a>

true if XpUuid_Optional has been set to a value

#### `public bool `[`XpUuid_IsNull`](#structFRHAPI__XpTable_1a190c3a6476609af4000514d1839732af) <a id="structFRHAPI__XpTable_1a190c3a6476609af4000514d1839732af"></a>

true if XpUuid_Optional has been explicitly set to null

#### `public TMap< FString, int32 > `[`XpEntries_Optional`](#structFRHAPI__XpTable_1a6fce5a0a8d2d65c0049771d51bf6b2cf) <a id="structFRHAPI__XpTable_1a6fce5a0a8d2d65c0049771d51bf6b2cf"></a>

#### `public bool `[`XpEntries_IsSet`](#structFRHAPI__XpTable_1a0d1d82acc42c1ad029117cd1ea15cb12) <a id="structFRHAPI__XpTable_1a0d1d82acc42c1ad029117cd1ea15cb12"></a>

true if XpEntries_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__XpTable_1a0785200adbf808bdd25fab3cb5f01b0b) <a id="structFRHAPI__XpTable_1a0785200adbf808bdd25fab3cb5f01b0b"></a>

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__XpTable_1a90dc3ba87a1ecdef6402df456d2389f8) <a id="structFRHAPI__XpTable_1a90dc3ba87a1ecdef6402df456d2389f8"></a>

true if CacheInfo_Optional has been set to a value

#### `public bool `[`CacheInfo_IsNull`](#structFRHAPI__XpTable_1af4eccd3dc47255dbbca263c04d57a623) <a id="structFRHAPI__XpTable_1af4eccd3dc47255dbbca263c04d57a623"></a>

true if CacheInfo_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__XpTable_1a93218d75d5ca30eea726486a9f5d9646)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__XpTable_1a93218d75d5ca30eea726486a9f5d9646"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__XpTable_1a61c4cbe9dae0d8cbebd2a6b873c76d14)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__XpTable_1a61c4cbe9dae0d8cbebd2a6b873c76d14"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__XpTable_1accc47d6ae9f1fbdb47a6dbeced7570ab)`()` <a id="structFRHAPI__XpTable_1accc47d6ae9f1fbdb47a6dbeced7570ab"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__XpTable_1a73aba188ed4a04599d2510320629b4a8)`() const` <a id="structFRHAPI__XpTable_1a73aba188ed4a04599d2510320629b4a8"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__XpTable_1ac69c9845ee33b33b4bc048b1533084ba)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__XpTable_1ac69c9845ee33b33b4bc048b1533084ba"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__XpTable_1ab510bf011a4173a01f6f536a3fe7b3be)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__XpTable_1ab510bf011a4173a01f6f536a3fe7b3be"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__XpTable_1ab420789570010f694a034a3f6fd781ce)`()` <a id="structFRHAPI__XpTable_1ab420789570010f694a034a3f6fd781ce"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__XpTable_1a3ced2b63f765da8bcc2cc88847969c01)`() const` <a id="structFRHAPI__XpTable_1a3ced2b63f765da8bcc2cc88847969c01"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__XpTable_1aebdb72d296e7b1dc2f64928bfecf7956)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__XpTable_1aebdb72d296e7b1dc2f64928bfecf7956"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__XpTable_1aa8b701ac1c2dc04473e74ca442cec53b)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__XpTable_1aa8b701ac1c2dc04473e74ca442cec53b"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__XpTable_1ae84305fd00b049e142b7ca609225e959)`()` <a id="structFRHAPI__XpTable_1ae84305fd00b049e142b7ca609225e959"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__XpTable_1af11cb504877443551cb33d15d8a80c2b)`() const` <a id="structFRHAPI__XpTable_1af11cb504877443551cb33d15d8a80c2b"></a>

Checks whether CustomData_Optional has been set.

#### `public inline FGuid & `[`GetXpUuid`](#structFRHAPI__XpTable_1a8057debe8c0a7a860fc2950cef0c0a6c)`()` <a id="structFRHAPI__XpTable_1a8057debe8c0a7a860fc2950cef0c0a6c"></a>

Gets the value of XpUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetXpUuid`](#structFRHAPI__XpTable_1a1247e35831bc4423d1822f99902061f5)`() const` <a id="structFRHAPI__XpTable_1a1247e35831bc4423d1822f99902061f5"></a>

Gets the value of XpUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetXpUuid`](#structFRHAPI__XpTable_1a5fb50dc1209af4573ecbc93c3a7c3edc)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__XpTable_1a5fb50dc1209af4573ecbc93c3a7c3edc"></a>

Gets the value of XpUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetXpUuid`](#structFRHAPI__XpTable_1a3397f6ce21c649115fef7400cca188f8)`(FGuid & OutValue) const` <a id="structFRHAPI__XpTable_1a3397f6ce21c649115fef7400cca188f8"></a>

Fills OutValue with the value of XpUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetXpUuidOrNull`](#structFRHAPI__XpTable_1a17850746f15b0648c8cb7dc044a75aae)`()` <a id="structFRHAPI__XpTable_1a17850746f15b0648c8cb7dc044a75aae"></a>

Returns a pointer to XpUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetXpUuidOrNull`](#structFRHAPI__XpTable_1a50181fd0561fabdab2f4acafbd634032)`() const` <a id="structFRHAPI__XpTable_1a50181fd0561fabdab2f4acafbd634032"></a>

Returns a pointer to XpUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetXpUuid`](#structFRHAPI__XpTable_1aec23d5448ffdd4512ad1451a7852edb7)`(const FGuid & NewValue)` <a id="structFRHAPI__XpTable_1aec23d5448ffdd4512ad1451a7852edb7"></a>

Sets the value of XpUuid_Optional and also sets XpUuid_IsSet to true.

#### `public inline void `[`SetXpUuid`](#structFRHAPI__XpTable_1a6004024ca9a2b27ce968ec767e212bf1)`(FGuid && NewValue)` <a id="structFRHAPI__XpTable_1a6004024ca9a2b27ce968ec767e212bf1"></a>

Sets the value of XpUuid_Optional and also sets XpUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearXpUuid`](#structFRHAPI__XpTable_1acb556ad5b7af78430e60dc1f7ffa63ae)`()` <a id="structFRHAPI__XpTable_1acb556ad5b7af78430e60dc1f7ffa63ae"></a>

Clears the value of XpUuid_Optional and sets XpUuid_IsSet to false.

#### `public inline bool `[`IsXpUuidSet`](#structFRHAPI__XpTable_1ab638cd3628fdfef2ce62e1f8b508bcc8)`() const` <a id="structFRHAPI__XpTable_1ab638cd3628fdfef2ce62e1f8b508bcc8"></a>

Checks whether XpUuid_Optional has been set.

#### `public inline void `[`SetXpUuidToNull`](#structFRHAPI__XpTable_1a46750a4a4f128ea01157a1ea5eb770c4)`()` <a id="structFRHAPI__XpTable_1a46750a4a4f128ea01157a1ea5eb770c4"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsXpUuidNull`](#structFRHAPI__XpTable_1a99ca3d2efb08c5323158529648bdd917)`() const` <a id="structFRHAPI__XpTable_1a99ca3d2efb08c5323158529648bdd917"></a>

Checks whether XpUuid_Optional is set to null.

#### `public inline TMap< FString, int32 > & `[`GetXpEntries`](#structFRHAPI__XpTable_1ac03c7a11e96cb91a34f01bd77a8fd63e)`()` <a id="structFRHAPI__XpTable_1ac03c7a11e96cb91a34f01bd77a8fd63e"></a>

Gets the value of XpEntries_Optional, regardless of it having been set.

#### `public inline const TMap< FString, int32 > & `[`GetXpEntries`](#structFRHAPI__XpTable_1ace6218b7f369af822e057d1f5afbe03b)`() const` <a id="structFRHAPI__XpTable_1ace6218b7f369af822e057d1f5afbe03b"></a>

Gets the value of XpEntries_Optional, regardless of it having been set.

#### `public inline const TMap< FString, int32 > & `[`GetXpEntries`](#structFRHAPI__XpTable_1a35e989cee0cc81c221a08fd3c308841b)`(const TMap< FString, int32 > & DefaultValue) const` <a id="structFRHAPI__XpTable_1a35e989cee0cc81c221a08fd3c308841b"></a>

Gets the value of XpEntries_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetXpEntries`](#structFRHAPI__XpTable_1a9f905a87e09cf2d84b6ae98e0f7ec030)`(TMap< FString, int32 > & OutValue) const` <a id="structFRHAPI__XpTable_1a9f905a87e09cf2d84b6ae98e0f7ec030"></a>

Fills OutValue with the value of XpEntries_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, int32 > * `[`GetXpEntriesOrNull`](#structFRHAPI__XpTable_1afe7b93f2b48b457595e3030091202265)`()` <a id="structFRHAPI__XpTable_1afe7b93f2b48b457595e3030091202265"></a>

Returns a pointer to XpEntries_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, int32 > * `[`GetXpEntriesOrNull`](#structFRHAPI__XpTable_1a63a81550dbff929a706fd393738ae376)`() const` <a id="structFRHAPI__XpTable_1a63a81550dbff929a706fd393738ae376"></a>

Returns a pointer to XpEntries_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetXpEntries`](#structFRHAPI__XpTable_1a18ec58bc91b6ea5f076f3bc1964a3474)`(const TMap< FString, int32 > & NewValue)` <a id="structFRHAPI__XpTable_1a18ec58bc91b6ea5f076f3bc1964a3474"></a>

Sets the value of XpEntries_Optional and also sets XpEntries_IsSet to true.

#### `public inline void `[`SetXpEntries`](#structFRHAPI__XpTable_1a851aa6c3f38e11c331168309d2febc21)`(TMap< FString, int32 > && NewValue)` <a id="structFRHAPI__XpTable_1a851aa6c3f38e11c331168309d2febc21"></a>

Sets the value of XpEntries_Optional and also sets XpEntries_IsSet to true using move semantics.

#### `public inline void `[`ClearXpEntries`](#structFRHAPI__XpTable_1adfef2f411c225c0d6bfd1272ac300bb7)`()` <a id="structFRHAPI__XpTable_1adfef2f411c225c0d6bfd1272ac300bb7"></a>

Clears the value of XpEntries_Optional and sets XpEntries_IsSet to false.

#### `public inline bool `[`IsXpEntriesSet`](#structFRHAPI__XpTable_1a624a5d3da6f80680c03189091db423ca)`() const` <a id="structFRHAPI__XpTable_1a624a5d3da6f80680c03189091db423ca"></a>

Checks whether XpEntries_Optional has been set.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTable_1ad9f5d0b582bd10c04935308d80a5c388)`()` <a id="structFRHAPI__XpTable_1ad9f5d0b582bd10c04935308d80a5c388"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTable_1ac1aebbbcaa50efb248b9c8cbc812b291)`() const` <a id="structFRHAPI__XpTable_1ac1aebbbcaa50efb248b9c8cbc812b291"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTable_1aebd8c9f0e561c23736a51f707b1deccc)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__XpTable_1aebd8c9f0e561c23736a51f707b1deccc"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__XpTable_1ac2851870da4c14480a5f4db8b5c5c69a)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__XpTable_1ac2851870da4c14480a5f4db8b5c5c69a"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTable_1aead02321811f1360e6b7764bcf3fa816)`()` <a id="structFRHAPI__XpTable_1aead02321811f1360e6b7764bcf3fa816"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTable_1af97d32069125da24343f773c35076b9d)`() const` <a id="structFRHAPI__XpTable_1af97d32069125da24343f773c35076b9d"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__XpTable_1afbb435a7aa83de75f4b16c329fd93025)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__XpTable_1afbb435a7aa83de75f4b16c329fd93025"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__XpTable_1ab8df1d7f48b45ceaa9c27f508dcbac3d)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__XpTable_1ab8df1d7f48b45ceaa9c27f508dcbac3d"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__XpTable_1aa5ecb7e76cf1ff2ad80407b03a12f840)`()` <a id="structFRHAPI__XpTable_1aa5ecb7e76cf1ff2ad80407b03a12f840"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline bool `[`IsCacheInfoSet`](#structFRHAPI__XpTable_1acb93c51e056a0a6093982f33b56e3e5c)`() const` <a id="structFRHAPI__XpTable_1acb93c51e056a0a6093982f33b56e3e5c"></a>

Checks whether CacheInfo_Optional has been set.

#### `public inline void `[`SetCacheInfoToNull`](#structFRHAPI__XpTable_1aeb918b22d1780319eb2f7eb5603f6857)`()` <a id="structFRHAPI__XpTable_1aeb918b22d1780319eb2f7eb5603f6857"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCacheInfoNull`](#structFRHAPI__XpTable_1a2910a6fb611c8ff2f7c470b75d7e53a7)`() const` <a id="structFRHAPI__XpTable_1a2910a6fb611c8ff2f7c470b75d7e53a7"></a>

Checks whether CacheInfo_Optional is set to null.

