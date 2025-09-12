---
title: RHAPI_EntityMMBucketRunStatsMulti
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_EntityMMBucketRunStatsMulti`](#structFRHAPI__EntityMMBucketRunStatsMulti) | 

## struct `FRHAPI_EntityMMBucketRunStatsMulti` <a id="structFRHAPI__EntityMMBucketRunStatsMulti"></a>

```
struct FRHAPI_EntityMMBucketRunStatsMulti
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_EntityMMBucketRunStats`](RHAPI_EntityMMBucketRunStats.md#structFRHAPI__EntityMMBucketRunStats)` > `[`Data_Optional`](#structFRHAPI__EntityMMBucketRunStatsMulti_1af16bb039020efb9c25bba514b5faa2df) | 
`public bool `[`Data_IsSet`](#structFRHAPI__EntityMMBucketRunStatsMulti_1ac7df0b8b073f7f8b156b6afd84f335a2) | true if Data_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__EntityMMBucketRunStatsMulti_1a6efe844f13c2517f6d784f078bf05678)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__EntityMMBucketRunStatsMulti_1a59ac47f759e6db6f7dbabd64367f2001)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_EntityMMBucketRunStats`](RHAPI_EntityMMBucketRunStats.md#structFRHAPI__EntityMMBucketRunStats)` > & `[`GetData`](#structFRHAPI__EntityMMBucketRunStatsMulti_1ae0c34ff156d96c80600e14305686910e)`()` | Gets the value of Data_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_EntityMMBucketRunStats`](RHAPI_EntityMMBucketRunStats.md#structFRHAPI__EntityMMBucketRunStats)` > & `[`GetData`](#structFRHAPI__EntityMMBucketRunStatsMulti_1a9cbcd98d4ca526068d4426d1565f0c71)`() const` | Gets the value of Data_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_EntityMMBucketRunStats`](RHAPI_EntityMMBucketRunStats.md#structFRHAPI__EntityMMBucketRunStats)` > & `[`GetData`](#structFRHAPI__EntityMMBucketRunStatsMulti_1a2443e012ac37cd57c9bc29d984572b67)`(const TArray< `[`FRHAPI_EntityMMBucketRunStats`](RHAPI_EntityMMBucketRunStats.md#structFRHAPI__EntityMMBucketRunStats)` > & DefaultValue) const` | Gets the value of Data_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetData`](#structFRHAPI__EntityMMBucketRunStatsMulti_1a6ca3e647ba277d15197ffa750b57038b)`(TArray< `[`FRHAPI_EntityMMBucketRunStats`](RHAPI_EntityMMBucketRunStats.md#structFRHAPI__EntityMMBucketRunStats)` > & OutValue) const` | Fills OutValue with the value of Data_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_EntityMMBucketRunStats`](RHAPI_EntityMMBucketRunStats.md#structFRHAPI__EntityMMBucketRunStats)` > * `[`GetDataOrNull`](#structFRHAPI__EntityMMBucketRunStatsMulti_1ae58552c80604c1588e0caba449b1d3a4)`()` | Returns a pointer to Data_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_EntityMMBucketRunStats`](RHAPI_EntityMMBucketRunStats.md#structFRHAPI__EntityMMBucketRunStats)` > * `[`GetDataOrNull`](#structFRHAPI__EntityMMBucketRunStatsMulti_1a64bd6007d6115ee04be415b7c460bc8f)`() const` | Returns a pointer to Data_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetData`](#structFRHAPI__EntityMMBucketRunStatsMulti_1a59f3edc075f629a48c0a7a0583ef0b6e)`(const TArray< `[`FRHAPI_EntityMMBucketRunStats`](RHAPI_EntityMMBucketRunStats.md#structFRHAPI__EntityMMBucketRunStats)` > & NewValue)` | Sets the value of Data_Optional and also sets Data_IsSet to true.
`public inline FORCEINLINE void `[`SetData`](#structFRHAPI__EntityMMBucketRunStatsMulti_1ac4df9cb84636190c3b3c4974eb0a517b)`(TArray< `[`FRHAPI_EntityMMBucketRunStats`](RHAPI_EntityMMBucketRunStats.md#structFRHAPI__EntityMMBucketRunStats)` > && NewValue)` | Sets the value of Data_Optional and also sets Data_IsSet to true using move semantics.
`public inline void `[`ClearData`](#structFRHAPI__EntityMMBucketRunStatsMulti_1a291172e28e954196f92936da939d06e6)`()` | Clears the value of Data_Optional and sets Data_IsSet to false.

### Members

#### `public TArray< `[`FRHAPI_EntityMMBucketRunStats`](RHAPI_EntityMMBucketRunStats.md#structFRHAPI__EntityMMBucketRunStats)` > `[`Data_Optional`](#structFRHAPI__EntityMMBucketRunStatsMulti_1af16bb039020efb9c25bba514b5faa2df) <a id="structFRHAPI__EntityMMBucketRunStatsMulti_1af16bb039020efb9c25bba514b5faa2df"></a>

#### `public bool `[`Data_IsSet`](#structFRHAPI__EntityMMBucketRunStatsMulti_1ac7df0b8b073f7f8b156b6afd84f335a2) <a id="structFRHAPI__EntityMMBucketRunStatsMulti_1ac7df0b8b073f7f8b156b6afd84f335a2"></a>

true if Data_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__EntityMMBucketRunStatsMulti_1a6efe844f13c2517f6d784f078bf05678)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__EntityMMBucketRunStatsMulti_1a6efe844f13c2517f6d784f078bf05678"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__EntityMMBucketRunStatsMulti_1a59ac47f759e6db6f7dbabd64367f2001)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__EntityMMBucketRunStatsMulti_1a59ac47f759e6db6f7dbabd64367f2001"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_EntityMMBucketRunStats`](RHAPI_EntityMMBucketRunStats.md#structFRHAPI__EntityMMBucketRunStats)` > & `[`GetData`](#structFRHAPI__EntityMMBucketRunStatsMulti_1ae0c34ff156d96c80600e14305686910e)`()` <a id="structFRHAPI__EntityMMBucketRunStatsMulti_1ae0c34ff156d96c80600e14305686910e"></a>

Gets the value of Data_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_EntityMMBucketRunStats`](RHAPI_EntityMMBucketRunStats.md#structFRHAPI__EntityMMBucketRunStats)` > & `[`GetData`](#structFRHAPI__EntityMMBucketRunStatsMulti_1a9cbcd98d4ca526068d4426d1565f0c71)`() const` <a id="structFRHAPI__EntityMMBucketRunStatsMulti_1a9cbcd98d4ca526068d4426d1565f0c71"></a>

Gets the value of Data_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_EntityMMBucketRunStats`](RHAPI_EntityMMBucketRunStats.md#structFRHAPI__EntityMMBucketRunStats)` > & `[`GetData`](#structFRHAPI__EntityMMBucketRunStatsMulti_1a2443e012ac37cd57c9bc29d984572b67)`(const TArray< `[`FRHAPI_EntityMMBucketRunStats`](RHAPI_EntityMMBucketRunStats.md#structFRHAPI__EntityMMBucketRunStats)` > & DefaultValue) const` <a id="structFRHAPI__EntityMMBucketRunStatsMulti_1a2443e012ac37cd57c9bc29d984572b67"></a>

Gets the value of Data_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetData`](#structFRHAPI__EntityMMBucketRunStatsMulti_1a6ca3e647ba277d15197ffa750b57038b)`(TArray< `[`FRHAPI_EntityMMBucketRunStats`](RHAPI_EntityMMBucketRunStats.md#structFRHAPI__EntityMMBucketRunStats)` > & OutValue) const` <a id="structFRHAPI__EntityMMBucketRunStatsMulti_1a6ca3e647ba277d15197ffa750b57038b"></a>

Fills OutValue with the value of Data_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_EntityMMBucketRunStats`](RHAPI_EntityMMBucketRunStats.md#structFRHAPI__EntityMMBucketRunStats)` > * `[`GetDataOrNull`](#structFRHAPI__EntityMMBucketRunStatsMulti_1ae58552c80604c1588e0caba449b1d3a4)`()` <a id="structFRHAPI__EntityMMBucketRunStatsMulti_1ae58552c80604c1588e0caba449b1d3a4"></a>

Returns a pointer to Data_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_EntityMMBucketRunStats`](RHAPI_EntityMMBucketRunStats.md#structFRHAPI__EntityMMBucketRunStats)` > * `[`GetDataOrNull`](#structFRHAPI__EntityMMBucketRunStatsMulti_1a64bd6007d6115ee04be415b7c460bc8f)`() const` <a id="structFRHAPI__EntityMMBucketRunStatsMulti_1a64bd6007d6115ee04be415b7c460bc8f"></a>

Returns a pointer to Data_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetData`](#structFRHAPI__EntityMMBucketRunStatsMulti_1a59f3edc075f629a48c0a7a0583ef0b6e)`(const TArray< `[`FRHAPI_EntityMMBucketRunStats`](RHAPI_EntityMMBucketRunStats.md#structFRHAPI__EntityMMBucketRunStats)` > & NewValue)` <a id="structFRHAPI__EntityMMBucketRunStatsMulti_1a59f3edc075f629a48c0a7a0583ef0b6e"></a>

Sets the value of Data_Optional and also sets Data_IsSet to true.

#### `public inline FORCEINLINE void `[`SetData`](#structFRHAPI__EntityMMBucketRunStatsMulti_1ac4df9cb84636190c3b3c4974eb0a517b)`(TArray< `[`FRHAPI_EntityMMBucketRunStats`](RHAPI_EntityMMBucketRunStats.md#structFRHAPI__EntityMMBucketRunStats)` > && NewValue)` <a id="structFRHAPI__EntityMMBucketRunStatsMulti_1ac4df9cb84636190c3b3c4974eb0a517b"></a>

Sets the value of Data_Optional and also sets Data_IsSet to true using move semantics.

#### `public inline void `[`ClearData`](#structFRHAPI__EntityMMBucketRunStatsMulti_1a291172e28e954196f92936da939d06e6)`()` <a id="structFRHAPI__EntityMMBucketRunStatsMulti_1a291172e28e954196f92936da939d06e6"></a>

Clears the value of Data_Optional and sets Data_IsSet to false.

