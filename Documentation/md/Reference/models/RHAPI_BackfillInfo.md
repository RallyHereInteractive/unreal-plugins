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
`public inline FORCEINLINE FString & `[`GetBackfillId`](#structFRHAPI__BackfillInfo_1adbfd9cb627de608ac5e605ff4258e7a7)`()` | Gets the value of BackfillId.
`public inline FORCEINLINE const FString & `[`GetBackfillId`](#structFRHAPI__BackfillInfo_1a117877825f24f7eaca03452b87e09cca)`() const` | Gets the value of BackfillId.
`public inline FORCEINLINE void `[`SetBackfillId`](#structFRHAPI__BackfillInfo_1ae913dd600914b48ca7a7c4270e50b62e)`(const FString & NewValue)` | Sets the value of BackfillId.
`public inline FORCEINLINE void `[`SetBackfillId`](#structFRHAPI__BackfillInfo_1a57819804e01fddb180234e0a09d906f5)`(FString && NewValue)` | Sets the value of BackfillId using move semantics.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__BackfillInfo_1abf73761b3f94d72e65506bbc1b1344fe)`()` | Gets the value of Extensions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__BackfillInfo_1a702b2f1f6cbdd0f4e230ce9776a6df58)`() const` | Gets the value of Extensions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__BackfillInfo_1a1cea7aeb4c6b965f1bdc82ae5d8b694f)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExtensions`](#structFRHAPI__BackfillInfo_1acf68f3a849264cffcb434a7a8aaf185d)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__BackfillInfo_1aa7821a871788c1a6823f3b92ebb50aec)`()` | Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__BackfillInfo_1abdb925c452970deac1a0f6f461a0a086)`() const` | Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExtensions`](#structFRHAPI__BackfillInfo_1ad809d6c96d449d375c737149f4097e5f)`(const TMap< FString, FString > & NewValue)` | Sets the value of Extensions_Optional and also sets Extensions_IsSet to true.
`public inline FORCEINLINE void `[`SetExtensions`](#structFRHAPI__BackfillInfo_1a07885f6a27715720e387afda8ea2a530)`(TMap< FString, FString > && NewValue)` | Sets the value of Extensions_Optional and also sets Extensions_IsSet to true using move semantics.
`public inline void `[`ClearExtensions`](#structFRHAPI__BackfillInfo_1a13c1c5696be1196b66b1706a090c59ee)`()` | Clears the value of Extensions_Optional and sets Extensions_IsSet to false.

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

#### `public inline FORCEINLINE FString & `[`GetBackfillId`](#structFRHAPI__BackfillInfo_1adbfd9cb627de608ac5e605ff4258e7a7)`()` <a id="structFRHAPI__BackfillInfo_1adbfd9cb627de608ac5e605ff4258e7a7"></a>

Gets the value of BackfillId.

#### `public inline FORCEINLINE const FString & `[`GetBackfillId`](#structFRHAPI__BackfillInfo_1a117877825f24f7eaca03452b87e09cca)`() const` <a id="structFRHAPI__BackfillInfo_1a117877825f24f7eaca03452b87e09cca"></a>

Gets the value of BackfillId.

#### `public inline FORCEINLINE void `[`SetBackfillId`](#structFRHAPI__BackfillInfo_1ae913dd600914b48ca7a7c4270e50b62e)`(const FString & NewValue)` <a id="structFRHAPI__BackfillInfo_1ae913dd600914b48ca7a7c4270e50b62e"></a>

Sets the value of BackfillId.

#### `public inline FORCEINLINE void `[`SetBackfillId`](#structFRHAPI__BackfillInfo_1a57819804e01fddb180234e0a09d906f5)`(FString && NewValue)` <a id="structFRHAPI__BackfillInfo_1a57819804e01fddb180234e0a09d906f5"></a>

Sets the value of BackfillId using move semantics.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__BackfillInfo_1abf73761b3f94d72e65506bbc1b1344fe)`()` <a id="structFRHAPI__BackfillInfo_1abf73761b3f94d72e65506bbc1b1344fe"></a>

Gets the value of Extensions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__BackfillInfo_1a702b2f1f6cbdd0f4e230ce9776a6df58)`() const` <a id="structFRHAPI__BackfillInfo_1a702b2f1f6cbdd0f4e230ce9776a6df58"></a>

Gets the value of Extensions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__BackfillInfo_1a1cea7aeb4c6b965f1bdc82ae5d8b694f)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__BackfillInfo_1a1cea7aeb4c6b965f1bdc82ae5d8b694f"></a>

Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExtensions`](#structFRHAPI__BackfillInfo_1acf68f3a849264cffcb434a7a8aaf185d)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__BackfillInfo_1acf68f3a849264cffcb434a7a8aaf185d"></a>

Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__BackfillInfo_1aa7821a871788c1a6823f3b92ebb50aec)`()` <a id="structFRHAPI__BackfillInfo_1aa7821a871788c1a6823f3b92ebb50aec"></a>

Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__BackfillInfo_1abdb925c452970deac1a0f6f461a0a086)`() const` <a id="structFRHAPI__BackfillInfo_1abdb925c452970deac1a0f6f461a0a086"></a>

Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExtensions`](#structFRHAPI__BackfillInfo_1ad809d6c96d449d375c737149f4097e5f)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__BackfillInfo_1ad809d6c96d449d375c737149f4097e5f"></a>

Sets the value of Extensions_Optional and also sets Extensions_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExtensions`](#structFRHAPI__BackfillInfo_1a07885f6a27715720e387afda8ea2a530)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__BackfillInfo_1a07885f6a27715720e387afda8ea2a530"></a>

Sets the value of Extensions_Optional and also sets Extensions_IsSet to true using move semantics.

#### `public inline void `[`ClearExtensions`](#structFRHAPI__BackfillInfo_1a13c1c5696be1196b66b1706a090c59ee)`()` <a id="structFRHAPI__BackfillInfo_1a13c1c5696be1196b66b1706a090c59ee"></a>

Clears the value of Extensions_Optional and sets Extensions_IsSet to false.

