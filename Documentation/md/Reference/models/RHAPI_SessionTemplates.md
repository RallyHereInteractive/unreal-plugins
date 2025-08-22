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
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & `[`GetTemplates`](#structFRHAPI__SessionTemplates_1a15e2e0493cdea2bb75db0ee12e6c7c21)`()` | Gets the value of Templates_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & `[`GetTemplates`](#structFRHAPI__SessionTemplates_1a3952f466d85c3f4d8193bd3442e671f2)`() const` | Gets the value of Templates_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & `[`GetTemplates`](#structFRHAPI__SessionTemplates_1a121b51436fdf7d367241d3cb29e547a6)`(const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & DefaultValue) const` | Gets the value of Templates_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTemplates`](#structFRHAPI__SessionTemplates_1ac7196a2b17b929c0bbd9f4d38fc55701)`(TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & OutValue) const` | Fills OutValue with the value of Templates_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > * `[`GetTemplatesOrNull`](#structFRHAPI__SessionTemplates_1a2b5e6ed5c373ae95865616ae68878247)`()` | Returns a pointer to Templates_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > * `[`GetTemplatesOrNull`](#structFRHAPI__SessionTemplates_1ac26fb2641e6d1739de4e57cef32aceba)`() const` | Returns a pointer to Templates_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTemplates`](#structFRHAPI__SessionTemplates_1a911374f8a6271ad5f8dafe4a85c29f4f)`(const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & NewValue)` | Sets the value of Templates_Optional and also sets Templates_IsSet to true.
`public inline FORCEINLINE void `[`SetTemplates`](#structFRHAPI__SessionTemplates_1a03a5abd81659b372d46ef8c3b9201069)`(TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > && NewValue)` | Sets the value of Templates_Optional and also sets Templates_IsSet to true using move semantics.
`public inline void `[`ClearTemplates`](#structFRHAPI__SessionTemplates_1a131f21d340cfc955ef693695785df14a)`()` | Clears the value of Templates_Optional and sets Templates_IsSet to false.

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

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & `[`GetTemplates`](#structFRHAPI__SessionTemplates_1a15e2e0493cdea2bb75db0ee12e6c7c21)`()` <a id="structFRHAPI__SessionTemplates_1a15e2e0493cdea2bb75db0ee12e6c7c21"></a>

Gets the value of Templates_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & `[`GetTemplates`](#structFRHAPI__SessionTemplates_1a3952f466d85c3f4d8193bd3442e671f2)`() const` <a id="structFRHAPI__SessionTemplates_1a3952f466d85c3f4d8193bd3442e671f2"></a>

Gets the value of Templates_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & `[`GetTemplates`](#structFRHAPI__SessionTemplates_1a121b51436fdf7d367241d3cb29e547a6)`(const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & DefaultValue) const` <a id="structFRHAPI__SessionTemplates_1a121b51436fdf7d367241d3cb29e547a6"></a>

Gets the value of Templates_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTemplates`](#structFRHAPI__SessionTemplates_1ac7196a2b17b929c0bbd9f4d38fc55701)`(TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & OutValue) const` <a id="structFRHAPI__SessionTemplates_1ac7196a2b17b929c0bbd9f4d38fc55701"></a>

Fills OutValue with the value of Templates_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > * `[`GetTemplatesOrNull`](#structFRHAPI__SessionTemplates_1a2b5e6ed5c373ae95865616ae68878247)`()` <a id="structFRHAPI__SessionTemplates_1a2b5e6ed5c373ae95865616ae68878247"></a>

Returns a pointer to Templates_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > * `[`GetTemplatesOrNull`](#structFRHAPI__SessionTemplates_1ac26fb2641e6d1739de4e57cef32aceba)`() const` <a id="structFRHAPI__SessionTemplates_1ac26fb2641e6d1739de4e57cef32aceba"></a>

Returns a pointer to Templates_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTemplates`](#structFRHAPI__SessionTemplates_1a911374f8a6271ad5f8dafe4a85c29f4f)`(const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & NewValue)` <a id="structFRHAPI__SessionTemplates_1a911374f8a6271ad5f8dafe4a85c29f4f"></a>

Sets the value of Templates_Optional and also sets Templates_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTemplates`](#structFRHAPI__SessionTemplates_1a03a5abd81659b372d46ef8c3b9201069)`(TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > && NewValue)` <a id="structFRHAPI__SessionTemplates_1a03a5abd81659b372d46ef8c3b9201069"></a>

Sets the value of Templates_Optional and also sets Templates_IsSet to true using move semantics.

#### `public inline void `[`ClearTemplates`](#structFRHAPI__SessionTemplates_1a131f21d340cfc955ef693695785df14a)`()` <a id="structFRHAPI__SessionTemplates_1a131f21d340cfc955ef693695785df14a"></a>

Clears the value of Templates_Optional and sets Templates_IsSet to false.

