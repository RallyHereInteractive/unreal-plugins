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
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__XpTable_1a79865d1451dbb5ffec203388b760eb6e)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__XpTable_1a0aa555b94ab806f813ee559dfcb310a9)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__XpTable_1a29f862662e1cbad53f35bcea2f60b175)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__XpTable_1a00370a911a1682788d3c524b7d0fecc4)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__XpTable_1afa7cd2a9bf11dba06cc454dbc52d404b)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__XpTable_1a6cff95dbe453447c692d38fa8f993bc6)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__XpTable_1a566e953370712488afeb76a5eb8e0ad3)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__XpTable_1ace66d959f2817305c42d71cf555e230a)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__XpTable_1ae84305fd00b049e142b7ca609225e959)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetXpUuid`](#structFRHAPI__XpTable_1a12f6fcee566d316091d725cdf8de4997)`()` | Gets the value of XpUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetXpUuid`](#structFRHAPI__XpTable_1a66cb1c00ac81ebe5d3150ce332925769)`() const` | Gets the value of XpUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetXpUuid`](#structFRHAPI__XpTable_1a79bc14e4c25d57c82c3d20f457b46a6b)`(const FGuid & DefaultValue) const` | Gets the value of XpUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetXpUuid`](#structFRHAPI__XpTable_1ad4a62a58ea374a9c62cc1f58bf103edc)`(FGuid & OutValue) const` | Fills OutValue with the value of XpUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetXpUuidOrNull`](#structFRHAPI__XpTable_1aef037bdd7c35c48cafb3506f0659a06b)`()` | Returns a pointer to XpUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetXpUuidOrNull`](#structFRHAPI__XpTable_1a38ecd393fabc598f3bae8c8f1a83c9fd)`() const` | Returns a pointer to XpUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetXpUuid`](#structFRHAPI__XpTable_1a8462e10052d99040a743d7799829cec9)`(const FGuid & NewValue)` | Sets the value of XpUuid_Optional and also sets XpUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetXpUuid`](#structFRHAPI__XpTable_1aa35f0b87b0a6b1388103f8c371e9feff)`(FGuid && NewValue)` | Sets the value of XpUuid_Optional and also sets XpUuid_IsSet to true using move semantics.
`public inline void `[`ClearXpUuid`](#structFRHAPI__XpTable_1acb556ad5b7af78430e60dc1f7ffa63ae)`()` | Clears the value of XpUuid_Optional and sets XpUuid_IsSet to false.
`public inline FORCEINLINE void `[`SetXpUuidToNull`](#structFRHAPI__XpTable_1a0ba29f931c0dba8fff3bc74ea4d50e08)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsXpUuidNull`](#structFRHAPI__XpTable_1abd048825948c02aef037dd366a233672)`() const` | Checks whether XpUuid_Optional is set to null.
`public inline FORCEINLINE TMap< FString, int32 > & `[`GetXpEntries`](#structFRHAPI__XpTable_1a41f1b63635394e35c3c03d8d9d8f9282)`()` | Gets the value of XpEntries_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, int32 > & `[`GetXpEntries`](#structFRHAPI__XpTable_1a4b610801bd722ef23f987275ab02fae6)`() const` | Gets the value of XpEntries_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, int32 > & `[`GetXpEntries`](#structFRHAPI__XpTable_1ab55d41482846b35c4d3166a86024c948)`(const TMap< FString, int32 > & DefaultValue) const` | Gets the value of XpEntries_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetXpEntries`](#structFRHAPI__XpTable_1acaae913f718cc223527e07d23f687026)`(TMap< FString, int32 > & OutValue) const` | Fills OutValue with the value of XpEntries_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, int32 > * `[`GetXpEntriesOrNull`](#structFRHAPI__XpTable_1aeb95adb06b38f8e6f897e9f4a77060e8)`()` | Returns a pointer to XpEntries_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, int32 > * `[`GetXpEntriesOrNull`](#structFRHAPI__XpTable_1a6f8cefed5d8760738018d5503f496dc9)`() const` | Returns a pointer to XpEntries_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetXpEntries`](#structFRHAPI__XpTable_1ae94aee08b272f2f7df327e3f6e99d362)`(const TMap< FString, int32 > & NewValue)` | Sets the value of XpEntries_Optional and also sets XpEntries_IsSet to true.
`public inline FORCEINLINE void `[`SetXpEntries`](#structFRHAPI__XpTable_1a0c4e8d7811c3045b0420ab553cf5b52d)`(TMap< FString, int32 > && NewValue)` | Sets the value of XpEntries_Optional and also sets XpEntries_IsSet to true using move semantics.
`public inline void `[`ClearXpEntries`](#structFRHAPI__XpTable_1adfef2f411c225c0d6bfd1272ac300bb7)`()` | Clears the value of XpEntries_Optional and sets XpEntries_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTable_1a58b464883f3b7ea3b10afdaeb8978c0f)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTable_1ab97b9e2de9e76ab4faeed7c09579957e)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTable_1a150c92e1943e6bb8e255d646ef13c65d)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__XpTable_1a2173f8c81aeec95eb398f62cdd7a3f26)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTable_1a0a55a79c1c6a5d12ff6f918c16028205)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTable_1aed59d5396e30a9106fe2b81819511524)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__XpTable_1aca9e89ad39b54fcfebd40fbf4c7a3753)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__XpTable_1ada916f9d74c27c7c6afdb44963ffdc88)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__XpTable_1aa5ecb7e76cf1ff2ad80407b03a12f840)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__XpTable_1a9b7390f90ad82fe52dc4a68d4c08724a)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__XpTable_1ad8a8b63c6f79f40a89f4ac99e250c99c)`() const` | Checks whether CacheInfo_Optional is set to null.

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

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__XpTable_1a79865d1451dbb5ffec203388b760eb6e)`()` <a id="structFRHAPI__XpTable_1a79865d1451dbb5ffec203388b760eb6e"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__XpTable_1a0aa555b94ab806f813ee559dfcb310a9)`() const` <a id="structFRHAPI__XpTable_1a0aa555b94ab806f813ee559dfcb310a9"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__XpTable_1a29f862662e1cbad53f35bcea2f60b175)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__XpTable_1a29f862662e1cbad53f35bcea2f60b175"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__XpTable_1a00370a911a1682788d3c524b7d0fecc4)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__XpTable_1a00370a911a1682788d3c524b7d0fecc4"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__XpTable_1afa7cd2a9bf11dba06cc454dbc52d404b)`()` <a id="structFRHAPI__XpTable_1afa7cd2a9bf11dba06cc454dbc52d404b"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__XpTable_1a6cff95dbe453447c692d38fa8f993bc6)`() const` <a id="structFRHAPI__XpTable_1a6cff95dbe453447c692d38fa8f993bc6"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__XpTable_1a566e953370712488afeb76a5eb8e0ad3)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__XpTable_1a566e953370712488afeb76a5eb8e0ad3"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__XpTable_1ace66d959f2817305c42d71cf555e230a)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__XpTable_1ace66d959f2817305c42d71cf555e230a"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__XpTable_1ae84305fd00b049e142b7ca609225e959)`()` <a id="structFRHAPI__XpTable_1ae84305fd00b049e142b7ca609225e959"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetXpUuid`](#structFRHAPI__XpTable_1a12f6fcee566d316091d725cdf8de4997)`()` <a id="structFRHAPI__XpTable_1a12f6fcee566d316091d725cdf8de4997"></a>

Gets the value of XpUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetXpUuid`](#structFRHAPI__XpTable_1a66cb1c00ac81ebe5d3150ce332925769)`() const` <a id="structFRHAPI__XpTable_1a66cb1c00ac81ebe5d3150ce332925769"></a>

Gets the value of XpUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetXpUuid`](#structFRHAPI__XpTable_1a79bc14e4c25d57c82c3d20f457b46a6b)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__XpTable_1a79bc14e4c25d57c82c3d20f457b46a6b"></a>

Gets the value of XpUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetXpUuid`](#structFRHAPI__XpTable_1ad4a62a58ea374a9c62cc1f58bf103edc)`(FGuid & OutValue) const` <a id="structFRHAPI__XpTable_1ad4a62a58ea374a9c62cc1f58bf103edc"></a>

Fills OutValue with the value of XpUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetXpUuidOrNull`](#structFRHAPI__XpTable_1aef037bdd7c35c48cafb3506f0659a06b)`()` <a id="structFRHAPI__XpTable_1aef037bdd7c35c48cafb3506f0659a06b"></a>

Returns a pointer to XpUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetXpUuidOrNull`](#structFRHAPI__XpTable_1a38ecd393fabc598f3bae8c8f1a83c9fd)`() const` <a id="structFRHAPI__XpTable_1a38ecd393fabc598f3bae8c8f1a83c9fd"></a>

Returns a pointer to XpUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetXpUuid`](#structFRHAPI__XpTable_1a8462e10052d99040a743d7799829cec9)`(const FGuid & NewValue)` <a id="structFRHAPI__XpTable_1a8462e10052d99040a743d7799829cec9"></a>

Sets the value of XpUuid_Optional and also sets XpUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetXpUuid`](#structFRHAPI__XpTable_1aa35f0b87b0a6b1388103f8c371e9feff)`(FGuid && NewValue)` <a id="structFRHAPI__XpTable_1aa35f0b87b0a6b1388103f8c371e9feff"></a>

Sets the value of XpUuid_Optional and also sets XpUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearXpUuid`](#structFRHAPI__XpTable_1acb556ad5b7af78430e60dc1f7ffa63ae)`()` <a id="structFRHAPI__XpTable_1acb556ad5b7af78430e60dc1f7ffa63ae"></a>

Clears the value of XpUuid_Optional and sets XpUuid_IsSet to false.

#### `public inline FORCEINLINE void `[`SetXpUuidToNull`](#structFRHAPI__XpTable_1a0ba29f931c0dba8fff3bc74ea4d50e08)`()` <a id="structFRHAPI__XpTable_1a0ba29f931c0dba8fff3bc74ea4d50e08"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsXpUuidNull`](#structFRHAPI__XpTable_1abd048825948c02aef037dd366a233672)`() const` <a id="structFRHAPI__XpTable_1abd048825948c02aef037dd366a233672"></a>

Checks whether XpUuid_Optional is set to null.

#### `public inline FORCEINLINE TMap< FString, int32 > & `[`GetXpEntries`](#structFRHAPI__XpTable_1a41f1b63635394e35c3c03d8d9d8f9282)`()` <a id="structFRHAPI__XpTable_1a41f1b63635394e35c3c03d8d9d8f9282"></a>

Gets the value of XpEntries_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, int32 > & `[`GetXpEntries`](#structFRHAPI__XpTable_1a4b610801bd722ef23f987275ab02fae6)`() const` <a id="structFRHAPI__XpTable_1a4b610801bd722ef23f987275ab02fae6"></a>

Gets the value of XpEntries_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, int32 > & `[`GetXpEntries`](#structFRHAPI__XpTable_1ab55d41482846b35c4d3166a86024c948)`(const TMap< FString, int32 > & DefaultValue) const` <a id="structFRHAPI__XpTable_1ab55d41482846b35c4d3166a86024c948"></a>

Gets the value of XpEntries_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetXpEntries`](#structFRHAPI__XpTable_1acaae913f718cc223527e07d23f687026)`(TMap< FString, int32 > & OutValue) const` <a id="structFRHAPI__XpTable_1acaae913f718cc223527e07d23f687026"></a>

Fills OutValue with the value of XpEntries_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, int32 > * `[`GetXpEntriesOrNull`](#structFRHAPI__XpTable_1aeb95adb06b38f8e6f897e9f4a77060e8)`()` <a id="structFRHAPI__XpTable_1aeb95adb06b38f8e6f897e9f4a77060e8"></a>

Returns a pointer to XpEntries_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, int32 > * `[`GetXpEntriesOrNull`](#structFRHAPI__XpTable_1a6f8cefed5d8760738018d5503f496dc9)`() const` <a id="structFRHAPI__XpTable_1a6f8cefed5d8760738018d5503f496dc9"></a>

Returns a pointer to XpEntries_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetXpEntries`](#structFRHAPI__XpTable_1ae94aee08b272f2f7df327e3f6e99d362)`(const TMap< FString, int32 > & NewValue)` <a id="structFRHAPI__XpTable_1ae94aee08b272f2f7df327e3f6e99d362"></a>

Sets the value of XpEntries_Optional and also sets XpEntries_IsSet to true.

#### `public inline FORCEINLINE void `[`SetXpEntries`](#structFRHAPI__XpTable_1a0c4e8d7811c3045b0420ab553cf5b52d)`(TMap< FString, int32 > && NewValue)` <a id="structFRHAPI__XpTable_1a0c4e8d7811c3045b0420ab553cf5b52d"></a>

Sets the value of XpEntries_Optional and also sets XpEntries_IsSet to true using move semantics.

#### `public inline void `[`ClearXpEntries`](#structFRHAPI__XpTable_1adfef2f411c225c0d6bfd1272ac300bb7)`()` <a id="structFRHAPI__XpTable_1adfef2f411c225c0d6bfd1272ac300bb7"></a>

Clears the value of XpEntries_Optional and sets XpEntries_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTable_1a58b464883f3b7ea3b10afdaeb8978c0f)`()` <a id="structFRHAPI__XpTable_1a58b464883f3b7ea3b10afdaeb8978c0f"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTable_1ab97b9e2de9e76ab4faeed7c09579957e)`() const` <a id="structFRHAPI__XpTable_1ab97b9e2de9e76ab4faeed7c09579957e"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTable_1a150c92e1943e6bb8e255d646ef13c65d)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__XpTable_1a150c92e1943e6bb8e255d646ef13c65d"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__XpTable_1a2173f8c81aeec95eb398f62cdd7a3f26)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__XpTable_1a2173f8c81aeec95eb398f62cdd7a3f26"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTable_1a0a55a79c1c6a5d12ff6f918c16028205)`()` <a id="structFRHAPI__XpTable_1a0a55a79c1c6a5d12ff6f918c16028205"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTable_1aed59d5396e30a9106fe2b81819511524)`() const` <a id="structFRHAPI__XpTable_1aed59d5396e30a9106fe2b81819511524"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__XpTable_1aca9e89ad39b54fcfebd40fbf4c7a3753)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__XpTable_1aca9e89ad39b54fcfebd40fbf4c7a3753"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__XpTable_1ada916f9d74c27c7c6afdb44963ffdc88)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__XpTable_1ada916f9d74c27c7c6afdb44963ffdc88"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__XpTable_1aa5ecb7e76cf1ff2ad80407b03a12f840)`()` <a id="structFRHAPI__XpTable_1aa5ecb7e76cf1ff2ad80407b03a12f840"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__XpTable_1a9b7390f90ad82fe52dc4a68d4c08724a)`()` <a id="structFRHAPI__XpTable_1a9b7390f90ad82fe52dc4a68d4c08724a"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__XpTable_1ad8a8b63c6f79f40a89f4ac99e250c99c)`() const` <a id="structFRHAPI__XpTable_1ad8a8b63c6f79f40a89f4ac99e250c99c"></a>

Checks whether CacheInfo_Optional is set to null.

