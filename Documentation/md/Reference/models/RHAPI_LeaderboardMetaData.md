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
`public inline FORCEINLINE int32 & `[`GetEntryCount`](#structFRHAPI__LeaderboardMetaData_1a65378b0eb5d214cb2663e45800260b49)`()` | Gets the value of EntryCount.
`public inline FORCEINLINE const int32 & `[`GetEntryCount`](#structFRHAPI__LeaderboardMetaData_1a4cc0dccc90be8c30efd5f62520285bbe)`() const` | Gets the value of EntryCount.
`public inline FORCEINLINE void `[`SetEntryCount`](#structFRHAPI__LeaderboardMetaData_1a20d0ae884eabc6a86fea27cf03c7fc24)`(const int32 & NewValue)` | Sets the value of EntryCount.
`public inline FORCEINLINE void `[`SetEntryCount`](#structFRHAPI__LeaderboardMetaData_1a26250648c9824b1e02a5815317fd8b80)`(int32 && NewValue)` | Sets the value of EntryCount using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_EntryCount`](#structFRHAPI__LeaderboardMetaData_1a216dbf46372cb5b8a11b4f0f219871ea)`()` | Returns the default value of EntryCount.
`public inline FORCEINLINE FDateTime & `[`GetLastUpdatedDatetime`](#structFRHAPI__LeaderboardMetaData_1a8e67cba38bbd77ad6e980d9132cda777)`()` | Gets the value of LastUpdatedDatetime.
`public inline FORCEINLINE const FDateTime & `[`GetLastUpdatedDatetime`](#structFRHAPI__LeaderboardMetaData_1a02df71d9a5ba4528f29fbbfaa352133e)`() const` | Gets the value of LastUpdatedDatetime.
`public inline FORCEINLINE void `[`SetLastUpdatedDatetime`](#structFRHAPI__LeaderboardMetaData_1abeb1b734e89547502fe78342b748581b)`(const FDateTime & NewValue)` | Sets the value of LastUpdatedDatetime.
`public inline FORCEINLINE void `[`SetLastUpdatedDatetime`](#structFRHAPI__LeaderboardMetaData_1aa0f288623ab555e25bfc47c3fac5bc71)`(FDateTime && NewValue)` | Sets the value of LastUpdatedDatetime using move semantics.

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

#### `public inline FORCEINLINE int32 & `[`GetEntryCount`](#structFRHAPI__LeaderboardMetaData_1a65378b0eb5d214cb2663e45800260b49)`()` <a id="structFRHAPI__LeaderboardMetaData_1a65378b0eb5d214cb2663e45800260b49"></a>

Gets the value of EntryCount.

#### `public inline FORCEINLINE const int32 & `[`GetEntryCount`](#structFRHAPI__LeaderboardMetaData_1a4cc0dccc90be8c30efd5f62520285bbe)`() const` <a id="structFRHAPI__LeaderboardMetaData_1a4cc0dccc90be8c30efd5f62520285bbe"></a>

Gets the value of EntryCount.

#### `public inline FORCEINLINE void `[`SetEntryCount`](#structFRHAPI__LeaderboardMetaData_1a20d0ae884eabc6a86fea27cf03c7fc24)`(const int32 & NewValue)` <a id="structFRHAPI__LeaderboardMetaData_1a20d0ae884eabc6a86fea27cf03c7fc24"></a>

Sets the value of EntryCount.

#### `public inline FORCEINLINE void `[`SetEntryCount`](#structFRHAPI__LeaderboardMetaData_1a26250648c9824b1e02a5815317fd8b80)`(int32 && NewValue)` <a id="structFRHAPI__LeaderboardMetaData_1a26250648c9824b1e02a5815317fd8b80"></a>

Sets the value of EntryCount using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_EntryCount`](#structFRHAPI__LeaderboardMetaData_1a216dbf46372cb5b8a11b4f0f219871ea)`()` <a id="structFRHAPI__LeaderboardMetaData_1a216dbf46372cb5b8a11b4f0f219871ea"></a>

Returns the default value of EntryCount.

#### `public inline FORCEINLINE FDateTime & `[`GetLastUpdatedDatetime`](#structFRHAPI__LeaderboardMetaData_1a8e67cba38bbd77ad6e980d9132cda777)`()` <a id="structFRHAPI__LeaderboardMetaData_1a8e67cba38bbd77ad6e980d9132cda777"></a>

Gets the value of LastUpdatedDatetime.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastUpdatedDatetime`](#structFRHAPI__LeaderboardMetaData_1a02df71d9a5ba4528f29fbbfaa352133e)`() const` <a id="structFRHAPI__LeaderboardMetaData_1a02df71d9a5ba4528f29fbbfaa352133e"></a>

Gets the value of LastUpdatedDatetime.

#### `public inline FORCEINLINE void `[`SetLastUpdatedDatetime`](#structFRHAPI__LeaderboardMetaData_1abeb1b734e89547502fe78342b748581b)`(const FDateTime & NewValue)` <a id="structFRHAPI__LeaderboardMetaData_1abeb1b734e89547502fe78342b748581b"></a>

Sets the value of LastUpdatedDatetime.

#### `public inline FORCEINLINE void `[`SetLastUpdatedDatetime`](#structFRHAPI__LeaderboardMetaData_1aa0f288623ab555e25bfc47c3fac5bc71)`(FDateTime && NewValue)` <a id="structFRHAPI__LeaderboardMetaData_1aa0f288623ab555e25bfc47c3fac5bc71"></a>

Sets the value of LastUpdatedDatetime using move semantics.

