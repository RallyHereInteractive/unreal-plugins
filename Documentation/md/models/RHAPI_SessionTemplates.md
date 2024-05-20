# RHAPI_SessionTemplates <a id="group__RHAPI__SessionTemplates"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > `[`Templates_Optional`](#structFRHAPI__SessionTemplates_1ab83f2a56e2b367da2d7abfbfc5ab6f43) | Dictionary of SessionTemplates keyed on their template type.
`public bool `[`Templates_IsSet`](#structFRHAPI__SessionTemplates_1a96b1b77d9c3dfcd644a9dfa3805dd612) | true if Templates_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SessionTemplates_1a15bd57d291d2da5b4373ac69bb6f770d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionTemplates_1a542b7e96b03d933536ef6eb92d7be6c8)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & `[`GetTemplates`](#structFRHAPI__SessionTemplates_1a5cd0569f7dd491416871e8009eba1fff)`()` | Gets the value of Templates_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & `[`GetTemplates`](#structFRHAPI__SessionTemplates_1a8558e2ca9f7baec69252f884af1e4f7a)`() const` | Gets the value of Templates_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & `[`GetTemplates`](#structFRHAPI__SessionTemplates_1a74e666c7009e061e05011937cace2c55)`(const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & DefaultValue) const` | Gets the value of Templates_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTemplates`](#structFRHAPI__SessionTemplates_1a0d42b4824bb9af1c810646c3d90d8644)`(TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & OutValue) const` | Fills OutValue with the value of Templates_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > * `[`GetTemplatesOrNull`](#structFRHAPI__SessionTemplates_1a1a92056debc0a11a1e04ca9753b50071)`()` | Returns a pointer to Templates_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > * `[`GetTemplatesOrNull`](#structFRHAPI__SessionTemplates_1acbd85ceb3a6e5991c6f457452319019b)`() const` | Returns a pointer to Templates_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTemplates`](#structFRHAPI__SessionTemplates_1a371255f9f30c3b980c055c01ff674948)`(TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > NewValue)` | Sets the value of Templates_Optional and also sets Templates_IsSet to true.
`public inline void `[`ClearTemplates`](#structFRHAPI__SessionTemplates_1a131f21d340cfc955ef693695785df14a)`()` | Clears the value of Templates_Optional and sets Templates_IsSet to false.

#### Members

#### `public TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > `[`Templates_Optional`](#structFRHAPI__SessionTemplates_1ab83f2a56e2b367da2d7abfbfc5ab6f43) <a id="structFRHAPI__SessionTemplates_1ab83f2a56e2b367da2d7abfbfc5ab6f43"></a>

Dictionary of SessionTemplates keyed on their template type.

#### `public bool `[`Templates_IsSet`](#structFRHAPI__SessionTemplates_1a96b1b77d9c3dfcd644a9dfa3805dd612) <a id="structFRHAPI__SessionTemplates_1a96b1b77d9c3dfcd644a9dfa3805dd612"></a>

true if Templates_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionTemplates_1a15bd57d291d2da5b4373ac69bb6f770d)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionTemplates_1a15bd57d291d2da5b4373ac69bb6f770d"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionTemplates_1a542b7e96b03d933536ef6eb92d7be6c8)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__SessionTemplates_1a542b7e96b03d933536ef6eb92d7be6c8"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & `[`GetTemplates`](#structFRHAPI__SessionTemplates_1a5cd0569f7dd491416871e8009eba1fff)`()` <a id="structFRHAPI__SessionTemplates_1a5cd0569f7dd491416871e8009eba1fff"></a>

Gets the value of Templates_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & `[`GetTemplates`](#structFRHAPI__SessionTemplates_1a8558e2ca9f7baec69252f884af1e4f7a)`() const` <a id="structFRHAPI__SessionTemplates_1a8558e2ca9f7baec69252f884af1e4f7a"></a>

Gets the value of Templates_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & `[`GetTemplates`](#structFRHAPI__SessionTemplates_1a74e666c7009e061e05011937cace2c55)`(const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & DefaultValue) const` <a id="structFRHAPI__SessionTemplates_1a74e666c7009e061e05011937cace2c55"></a>

Gets the value of Templates_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTemplates`](#structFRHAPI__SessionTemplates_1a0d42b4824bb9af1c810646c3d90d8644)`(TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > & OutValue) const` <a id="structFRHAPI__SessionTemplates_1a0d42b4824bb9af1c810646c3d90d8644"></a>

Fills OutValue with the value of Templates_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > * `[`GetTemplatesOrNull`](#structFRHAPI__SessionTemplates_1a1a92056debc0a11a1e04ca9753b50071)`()` <a id="structFRHAPI__SessionTemplates_1a1a92056debc0a11a1e04ca9753b50071"></a>

Returns a pointer to Templates_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > * `[`GetTemplatesOrNull`](#structFRHAPI__SessionTemplates_1acbd85ceb3a6e5991c6f457452319019b)`() const` <a id="structFRHAPI__SessionTemplates_1acbd85ceb3a6e5991c6f457452319019b"></a>

Returns a pointer to Templates_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTemplates`](#structFRHAPI__SessionTemplates_1a371255f9f30c3b980c055c01ff674948)`(TMap< FString, `[`FRHAPI_SessionTemplate`](RHAPI_SessionTemplate.md#structFRHAPI__SessionTemplate)` > NewValue)` <a id="structFRHAPI__SessionTemplates_1a371255f9f30c3b980c055c01ff674948"></a>

Sets the value of Templates_Optional and also sets Templates_IsSet to true.

#### `public inline void `[`ClearTemplates`](#structFRHAPI__SessionTemplates_1a131f21d340cfc955ef693695785df14a)`()` <a id="structFRHAPI__SessionTemplates_1a131f21d340cfc955ef693695785df14a"></a>

Clears the value of Templates_Optional and sets Templates_IsSet to false.

