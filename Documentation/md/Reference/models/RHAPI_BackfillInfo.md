---
title: RHAPI_BackfillInfo
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_BackfillInfo`](#structFRHAPI__BackfillInfo) | Info about the open-match backfill object in a session.

## struct `FRHAPI_BackfillInfo` <a id="structFRHAPI__BackfillInfo"></a>

```
struct FRHAPI_BackfillInfo
  : public FRHAPI_Model
```

Info about the open-match backfill object in a session.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`BackfillId`](#structFRHAPI__BackfillInfo_1a01c5dc7289f87b6f57bbb0783f183b83) | Unique ID for the backfill object.
`public TMap< FString, FString > `[`Extensions_Optional`](#structFRHAPI__BackfillInfo_1ac013531459d42192ff7f1967c0157816) | Optional additional extensions used when acknowledging backfill requests.
`public bool `[`Extensions_IsSet`](#structFRHAPI__BackfillInfo_1ac63b53074f4e5de2f25454cf263297d4) | true if Extensions_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__BackfillInfo_1aa85a7adc49b6501ce619d1601bbb8d7f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BackfillInfo_1ace14cff990c67d8d20cd89e33fe36776)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetBackfillId`](#structFRHAPI__BackfillInfo_1aa23e1defb18cf81293c04e82180f9da9)`()` | Gets the value of BackfillId.
`public inline const FString & `[`GetBackfillId`](#structFRHAPI__BackfillInfo_1a15a1860591b7c814291f85c526cbe402)`() const` | Gets the value of BackfillId.
`public inline void `[`SetBackfillId`](#structFRHAPI__BackfillInfo_1a35158eff975fcdcf6d4877fe2c983a4f)`(const FString & NewValue)` | Sets the value of BackfillId.
`public inline void `[`SetBackfillId`](#structFRHAPI__BackfillInfo_1a9875c533250d147c8582470db641dc7d)`(FString && NewValue)` | Sets the value of BackfillId using move semantics.
`public inline TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__BackfillInfo_1a62928cb137bc78f400dbb7838ca6e542)`()` | Gets the value of Extensions_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__BackfillInfo_1a929ca9da6914ac76e8d202124488bc23)`() const` | Gets the value of Extensions_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__BackfillInfo_1a8db72e78ceb61fbf9872005f2a9f8b72)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExtensions`](#structFRHAPI__BackfillInfo_1a46d216b7646ac935c49eb297f468778a)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__BackfillInfo_1a7add134a352c2b4edd2501a2fce9e49d)`()` | Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__BackfillInfo_1afe30f824931d8e030b07e6d97220b4cf)`() const` | Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExtensions`](#structFRHAPI__BackfillInfo_1a3c04338bc88a636450e4abec9fe9eca2)`(const TMap< FString, FString > & NewValue)` | Sets the value of Extensions_Optional and also sets Extensions_IsSet to true.
`public inline void `[`SetExtensions`](#structFRHAPI__BackfillInfo_1aa6c9c0dd772bba3b58df204387dfc0a1)`(TMap< FString, FString > && NewValue)` | Sets the value of Extensions_Optional and also sets Extensions_IsSet to true using move semantics.
`public inline void `[`ClearExtensions`](#structFRHAPI__BackfillInfo_1a13c1c5696be1196b66b1706a090c59ee)`()` | Clears the value of Extensions_Optional and sets Extensions_IsSet to false.
`public inline bool `[`IsExtensionsSet`](#structFRHAPI__BackfillInfo_1a4905698ed079fc1a90ea503bb401632b)`() const` | Checks whether Extensions_Optional has been set.

### Members

#### `public FString `[`BackfillId`](#structFRHAPI__BackfillInfo_1a01c5dc7289f87b6f57bbb0783f183b83) <a id="structFRHAPI__BackfillInfo_1a01c5dc7289f87b6f57bbb0783f183b83"></a>

Unique ID for the backfill object.

#### `public TMap< FString, FString > `[`Extensions_Optional`](#structFRHAPI__BackfillInfo_1ac013531459d42192ff7f1967c0157816) <a id="structFRHAPI__BackfillInfo_1ac013531459d42192ff7f1967c0157816"></a>

Optional additional extensions used when acknowledging backfill requests.

#### `public bool `[`Extensions_IsSet`](#structFRHAPI__BackfillInfo_1ac63b53074f4e5de2f25454cf263297d4) <a id="structFRHAPI__BackfillInfo_1ac63b53074f4e5de2f25454cf263297d4"></a>

true if Extensions_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__BackfillInfo_1aa85a7adc49b6501ce619d1601bbb8d7f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BackfillInfo_1aa85a7adc49b6501ce619d1601bbb8d7f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__BackfillInfo_1ace14cff990c67d8d20cd89e33fe36776)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__BackfillInfo_1ace14cff990c67d8d20cd89e33fe36776"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetBackfillId`](#structFRHAPI__BackfillInfo_1aa23e1defb18cf81293c04e82180f9da9)`()` <a id="structFRHAPI__BackfillInfo_1aa23e1defb18cf81293c04e82180f9da9"></a>

Gets the value of BackfillId.

#### `public inline const FString & `[`GetBackfillId`](#structFRHAPI__BackfillInfo_1a15a1860591b7c814291f85c526cbe402)`() const` <a id="structFRHAPI__BackfillInfo_1a15a1860591b7c814291f85c526cbe402"></a>

Gets the value of BackfillId.

#### `public inline void `[`SetBackfillId`](#structFRHAPI__BackfillInfo_1a35158eff975fcdcf6d4877fe2c983a4f)`(const FString & NewValue)` <a id="structFRHAPI__BackfillInfo_1a35158eff975fcdcf6d4877fe2c983a4f"></a>

Sets the value of BackfillId.

#### `public inline void `[`SetBackfillId`](#structFRHAPI__BackfillInfo_1a9875c533250d147c8582470db641dc7d)`(FString && NewValue)` <a id="structFRHAPI__BackfillInfo_1a9875c533250d147c8582470db641dc7d"></a>

Sets the value of BackfillId using move semantics.

#### `public inline TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__BackfillInfo_1a62928cb137bc78f400dbb7838ca6e542)`()` <a id="structFRHAPI__BackfillInfo_1a62928cb137bc78f400dbb7838ca6e542"></a>

Gets the value of Extensions_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__BackfillInfo_1a929ca9da6914ac76e8d202124488bc23)`() const` <a id="structFRHAPI__BackfillInfo_1a929ca9da6914ac76e8d202124488bc23"></a>

Gets the value of Extensions_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__BackfillInfo_1a8db72e78ceb61fbf9872005f2a9f8b72)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__BackfillInfo_1a8db72e78ceb61fbf9872005f2a9f8b72"></a>

Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExtensions`](#structFRHAPI__BackfillInfo_1a46d216b7646ac935c49eb297f468778a)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__BackfillInfo_1a46d216b7646ac935c49eb297f468778a"></a>

Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__BackfillInfo_1a7add134a352c2b4edd2501a2fce9e49d)`()` <a id="structFRHAPI__BackfillInfo_1a7add134a352c2b4edd2501a2fce9e49d"></a>

Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__BackfillInfo_1afe30f824931d8e030b07e6d97220b4cf)`() const` <a id="structFRHAPI__BackfillInfo_1afe30f824931d8e030b07e6d97220b4cf"></a>

Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExtensions`](#structFRHAPI__BackfillInfo_1a3c04338bc88a636450e4abec9fe9eca2)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__BackfillInfo_1a3c04338bc88a636450e4abec9fe9eca2"></a>

Sets the value of Extensions_Optional and also sets Extensions_IsSet to true.

#### `public inline void `[`SetExtensions`](#structFRHAPI__BackfillInfo_1aa6c9c0dd772bba3b58df204387dfc0a1)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__BackfillInfo_1aa6c9c0dd772bba3b58df204387dfc0a1"></a>

Sets the value of Extensions_Optional and also sets Extensions_IsSet to true using move semantics.

#### `public inline void `[`ClearExtensions`](#structFRHAPI__BackfillInfo_1a13c1c5696be1196b66b1706a090c59ee)`()` <a id="structFRHAPI__BackfillInfo_1a13c1c5696be1196b66b1706a090c59ee"></a>

Clears the value of Extensions_Optional and sets Extensions_IsSet to false.

#### `public inline bool `[`IsExtensionsSet`](#structFRHAPI__BackfillInfo_1a4905698ed079fc1a90ea503bb401632b)`() const` <a id="structFRHAPI__BackfillInfo_1a4905698ed079fc1a90ea503bb401632b"></a>

Checks whether Extensions_Optional has been set.

