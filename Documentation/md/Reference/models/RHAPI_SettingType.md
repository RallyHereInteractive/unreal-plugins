---
title: RHAPI_SettingType
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SettingType`](#structFRHAPI__SettingType) | 

## struct `FRHAPI_SettingType` <a id="structFRHAPI__SettingType"></a>

```
struct FRHAPI_SettingType
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_SettingTypeVersion`](RHAPI_SettingTypeVersion.md#structFRHAPI__SettingTypeVersion)` > `[`Versions`](#structFRHAPI__SettingType_1ab890cf6c935d2cd691a9b5c4caac7cc1) | Map of setting type version ids to the version.
`public virtual bool `[`FromJson`](#structFRHAPI__SettingType_1a8ff93dadfeb17aa6a6cdec4e751d4de4)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SettingType_1ab70b1113b55483dcc62b0f2937bf2075)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_SettingTypeVersion`](RHAPI_SettingTypeVersion.md#structFRHAPI__SettingTypeVersion)` > & `[`GetVersions`](#structFRHAPI__SettingType_1ae1cc3612f2d7d04873a2c8649c9f60c7)`()` | Gets the value of Versions.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_SettingTypeVersion`](RHAPI_SettingTypeVersion.md#structFRHAPI__SettingTypeVersion)` > & `[`GetVersions`](#structFRHAPI__SettingType_1a4e5c7d1e2f2e39dafad3eebb88668af2)`() const` | Gets the value of Versions.
`public inline FORCEINLINE void `[`SetVersions`](#structFRHAPI__SettingType_1acae2ba6bc21a6360f20ccd35ce1fde80)`(const TMap< FString, `[`FRHAPI_SettingTypeVersion`](RHAPI_SettingTypeVersion.md#structFRHAPI__SettingTypeVersion)` > & NewValue)` | Sets the value of Versions.
`public inline FORCEINLINE void `[`SetVersions`](#structFRHAPI__SettingType_1ad2eae645340d5ae9d5a6f96859454034)`(TMap< FString, `[`FRHAPI_SettingTypeVersion`](RHAPI_SettingTypeVersion.md#structFRHAPI__SettingTypeVersion)` > && NewValue)` | Sets the value of Versions using move semantics.

### Members

#### `public TMap< FString, `[`FRHAPI_SettingTypeVersion`](RHAPI_SettingTypeVersion.md#structFRHAPI__SettingTypeVersion)` > `[`Versions`](#structFRHAPI__SettingType_1ab890cf6c935d2cd691a9b5c4caac7cc1) <a id="structFRHAPI__SettingType_1ab890cf6c935d2cd691a9b5c4caac7cc1"></a>

Map of setting type version ids to the version.

#### `public virtual bool `[`FromJson`](#structFRHAPI__SettingType_1a8ff93dadfeb17aa6a6cdec4e751d4de4)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SettingType_1a8ff93dadfeb17aa6a6cdec4e751d4de4"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SettingType_1ab70b1113b55483dcc62b0f2937bf2075)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__SettingType_1ab70b1113b55483dcc62b0f2937bf2075"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_SettingTypeVersion`](RHAPI_SettingTypeVersion.md#structFRHAPI__SettingTypeVersion)` > & `[`GetVersions`](#structFRHAPI__SettingType_1ae1cc3612f2d7d04873a2c8649c9f60c7)`()` <a id="structFRHAPI__SettingType_1ae1cc3612f2d7d04873a2c8649c9f60c7"></a>

Gets the value of Versions.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_SettingTypeVersion`](RHAPI_SettingTypeVersion.md#structFRHAPI__SettingTypeVersion)` > & `[`GetVersions`](#structFRHAPI__SettingType_1a4e5c7d1e2f2e39dafad3eebb88668af2)`() const` <a id="structFRHAPI__SettingType_1a4e5c7d1e2f2e39dafad3eebb88668af2"></a>

Gets the value of Versions.

#### `public inline FORCEINLINE void `[`SetVersions`](#structFRHAPI__SettingType_1acae2ba6bc21a6360f20ccd35ce1fde80)`(const TMap< FString, `[`FRHAPI_SettingTypeVersion`](RHAPI_SettingTypeVersion.md#structFRHAPI__SettingTypeVersion)` > & NewValue)` <a id="structFRHAPI__SettingType_1acae2ba6bc21a6360f20ccd35ce1fde80"></a>

Sets the value of Versions.

#### `public inline FORCEINLINE void `[`SetVersions`](#structFRHAPI__SettingType_1ad2eae645340d5ae9d5a6f96859454034)`(TMap< FString, `[`FRHAPI_SettingTypeVersion`](RHAPI_SettingTypeVersion.md#structFRHAPI__SettingTypeVersion)` > && NewValue)` <a id="structFRHAPI__SettingType_1ad2eae645340d5ae9d5a6f96859454034"></a>

Sets the value of Versions using move semantics.

