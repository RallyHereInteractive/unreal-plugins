---
title: RHAPI_LeaderboardMetaData
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LeaderboardMetaData`](#structFRHAPI__LeaderboardMetaData) | 

## struct `FRHAPI_LeaderboardMetaData` <a id="structFRHAPI__LeaderboardMetaData"></a>

```
struct FRHAPI_LeaderboardMetaData
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`EntryCount`](#structFRHAPI__LeaderboardMetaData_1a964166fe90cda5e64dde0fe67ce8942b) | The number of entries in this leaderboard.
`public FDateTime `[`LastUpdatedDatetime`](#structFRHAPI__LeaderboardMetaData_1a63fd2db7cccd6e0912bba7d0a2131615) | When this leaderboard was last updated.
`public virtual bool `[`FromJson`](#structFRHAPI__LeaderboardMetaData_1a36e67bb4d4e9b21ebf57cefca4648465)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LeaderboardMetaData_1adc342ffc7cca719c55ed085a3a4d416f)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetEntryCount`](#structFRHAPI__LeaderboardMetaData_1af0e5fb829a96ba902f037e75546bd2a8)`()` | Gets the value of EntryCount.
`public inline const int32 & `[`GetEntryCount`](#structFRHAPI__LeaderboardMetaData_1a24f96068b41303fb298e7040015332f0)`() const` | Gets the value of EntryCount.
`public inline void `[`SetEntryCount`](#structFRHAPI__LeaderboardMetaData_1a60e28c36bae7d80925047971629938ec)`(const int32 & NewValue)` | Sets the value of EntryCount.
`public inline void `[`SetEntryCount`](#structFRHAPI__LeaderboardMetaData_1a61a6693e33de78fef82c783440f651be)`(int32 && NewValue)` | Sets the value of EntryCount using move semantics.
`public inline bool `[`IsEntryCountDefaultValue`](#structFRHAPI__LeaderboardMetaData_1a3e2730234cc200e37cf4c4fac2e9631b)`() const` | Returns true if EntryCount matches the default value.
`public inline void `[`SetEntryCountToDefault`](#structFRHAPI__LeaderboardMetaData_1af760f7c0a8cae203a7d323a69518ffb4)`()` | Sets the value of EntryCount to its default
`public inline FDateTime & `[`GetLastUpdatedDatetime`](#structFRHAPI__LeaderboardMetaData_1abd8708761ccc06c444ae9fc1801fc0ba)`()` | Gets the value of LastUpdatedDatetime.
`public inline const FDateTime & `[`GetLastUpdatedDatetime`](#structFRHAPI__LeaderboardMetaData_1a95b1bb88fd9bf62a7ee2ccf5439815e0)`() const` | Gets the value of LastUpdatedDatetime.
`public inline void `[`SetLastUpdatedDatetime`](#structFRHAPI__LeaderboardMetaData_1aaa3bd9b2513041a4c90f19c130ceb4fb)`(const FDateTime & NewValue)` | Sets the value of LastUpdatedDatetime.
`public inline void `[`SetLastUpdatedDatetime`](#structFRHAPI__LeaderboardMetaData_1adb1823d733c100dd27450b0b25ad0b78)`(FDateTime && NewValue)` | Sets the value of LastUpdatedDatetime using move semantics.

### Members

#### `public int32 `[`EntryCount`](#structFRHAPI__LeaderboardMetaData_1a964166fe90cda5e64dde0fe67ce8942b) <a id="structFRHAPI__LeaderboardMetaData_1a964166fe90cda5e64dde0fe67ce8942b"></a>

The number of entries in this leaderboard.

#### `public FDateTime `[`LastUpdatedDatetime`](#structFRHAPI__LeaderboardMetaData_1a63fd2db7cccd6e0912bba7d0a2131615) <a id="structFRHAPI__LeaderboardMetaData_1a63fd2db7cccd6e0912bba7d0a2131615"></a>

When this leaderboard was last updated.

#### `public virtual bool `[`FromJson`](#structFRHAPI__LeaderboardMetaData_1a36e67bb4d4e9b21ebf57cefca4648465)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LeaderboardMetaData_1a36e67bb4d4e9b21ebf57cefca4648465"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__LeaderboardMetaData_1adc342ffc7cca719c55ed085a3a4d416f)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__LeaderboardMetaData_1adc342ffc7cca719c55ed085a3a4d416f"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetEntryCount`](#structFRHAPI__LeaderboardMetaData_1af0e5fb829a96ba902f037e75546bd2a8)`()` <a id="structFRHAPI__LeaderboardMetaData_1af0e5fb829a96ba902f037e75546bd2a8"></a>

Gets the value of EntryCount.

#### `public inline const int32 & `[`GetEntryCount`](#structFRHAPI__LeaderboardMetaData_1a24f96068b41303fb298e7040015332f0)`() const` <a id="structFRHAPI__LeaderboardMetaData_1a24f96068b41303fb298e7040015332f0"></a>

Gets the value of EntryCount.

#### `public inline void `[`SetEntryCount`](#structFRHAPI__LeaderboardMetaData_1a60e28c36bae7d80925047971629938ec)`(const int32 & NewValue)` <a id="structFRHAPI__LeaderboardMetaData_1a60e28c36bae7d80925047971629938ec"></a>

Sets the value of EntryCount.

#### `public inline void `[`SetEntryCount`](#structFRHAPI__LeaderboardMetaData_1a61a6693e33de78fef82c783440f651be)`(int32 && NewValue)` <a id="structFRHAPI__LeaderboardMetaData_1a61a6693e33de78fef82c783440f651be"></a>

Sets the value of EntryCount using move semantics.

#### `public inline bool `[`IsEntryCountDefaultValue`](#structFRHAPI__LeaderboardMetaData_1a3e2730234cc200e37cf4c4fac2e9631b)`() const` <a id="structFRHAPI__LeaderboardMetaData_1a3e2730234cc200e37cf4c4fac2e9631b"></a>

Returns true if EntryCount matches the default value.

#### `public inline void `[`SetEntryCountToDefault`](#structFRHAPI__LeaderboardMetaData_1af760f7c0a8cae203a7d323a69518ffb4)`()` <a id="structFRHAPI__LeaderboardMetaData_1af760f7c0a8cae203a7d323a69518ffb4"></a>

Sets the value of EntryCount to its default

#### `public inline FDateTime & `[`GetLastUpdatedDatetime`](#structFRHAPI__LeaderboardMetaData_1abd8708761ccc06c444ae9fc1801fc0ba)`()` <a id="structFRHAPI__LeaderboardMetaData_1abd8708761ccc06c444ae9fc1801fc0ba"></a>

Gets the value of LastUpdatedDatetime.

#### `public inline const FDateTime & `[`GetLastUpdatedDatetime`](#structFRHAPI__LeaderboardMetaData_1a95b1bb88fd9bf62a7ee2ccf5439815e0)`() const` <a id="structFRHAPI__LeaderboardMetaData_1a95b1bb88fd9bf62a7ee2ccf5439815e0"></a>

Gets the value of LastUpdatedDatetime.

#### `public inline void `[`SetLastUpdatedDatetime`](#structFRHAPI__LeaderboardMetaData_1aaa3bd9b2513041a4c90f19c130ceb4fb)`(const FDateTime & NewValue)` <a id="structFRHAPI__LeaderboardMetaData_1aaa3bd9b2513041a4c90f19c130ceb4fb"></a>

Sets the value of LastUpdatedDatetime.

#### `public inline void `[`SetLastUpdatedDatetime`](#structFRHAPI__LeaderboardMetaData_1adb1823d733c100dd27450b0b25ad0b78)`(FDateTime && NewValue)` <a id="structFRHAPI__LeaderboardMetaData_1adb1823d733c100dd27450b0b25ad0b78"></a>

Sets the value of LastUpdatedDatetime using move semantics.

