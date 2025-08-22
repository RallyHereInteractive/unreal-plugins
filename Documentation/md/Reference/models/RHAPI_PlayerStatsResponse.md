---
title: RHAPI_PlayerStatsResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerStatsResponse`](#structFRHAPI__PlayerStatsResponse) | 

## struct `FRHAPI_PlayerStatsResponse` <a id="structFRHAPI__PlayerStatsResponse"></a>

```
struct FRHAPI_PlayerStatsResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`TotalMatchesPlayed_Optional`](#structFRHAPI__PlayerStatsResponse_1a36dafdea632b3cbdc4464b4d806b8bd2) | 
`public bool `[`TotalMatchesPlayed_IsSet`](#structFRHAPI__PlayerStatsResponse_1af3af8d974d758b6d0fc3f6afea81700c) | true if TotalMatchesPlayed_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerStatsResponse_1a8738ea87bdcdd6b59941015ab87b5f7e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerStatsResponse_1a7f822be32b2b22592d1f2702debba49a)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE int32 & `[`GetTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1ad6058c4b8bd12835f61038cb643f442c)`()` | Gets the value of TotalMatchesPlayed_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1a448d75ae883dc0030873d59dcb517970)`() const` | Gets the value of TotalMatchesPlayed_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1a4ba82ac1a80fcd7bc03ea5bf84824929)`(const int32 & DefaultValue) const` | Gets the value of TotalMatchesPlayed_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1a5257e8dc888f2ad2c1d5dc0914106e3b)`(int32 & OutValue) const` | Fills OutValue with the value of TotalMatchesPlayed_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetTotalMatchesPlayedOrNull`](#structFRHAPI__PlayerStatsResponse_1aaf4a97dbbabfb0524fc63bfccb08db22)`()` | Returns a pointer to TotalMatchesPlayed_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetTotalMatchesPlayedOrNull`](#structFRHAPI__PlayerStatsResponse_1ac37dba6f96a3feda9b87d19b207d7233)`() const` | Returns a pointer to TotalMatchesPlayed_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1ac5cf94d1d95f3aba59980dc422250e16)`(const int32 & NewValue)` | Sets the value of TotalMatchesPlayed_Optional and also sets TotalMatchesPlayed_IsSet to true.
`public inline FORCEINLINE void `[`SetTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1ad9a890fd811c215e7a1f8000127fbd8b)`(int32 && NewValue)` | Sets the value of TotalMatchesPlayed_Optional and also sets TotalMatchesPlayed_IsSet to true using move semantics.
`public inline void `[`ClearTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1ab31145dc8deb3c74ea7bad46113866ea)`()` | Clears the value of TotalMatchesPlayed_Optional and sets TotalMatchesPlayed_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_TotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1add05bf8a723f6c77800d4bf830a7fa38)`()` | Returns the default value of TotalMatchesPlayed.

### Members

#### `public int32 `[`TotalMatchesPlayed_Optional`](#structFRHAPI__PlayerStatsResponse_1a36dafdea632b3cbdc4464b4d806b8bd2) <a id="structFRHAPI__PlayerStatsResponse_1a36dafdea632b3cbdc4464b4d806b8bd2"></a>

#### `public bool `[`TotalMatchesPlayed_IsSet`](#structFRHAPI__PlayerStatsResponse_1af3af8d974d758b6d0fc3f6afea81700c) <a id="structFRHAPI__PlayerStatsResponse_1af3af8d974d758b6d0fc3f6afea81700c"></a>

true if TotalMatchesPlayed_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerStatsResponse_1a8738ea87bdcdd6b59941015ab87b5f7e)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerStatsResponse_1a8738ea87bdcdd6b59941015ab87b5f7e"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerStatsResponse_1a7f822be32b2b22592d1f2702debba49a)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerStatsResponse_1a7f822be32b2b22592d1f2702debba49a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE int32 & `[`GetTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1ad6058c4b8bd12835f61038cb643f442c)`()` <a id="structFRHAPI__PlayerStatsResponse_1ad6058c4b8bd12835f61038cb643f442c"></a>

Gets the value of TotalMatchesPlayed_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1a448d75ae883dc0030873d59dcb517970)`() const` <a id="structFRHAPI__PlayerStatsResponse_1a448d75ae883dc0030873d59dcb517970"></a>

Gets the value of TotalMatchesPlayed_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1a4ba82ac1a80fcd7bc03ea5bf84824929)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerStatsResponse_1a4ba82ac1a80fcd7bc03ea5bf84824929"></a>

Gets the value of TotalMatchesPlayed_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1a5257e8dc888f2ad2c1d5dc0914106e3b)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerStatsResponse_1a5257e8dc888f2ad2c1d5dc0914106e3b"></a>

Fills OutValue with the value of TotalMatchesPlayed_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetTotalMatchesPlayedOrNull`](#structFRHAPI__PlayerStatsResponse_1aaf4a97dbbabfb0524fc63bfccb08db22)`()` <a id="structFRHAPI__PlayerStatsResponse_1aaf4a97dbbabfb0524fc63bfccb08db22"></a>

Returns a pointer to TotalMatchesPlayed_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetTotalMatchesPlayedOrNull`](#structFRHAPI__PlayerStatsResponse_1ac37dba6f96a3feda9b87d19b207d7233)`() const` <a id="structFRHAPI__PlayerStatsResponse_1ac37dba6f96a3feda9b87d19b207d7233"></a>

Returns a pointer to TotalMatchesPlayed_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1ac5cf94d1d95f3aba59980dc422250e16)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerStatsResponse_1ac5cf94d1d95f3aba59980dc422250e16"></a>

Sets the value of TotalMatchesPlayed_Optional and also sets TotalMatchesPlayed_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1ad9a890fd811c215e7a1f8000127fbd8b)`(int32 && NewValue)` <a id="structFRHAPI__PlayerStatsResponse_1ad9a890fd811c215e7a1f8000127fbd8b"></a>

Sets the value of TotalMatchesPlayed_Optional and also sets TotalMatchesPlayed_IsSet to true using move semantics.

#### `public inline void `[`ClearTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1ab31145dc8deb3c74ea7bad46113866ea)`()` <a id="structFRHAPI__PlayerStatsResponse_1ab31145dc8deb3c74ea7bad46113866ea"></a>

Clears the value of TotalMatchesPlayed_Optional and sets TotalMatchesPlayed_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_TotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1add05bf8a723f6c77800d4bf830a7fa38)`()` <a id="structFRHAPI__PlayerStatsResponse_1add05bf8a723f6c77800d4bf830a7fa38"></a>

Returns the default value of TotalMatchesPlayed.

