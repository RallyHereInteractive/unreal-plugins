# RHAPI_XpTable <a id="group__RHAPI__XpTable"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__XpTable_1af1d0f6100d26e90a9c94c41d719bbab4) | Custom data associated with the resource.
`public bool `[`CustomData_IsSet`](#structFRHAPI__XpTable_1a91f78eae595931b545702560639fe2b1) | true if CustomData_Optional has been set to a value
`public FGuid `[`XpUuid_Optional`](#structFRHAPI__XpTable_1acb2f31eb7fa32f1056dcfd64a90f0e95) | The XP Table UUID.
`public bool `[`XpUuid_IsSet`](#structFRHAPI__XpTable_1aa14640432399209965372fa806902813) | true if XpUuid_Optional has been set to a value
`public TMap< FString, int32 > `[`XpEntries_Optional`](#structFRHAPI__XpTable_1a6fce5a0a8d2d65c0049771d51bf6b2cf) | 
`public bool `[`XpEntries_IsSet`](#structFRHAPI__XpTable_1a0d1d82acc42c1ad029117cd1ea15cb12) | true if XpEntries_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__XpTable_1a0785200adbf808bdd25fab3cb5f01b0b) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__XpTable_1a90dc3ba87a1ecdef6402df456d2389f8) | true if CacheInfo_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__XpTable_1a24ea4b28edc4316d7b54c1c1cfccb6e8)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__XpTable_1aa42ec7439d7080f1fb091eb32ea5163f)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__XpTable_1a114b66b927102155aee991cd58933d6b)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__XpTable_1a807ff3cb851d942fe382189b2d1de39d)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__XpTable_1a49b4dce12c110d5ab853cb3806538360)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__XpTable_1ab510bf011a4173a01f6f536a3fe7b3be)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__XpTable_1a671589c09f7b9c04afe1f9ec78a08ffb)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__XpTable_1a78bc02a47e85ccbaa064abd3ba74d5ac)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__XpTable_1a8a4b62744773d285f688ad4749e10a2a)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__XpTable_1ae84305fd00b049e142b7ca609225e959)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FGuid & `[`GetXpUuid`](#structFRHAPI__XpTable_1aa959c114770a28fb7bfa2e0c3b5a01ea)`()` | Gets the value of XpUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetXpUuid`](#structFRHAPI__XpTable_1a7ef1602cb6deaa93f30543e17eed1178)`() const` | Gets the value of XpUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetXpUuid`](#structFRHAPI__XpTable_1a18bc8bab6fd96bb8acd8814416a8c762)`(const FGuid & DefaultValue) const` | Gets the value of XpUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetXpUuid`](#structFRHAPI__XpTable_1a3397f6ce21c649115fef7400cca188f8)`(FGuid & OutValue) const` | Fills OutValue with the value of XpUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetXpUuidOrNull`](#structFRHAPI__XpTable_1ad922d62d8a9e5384f734d6f6e4994d0a)`()` | Returns a pointer to XpUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetXpUuidOrNull`](#structFRHAPI__XpTable_1ad814398692c686b085ea338e2c392adb)`() const` | Returns a pointer to XpUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetXpUuid`](#structFRHAPI__XpTable_1a8d474e760cdb2739a7c8b2a62164b40e)`(FGuid NewValue)` | Sets the value of XpUuid_Optional and also sets XpUuid_IsSet to true.
`public inline void `[`ClearXpUuid`](#structFRHAPI__XpTable_1acb556ad5b7af78430e60dc1f7ffa63ae)`()` | Clears the value of XpUuid_Optional and sets XpUuid_IsSet to false.
`public inline TMap< FString, int32 > & `[`GetXpEntries`](#structFRHAPI__XpTable_1af3fd80f0b0ca8769eb57089f7a672448)`()` | Gets the value of XpEntries_Optional, regardless of it having been set.
`public inline const TMap< FString, int32 > & `[`GetXpEntries`](#structFRHAPI__XpTable_1a28bd1c9fbc988a8fb285418a5ff0f332)`() const` | Gets the value of XpEntries_Optional, regardless of it having been set.
`public inline const TMap< FString, int32 > & `[`GetXpEntries`](#structFRHAPI__XpTable_1a19d0b92c5075718cb70ecaf15994a270)`(const TMap< FString, int32 > & DefaultValue) const` | Gets the value of XpEntries_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetXpEntries`](#structFRHAPI__XpTable_1a9f905a87e09cf2d84b6ae98e0f7ec030)`(TMap< FString, int32 > & OutValue) const` | Fills OutValue with the value of XpEntries_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, int32 > * `[`GetXpEntriesOrNull`](#structFRHAPI__XpTable_1af21728e76da9955953e58d1b95161481)`()` | Returns a pointer to XpEntries_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, int32 > * `[`GetXpEntriesOrNull`](#structFRHAPI__XpTable_1adfcc075e78c9ea6083a73fcc4aed0159)`() const` | Returns a pointer to XpEntries_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetXpEntries`](#structFRHAPI__XpTable_1ad547837eb0f02ec3a818fde029e26c67)`(TMap< FString, int32 > NewValue)` | Sets the value of XpEntries_Optional and also sets XpEntries_IsSet to true.
`public inline void `[`ClearXpEntries`](#structFRHAPI__XpTable_1adfef2f411c225c0d6bfd1272ac300bb7)`()` | Clears the value of XpEntries_Optional and sets XpEntries_IsSet to false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTable_1a355e9df63257ca1d858dc66204012a91)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTable_1a56c3f70e35c5617fa2de8e753152b5de)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTable_1a12fbb3744d1457d74515689bfb75f48d)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__XpTable_1ac2851870da4c14480a5f4db8b5c5c69a)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTable_1a4aedfc9c07616d5dc36dfea2fd89ff86)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTable_1aa86736fb49ce03fa012e98b5e1036efa)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__XpTable_1a34c25571f9fe95c96a3540fb488274a6)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__XpTable_1aa5ecb7e76cf1ff2ad80407b03a12f840)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### Members

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__XpTable_1af1d0f6100d26e90a9c94c41d719bbab4) <a id="structFRHAPI__XpTable_1af1d0f6100d26e90a9c94c41d719bbab4"></a>

Custom data associated with the resource.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__XpTable_1a91f78eae595931b545702560639fe2b1) <a id="structFRHAPI__XpTable_1a91f78eae595931b545702560639fe2b1"></a>

true if CustomData_Optional has been set to a value

#### `public FGuid `[`XpUuid_Optional`](#structFRHAPI__XpTable_1acb2f31eb7fa32f1056dcfd64a90f0e95) <a id="structFRHAPI__XpTable_1acb2f31eb7fa32f1056dcfd64a90f0e95"></a>

The XP Table UUID.

#### `public bool `[`XpUuid_IsSet`](#structFRHAPI__XpTable_1aa14640432399209965372fa806902813) <a id="structFRHAPI__XpTable_1aa14640432399209965372fa806902813"></a>

true if XpUuid_Optional has been set to a value

#### `public TMap< FString, int32 > `[`XpEntries_Optional`](#structFRHAPI__XpTable_1a6fce5a0a8d2d65c0049771d51bf6b2cf) <a id="structFRHAPI__XpTable_1a6fce5a0a8d2d65c0049771d51bf6b2cf"></a>

#### `public bool `[`XpEntries_IsSet`](#structFRHAPI__XpTable_1a0d1d82acc42c1ad029117cd1ea15cb12) <a id="structFRHAPI__XpTable_1a0d1d82acc42c1ad029117cd1ea15cb12"></a>

true if XpEntries_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__XpTable_1a0785200adbf808bdd25fab3cb5f01b0b) <a id="structFRHAPI__XpTable_1a0785200adbf808bdd25fab3cb5f01b0b"></a>

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__XpTable_1a90dc3ba87a1ecdef6402df456d2389f8) <a id="structFRHAPI__XpTable_1a90dc3ba87a1ecdef6402df456d2389f8"></a>

true if CacheInfo_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__XpTable_1a24ea4b28edc4316d7b54c1c1cfccb6e8)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__XpTable_1a24ea4b28edc4316d7b54c1c1cfccb6e8"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__XpTable_1aa42ec7439d7080f1fb091eb32ea5163f)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__XpTable_1aa42ec7439d7080f1fb091eb32ea5163f"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__XpTable_1a114b66b927102155aee991cd58933d6b)`()` <a id="structFRHAPI__XpTable_1a114b66b927102155aee991cd58933d6b"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__XpTable_1a807ff3cb851d942fe382189b2d1de39d)`() const` <a id="structFRHAPI__XpTable_1a807ff3cb851d942fe382189b2d1de39d"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__XpTable_1a49b4dce12c110d5ab853cb3806538360)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__XpTable_1a49b4dce12c110d5ab853cb3806538360"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__XpTable_1ab510bf011a4173a01f6f536a3fe7b3be)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__XpTable_1ab510bf011a4173a01f6f536a3fe7b3be"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__XpTable_1a671589c09f7b9c04afe1f9ec78a08ffb)`()` <a id="structFRHAPI__XpTable_1a671589c09f7b9c04afe1f9ec78a08ffb"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__XpTable_1a78bc02a47e85ccbaa064abd3ba74d5ac)`() const` <a id="structFRHAPI__XpTable_1a78bc02a47e85ccbaa064abd3ba74d5ac"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__XpTable_1a8a4b62744773d285f688ad4749e10a2a)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__XpTable_1a8a4b62744773d285f688ad4749e10a2a"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__XpTable_1ae84305fd00b049e142b7ca609225e959)`()` <a id="structFRHAPI__XpTable_1ae84305fd00b049e142b7ca609225e959"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FGuid & `[`GetXpUuid`](#structFRHAPI__XpTable_1aa959c114770a28fb7bfa2e0c3b5a01ea)`()` <a id="structFRHAPI__XpTable_1aa959c114770a28fb7bfa2e0c3b5a01ea"></a>

