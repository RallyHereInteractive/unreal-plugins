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
`public inline FORCEINLINE int32 & `[`GetTotalFiles`](#structFRHAPI__StorageInformation_1afa1a58e74b0dba3fdae556358994e524)`()` | Gets the value of TotalFiles_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTotalFiles`](#structFRHAPI__StorageInformation_1aafb40a497b9a1c2095a419ccae26ed70)`() const` | Gets the value of TotalFiles_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTotalFiles`](#structFRHAPI__StorageInformation_1ac7645a2b930e26846b99bf9a6d9e8e30)`(const int32 & DefaultValue) const` | Gets the value of TotalFiles_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTotalFiles`](#structFRHAPI__StorageInformation_1aaea76ca4e84c18dd031aba81d9de4cae)`(int32 & OutValue) const` | Fills OutValue with the value of TotalFiles_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetTotalFilesOrNull`](#structFRHAPI__StorageInformation_1a808c2b099d7f13d40167aaa6e98c8994)`()` | Returns a pointer to TotalFiles_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetTotalFilesOrNull`](#structFRHAPI__StorageInformation_1ab758da2514ee5b0376c5f736d18d9121)`() const` | Returns a pointer to TotalFiles_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTotalFiles`](#structFRHAPI__StorageInformation_1a9896c2b6dea71f1e16f4cdb581e510fb)`(const int32 & NewValue)` | Sets the value of TotalFiles_Optional and also sets TotalFiles_IsSet to true.
`public inline FORCEINLINE void `[`SetTotalFiles`](#structFRHAPI__StorageInformation_1acbea2766125a9a78eb4473cb923e74ee)`(int32 && NewValue)` | Sets the value of TotalFiles_Optional and also sets TotalFiles_IsSet to true using move semantics.
`public inline void `[`ClearTotalFiles`](#structFRHAPI__StorageInformation_1a54b4cfc15895ab8a8daa5fa7732720e1)`()` | Clears the value of TotalFiles_Optional and sets TotalFiles_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_TotalFiles`](#structFRHAPI__StorageInformation_1a60997327a1a2598be0c553fbbf833b3c)`()` | Returns the default value of TotalFiles.
`public inline FORCEINLINE int32 & `[`GetTotalSizeBytes`](#structFRHAPI__StorageInformation_1a20ebaf3edaf6b7cf6f001db7852cdd83)`()` | Gets the value of TotalSizeBytes_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTotalSizeBytes`](#structFRHAPI__StorageInformation_1ae704aec621895a7c8900f854b72c8a19)`() const` | Gets the value of TotalSizeBytes_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTotalSizeBytes`](#structFRHAPI__StorageInformation_1aed9cfe7e58431d438bc351912d6e1629)`(const int32 & DefaultValue) const` | Gets the value of TotalSizeBytes_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTotalSizeBytes`](#structFRHAPI__StorageInformation_1ac569a3c60efdac13c69351ab8874a037)`(int32 & OutValue) const` | Fills OutValue with the value of TotalSizeBytes_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetTotalSizeBytesOrNull`](#structFRHAPI__StorageInformation_1a9dbbffdcc37d2d6c150a22aca8a143fa)`()` | Returns a pointer to TotalSizeBytes_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetTotalSizeBytesOrNull`](#structFRHAPI__StorageInformation_1aba2796e686371876e73d9db0d06e4f91)`() const` | Returns a pointer to TotalSizeBytes_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTotalSizeBytes`](#structFRHAPI__StorageInformation_1a3524a2dd706b0038b8d99f009168eee2)`(const int32 & NewValue)` | Sets the value of TotalSizeBytes_Optional and also sets TotalSizeBytes_IsSet to true.
`public inline FORCEINLINE void `[`SetTotalSizeBytes`](#structFRHAPI__StorageInformation_1ad1a40de76122caab0717995f6662a036)`(int32 && NewValue)` | Sets the value of TotalSizeBytes_Optional and also sets TotalSizeBytes_IsSet to true using move semantics.
`public inline void `[`ClearTotalSizeBytes`](#structFRHAPI__StorageInformation_1aaa0e6dcb7e5f5db0bcdf11affc78b797)`()` | Clears the value of TotalSizeBytes_Optional and sets TotalSizeBytes_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_TotalSizeBytes`](#structFRHAPI__StorageInformation_1a2fa1f191552b560f748f38ba37051d07)`()` | Returns the default value of TotalSizeBytes.
`public inline FORCEINLINE int32 & `[`GetTotalSizeMb`](#structFRHAPI__StorageInformation_1abd40f2526baa58e21708c038867d1e1b)`()` | Gets the value of TotalSizeMb_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTotalSizeMb`](#structFRHAPI__StorageInformation_1a6355afcf792768b9661d4d6de527bc47)`() const` | Gets the value of TotalSizeMb_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTotalSizeMb`](#structFRHAPI__StorageInformation_1a1c311fcc267c2c78d35561f36bfabb61)`(const int32 & DefaultValue) const` | Gets the value of TotalSizeMb_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTotalSizeMb`](#structFRHAPI__StorageInformation_1a1cdc6992b419ef466adc19a7b22ac71f)`(int32 & OutValue) const` | Fills OutValue with the value of TotalSizeMb_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetTotalSizeMbOrNull`](#structFRHAPI__StorageInformation_1a74e2b71c5e2ae6aceff03a5ccd3eb297)`()` | Returns a pointer to TotalSizeMb_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetTotalSizeMbOrNull`](#structFRHAPI__StorageInformation_1a431749424a34a9de02ec0d5854ac24b7)`() const` | Returns a pointer to TotalSizeMb_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTotalSizeMb`](#structFRHAPI__StorageInformation_1a6ab140089b73c297ac64b264d263b170)`(const int32 & NewValue)` | Sets the value of TotalSizeMb_Optional and also sets TotalSizeMb_IsSet to true.
`public inline FORCEINLINE void `[`SetTotalSizeMb`](#structFRHAPI__StorageInformation_1a277ec35fd373aeed0b6b542abf3e7bd1)`(int32 && NewValue)` | Sets the value of TotalSizeMb_Optional and also sets TotalSizeMb_IsSet to true using move semantics.
`public inline void `[`ClearTotalSizeMb`](#structFRHAPI__StorageInformation_1ae18909b0b9abb778e0fefb8d2b1748c4)`()` | Clears the value of TotalSizeMb_Optional and sets TotalSizeMb_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_TotalSizeMb`](#structFRHAPI__StorageInformation_1a090885464dac914b575c5bf376e5dc4f)`()` | Returns the default value of TotalSizeMb.

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

#### `public inline FORCEINLINE int32 & `[`GetTotalFiles`](#structFRHAPI__StorageInformation_1afa1a58e74b0dba3fdae556358994e524)`()` <a id="structFRHAPI__StorageInformation_1afa1a58e74b0dba3fdae556358994e524"></a>

Gets the value of TotalFiles_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTotalFiles`](#structFRHAPI__StorageInformation_1aafb40a497b9a1c2095a419ccae26ed70)`() const` <a id="structFRHAPI__StorageInformation_1aafb40a497b9a1c2095a419ccae26ed70"></a>

Gets the value of TotalFiles_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTotalFiles`](#structFRHAPI__StorageInformation_1ac7645a2b930e26846b99bf9a6d9e8e30)`(const int32 & DefaultValue) const` <a id="structFRHAPI__StorageInformation_1ac7645a2b930e26846b99bf9a6d9e8e30"></a>

Gets the value of TotalFiles_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTotalFiles`](#structFRHAPI__StorageInformation_1aaea76ca4e84c18dd031aba81d9de4cae)`(int32 & OutValue) const` <a id="structFRHAPI__StorageInformation_1aaea76ca4e84c18dd031aba81d9de4cae"></a>

Fills OutValue with the value of TotalFiles_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetTotalFilesOrNull`](#structFRHAPI__StorageInformation_1a808c2b099d7f13d40167aaa6e98c8994)`()` <a id="structFRHAPI__StorageInformation_1a808c2b099d7f13d40167aaa6e98c8994"></a>

Returns a pointer to TotalFiles_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetTotalFilesOrNull`](#structFRHAPI__StorageInformation_1ab758da2514ee5b0376c5f736d18d9121)`() const` <a id="structFRHAPI__StorageInformation_1ab758da2514ee5b0376c5f736d18d9121"></a>

Returns a pointer to TotalFiles_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTotalFiles`](#structFRHAPI__StorageInformation_1a9896c2b6dea71f1e16f4cdb581e510fb)`(const int32 & NewValue)` <a id="structFRHAPI__StorageInformation_1a9896c2b6dea71f1e16f4cdb581e510fb"></a>

Sets the value of TotalFiles_Optional and also sets TotalFiles_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTotalFiles`](#structFRHAPI__StorageInformation_1acbea2766125a9a78eb4473cb923e74ee)`(int32 && NewValue)` <a id="structFRHAPI__StorageInformation_1acbea2766125a9a78eb4473cb923e74ee"></a>

Sets the value of TotalFiles_Optional and also sets TotalFiles_IsSet to true using move semantics.

#### `public inline void `[`ClearTotalFiles`](#structFRHAPI__StorageInformation_1a54b4cfc15895ab8a8daa5fa7732720e1)`()` <a id="structFRHAPI__StorageInformation_1a54b4cfc15895ab8a8daa5fa7732720e1"></a>

Clears the value of TotalFiles_Optional and sets TotalFiles_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_TotalFiles`](#structFRHAPI__StorageInformation_1a60997327a1a2598be0c553fbbf833b3c)`()` <a id="structFRHAPI__StorageInformation_1a60997327a1a2598be0c553fbbf833b3c"></a>

Returns the default value of TotalFiles.

#### `public inline FORCEINLINE int32 & `[`GetTotalSizeBytes`](#structFRHAPI__StorageInformation_1a20ebaf3edaf6b7cf6f001db7852cdd83)`()` <a id="structFRHAPI__StorageInformation_1a20ebaf3edaf6b7cf6f001db7852cdd83"></a>

Gets the value of TotalSizeBytes_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTotalSizeBytes`](#structFRHAPI__StorageInformation_1ae704aec621895a7c8900f854b72c8a19)`() const` <a id="structFRHAPI__StorageInformation_1ae704aec621895a7c8900f854b72c8a19"></a>

Gets the value of TotalSizeBytes_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTotalSizeBytes`](#structFRHAPI__StorageInformation_1aed9cfe7e58431d438bc351912d6e1629)`(const int32 & DefaultValue) const` <a id="structFRHAPI__StorageInformation_1aed9cfe7e58431d438bc351912d6e1629"></a>

Gets the value of TotalSizeBytes_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTotalSizeBytes`](#structFRHAPI__StorageInformation_1ac569a3c60efdac13c69351ab8874a037)`(int32 & OutValue) const` <a id="structFRHAPI__StorageInformation_1ac569a3c60efdac13c69351ab8874a037"></a>

Fills OutValue with the value of TotalSizeBytes_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetTotalSizeBytesOrNull`](#structFRHAPI__StorageInformation_1a9dbbffdcc37d2d6c150a22aca8a143fa)`()` <a id="structFRHAPI__StorageInformation_1a9dbbffdcc37d2d6c150a22aca8a143fa"></a>

Returns a pointer to TotalSizeBytes_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetTotalSizeBytesOrNull`](#structFRHAPI__StorageInformation_1aba2796e686371876e73d9db0d06e4f91)`() const` <a id="structFRHAPI__StorageInformation_1aba2796e686371876e73d9db0d06e4f91"></a>

Returns a pointer to TotalSizeBytes_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTotalSizeBytes`](#structFRHAPI__StorageInformation_1a3524a2dd706b0038b8d99f009168eee2)`(const int32 & NewValue)` <a id="structFRHAPI__StorageInformation_1a3524a2dd706b0038b8d99f009168eee2"></a>

Sets the value of TotalSizeBytes_Optional and also sets TotalSizeBytes_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTotalSizeBytes`](#structFRHAPI__StorageInformation_1ad1a40de76122caab0717995f6662a036)`(int32 && NewValue)` <a id="structFRHAPI__StorageInformation_1ad1a40de76122caab0717995f6662a036"></a>

Sets the value of TotalSizeBytes_Optional and also sets TotalSizeBytes_IsSet to true using move semantics.

#### `public inline void `[`ClearTotalSizeBytes`](#structFRHAPI__StorageInformation_1aaa0e6dcb7e5f5db0bcdf11affc78b797)`()` <a id="structFRHAPI__StorageInformation_1aaa0e6dcb7e5f5db0bcdf11affc78b797"></a>

Clears the value of TotalSizeBytes_Optional and sets TotalSizeBytes_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_TotalSizeBytes`](#structFRHAPI__StorageInformation_1a2fa1f191552b560f748f38ba37051d07)`()` <a id="structFRHAPI__StorageInformation_1a2fa1f191552b560f748f38ba37051d07"></a>

Returns the default value of TotalSizeBytes.

#### `public inline FORCEINLINE int32 & `[`GetTotalSizeMb`](#structFRHAPI__StorageInformation_1abd40f2526baa58e21708c038867d1e1b)`()` <a id="structFRHAPI__StorageInformation_1abd40f2526baa58e21708c038867d1e1b"></a>

Gets the value of TotalSizeMb_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTotalSizeMb`](#structFRHAPI__StorageInformation_1a6355afcf792768b9661d4d6de527bc47)`() const` <a id="structFRHAPI__StorageInformation_1a6355afcf792768b9661d4d6de527bc47"></a>

Gets the value of TotalSizeMb_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTotalSizeMb`](#structFRHAPI__StorageInformation_1a1c311fcc267c2c78d35561f36bfabb61)`(const int32 & DefaultValue) const` <a id="structFRHAPI__StorageInformation_1a1c311fcc267c2c78d35561f36bfabb61"></a>

Gets the value of TotalSizeMb_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTotalSizeMb`](#structFRHAPI__StorageInformation_1a1cdc6992b419ef466adc19a7b22ac71f)`(int32 & OutValue) const` <a id="structFRHAPI__StorageInformation_1a1cdc6992b419ef466adc19a7b22ac71f"></a>

Fills OutValue with the value of TotalSizeMb_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetTotalSizeMbOrNull`](#structFRHAPI__StorageInformation_1a74e2b71c5e2ae6aceff03a5ccd3eb297)`()` <a id="structFRHAPI__StorageInformation_1a74e2b71c5e2ae6aceff03a5ccd3eb297"></a>

Returns a pointer to TotalSizeMb_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetTotalSizeMbOrNull`](#structFRHAPI__StorageInformation_1a431749424a34a9de02ec0d5854ac24b7)`() const` <a id="structFRHAPI__StorageInformation_1a431749424a34a9de02ec0d5854ac24b7"></a>

Returns a pointer to TotalSizeMb_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTotalSizeMb`](#structFRHAPI__StorageInformation_1a6ab140089b73c297ac64b264d263b170)`(const int32 & NewValue)` <a id="structFRHAPI__StorageInformation_1a6ab140089b73c297ac64b264d263b170"></a>

Sets the value of TotalSizeMb_Optional and also sets TotalSizeMb_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTotalSizeMb`](#structFRHAPI__StorageInformation_1a277ec35fd373aeed0b6b542abf3e7bd1)`(int32 && NewValue)` <a id="structFRHAPI__StorageInformation_1a277ec35fd373aeed0b6b542abf3e7bd1"></a>

Sets the value of TotalSizeMb_Optional and also sets TotalSizeMb_IsSet to true using move semantics.

#### `public inline void `[`ClearTotalSizeMb`](#structFRHAPI__StorageInformation_1ae18909b0b9abb778e0fefb8d2b1748c4)`()` <a id="structFRHAPI__StorageInformation_1ae18909b0b9abb778e0fefb8d2b1748c4"></a>

Clears the value of TotalSizeMb_Optional and sets TotalSizeMb_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_TotalSizeMb`](#structFRHAPI__StorageInformation_1a090885464dac914b575c5bf376e5dc4f)`()` <a id="structFRHAPI__StorageInformation_1a090885464dac914b575c5bf376e5dc4f"></a>

Returns the default value of TotalSizeMb.

