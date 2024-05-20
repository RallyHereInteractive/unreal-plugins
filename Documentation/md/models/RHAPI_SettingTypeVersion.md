# RHAPI_SettingTypeVersion <a id="group__RHAPI__SettingTypeVersion"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SettingTypeVersion`](#structFRHAPI__SettingTypeVersion) | 

## struct `FRHAPI_SettingTypeVersion` <a id="structFRHAPI__SettingTypeVersion"></a>

```
struct FRHAPI_SettingTypeVersion
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public bool `[`AllowUpdate_Optional`](#structFRHAPI__SettingTypeVersion_1a7cde63d5e798189074a83f5e9b24a3e8) | Are players allowed to set/update keys to this version of the setting type? Does not affect getting or deleting existing settings.
`public bool `[`AllowUpdate_IsSet`](#structFRHAPI__SettingTypeVersion_1aee033cacb8048accef460ffe06293b98) | true if AllowUpdate_Optional has been set to a value
`public FString `[`KeyRegex_Optional`](#structFRHAPI__SettingTypeVersion_1a560ade93145afb89f7492f48cd498b22) | Regex that is used to verify keys at assignment time.
`public bool `[`KeyRegex_IsSet`](#structFRHAPI__SettingTypeVersion_1a06f3feaf49700c1a9892c62a9c33cf5f) | true if KeyRegex_Optional has been set to a value
`public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`ValueJsonschema`](#structFRHAPI__SettingTypeVersion_1adc61f49842f20cd4f9f9c37907bccbb8) | [jsonschema](https://json-schema.org/understanding-json-schema/index.html) that is used to verify values at assignment time
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SettingTypeVersion_1a7cbfb62ce0108a560c234e8eb60399f0) | Custom data that was provided when the setting type was created.
`public bool `[`CustomData_IsSet`](#structFRHAPI__SettingTypeVersion_1a417b1215b3b7522fe6f0d2c11a96bcda) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SettingTypeVersion_1aa4e70ba4519b150f2e99c4a90bc8fbbf)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SettingTypeVersion_1ae3daee712cb6f91e68d51b5fe1b2ce98)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline bool & `[`GetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1afcaaef3adca90f4fd1358d088320bbb1)`()` | Gets the value of AllowUpdate_Optional, regardless of it having been set.
`public inline const bool & `[`GetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1a485cfe9aa04a52fa93b602ffc907eff3)`() const` | Gets the value of AllowUpdate_Optional, regardless of it having been set.
`public inline const bool & `[`GetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1af8560e913b8d8204e582c2b6cf20b210)`(const bool & DefaultValue) const` | Gets the value of AllowUpdate_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1aa16fb445c5661b7a5c497ea5ef9ede58)`(bool & OutValue) const` | Fills OutValue with the value of AllowUpdate_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetAllowUpdateOrNull`](#structFRHAPI__SettingTypeVersion_1a76e0f40975999f5433999dec08c0b99d)`()` | Returns a pointer to AllowUpdate_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetAllowUpdateOrNull`](#structFRHAPI__SettingTypeVersion_1acde990775bfd52843e105c59abd8bed2)`() const` | Returns a pointer to AllowUpdate_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1a76b8cbf55cddce6c8bbd936aca5694c7)`(bool NewValue)` | Sets the value of AllowUpdate_Optional and also sets AllowUpdate_IsSet to true.
`public inline void `[`ClearAllowUpdate`](#structFRHAPI__SettingTypeVersion_1a98769cdb1c9d46e61140d4629267ea9a)`()` | Clears the value of AllowUpdate_Optional and sets AllowUpdate_IsSet to false.
`public inline bool `[`IsAllowUpdateDefaultValue`](#structFRHAPI__SettingTypeVersion_1ac836a8cfed8cd7dae4a460fab86ab2e3)`() const` | Returns true if AllowUpdate_Optional is set and matches the default value.
`public inline void `[`SetAllowUpdateToDefault`](#structFRHAPI__SettingTypeVersion_1a391bf3452ed0068b495d2a3754156586)`()` | Sets the value of AllowUpdate_Optional to its default and also sets AllowUpdate_IsSet to true.
`public inline FString & `[`GetKeyRegex`](#structFRHAPI__SettingTypeVersion_1a9d935fb43394e65e044cf3065f73af0d)`()` | Gets the value of KeyRegex_Optional, regardless of it having been set.
`public inline const FString & `[`GetKeyRegex`](#structFRHAPI__SettingTypeVersion_1ac66a76588ac510c1147cee96013194f7)`() const` | Gets the value of KeyRegex_Optional, regardless of it having been set.
`public inline const FString & `[`GetKeyRegex`](#structFRHAPI__SettingTypeVersion_1a52e09af92f1901e1cd232e930a695122)`(const FString & DefaultValue) const` | Gets the value of KeyRegex_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetKeyRegex`](#structFRHAPI__SettingTypeVersion_1a83b8a32269644c1ff31d599254741e48)`(FString & OutValue) const` | Fills OutValue with the value of KeyRegex_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetKeyRegexOrNull`](#structFRHAPI__SettingTypeVersion_1a032ecb833d81269e63ea24f80347f750)`()` | Returns a pointer to KeyRegex_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetKeyRegexOrNull`](#structFRHAPI__SettingTypeVersion_1a5388309d3f8093010ef2013d785faa0c)`() const` | Returns a pointer to KeyRegex_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetKeyRegex`](#structFRHAPI__SettingTypeVersion_1ae4e39149102c921eca7c26f0fc23c362)`(FString NewValue)` | Sets the value of KeyRegex_Optional and also sets KeyRegex_IsSet to true.
`public inline void `[`ClearKeyRegex`](#structFRHAPI__SettingTypeVersion_1a128d3490d334f968e82b0ab89318c5b3)`()` | Clears the value of KeyRegex_Optional and sets KeyRegex_IsSet to false.
`public inline bool `[`IsKeyRegexDefaultValue`](#structFRHAPI__SettingTypeVersion_1a5936bb1b4543b1a515ff9b69d296bc76)`() const` | Returns true if KeyRegex_Optional is set and matches the default value.
`public inline void `[`SetKeyRegexToDefault`](#structFRHAPI__SettingTypeVersion_1a22341ac9a7abce8cbb643ac7cf1089d2)`()` | Sets the value of KeyRegex_Optional to its default and also sets KeyRegex_IsSet to true.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetValueJsonschema`](#structFRHAPI__SettingTypeVersion_1ab213f4d77b44b6d6386a5408ca76021b)`()` | Gets the value of ValueJsonschema.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetValueJsonschema`](#structFRHAPI__SettingTypeVersion_1a549ec1a091924dd29295bb00668fd0c7)`() const` | Gets the value of ValueJsonschema.
`public inline void `[`SetValueJsonschema`](#structFRHAPI__SettingTypeVersion_1a633c27cecfa21ba5533ca498adb40eff)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` NewValue)` | Sets the value of ValueJsonschema.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SettingTypeVersion_1aabd97f56553b79db5d43b9ba57a6dd21)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SettingTypeVersion_1ab7247a5f9b2a329ed2b9667ec64cbaa2)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SettingTypeVersion_1afcb635723e12d92035726b375c09b3fe)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__SettingTypeVersion_1a77dcaf48288c55129f4f280cfd046733)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SettingTypeVersion_1af651b7e40f15018550e94733b8da23b4)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SettingTypeVersion_1a0628b64189adc569c97aa65afd095d3e)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__SettingTypeVersion_1a662dff9af912202577d78e2f1dd3b19a)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__SettingTypeVersion_1a87ffa31269dfdc6b9737d3f8653735bc)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### Members

#### `public bool `[`AllowUpdate_Optional`](#structFRHAPI__SettingTypeVersion_1a7cde63d5e798189074a83f5e9b24a3e8) <a id="structFRHAPI__SettingTypeVersion_1a7cde63d5e798189074a83f5e9b24a3e8"></a>

Are players allowed to set/update keys to this version of the setting type? Does not affect getting or deleting existing settings.

#### `public bool `[`AllowUpdate_IsSet`](#structFRHAPI__SettingTypeVersion_1aee033cacb8048accef460ffe06293b98) <a id="structFRHAPI__SettingTypeVersion_1aee033cacb8048accef460ffe06293b98"></a>

true if AllowUpdate_Optional has been set to a value

#### `public FString `[`KeyRegex_Optional`](#structFRHAPI__SettingTypeVersion_1a560ade93145afb89f7492f48cd498b22) <a id="structFRHAPI__SettingTypeVersion_1a560ade93145afb89f7492f48cd498b22"></a>

Regex that is used to verify keys at assignment time.

#### `public bool `[`KeyRegex_IsSet`](#structFRHAPI__SettingTypeVersion_1a06f3feaf49700c1a9892c62a9c33cf5f) <a id="structFRHAPI__SettingTypeVersion_1a06f3feaf49700c1a9892c62a9c33cf5f"></a>

true if KeyRegex_Optional has been set to a value

#### `public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`ValueJsonschema`](#structFRHAPI__SettingTypeVersion_1adc61f49842f20cd4f9f9c37907bccbb8) <a id="structFRHAPI__SettingTypeVersion_1adc61f49842f20cd4f9f9c37907bccbb8"></a>

[jsonschema](https://json-schema.org/understanding-json-schema/index.html) that is used to verify values at assignment time

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SettingTypeVersion_1a7cbfb62ce0108a560c234e8eb60399f0) <a id="structFRHAPI__SettingTypeVersion_1a7cbfb62ce0108a560c234e8eb60399f0"></a>

Custom data that was provided when the setting type was created.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__SettingTypeVersion_1a417b1215b3b7522fe6f0d2c11a96bcda) <a id="structFRHAPI__SettingTypeVersion_1a417b1215b3b7522fe6f0d2c11a96bcda"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__SettingTypeVersion_1aa4e70ba4519b150f2e99c4a90bc8fbbf)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SettingTypeVersion_1aa4e70ba4519b150f2e99c4a90bc8fbbf"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SettingTypeVersion_1ae3daee712cb6f91e68d51b5fe1b2ce98)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__SettingTypeVersion_1ae3daee712cb6f91e68d51b5fe1b2ce98"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline bool & `[`GetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1afcaaef3adca90f4fd1358d088320bbb1)`()` <a id="structFRHAPI__SettingTypeVersion_1afcaaef3adca90f4fd1358d088320bbb1"></a>

Gets the value of AllowUpdate_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1a485cfe9aa04a52fa93b602ffc907eff3)`() const` <a id="structFRHAPI__SettingTypeVersion_1a485cfe9aa04a52fa93b602ffc907eff3"></a>

Gets the value of AllowUpdate_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1af8560e913b8d8204e582c2b6cf20b210)`(const bool & DefaultValue) const` <a id="structFRHAPI__SettingTypeVersion_1af8560e913b8d8204e582c2b6cf20b210"></a>

Gets the value of AllowUpdate_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1aa16fb445c5661b7a5c497ea5ef9ede58)`(bool & OutValue) const` <a id="structFRHAPI__SettingTypeVersion_1aa16fb445c5661b7a5c497ea5ef9ede58"></a>

Fills OutValue with the value of AllowUpdate_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetAllowUpdateOrNull`](#structFRHAPI__SettingTypeVersion_1a76e0f40975999f5433999dec08c0b99d)`()` <a id="structFRHAPI__SettingTypeVersion_1a76e0f40975999f5433999dec08c0b99d"></a>

Returns a pointer to AllowUpdate_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetAllowUpdateOrNull`](#structFRHAPI__SettingTypeVersion_1acde990775bfd52843e105c59abd8bed2)`() const` <a id="structFRHAPI__SettingTypeVersion_1acde990775bfd52843e105c59abd8bed2"></a>

Returns a pointer to AllowUpdate_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1a76b8cbf55cddce6c8bbd936aca5694c7)`(bool NewValue)` <a id="structFRHAPI__SettingTypeVersion_1a76b8cbf55cddce6c8bbd936aca5694c7"></a>

Sets the value of AllowUpdate_Optional and also sets AllowUpdate_IsSet to true.

#### `public inline void `[`ClearAllowUpdate`](#structFRHAPI__SettingTypeVersion_1a98769cdb1c9d46e61140d4629267ea9a)`()` <a id="structFRHAPI__SettingTypeVersion_1a98769cdb1c9d46e61140d4629267ea9a"></a>

Clears the value of AllowUpdate_Optional and sets AllowUpdate_IsSet to false.

#### `public inline bool `[`IsAllowUpdateDefaultValue`](#structFRHAPI__SettingTypeVersion_1ac836a8cfed8cd7dae4a460fab86ab2e3)`() const` <a id="structFRHAPI__SettingTypeVersion_1ac836a8cfed8cd7dae4a460fab86ab2e3"></a>

Returns true if AllowUpdate_Optional is set and matches the default value.

#### `public inline void `[`SetAllowUpdateToDefault`](#structFRHAPI__SettingTypeVersion_1a391bf3452ed0068b495d2a3754156586)`()` <a id="structFRHAPI__SettingTypeVersion_1a391bf3452ed0068b495d2a3754156586"></a>

Sets the value of AllowUpdate_Optional to its default and also sets AllowUpdate_IsSet to true.

#### `public inline FString & `[`GetKeyRegex`](#structFRHAPI__SettingTypeVersion_1a9d935fb43394e65e044cf3065f73af0d)`()` <a id="structFRHAPI__SettingTypeVersion_1a9d935fb43394e65e044cf3065f73af0d"></a>

Gets the value of KeyRegex_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetKeyRegex`](#structFRHAPI__SettingTypeVersion_1ac66a76588ac510c1147cee96013194f7)`() const` <a id="structFRHAPI__SettingTypeVersion_1ac66a76588ac510c1147cee96013194f7"></a>

Gets the value of KeyRegex_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetKeyRegex`](#structFRHAPI__SettingTypeVersion_1a52e09af92f1901e1cd232e930a695122)`(const FString & DefaultValue) const` <a id="structFRHAPI__SettingTypeVersion_1a52e09af92f1901e1cd232e930a695122"></a>

Gets the value of KeyRegex_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetKeyRegex`](#structFRHAPI__SettingTypeVersion_1a83b8a32269644c1ff31d599254741e48)`(FString & OutValue) const` <a id="structFRHAPI__SettingTypeVersion_1a83b8a32269644c1ff31d599254741e48"></a>

Fills OutValue with the value of KeyRegex_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetKeyRegexOrNull`](#structFRHAPI__SettingTypeVersion_1a032ecb833d81269e63ea24f80347f750)`()` <a id="structFRHAPI__SettingTypeVersion_1a032ecb833d81269e63ea24f80347f750"></a>

Returns a pointer to KeyRegex_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetKeyRegexOrNull`](#structFRHAPI__SettingTypeVersion_1a5388309d3f8093010ef2013d785faa0c)`() const` <a id="structFRHAPI__SettingTypeVersion_1a5388309d3f8093010ef2013d785faa0c"></a>

Returns a pointer to KeyRegex_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetKeyRegex`](#structFRHAPI__SettingTypeVersion_1ae4e39149102c921eca7c26f0fc23c362)`(FString NewValue)` <a id="structFRHAPI__SettingTypeVersion_1ae4e39149102c921eca7c26f0fc23c362"></a>

Sets the value of KeyRegex_Optional and also sets KeyRegex_IsSet to true.

#### `public inline void `[`ClearKeyRegex`](#structFRHAPI__SettingTypeVersion_1a128d3490d334f968e82b0ab89318c5b3)`()` <a id="structFRHAPI__SettingTypeVersion_1a128d3490d334f968e82b0ab89318c5b3"></a>

Clears the value of KeyRegex_Optional and sets KeyRegex_IsSet to false.

#### `public inline bool `[`IsKeyRegexDefaultValue`](#structFRHAPI__SettingTypeVersion_1a5936bb1b4543b1a515ff9b69d296bc76)`() const` <a id="structFRHAPI__SettingTypeVersion_1a5936bb1b4543b1a515ff9b69d296bc76"></a>

Returns true if KeyRegex_Optional is set and matches the default value.

#### `public inline void `[`SetKeyRegexToDefault`](#structFRHAPI__SettingTypeVersion_1a22341ac9a7abce8cbb643ac7cf1089d2)`()` <a id="structFRHAPI__SettingTypeVersion_1a22341ac9a7abce8cbb643ac7cf1089d2"></a>

Sets the value of KeyRegex_Optional to its default and also sets KeyRegex_IsSet to true.

#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetValueJsonschema`](#structFRHAPI__SettingTypeVersion_1ab213f4d77b44b6d6386a5408ca76021b)`()` <a id="structFRHAPI__SettingTypeVersion_1ab213f4d77b44b6d6386a5408ca76021b"></a>

Gets the value of ValueJsonschema.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetValueJsonschema`](#structFRHAPI__SettingTypeVersion_1a549ec1a091924dd29295bb00668fd0c7)`() const` <a id="structFRHAPI__SettingTypeVersion_1a549ec1a091924dd29295bb00668fd0c7"></a>

Gets the value of ValueJsonschema.

#### `public inline void `[`SetValueJsonschema`](#structFRHAPI__SettingTypeVersion_1a633c27cecfa21ba5533ca498adb40eff)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` NewValue)` <a id="structFRHAPI__SettingTypeVersion_1a633c27cecfa21ba5533ca498adb40eff"></a>

Sets the value of ValueJsonschema.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SettingTypeVersion_1aabd97f56553b79db5d43b9ba57a6dd21)`()` <a id="structFRHAPI__SettingTypeVersion_1aabd97f56553b79db5d43b9ba57a6dd21"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SettingTypeVersion_1ab7247a5f9b2a329ed2b9667ec64cbaa2)`() const` <a id="structFRHAPI__SettingTypeVersion_1ab7247a5f9b2a329ed2b9667ec64cbaa2"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SettingTypeVersion_1afcb635723e12d92035726b375c09b3fe)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SettingTypeVersion_1afcb635723e12d92035726b375c09b3fe"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__SettingTypeVersion_1a77dcaf48288c55129f4f280cfd046733)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SettingTypeVersion_1a77dcaf48288c55129f4f280cfd046733"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SettingTypeVersion_1af651b7e40f15018550e94733b8da23b4)`()` <a id="structFRHAPI__SettingTypeVersion_1af651b7e40f15018550e94733b8da23b4"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SettingTypeVersion_1a0628b64189adc569c97aa65afd095d3e)`() const` <a id="structFRHAPI__SettingTypeVersion_1a0628b64189adc569c97aa65afd095d3e"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__SettingTypeVersion_1a662dff9af912202577d78e2f1dd3b19a)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__SettingTypeVersion_1a662dff9af912202577d78e2f1dd3b19a"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__SettingTypeVersion_1a87ffa31269dfdc6b9737d3f8653735bc)`()` <a id="structFRHAPI__SettingTypeVersion_1a87ffa31269dfdc6b9737d3f8653735bc"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