Gets the value of XpUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetXpUuid`](#structFRHAPI__XpTable_1a7ef1602cb6deaa93f30543e17eed1178)`() const` <a id="structFRHAPI__XpTable_1a7ef1602cb6deaa93f30543e17eed1178"></a>

Gets the value of XpUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetXpUuid`](#structFRHAPI__XpTable_1a18bc8bab6fd96bb8acd8814416a8c762)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__XpTable_1a18bc8bab6fd96bb8acd8814416a8c762"></a>

Gets the value of XpUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetXpUuid`](#structFRHAPI__XpTable_1a3397f6ce21c649115fef7400cca188f8)`(FGuid & OutValue) const` <a id="structFRHAPI__XpTable_1a3397f6ce21c649115fef7400cca188f8"></a>

Fills OutValue with the value of XpUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetXpUuidOrNull`](#structFRHAPI__XpTable_1ad922d62d8a9e5384f734d6f6e4994d0a)`()` <a id="structFRHAPI__XpTable_1ad922d62d8a9e5384f734d6f6e4994d0a"></a>

Returns a pointer to XpUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetXpUuidOrNull`](#structFRHAPI__XpTable_1ad814398692c686b085ea338e2c392adb)`() const` <a id="structFRHAPI__XpTable_1ad814398692c686b085ea338e2c392adb"></a>

Returns a pointer to XpUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetXpUuid`](#structFRHAPI__XpTable_1a8d474e760cdb2739a7c8b2a62164b40e)`(FGuid NewValue)` <a id="structFRHAPI__XpTable_1a8d474e760cdb2739a7c8b2a62164b40e"></a>

Sets the value of XpUuid_Optional and also sets XpUuid_IsSet to true.

#### `public inline void `[`ClearXpUuid`](#structFRHAPI__XpTable_1acb556ad5b7af78430e60dc1f7ffa63ae)`()` <a id="structFRHAPI__XpTable_1acb556ad5b7af78430e60dc1f7ffa63ae"></a>

Clears the value of XpUuid_Optional and sets XpUuid_IsSet to false.

#### `public inline TMap< FString, int32 > & `[`GetXpEntries`](#structFRHAPI__XpTable_1af3fd80f0b0ca8769eb57089f7a672448)`()` <a id="structFRHAPI__XpTable_1af3fd80f0b0ca8769eb57089f7a672448"></a>

Gets the value of XpEntries_Optional, regardless of it having been set.

#### `public inline const TMap< FString, int32 > & `[`GetXpEntries`](#structFRHAPI__XpTable_1a28bd1c9fbc988a8fb285418a5ff0f332)`() const` <a id="structFRHAPI__XpTable_1a28bd1c9fbc988a8fb285418a5ff0f332"></a>

Gets the value of XpEntries_Optional, regardless of it having been set.

#### `public inline const TMap< FString, int32 > & `[`GetXpEntries`](#structFRHAPI__XpTable_1a19d0b92c5075718cb70ecaf15994a270)`(const TMap< FString, int32 > & DefaultValue) const` <a id="structFRHAPI__XpTable_1a19d0b92c5075718cb70ecaf15994a270"></a>

Gets the value of XpEntries_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetXpEntries`](#structFRHAPI__XpTable_1a9f905a87e09cf2d84b6ae98e0f7ec030)`(TMap< FString, int32 > & OutValue) const` <a id="structFRHAPI__XpTable_1a9f905a87e09cf2d84b6ae98e0f7ec030"></a>

Fills OutValue with the value of XpEntries_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, int32 > * `[`GetXpEntriesOrNull`](#structFRHAPI__XpTable_1af21728e76da9955953e58d1b95161481)`()` <a id="structFRHAPI__XpTable_1af21728e76da9955953e58d1b95161481"></a>

Returns a pointer to XpEntries_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, int32 > * `[`GetXpEntriesOrNull`](#structFRHAPI__XpTable_1adfcc075e78c9ea6083a73fcc4aed0159)`() const` <a id="structFRHAPI__XpTable_1adfcc075e78c9ea6083a73fcc4aed0159"></a>

Returns a pointer to XpEntries_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetXpEntries`](#structFRHAPI__XpTable_1ad547837eb0f02ec3a818fde029e26c67)`(TMap< FString, int32 > NewValue)` <a id="structFRHAPI__XpTable_1ad547837eb0f02ec3a818fde029e26c67"></a>

Sets the value of XpEntries_Optional and also sets XpEntries_IsSet to true.

#### `public inline void `[`ClearXpEntries`](#structFRHAPI__XpTable_1adfef2f411c225c0d6bfd1272ac300bb7)`()` <a id="structFRHAPI__XpTable_1adfef2f411c225c0d6bfd1272ac300bb7"></a>

Clears the value of XpEntries_Optional and sets XpEntries_IsSet to false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTable_1a355e9df63257ca1d858dc66204012a91)`()` <a id="structFRHAPI__XpTable_1a355e9df63257ca1d858dc66204012a91"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTable_1a56c3f70e35c5617fa2de8e753152b5de)`() const` <a id="structFRHAPI__XpTable_1a56c3f70e35c5617fa2de8e753152b5de"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTable_1a12fbb3744d1457d74515689bfb75f48d)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__XpTable_1a12fbb3744d1457d74515689bfb75f48d"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__XpTable_1ac2851870da4c14480a5f4db8b5c5c69a)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__XpTable_1ac2851870da4c14480a5f4db8b5c5c69a"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTable_1a4aedfc9c07616d5dc36dfea2fd89ff86)`()` <a id="structFRHAPI__XpTable_1a4aedfc9c07616d5dc36dfea2fd89ff86"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTable_1aa86736fb49ce03fa012e98b5e1036efa)`() const` <a id="structFRHAPI__XpTable_1aa86736fb49ce03fa012e98b5e1036efa"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__XpTable_1a34c25571f9fe95c96a3540fb488274a6)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` <a id="structFRHAPI__XpTable_1a34c25571f9fe95c96a3540fb488274a6"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__XpTable_1aa5ecb7e76cf1ff2ad80407b03a12f840)`()` <a id="structFRHAPI__XpTable_1aa5ecb7e76cf1ff2ad80407b03a12f840"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

