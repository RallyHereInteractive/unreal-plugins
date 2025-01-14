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
`public inline FGuid & `[`GetDeserterId`](#structFRHAPI__DeserterConfig_1ab663c798ff3902977ea124e7cc7aa3d7)`()` | Gets the value of DeserterId.
`public inline const FGuid & `[`GetDeserterId`](#structFRHAPI__DeserterConfig_1a4704fff8f712970443e353816016006a)`() const` | Gets the value of DeserterId.
`public inline void `[`SetDeserterId`](#structFRHAPI__DeserterConfig_1af62955f81dcc7402a4966c62fc7951d0)`(const FGuid & NewValue)` | Sets the value of DeserterId.
`public inline void `[`SetDeserterId`](#structFRHAPI__DeserterConfig_1a96294d315340ed2d4e916c1cea93aa08)`(FGuid && NewValue)` | Sets the value of DeserterId using move semantics.
`public inline FDateTime & `[`GetLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1ac78d14c37de426a79bdfa5367752786a)`()` | Gets the value of LastClearedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1af8f6201f24be6c81cb836b6d403e9502)`() const` | Gets the value of LastClearedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1addf0dcec725cd6143e80100690c28a0a)`(const FDateTime & DefaultValue) const` | Gets the value of LastClearedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1a3ec57dc0b89c718e615f8d7e88564060)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastClearedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetLastClearedTimestampOrNull`](#structFRHAPI__DeserterConfig_1a2e2d47692f6857ec0e99de78b780fdfc)`()` | Returns a pointer to LastClearedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetLastClearedTimestampOrNull`](#structFRHAPI__DeserterConfig_1ae2d74f727127d81700a61c7407c6f9ef)`() const` | Returns a pointer to LastClearedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1aba498c071f117a16558e996462115ed2)`(const FDateTime & NewValue)` | Sets the value of LastClearedTimestamp_Optional and also sets LastClearedTimestamp_IsSet to true.
`public inline void `[`SetLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1a6322addc289964692a5f20845ad5a54a)`(FDateTime && NewValue)` | Sets the value of LastClearedTimestamp_Optional and also sets LastClearedTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1a2759353d424262873a9d4cbf842aa670)`()` | Clears the value of LastClearedTimestamp_Optional and sets LastClearedTimestamp_IsSet to false.
`public inline bool `[`IsLastClearedTimestampSet`](#structFRHAPI__DeserterConfig_1ae958b92cae270f9d52ebac2cd4116c96)`() const` | Checks whether LastClearedTimestamp_Optional has been set.

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

#### `public inline FGuid & `[`GetDeserterId`](#structFRHAPI__DeserterConfig_1ab663c798ff3902977ea124e7cc7aa3d7)`()` <a id="structFRHAPI__DeserterConfig_1ab663c798ff3902977ea124e7cc7aa3d7"></a>

Gets the value of DeserterId.

#### `public inline const FGuid & `[`GetDeserterId`](#structFRHAPI__DeserterConfig_1a4704fff8f712970443e353816016006a)`() const` <a id="structFRHAPI__DeserterConfig_1a4704fff8f712970443e353816016006a"></a>

Gets the value of DeserterId.

#### `public inline void `[`SetDeserterId`](#structFRHAPI__DeserterConfig_1af62955f81dcc7402a4966c62fc7951d0)`(const FGuid & NewValue)` <a id="structFRHAPI__DeserterConfig_1af62955f81dcc7402a4966c62fc7951d0"></a>

Sets the value of DeserterId.

#### `public inline void `[`SetDeserterId`](#structFRHAPI__DeserterConfig_1a96294d315340ed2d4e916c1cea93aa08)`(FGuid && NewValue)` <a id="structFRHAPI__DeserterConfig_1a96294d315340ed2d4e916c1cea93aa08"></a>

Sets the value of DeserterId using move semantics.

#### `public inline FDateTime & `[`GetLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1ac78d14c37de426a79bdfa5367752786a)`()` <a id="structFRHAPI__DeserterConfig_1ac78d14c37de426a79bdfa5367752786a"></a>

Gets the value of LastClearedTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1af8f6201f24be6c81cb836b6d403e9502)`() const` <a id="structFRHAPI__DeserterConfig_1af8f6201f24be6c81cb836b6d403e9502"></a>

Gets the value of LastClearedTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1addf0dcec725cd6143e80100690c28a0a)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__DeserterConfig_1addf0dcec725cd6143e80100690c28a0a"></a>

Gets the value of LastClearedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1a3ec57dc0b89c718e615f8d7e88564060)`(FDateTime & OutValue) const` <a id="structFRHAPI__DeserterConfig_1a3ec57dc0b89c718e615f8d7e88564060"></a>

Fills OutValue with the value of LastClearedTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetLastClearedTimestampOrNull`](#structFRHAPI__DeserterConfig_1a2e2d47692f6857ec0e99de78b780fdfc)`()` <a id="structFRHAPI__DeserterConfig_1a2e2d47692f6857ec0e99de78b780fdfc"></a>

Returns a pointer to LastClearedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetLastClearedTimestampOrNull`](#structFRHAPI__DeserterConfig_1ae2d74f727127d81700a61c7407c6f9ef)`() const` <a id="structFRHAPI__DeserterConfig_1ae2d74f727127d81700a61c7407c6f9ef"></a>

Returns a pointer to LastClearedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1aba498c071f117a16558e996462115ed2)`(const FDateTime & NewValue)` <a id="structFRHAPI__DeserterConfig_1aba498c071f117a16558e996462115ed2"></a>

Sets the value of LastClearedTimestamp_Optional and also sets LastClearedTimestamp_IsSet to true.

#### `public inline void `[`SetLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1a6322addc289964692a5f20845ad5a54a)`(FDateTime && NewValue)` <a id="structFRHAPI__DeserterConfig_1a6322addc289964692a5f20845ad5a54a"></a>

Sets the value of LastClearedTimestamp_Optional and also sets LastClearedTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearLastClearedTimestamp`](#structFRHAPI__DeserterConfig_1a2759353d424262873a9d4cbf842aa670)`()` <a id="structFRHAPI__DeserterConfig_1a2759353d424262873a9d4cbf842aa670"></a>

Clears the value of LastClearedTimestamp_Optional and sets LastClearedTimestamp_IsSet to false.

#### `public inline bool `[`IsLastClearedTimestampSet`](#structFRHAPI__DeserterConfig_1ae958b92cae270f9d52ebac2cd4116c96)`() const` <a id="structFRHAPI__DeserterConfig_1ae958b92cae270f9d52ebac2cd4116c96"></a>

Checks whether LastClearedTimestamp_Optional has been set.

