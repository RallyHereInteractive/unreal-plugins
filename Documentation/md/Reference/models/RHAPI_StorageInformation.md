---
title: RHAPI_StorageInformation
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_StorageInformation`](#structFRHAPI__StorageInformation) | 

## struct `FRHAPI_StorageInformation` <a id="structFRHAPI__StorageInformation"></a>

```
struct FRHAPI_StorageInformation
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`TotalFiles_Optional`](#structFRHAPI__StorageInformation_1af91d4d2226d8ddcd59770c05238cb53d) | 
`public bool `[`TotalFiles_IsSet`](#structFRHAPI__StorageInformation_1a3fc3f37640700eaccede607125effc1f) | true if TotalFiles_Optional has been set to a value
`public int32 `[`TotalSizeBytes_Optional`](#structFRHAPI__StorageInformation_1a9e8e63f471f0767df2e87d2c721d6fdb) | 
`public bool `[`TotalSizeBytes_IsSet`](#structFRHAPI__StorageInformation_1a226fa50107ca76bffd72e7a848d47777) | true if TotalSizeBytes_Optional has been set to a value
`public int32 `[`TotalSizeMb_Optional`](#structFRHAPI__StorageInformation_1a4267343d47dca2bcd6fa53dd9e587bab) | 
`public bool `[`TotalSizeMb_IsSet`](#structFRHAPI__StorageInformation_1a117986467c7d78a224a6c92bbd89cc65) | true if TotalSizeMb_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__StorageInformation_1aad1f70e8a67b582cd00c73d21daafd02)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__StorageInformation_1ab054bd986c2ec7c01b0514cc4ee9dbee)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetTotalFiles`](#structFRHAPI__StorageInformation_1a97da2a0cbd7e924a0306973f8b8be2de)`()` | Gets the value of TotalFiles_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTotalFiles`](#structFRHAPI__StorageInformation_1a1d2f7b6765e981ce7affbeb82751d934)`() const` | Gets the value of TotalFiles_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTotalFiles`](#structFRHAPI__StorageInformation_1a6abb510bfd40e72155fffece47491ce9)`(const int32 & DefaultValue) const` | Gets the value of TotalFiles_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTotalFiles`](#structFRHAPI__StorageInformation_1a562e8c74f5ead691c982347308f2b318)`(int32 & OutValue) const` | Fills OutValue with the value of TotalFiles_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTotalFilesOrNull`](#structFRHAPI__StorageInformation_1ad9fc4eadcb855ec689e8c6fa3587fd20)`()` | Returns a pointer to TotalFiles_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTotalFilesOrNull`](#structFRHAPI__StorageInformation_1a801fca52e63837bb484d5767ef38a296)`() const` | Returns a pointer to TotalFiles_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTotalFiles`](#structFRHAPI__StorageInformation_1a2a29acbb6503595b19b715eacbc6858b)`(const int32 & NewValue)` | Sets the value of TotalFiles_Optional and also sets TotalFiles_IsSet to true.
`public inline void `[`SetTotalFiles`](#structFRHAPI__StorageInformation_1a52ae5f70c913123e4eec471059b94e94)`(int32 && NewValue)` | Sets the value of TotalFiles_Optional and also sets TotalFiles_IsSet to true using move semantics.
`public inline void `[`ClearTotalFiles`](#structFRHAPI__StorageInformation_1a54b4cfc15895ab8a8daa5fa7732720e1)`()` | Clears the value of TotalFiles_Optional and sets TotalFiles_IsSet to false.
`public inline bool `[`IsTotalFilesSet`](#structFRHAPI__StorageInformation_1a269ecea66f6991724a647894e53ec100)`() const` | Checks whether TotalFiles_Optional has been set.
`public inline bool `[`IsTotalFilesDefaultValue`](#structFRHAPI__StorageInformation_1acdeb195bfc23e310690f2d28876f6ed0)`() const` | Returns true if TotalFiles_Optional is set and matches the default value.
`public inline void `[`SetTotalFilesToDefault`](#structFRHAPI__StorageInformation_1a0a2971c8a2ce136e075539387806049f)`()` | Sets the value of TotalFiles_Optional to its default and also sets TotalFiles_IsSet to true.
`public inline int32 & `[`GetTotalSizeBytes`](#structFRHAPI__StorageInformation_1af25ecc7173e611c747eecde7e2d31d93)`()` | Gets the value of TotalSizeBytes_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTotalSizeBytes`](#structFRHAPI__StorageInformation_1ad8f321f54a58dfead842af763bdc1cf1)`() const` | Gets the value of TotalSizeBytes_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTotalSizeBytes`](#structFRHAPI__StorageInformation_1affda44af460a2a5bd20d7305b765992b)`(const int32 & DefaultValue) const` | Gets the value of TotalSizeBytes_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTotalSizeBytes`](#structFRHAPI__StorageInformation_1ae75422d273a715d725de8bc37b5fc44c)`(int32 & OutValue) const` | Fills OutValue with the value of TotalSizeBytes_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTotalSizeBytesOrNull`](#structFRHAPI__StorageInformation_1a6b0d393030b21cb4cc7f6c8d7b5f7e65)`()` | Returns a pointer to TotalSizeBytes_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTotalSizeBytesOrNull`](#structFRHAPI__StorageInformation_1a6a7da0d794b3b233ac51600e76a06c14)`() const` | Returns a pointer to TotalSizeBytes_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTotalSizeBytes`](#structFRHAPI__StorageInformation_1a8376a97e89f26534db18f156ee41b5f1)`(const int32 & NewValue)` | Sets the value of TotalSizeBytes_Optional and also sets TotalSizeBytes_IsSet to true.
`public inline void `[`SetTotalSizeBytes`](#structFRHAPI__StorageInformation_1aef0a8c1b5d4e2ebc9420e005b6937521)`(int32 && NewValue)` | Sets the value of TotalSizeBytes_Optional and also sets TotalSizeBytes_IsSet to true using move semantics.
`public inline void `[`ClearTotalSizeBytes`](#structFRHAPI__StorageInformation_1aaa0e6dcb7e5f5db0bcdf11affc78b797)`()` | Clears the value of TotalSizeBytes_Optional and sets TotalSizeBytes_IsSet to false.
`public inline bool `[`IsTotalSizeBytesSet`](#structFRHAPI__StorageInformation_1ab581b69233924a39bdeb9d3b6f24660c)`() const` | Checks whether TotalSizeBytes_Optional has been set.
`public inline bool `[`IsTotalSizeBytesDefaultValue`](#structFRHAPI__StorageInformation_1a331d2539bd935fd53d1ddfbf66a8524c)`() const` | Returns true if TotalSizeBytes_Optional is set and matches the default value.
`public inline void `[`SetTotalSizeBytesToDefault`](#structFRHAPI__StorageInformation_1a75cd16e0d30fe99cdd90967cbbdeb82c)`()` | Sets the value of TotalSizeBytes_Optional to its default and also sets TotalSizeBytes_IsSet to true.
`public inline int32 & `[`GetTotalSizeMb`](#structFRHAPI__StorageInformation_1aa7e3442c3358fd79190fb949bef3f025)`()` | Gets the value of TotalSizeMb_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTotalSizeMb`](#structFRHAPI__StorageInformation_1a92c67da200a25916ad783f7c9e6fc878)`() const` | Gets the value of TotalSizeMb_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTotalSizeMb`](#structFRHAPI__StorageInformation_1abc7727778b20931f673773d80fd47053)`(const int32 & DefaultValue) const` | Gets the value of TotalSizeMb_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTotalSizeMb`](#structFRHAPI__StorageInformation_1aa7534b56db228463255dc5ad336ad56e)`(int32 & OutValue) const` | Fills OutValue with the value of TotalSizeMb_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTotalSizeMbOrNull`](#structFRHAPI__StorageInformation_1ad83733f2709fe718af5b172a265cb455)`()` | Returns a pointer to TotalSizeMb_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTotalSizeMbOrNull`](#structFRHAPI__StorageInformation_1a0ee07c76898cc0702042376fd6d9bebc)`() const` | Returns a pointer to TotalSizeMb_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTotalSizeMb`](#structFRHAPI__StorageInformation_1ad44718e6d14caa7f8879c3e3d24ab377)`(const int32 & NewValue)` | Sets the value of TotalSizeMb_Optional and also sets TotalSizeMb_IsSet to true.
`public inline void `[`SetTotalSizeMb`](#structFRHAPI__StorageInformation_1afa3ab93e54eb95e6ebc54a9047313d83)`(int32 && NewValue)` | Sets the value of TotalSizeMb_Optional and also sets TotalSizeMb_IsSet to true using move semantics.
`public inline void `[`ClearTotalSizeMb`](#structFRHAPI__StorageInformation_1ae18909b0b9abb778e0fefb8d2b1748c4)`()` | Clears the value of TotalSizeMb_Optional and sets TotalSizeMb_IsSet to false.
`public inline bool `[`IsTotalSizeMbSet`](#structFRHAPI__StorageInformation_1ae8a7ec53bc255efb9b2e1e4be6df9afa)`() const` | Checks whether TotalSizeMb_Optional has been set.
`public inline bool `[`IsTotalSizeMbDefaultValue`](#structFRHAPI__StorageInformation_1a44b5ab38e3f863a6b1b430490fa2a3de)`() const` | Returns true if TotalSizeMb_Optional is set and matches the default value.
`public inline void `[`SetTotalSizeMbToDefault`](#structFRHAPI__StorageInformation_1a9682073ededa502cb652a0d8557a8f7f)`()` | Sets the value of TotalSizeMb_Optional to its default and also sets TotalSizeMb_IsSet to true.

### Members

#### `public int32 `[`TotalFiles_Optional`](#structFRHAPI__StorageInformation_1af91d4d2226d8ddcd59770c05238cb53d) <a id="structFRHAPI__StorageInformation_1af91d4d2226d8ddcd59770c05238cb53d"></a>

#### `public bool `[`TotalFiles_IsSet`](#structFRHAPI__StorageInformation_1a3fc3f37640700eaccede607125effc1f) <a id="structFRHAPI__StorageInformation_1a3fc3f37640700eaccede607125effc1f"></a>

true if TotalFiles_Optional has been set to a value

#### `public int32 `[`TotalSizeBytes_Optional`](#structFRHAPI__StorageInformation_1a9e8e63f471f0767df2e87d2c721d6fdb) <a id="structFRHAPI__StorageInformation_1a9e8e63f471f0767df2e87d2c721d6fdb"></a>

#### `public bool `[`TotalSizeBytes_IsSet`](#structFRHAPI__StorageInformation_1a226fa50107ca76bffd72e7a848d47777) <a id="structFRHAPI__StorageInformation_1a226fa50107ca76bffd72e7a848d47777"></a>

true if TotalSizeBytes_Optional has been set to a value

#### `public int32 `[`TotalSizeMb_Optional`](#structFRHAPI__StorageInformation_1a4267343d47dca2bcd6fa53dd9e587bab) <a id="structFRHAPI__StorageInformation_1a4267343d47dca2bcd6fa53dd9e587bab"></a>

#### `public bool `[`TotalSizeMb_IsSet`](#structFRHAPI__StorageInformation_1a117986467c7d78a224a6c92bbd89cc65) <a id="structFRHAPI__StorageInformation_1a117986467c7d78a224a6c92bbd89cc65"></a>

true if TotalSizeMb_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__StorageInformation_1aad1f70e8a67b582cd00c73d21daafd02)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__StorageInformation_1aad1f70e8a67b582cd00c73d21daafd02"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__StorageInformation_1ab054bd986c2ec7c01b0514cc4ee9dbee)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__StorageInformation_1ab054bd986c2ec7c01b0514cc4ee9dbee"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetTotalFiles`](#structFRHAPI__StorageInformation_1a97da2a0cbd7e924a0306973f8b8be2de)`()` <a id="structFRHAPI__StorageInformation_1a97da2a0cbd7e924a0306973f8b8be2de"></a>

Gets the value of TotalFiles_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTotalFiles`](#structFRHAPI__StorageInformation_1a1d2f7b6765e981ce7affbeb82751d934)`() const` <a id="structFRHAPI__StorageInformation_1a1d2f7b6765e981ce7affbeb82751d934"></a>

Gets the value of TotalFiles_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTotalFiles`](#structFRHAPI__StorageInformation_1a6abb510bfd40e72155fffece47491ce9)`(const int32 & DefaultValue) const` <a id="structFRHAPI__StorageInformation_1a6abb510bfd40e72155fffece47491ce9"></a>

Gets the value of TotalFiles_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTotalFiles`](#structFRHAPI__StorageInformation_1a562e8c74f5ead691c982347308f2b318)`(int32 & OutValue) const` <a id="structFRHAPI__StorageInformation_1a562e8c74f5ead691c982347308f2b318"></a>

Fills OutValue with the value of TotalFiles_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetTotalFilesOrNull`](#structFRHAPI__StorageInformation_1ad9fc4eadcb855ec689e8c6fa3587fd20)`()` <a id="structFRHAPI__StorageInformation_1ad9fc4eadcb855ec689e8c6fa3587fd20"></a>

Returns a pointer to TotalFiles_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetTotalFilesOrNull`](#structFRHAPI__StorageInformation_1a801fca52e63837bb484d5767ef38a296)`() const` <a id="structFRHAPI__StorageInformation_1a801fca52e63837bb484d5767ef38a296"></a>

Returns a pointer to TotalFiles_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTotalFiles`](#structFRHAPI__StorageInformation_1a2a29acbb6503595b19b715eacbc6858b)`(const int32 & NewValue)` <a id="structFRHAPI__StorageInformation_1a2a29acbb6503595b19b715eacbc6858b"></a>

Sets the value of TotalFiles_Optional and also sets TotalFiles_IsSet to true.

#### `public inline void `[`SetTotalFiles`](#structFRHAPI__StorageInformation_1a52ae5f70c913123e4eec471059b94e94)`(int32 && NewValue)` <a id="structFRHAPI__StorageInformation_1a52ae5f70c913123e4eec471059b94e94"></a>

Sets the value of TotalFiles_Optional and also sets TotalFiles_IsSet to true using move semantics.

#### `public inline void `[`ClearTotalFiles`](#structFRHAPI__StorageInformation_1a54b4cfc15895ab8a8daa5fa7732720e1)`()` <a id="structFRHAPI__StorageInformation_1a54b4cfc15895ab8a8daa5fa7732720e1"></a>

Clears the value of TotalFiles_Optional and sets TotalFiles_IsSet to false.

#### `public inline bool `[`IsTotalFilesSet`](#structFRHAPI__StorageInformation_1a269ecea66f6991724a647894e53ec100)`() const` <a id="structFRHAPI__StorageInformation_1a269ecea66f6991724a647894e53ec100"></a>

Checks whether TotalFiles_Optional has been set.

#### `public inline bool `[`IsTotalFilesDefaultValue`](#structFRHAPI__StorageInformation_1acdeb195bfc23e310690f2d28876f6ed0)`() const` <a id="structFRHAPI__StorageInformation_1acdeb195bfc23e310690f2d28876f6ed0"></a>

Returns true if TotalFiles_Optional is set and matches the default value.

#### `public inline void `[`SetTotalFilesToDefault`](#structFRHAPI__StorageInformation_1a0a2971c8a2ce136e075539387806049f)`()` <a id="structFRHAPI__StorageInformation_1a0a2971c8a2ce136e075539387806049f"></a>

Sets the value of TotalFiles_Optional to its default and also sets TotalFiles_IsSet to true.

#### `public inline int32 & `[`GetTotalSizeBytes`](#structFRHAPI__StorageInformation_1af25ecc7173e611c747eecde7e2d31d93)`()` <a id="structFRHAPI__StorageInformation_1af25ecc7173e611c747eecde7e2d31d93"></a>

Gets the value of TotalSizeBytes_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTotalSizeBytes`](#structFRHAPI__StorageInformation_1ad8f321f54a58dfead842af763bdc1cf1)`() const` <a id="structFRHAPI__StorageInformation_1ad8f321f54a58dfead842af763bdc1cf1"></a>

Gets the value of TotalSizeBytes_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTotalSizeBytes`](#structFRHAPI__StorageInformation_1affda44af460a2a5bd20d7305b765992b)`(const int32 & DefaultValue) const` <a id="structFRHAPI__StorageInformation_1affda44af460a2a5bd20d7305b765992b"></a>

Gets the value of TotalSizeBytes_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTotalSizeBytes`](#structFRHAPI__StorageInformation_1ae75422d273a715d725de8bc37b5fc44c)`(int32 & OutValue) const` <a id="structFRHAPI__StorageInformation_1ae75422d273a715d725de8bc37b5fc44c"></a>

Fills OutValue with the value of TotalSizeBytes_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetTotalSizeBytesOrNull`](#structFRHAPI__StorageInformation_1a6b0d393030b21cb4cc7f6c8d7b5f7e65)`()` <a id="structFRHAPI__StorageInformation_1a6b0d393030b21cb4cc7f6c8d7b5f7e65"></a>

Returns a pointer to TotalSizeBytes_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetTotalSizeBytesOrNull`](#structFRHAPI__StorageInformation_1a6a7da0d794b3b233ac51600e76a06c14)`() const` <a id="structFRHAPI__StorageInformation_1a6a7da0d794b3b233ac51600e76a06c14"></a>

Returns a pointer to TotalSizeBytes_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTotalSizeBytes`](#structFRHAPI__StorageInformation_1a8376a97e89f26534db18f156ee41b5f1)`(const int32 & NewValue)` <a id="structFRHAPI__StorageInformation_1a8376a97e89f26534db18f156ee41b5f1"></a>

Sets the value of TotalSizeBytes_Optional and also sets TotalSizeBytes_IsSet to true.

#### `public inline void `[`SetTotalSizeBytes`](#structFRHAPI__StorageInformation_1aef0a8c1b5d4e2ebc9420e005b6937521)`(int32 && NewValue)` <a id="structFRHAPI__StorageInformation_1aef0a8c1b5d4e2ebc9420e005b6937521"></a>

Sets the value of TotalSizeBytes_Optional and also sets TotalSizeBytes_IsSet to true using move semantics.

#### `public inline void `[`ClearTotalSizeBytes`](#structFRHAPI__StorageInformation_1aaa0e6dcb7e5f5db0bcdf11affc78b797)`()` <a id="structFRHAPI__StorageInformation_1aaa0e6dcb7e5f5db0bcdf11affc78b797"></a>

Clears the value of TotalSizeBytes_Optional and sets TotalSizeBytes_IsSet to false.

#### `public inline bool `[`IsTotalSizeBytesSet`](#structFRHAPI__StorageInformation_1ab581b69233924a39bdeb9d3b6f24660c)`() const` <a id="structFRHAPI__StorageInformation_1ab581b69233924a39bdeb9d3b6f24660c"></a>

Checks whether TotalSizeBytes_Optional has been set.

#### `public inline bool `[`IsTotalSizeBytesDefaultValue`](#structFRHAPI__StorageInformation_1a331d2539bd935fd53d1ddfbf66a8524c)`() const` <a id="structFRHAPI__StorageInformation_1a331d2539bd935fd53d1ddfbf66a8524c"></a>

Returns true if TotalSizeBytes_Optional is set and matches the default value.

#### `public inline void `[`SetTotalSizeBytesToDefault`](#structFRHAPI__StorageInformation_1a75cd16e0d30fe99cdd90967cbbdeb82c)`()` <a id="structFRHAPI__StorageInformation_1a75cd16e0d30fe99cdd90967cbbdeb82c"></a>

Sets the value of TotalSizeBytes_Optional to its default and also sets TotalSizeBytes_IsSet to true.

#### `public inline int32 & `[`GetTotalSizeMb`](#structFRHAPI__StorageInformation_1aa7e3442c3358fd79190fb949bef3f025)`()` <a id="structFRHAPI__StorageInformation_1aa7e3442c3358fd79190fb949bef3f025"></a>

Gets the value of TotalSizeMb_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTotalSizeMb`](#structFRHAPI__StorageInformation_1a92c67da200a25916ad783f7c9e6fc878)`() const` <a id="structFRHAPI__StorageInformation_1a92c67da200a25916ad783f7c9e6fc878"></a>

Gets the value of TotalSizeMb_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTotalSizeMb`](#structFRHAPI__StorageInformation_1abc7727778b20931f673773d80fd47053)`(const int32 & DefaultValue) const` <a id="structFRHAPI__StorageInformation_1abc7727778b20931f673773d80fd47053"></a>

Gets the value of TotalSizeMb_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTotalSizeMb`](#structFRHAPI__StorageInformation_1aa7534b56db228463255dc5ad336ad56e)`(int32 & OutValue) const` <a id="structFRHAPI__StorageInformation_1aa7534b56db228463255dc5ad336ad56e"></a>

Fills OutValue with the value of TotalSizeMb_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetTotalSizeMbOrNull`](#structFRHAPI__StorageInformation_1ad83733f2709fe718af5b172a265cb455)`()` <a id="structFRHAPI__StorageInformation_1ad83733f2709fe718af5b172a265cb455"></a>

Returns a pointer to TotalSizeMb_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetTotalSizeMbOrNull`](#structFRHAPI__StorageInformation_1a0ee07c76898cc0702042376fd6d9bebc)`() const` <a id="structFRHAPI__StorageInformation_1a0ee07c76898cc0702042376fd6d9bebc"></a>

Returns a pointer to TotalSizeMb_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTotalSizeMb`](#structFRHAPI__StorageInformation_1ad44718e6d14caa7f8879c3e3d24ab377)`(const int32 & NewValue)` <a id="structFRHAPI__StorageInformation_1ad44718e6d14caa7f8879c3e3d24ab377"></a>

Sets the value of TotalSizeMb_Optional and also sets TotalSizeMb_IsSet to true.

#### `public inline void `[`SetTotalSizeMb`](#structFRHAPI__StorageInformation_1afa3ab93e54eb95e6ebc54a9047313d83)`(int32 && NewValue)` <a id="structFRHAPI__StorageInformation_1afa3ab93e54eb95e6ebc54a9047313d83"></a>

Sets the value of TotalSizeMb_Optional and also sets TotalSizeMb_IsSet to true using move semantics.

#### `public inline void `[`ClearTotalSizeMb`](#structFRHAPI__StorageInformation_1ae18909b0b9abb778e0fefb8d2b1748c4)`()` <a id="structFRHAPI__StorageInformation_1ae18909b0b9abb778e0fefb8d2b1748c4"></a>

Clears the value of TotalSizeMb_Optional and sets TotalSizeMb_IsSet to false.

#### `public inline bool `[`IsTotalSizeMbSet`](#structFRHAPI__StorageInformation_1ae8a7ec53bc255efb9b2e1e4be6df9afa)`() const` <a id="structFRHAPI__StorageInformation_1ae8a7ec53bc255efb9b2e1e4be6df9afa"></a>

Checks whether TotalSizeMb_Optional has been set.

#### `public inline bool `[`IsTotalSizeMbDefaultValue`](#structFRHAPI__StorageInformation_1a44b5ab38e3f863a6b1b430490fa2a3de)`() const` <a id="structFRHAPI__StorageInformation_1a44b5ab38e3f863a6b1b430490fa2a3de"></a>

Returns true if TotalSizeMb_Optional is set and matches the default value.

#### `public inline void `[`SetTotalSizeMbToDefault`](#structFRHAPI__StorageInformation_1a9682073ededa502cb652a0d8557a8f7f)`()` <a id="structFRHAPI__StorageInformation_1a9682073ededa502cb652a0d8557a8f7f"></a>

Sets the value of TotalSizeMb_Optional to its default and also sets TotalSizeMb_IsSet to true.

