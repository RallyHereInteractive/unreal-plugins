---
title: RHAPI_SessionTemplates
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SessionTemplates`](#structFRHAPI__SessionTemplates) | A mapping of RallyHere session template types to the templates.

## struct `FRHAPI_SessionTemplates` <a id="structFRHAPI__SessionTemplates"></a>

```
struct FRHAPI_SessionTemplates
  : public FRHAPI_Model
```

A mapping of RallyHere session template types to the templates.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > `[`Templates_Optional`](#structFRHAPI__SessionTemplates_1ab83f2a56e2b367da2d7abfbfc5ab6f43) | Dictionary of SessionTemplates keyed on their template type.
`public bool `[`Templates_IsSet`](#structFRHAPI__SessionTemplates_1a96b1b77d9c3dfcd644a9dfa3805dd612) | true if Templates_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SessionTemplates_1a0b78d2a3b75a712561155925ba4078e4)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionTemplates_1ad3ba4a0ea18dc8887d88e05c86cbfac2)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & `[`GetTemplates`](#structFRHAPI__SessionTemplates_1a76de0b00ce8ab95495849f86e7b762a9)`()` | Gets the value of Templates_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & `[`GetTemplates`](#structFRHAPI__SessionTemplates_1a16a65db5e2ef2d5927826e007bdfc226)`() const` | Gets the value of Templates_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & `[`GetTemplates`](#structFRHAPI__SessionTemplates_1a2d98869c4cf65277297384c7d12d2e4b)`(const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & DefaultValue) const` | Gets the value of Templates_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTemplates`](#structFRHAPI__SessionTemplates_1a0d42b4824bb9af1c810646c3d90d8644)`(TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & OutValue) const` | Fills OutValue with the value of Templates_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > * `[`GetTemplatesOrNull`](#structFRHAPI__SessionTemplates_1ae9bf0bbdb43d046486532bd2c5143174)`()` | Returns a pointer to Templates_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > * `[`GetTemplatesOrNull`](#structFRHAPI__SessionTemplates_1acc0126ff9bd709c408fa783a14c2506e)`() const` | Returns a pointer to Templates_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTemplates`](#structFRHAPI__SessionTemplates_1a8967462116a8cb26a7f8a0e5b0cdde52)`(const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & NewValue)` | Sets the value of Templates_Optional and also sets Templates_IsSet to true.
`public inline void `[`SetTemplates`](#structFRHAPI__SessionTemplates_1abe86dc9344d01c518d3f2ff0959aa74f)`(TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > && NewValue)` | Sets the value of Templates_Optional and also sets Templates_IsSet to true using move semantics.
`public inline void `[`ClearTemplates`](#structFRHAPI__SessionTemplates_1a131f21d340cfc955ef693695785df14a)`()` | Clears the value of Templates_Optional and sets Templates_IsSet to false.
`public inline bool `[`IsTemplatesSet`](#structFRHAPI__SessionTemplates_1a3c9582594c095f21067ed44691c95a12)`() const` | Checks whether Templates_Optional has been set.

### Members

#### `public TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > `[`Templates_Optional`](#structFRHAPI__SessionTemplates_1ab83f2a56e2b367da2d7abfbfc5ab6f43) <a id="structFRHAPI__SessionTemplates_1ab83f2a56e2b367da2d7abfbfc5ab6f43"></a>

Dictionary of SessionTemplates keyed on their template type.

#### `public bool `[`Templates_IsSet`](#structFRHAPI__SessionTemplates_1a96b1b77d9c3dfcd644a9dfa3805dd612) <a id="structFRHAPI__SessionTemplates_1a96b1b77d9c3dfcd644a9dfa3805dd612"></a>

true if Templates_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionTemplates_1a0b78d2a3b75a712561155925ba4078e4)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionTemplates_1a0b78d2a3b75a712561155925ba4078e4"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionTemplates_1ad3ba4a0ea18dc8887d88e05c86cbfac2)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__SessionTemplates_1ad3ba4a0ea18dc8887d88e05c86cbfac2"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & `[`GetTemplates`](#structFRHAPI__SessionTemplates_1a76de0b00ce8ab95495849f86e7b762a9)`()` <a id="structFRHAPI__SessionTemplates_1a76de0b00ce8ab95495849f86e7b762a9"></a>

Gets the value of Templates_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & `[`GetTemplates`](#structFRHAPI__SessionTemplates_1a16a65db5e2ef2d5927826e007bdfc226)`() const` <a id="structFRHAPI__SessionTemplates_1a16a65db5e2ef2d5927826e007bdfc226"></a>

Gets the value of Templates_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & `[`GetTemplates`](#structFRHAPI__SessionTemplates_1a2d98869c4cf65277297384c7d12d2e4b)`(const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & DefaultValue) const` <a id="structFRHAPI__SessionTemplates_1a2d98869c4cf65277297384c7d12d2e4b"></a>

Gets the value of Templates_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTemplates`](#structFRHAPI__SessionTemplates_1a0d42b4824bb9af1c810646c3d90d8644)`(TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & OutValue) const` <a id="structFRHAPI__SessionTemplates_1a0d42b4824bb9af1c810646c3d90d8644"></a>

Fills OutValue with the value of Templates_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > * `[`GetTemplatesOrNull`](#structFRHAPI__SessionTemplates_1ae9bf0bbdb43d046486532bd2c5143174)`()` <a id="structFRHAPI__SessionTemplates_1ae9bf0bbdb43d046486532bd2c5143174"></a>

Returns a pointer to Templates_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > * `[`GetTemplatesOrNull`](#structFRHAPI__SessionTemplates_1acc0126ff9bd709c408fa783a14c2506e)`() const` <a id="structFRHAPI__SessionTemplates_1acc0126ff9bd709c408fa783a14c2506e"></a>

Returns a pointer to Templates_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTemplates`](#structFRHAPI__SessionTemplates_1a8967462116a8cb26a7f8a0e5b0cdde52)`(const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & NewValue)` <a id="structFRHAPI__SessionTemplates_1a8967462116a8cb26a7f8a0e5b0cdde52"></a>

Sets the value of Templates_Optional and also sets Templates_IsSet to true.

#### `public inline void `[`SetTemplates`](#structFRHAPI__SessionTemplates_1abe86dc9344d01c518d3f2ff0959aa74f)`(TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > && NewValue)` <a id="structFRHAPI__SessionTemplates_1abe86dc9344d01c518d3f2ff0959aa74f"></a>

Sets the value of Templates_Optional and also sets Templates_IsSet to true using move semantics.

#### `public inline void `[`ClearTemplates`](#structFRHAPI__SessionTemplates_1a131f21d340cfc955ef693695785df14a)`()` <a id="structFRHAPI__SessionTemplates_1a131f21d340cfc955ef693695785df14a"></a>

Clears the value of Templates_Optional and sets Templates_IsSet to false.

#### `public inline bool `[`IsTemplatesSet`](#structFRHAPI__SessionTemplates_1a3c9582594c095f21067ed44691c95a12)`() const` <a id="structFRHAPI__SessionTemplates_1a3c9582594c095f21067ed44691c95a12"></a>

Checks whether Templates_Optional has been set.

