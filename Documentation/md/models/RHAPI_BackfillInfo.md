# group `RHAPI_BackfillInfo` <a id="group__RHAPI__BackfillInfo"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__BackfillInfo_1ae4ed55e687619a482f28db4b50c90a56)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BackfillInfo_1a4fcd1e078a86ff0937721ffd81b085b8)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetBackfillId`](#structFRHAPI__BackfillInfo_1a659925f7bed4235d2b8463c5186f41f9)`()` | Gets the value of BackfillId.
`public inline const FString & `[`GetBackfillId`](#structFRHAPI__BackfillInfo_1a2cbdf4b05da0a9c98abd8cb3c19f2876)`() const` | Gets the value of BackfillId.
`public inline void `[`SetBackfillId`](#structFRHAPI__BackfillInfo_1a35158eff975fcdcf6d4877fe2c983a4f)`(const FString & NewValue)` | Sets the value of BackfillId.
`public inline void `[`SetBackfillId`](#structFRHAPI__BackfillInfo_1a9875c533250d147c8582470db641dc7d)`(FString && NewValue)` | Sets the value of BackfillId using move semantics.
`public inline TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__BackfillInfo_1acd4171be6f7e414904eae68893ba2142)`()` | Gets the value of Extensions_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__BackfillInfo_1ac38c9455f02f2996c741ba1136b900e2)`() const` | Gets the value of Extensions_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__BackfillInfo_1a3e08fcb86b4377bf16321fc2fbd04acf)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExtensions`](#structFRHAPI__BackfillInfo_1a46d216b7646ac935c49eb297f468778a)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__BackfillInfo_1a0509b8d6c6613ee55f8e192fe60775fe)`()` | Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__BackfillInfo_1a0a89bb3f1cdde31055424028b04cb120)`() const` | Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExtensions`](#structFRHAPI__BackfillInfo_1a3c04338bc88a636450e4abec9fe9eca2)`(const TMap< FString, FString > & NewValue)` | Sets the value of Extensions_Optional and also sets Extensions_IsSet to true.
`public inline void `[`SetExtensions`](#structFRHAPI__BackfillInfo_1aa6c9c0dd772bba3b58df204387dfc0a1)`(TMap< FString, FString > && NewValue)` | Sets the value of Extensions_Optional and also sets Extensions_IsSet to true using move semantics.
`public inline void `[`ClearExtensions`](#structFRHAPI__BackfillInfo_1a13c1c5696be1196b66b1706a090c59ee)`()` | Clears the value of Extensions_Optional and sets Extensions_IsSet to false.

### Members

#### `public FString `[`BackfillId`](#structFRHAPI__BackfillInfo_1a01c5dc7289f87b6f57bbb0783f183b83) <a id="structFRHAPI__BackfillInfo_1a01c5dc7289f87b6f57bbb0783f183b83"></a>

Unique ID for the backfill object.

#### `public TMap< FString, FString > `[`Extensions_Optional`](#structFRHAPI__BackfillInfo_1ac013531459d42192ff7f1967c0157816) <a id="structFRHAPI__BackfillInfo_1ac013531459d42192ff7f1967c0157816"></a>

Optional additional extensions used when acknowledging backfill requests.

#### `public bool `[`Extensions_IsSet`](#structFRHAPI__BackfillInfo_1ac63b53074f4e5de2f25454cf263297d4) <a id="structFRHAPI__BackfillInfo_1ac63b53074f4e5de2f25454cf263297d4"></a>

true if Extensions_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__BackfillInfo_1ae4ed55e687619a482f28db4b50c90a56)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BackfillInfo_1ae4ed55e687619a482f28db4b50c90a56"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__BackfillInfo_1a4fcd1e078a86ff0937721ffd81b085b8)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__BackfillInfo_1a4fcd1e078a86ff0937721ffd81b085b8"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetBackfillId`](#structFRHAPI__BackfillInfo_1a659925f7bed4235d2b8463c5186f41f9)`()` <a id="structFRHAPI__BackfillInfo_1a659925f7bed4235d2b8463c5186f41f9"></a>

Gets the value of BackfillId.

#### `public inline const FString & `[`GetBackfillId`](#structFRHAPI__BackfillInfo_1a2cbdf4b05da0a9c98abd8cb3c19f2876)`() const` <a id="structFRHAPI__BackfillInfo_1a2cbdf4b05da0a9c98abd8cb3c19f2876"></a>

Gets the value of BackfillId.

#### `public inline void `[`SetBackfillId`](#structFRHAPI__BackfillInfo_1a35158eff975fcdcf6d4877fe2c983a4f)`(const FString & NewValue)` <a id="structFRHAPI__BackfillInfo_1a35158eff975fcdcf6d4877fe2c983a4f"></a>

Sets the value of BackfillId.

#### `public inline void `[`SetBackfillId`](#structFRHAPI__BackfillInfo_1a9875c533250d147c8582470db641dc7d)`(FString && NewValue)` <a id="structFRHAPI__BackfillInfo_1a9875c533250d147c8582470db641dc7d"></a>

Sets the value of BackfillId using move semantics.

#### `public inline TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__BackfillInfo_1acd4171be6f7e414904eae68893ba2142)`()` <a id="structFRHAPI__BackfillInfo_1acd4171be6f7e414904eae68893ba2142"></a>

Gets the value of Extensions_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__BackfillInfo_1ac38c9455f02f2996c741ba1136b900e2)`() const` <a id="structFRHAPI__BackfillInfo_1ac38c9455f02f2996c741ba1136b900e2"></a>

Gets the value of Extensions_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__BackfillInfo_1a3e08fcb86b4377bf16321fc2fbd04acf)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__BackfillInfo_1a3e08fcb86b4377bf16321fc2fbd04acf"></a>

Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExtensions`](#structFRHAPI__BackfillInfo_1a46d216b7646ac935c49eb297f468778a)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__BackfillInfo_1a46d216b7646ac935c49eb297f468778a"></a>

Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__BackfillInfo_1a0509b8d6c6613ee55f8e192fe60775fe)`()` <a id="structFRHAPI__BackfillInfo_1a0509b8d6c6613ee55f8e192fe60775fe"></a>

Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__BackfillInfo_1a0a89bb3f1cdde31055424028b04cb120)`() const` <a id="structFRHAPI__BackfillInfo_1a0a89bb3f1cdde31055424028b04cb120"></a>

Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExtensions`](#structFRHAPI__BackfillInfo_1a3c04338bc88a636450e4abec9fe9eca2)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__BackfillInfo_1a3c04338bc88a636450e4abec9fe9eca2"></a>

Sets the value of Extensions_Optional and also sets Extensions_IsSet to true.

#### `public inline void `[`SetExtensions`](#structFRHAPI__BackfillInfo_1aa6c9c0dd772bba3b58df204387dfc0a1)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__BackfillInfo_1aa6c9c0dd772bba3b58df204387dfc0a1"></a>

Sets the value of Extensions_Optional and also sets Extensions_IsSet to true using move semantics.

#### `public inline void `[`ClearExtensions`](#structFRHAPI__BackfillInfo_1a13c1c5696be1196b66b1706a090c59ee)`()` <a id="structFRHAPI__BackfillInfo_1a13c1c5696be1196b66b1706a090c59ee"></a>

Clears the value of Extensions_Optional and sets Extensions_IsSet to false.

