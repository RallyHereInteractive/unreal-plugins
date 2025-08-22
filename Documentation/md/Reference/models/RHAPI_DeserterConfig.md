---
title: RHAPI_DeserterConfig
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_DeserterConfig`](#structFRHAPI__DeserterConfig) | 

## struct `FRHAPI_DeserterConfig` <a id="structFRHAPI__DeserterConfig"></a>

```
struct FRHAPI_DeserterConfig
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`DeserterId`](#structFRHAPI__DeserterConfig_1a42bd72546bd60dd7b5b6074e2e7e81a9) | Unique id for this set of deserter config.
`public FDateTime `[`LastClearedTimestamp_Optional`](#structFRHAPI__DeserterConfig_1aa10fbedf77df6acf14c1baadbd85aed9) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`LastClearedTimestamp_IsSet`](#structFRHAPI__DeserterConfig_1a142a8e7dd0dd85a701c846e9e83240cb) | true if LastClearedTimestamp_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__DeserterConfig_1aa56f80606556b57ee53c5c5fece60594)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__DeserterConfig_1a904544b656b606c9575e00339883042b)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetDeserterId`](#structFRHAPI__DeserterConfig_1af1ac8df2bd7334bc1f5f2c97bd66b31c)`()` | Gets the value of DeserterId.
`public inline FORCEINLINE const FGuid & `[`GetDeserterId`](#structFRHAPI__DeserterConfig_1a54bbf840f67efec1aabe039f506a479c)`() const` | Gets the value of DeserterId.
`public inline FORCEINLINE void `[`SetDeserterId`](#structFRHAPI__DeserterConfig_1a6f0d67133644f2a71c239cd4bb7bdd98)`(const FGuid & NewValue)` | Sets the value of DeserterId.
`public inline FORCEINLINE void `[`SetDeserterId`](#structFRHAPI__DeserterConfig_1a25b3ba72ff7db95c6aaba6f4e18c9e4f)`(FGuid && NewValue)` | Sets the value of DeserterId using move semantics.
`public inline FORCEINLINE FDateTime & `[`GetLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1a4dbe998ed5f24fa67483ab94327be1cb)`()` | Gets the value of LastClearedTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1a2822ec010f1378e42d9e0eb1714723ed)`() const` | Gets the value of LastClearedTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1a7c52308325e130c28683347b66fb78bf)`(const FDateTime & DefaultValue) const` | Gets the value of LastClearedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1a58ade92048aed01732fa56a10ccb8794)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastClearedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetLastClearedTimestampOrNull`](#structFRHAPI__DeserterConfig_1a12af24722b1f4e521ad9efa210b395bb)`()` | Returns a pointer to LastClearedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetLastClearedTimestampOrNull`](#structFRHAPI__DeserterConfig_1ae34d3c0dcf45183874031d42f112461f)`() const` | Returns a pointer to LastClearedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1ae6b25f7999b5337bee5ddae11423403e)`(const FDateTime & NewValue)` | Sets the value of LastClearedTimestamp_Optional and also sets LastClearedTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1a516c31442a85c8edb9925057f78998e7)`(FDateTime && NewValue)` | Sets the value of LastClearedTimestamp_Optional and also sets LastClearedTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1a2759353d424262873a9d4cbf842aa670)`()` | Clears the value of LastClearedTimestamp_Optional and sets LastClearedTimestamp_IsSet to false.

### Members

#### `public FGuid `[`DeserterId`](#structFRHAPI__DeserterConfig_1a42bd72546bd60dd7b5b6074e2e7e81a9) <a id="structFRHAPI__DeserterConfig_1a42bd72546bd60dd7b5b6074e2e7e81a9"></a>

Unique id for this set of deserter config.

#### `public FDateTime `[`LastClearedTimestamp_Optional`](#structFRHAPI__DeserterConfig_1aa10fbedf77df6acf14c1baadbd85aed9) <a id="structFRHAPI__DeserterConfig_1aa10fbedf77df6acf14c1baadbd85aed9"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`LastClearedTimestamp_IsSet`](#structFRHAPI__DeserterConfig_1a142a8e7dd0dd85a701c846e9e83240cb) <a id="structFRHAPI__DeserterConfig_1a142a8e7dd0dd85a701c846e9e83240cb"></a>

true if LastClearedTimestamp_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__DeserterConfig_1aa56f80606556b57ee53c5c5fece60594)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__DeserterConfig_1aa56f80606556b57ee53c5c5fece60594"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__DeserterConfig_1a904544b656b606c9575e00339883042b)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__DeserterConfig_1a904544b656b606c9575e00339883042b"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetDeserterId`](#structFRHAPI__DeserterConfig_1af1ac8df2bd7334bc1f5f2c97bd66b31c)`()` <a id="structFRHAPI__DeserterConfig_1af1ac8df2bd7334bc1f5f2c97bd66b31c"></a>

Gets the value of DeserterId.

#### `public inline FORCEINLINE const FGuid & `[`GetDeserterId`](#structFRHAPI__DeserterConfig_1a54bbf840f67efec1aabe039f506a479c)`() const` <a id="structFRHAPI__DeserterConfig_1a54bbf840f67efec1aabe039f506a479c"></a>

Gets the value of DeserterId.

#### `public inline FORCEINLINE void `[`SetDeserterId`](#structFRHAPI__DeserterConfig_1a6f0d67133644f2a71c239cd4bb7bdd98)`(const FGuid & NewValue)` <a id="structFRHAPI__DeserterConfig_1a6f0d67133644f2a71c239cd4bb7bdd98"></a>

Sets the value of DeserterId.

#### `public inline FORCEINLINE void `[`SetDeserterId`](#structFRHAPI__DeserterConfig_1a25b3ba72ff7db95c6aaba6f4e18c9e4f)`(FGuid && NewValue)` <a id="structFRHAPI__DeserterConfig_1a25b3ba72ff7db95c6aaba6f4e18c9e4f"></a>

Sets the value of DeserterId using move semantics.

#### `public inline FORCEINLINE FDateTime & `[`GetLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1a4dbe998ed5f24fa67483ab94327be1cb)`()` <a id="structFRHAPI__DeserterConfig_1a4dbe998ed5f24fa67483ab94327be1cb"></a>

Gets the value of LastClearedTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1a2822ec010f1378e42d9e0eb1714723ed)`() const` <a id="structFRHAPI__DeserterConfig_1a2822ec010f1378e42d9e0eb1714723ed"></a>

Gets the value of LastClearedTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1a7c52308325e130c28683347b66fb78bf)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__DeserterConfig_1a7c52308325e130c28683347b66fb78bf"></a>

Gets the value of LastClearedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1a58ade92048aed01732fa56a10ccb8794)`(FDateTime & OutValue) const` <a id="structFRHAPI__DeserterConfig_1a58ade92048aed01732fa56a10ccb8794"></a>

Fills OutValue with the value of LastClearedTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetLastClearedTimestampOrNull`](#structFRHAPI__DeserterConfig_1a12af24722b1f4e521ad9efa210b395bb)`()` <a id="structFRHAPI__DeserterConfig_1a12af24722b1f4e521ad9efa210b395bb"></a>

Returns a pointer to LastClearedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetLastClearedTimestampOrNull`](#structFRHAPI__DeserterConfig_1ae34d3c0dcf45183874031d42f112461f)`() const` <a id="structFRHAPI__DeserterConfig_1ae34d3c0dcf45183874031d42f112461f"></a>

Returns a pointer to LastClearedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1ae6b25f7999b5337bee5ddae11423403e)`(const FDateTime & NewValue)` <a id="structFRHAPI__DeserterConfig_1ae6b25f7999b5337bee5ddae11423403e"></a>

Sets the value of LastClearedTimestamp_Optional and also sets LastClearedTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1a516c31442a85c8edb9925057f78998e7)`(FDateTime && NewValue)` <a id="structFRHAPI__DeserterConfig_1a516c31442a85c8edb9925057f78998e7"></a>

Sets the value of LastClearedTimestamp_Optional and also sets LastClearedTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1a2759353d424262873a9d4cbf842aa670)`()` <a id="structFRHAPI__DeserterConfig_1a2759353d424262873a9d4cbf842aa670"></a>

Clears the value of LastClearedTimestamp_Optional and sets LastClearedTimestamp_IsSet to false.

