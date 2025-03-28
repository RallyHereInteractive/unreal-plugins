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
`public inline TMap< FString, `[`FRHAPI_SettingTypeVersion`](RHAPI_SettingTypeVersion.md#structFRHAPI__SettingTypeVersion)` > & `[`GetVersions`](#structFRHAPI__SettingType_1aa2bd87ae14ca9d3104c10729b8d067d2)`()` | Gets the value of Versions.
`public inline const TMap< FString, `[`FRHAPI_SettingTypeVersion`](RHAPI_SettingTypeVersion.md#structFRHAPI__SettingTypeVersion)` > & `[`GetVersions`](#structFRHAPI__SettingType_1ad920c23d65e650cf20403c7441f3b598)`() const` | Gets the value of Versions.
`public inline void `[`SetVersions`](#structFRHAPI__SettingType_1a39ed1d4f0efb9d3bb1b199caab1a36f1)`(const TMap< FString, `[`FRHAPI_SettingTypeVersion`](RHAPI_SettingTypeVersion.md#structFRHAPI__SettingTypeVersion)` > & NewValue)` | Sets the value of Versions.
`public inline void `[`SetVersions`](#structFRHAPI__SettingType_1adc70ab21def081402fbe59dbfc21f057)`(TMap< FString, `[`FRHAPI_SettingTypeVersion`](RHAPI_SettingTypeVersion.md#structFRHAPI__SettingTypeVersion)` > && NewValue)` | Sets the value of Versions using move semantics.

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

#### `public inline TMap< FString, `[`FRHAPI_SettingTypeVersion`](RHAPI_SettingTypeVersion.md#structFRHAPI__SettingTypeVersion)` > & `[`GetVersions`](#structFRHAPI__SettingType_1aa2bd87ae14ca9d3104c10729b8d067d2)`()` <a id="structFRHAPI__SettingType_1aa2bd87ae14ca9d3104c10729b8d067d2"></a>

Gets the value of Versions.

#### `public inline const TMap< FString, `[`FRHAPI_SettingTypeVersion`](RHAPI_SettingTypeVersion.md#structFRHAPI__SettingTypeVersion)` > & `[`GetVersions`](#structFRHAPI__SettingType_1ad920c23d65e650cf20403c7441f3b598)`() const` <a id="structFRHAPI__SettingType_1ad920c23d65e650cf20403c7441f3b598"></a>

Gets the value of Versions.

#### `public inline void `[`SetVersions`](#structFRHAPI__SettingType_1a39ed1d4f0efb9d3bb1b199caab1a36f1)`(const TMap< FString, `[`FRHAPI_SettingTypeVersion`](RHAPI_SettingTypeVersion.md#structFRHAPI__SettingTypeVersion)` > & NewValue)` <a id="structFRHAPI__SettingType_1a39ed1d4f0efb9d3bb1b199caab1a36f1"></a>

Sets the value of Versions.

#### `public inline void `[`SetVersions`](#structFRHAPI__SettingType_1adc70ab21def081402fbe59dbfc21f057)`(TMap< FString, `[`FRHAPI_SettingTypeVersion`](RHAPI_SettingTypeVersion.md#structFRHAPI__SettingTypeVersion)` > && NewValue)` <a id="structFRHAPI__SettingType_1adc70ab21def081402fbe59dbfc21f057"></a>

Sets the value of Versions using move semantics.

