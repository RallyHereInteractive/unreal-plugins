---
title: RHAPI_SettingTypeVersion
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SettingTypeVersion`](#structFRHAPI__SettingTypeVersion) | 

## struct `FRHAPI_SettingTypeVersion` <a id="structFRHAPI__SettingTypeVersion"></a>

```
struct FRHAPI_SettingTypeVersion
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public bool `[`AllowUpdate_Optional`](#structFRHAPI__SettingTypeVersion_1a7cde63d5e798189074a83f5e9b24a3e8) | Are players allowed to set/update keys to this version of the setting type? Does not affect getting or deleting existing settings.
`public bool `[`AllowUpdate_IsSet`](#structFRHAPI__SettingTypeVersion_1aee033cacb8048accef460ffe06293b98) | true if AllowUpdate_Optional has been set to a value
`public bool `[`IsInternal_Optional`](#structFRHAPI__SettingTypeVersion_1a22b2ddbc08e1c7379b5bcbda96d80bcd) | 
`public bool `[`IsInternal_IsSet`](#structFRHAPI__SettingTypeVersion_1a3f88f168366b12dd1fba3cf260d91faf) | true if IsInternal_Optional has been set to a value
`public bool `[`IsInternal_IsNull`](#structFRHAPI__SettingTypeVersion_1a6c85871e595a7d70aab0ab8ee9cc9118) | true if IsInternal_Optional has been explicitly set to null
`public FString `[`KeyRegex_Optional`](#structFRHAPI__SettingTypeVersion_1a560ade93145afb89f7492f48cd498b22) | Regex that is used to verify keys at assignment time.
`public bool `[`KeyRegex_IsSet`](#structFRHAPI__SettingTypeVersion_1a06f3feaf49700c1a9892c62a9c33cf5f) | true if KeyRegex_Optional has been set to a value
`public TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > `[`ValueJsonschema`](#structFRHAPI__SettingTypeVersion_1ae71ccc0448ef3a3d199a78c12f27a4c0) | [jsonschema](https://json-schema.org/understanding-json-schema/index.html) that is used to verify values at assignment time
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SettingTypeVersion_1a7cbfb62ce0108a560c234e8eb60399f0) | Custom data that was provided when the setting type was created.
`public bool `[`CustomData_IsSet`](#structFRHAPI__SettingTypeVersion_1a417b1215b3b7522fe6f0d2c11a96bcda) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SettingTypeVersion_1a847b27bcd2352e9669ec8e1ee7fc4725)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SettingTypeVersion_1a8f6608915fd7d259d2ab4eff7229120d)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline bool & `[`GetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1aca068a6d5cf3f80e46e964e784804aa0)`()` | Gets the value of AllowUpdate_Optional, regardless of it having been set.
`public inline const bool & `[`GetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1ae6ad934a08a2f33ba6bc80a497e587c8)`() const` | Gets the value of AllowUpdate_Optional, regardless of it having been set.
`public inline const bool & `[`GetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1a6bc1b129a1750a5305af24deddb0f9c0)`(const bool & DefaultValue) const` | Gets the value of AllowUpdate_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1aa16fb445c5661b7a5c497ea5ef9ede58)`(bool & OutValue) const` | Fills OutValue with the value of AllowUpdate_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetAllowUpdateOrNull`](#structFRHAPI__SettingTypeVersion_1aaf9f755a58e70dff07d2f360500d7217)`()` | Returns a pointer to AllowUpdate_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetAllowUpdateOrNull`](#structFRHAPI__SettingTypeVersion_1a03006e11b5d53e2f29c1b8b6248fc61c)`() const` | Returns a pointer to AllowUpdate_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1aa2ad062a6c4d47acd02c64d33d70d210)`(const bool & NewValue)` | Sets the value of AllowUpdate_Optional and also sets AllowUpdate_IsSet to true.
`public inline void `[`SetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1a67df6be7fc3e7aa6a79eb0360237a305)`(bool && NewValue)` | Sets the value of AllowUpdate_Optional and also sets AllowUpdate_IsSet to true using move semantics.
`public inline void `[`ClearAllowUpdate`](#structFRHAPI__SettingTypeVersion_1a98769cdb1c9d46e61140d4629267ea9a)`()` | Clears the value of AllowUpdate_Optional and sets AllowUpdate_IsSet to false.
`public inline bool `[`IsAllowUpdateSet`](#structFRHAPI__SettingTypeVersion_1a81013f385f660bb26a466bf7cfa93d9b)`() const` | Checks whether AllowUpdate_Optional has been set.
`public inline bool `[`IsAllowUpdateDefaultValue`](#structFRHAPI__SettingTypeVersion_1ac836a8cfed8cd7dae4a460fab86ab2e3)`() const` | Returns true if AllowUpdate_Optional is set and matches the default value.
`public inline void `[`SetAllowUpdateToDefault`](#structFRHAPI__SettingTypeVersion_1a391bf3452ed0068b495d2a3754156586)`()` | Sets the value of AllowUpdate_Optional to its default and also sets AllowUpdate_IsSet to true.
`public inline bool & `[`GetIsInternal`](#structFRHAPI__SettingTypeVersion_1a44cf992549a6ad3b23cdc92dc0ea025c)`()` | Gets the value of IsInternal_Optional, regardless of it having been set.
`public inline const bool & `[`GetIsInternal`](#structFRHAPI__SettingTypeVersion_1aaceabd4046abefc90f71d133aec5b118)`() const` | Gets the value of IsInternal_Optional, regardless of it having been set.
`public inline const bool & `[`GetIsInternal`](#structFRHAPI__SettingTypeVersion_1af1d09645f8be3c7f169703f4d3bf6d6a)`(const bool & DefaultValue) const` | Gets the value of IsInternal_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetIsInternal`](#structFRHAPI__SettingTypeVersion_1af9273b5cb2ec64f115a8e6e2a8bed3b9)`(bool & OutValue) const` | Fills OutValue with the value of IsInternal_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetIsInternalOrNull`](#structFRHAPI__SettingTypeVersion_1a2161e77ef73d11a11b12eee9b57df847)`()` | Returns a pointer to IsInternal_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetIsInternalOrNull`](#structFRHAPI__SettingTypeVersion_1a61e158747fd85fda550935713b8ca9af)`() const` | Returns a pointer to IsInternal_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetIsInternal`](#structFRHAPI__SettingTypeVersion_1a6c6e1516fa5a73e764022cba346bae73)`(const bool & NewValue)` | Sets the value of IsInternal_Optional and also sets IsInternal_IsSet to true.
`public inline void `[`SetIsInternal`](#structFRHAPI__SettingTypeVersion_1a982dfedcceeb2c0fc4636013d8b726db)`(bool && NewValue)` | Sets the value of IsInternal_Optional and also sets IsInternal_IsSet to true using move semantics.
`public inline void `[`ClearIsInternal`](#structFRHAPI__SettingTypeVersion_1a2afb68686fccca3099dfded581101413)`()` | Clears the value of IsInternal_Optional and sets IsInternal_IsSet to false.
`public inline bool `[`IsIsInternalSet`](#structFRHAPI__SettingTypeVersion_1a790aa75ac5d0c518e5d49cf0ea713ac7)`() const` | Checks whether IsInternal_Optional has been set.
`public inline bool `[`IsIsInternalDefaultValue`](#structFRHAPI__SettingTypeVersion_1aafeaa774bf82ca1986575825b734a6a0)`() const` | Returns true if IsInternal_Optional is set and matches the default value.
`public inline void `[`SetIsInternalToDefault`](#structFRHAPI__SettingTypeVersion_1a50aedf812048223876b0c6fec228969e)`()` | Sets the value of IsInternal_Optional to its default and also sets IsInternal_IsSet to true.
`public inline void `[`SetIsInternalToNull`](#structFRHAPI__SettingTypeVersion_1ad281df36d4ebf74b137c4545dc36e87d)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsIsInternalNull`](#structFRHAPI__SettingTypeVersion_1a8dbeb81e1e9ae1d1cdab41e5b7a2c93a)`() const` | Checks whether IsInternal_Optional is set to null.
`public inline FString & `[`GetKeyRegex`](#structFRHAPI__SettingTypeVersion_1a002d75ca7a9a42b71a9a5715e3b0712f)`()` | Gets the value of KeyRegex_Optional, regardless of it having been set.
`public inline const FString & `[`GetKeyRegex`](#structFRHAPI__SettingTypeVersion_1a5a8af741d53501dcecbab3e2e7e34ea1)`() const` | Gets the value of KeyRegex_Optional, regardless of it having been set.
`public inline const FString & `[`GetKeyRegex`](#structFRHAPI__SettingTypeVersion_1ac5982a29fade1ef492abe0dd9081e630)`(const FString & DefaultValue) const` | Gets the value of KeyRegex_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetKeyRegex`](#structFRHAPI__SettingTypeVersion_1a83b8a32269644c1ff31d599254741e48)`(FString & OutValue) const` | Fills OutValue with the value of KeyRegex_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetKeyRegexOrNull`](#structFRHAPI__SettingTypeVersion_1a03fcc044134d557741028eca8a717aeb)`()` | Returns a pointer to KeyRegex_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetKeyRegexOrNull`](#structFRHAPI__SettingTypeVersion_1a2590c3bb978a07ccc2d1ca146af3f270)`() const` | Returns a pointer to KeyRegex_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetKeyRegex`](#structFRHAPI__SettingTypeVersion_1af6d12b1ce3b50b113d893d39d2e084b7)`(const FString & NewValue)` | Sets the value of KeyRegex_Optional and also sets KeyRegex_IsSet to true.
`public inline void `[`SetKeyRegex`](#structFRHAPI__SettingTypeVersion_1a6764762de099aea070c02fc68db3c0c6)`(FString && NewValue)` | Sets the value of KeyRegex_Optional and also sets KeyRegex_IsSet to true using move semantics.
`public inline void `[`ClearKeyRegex`](#structFRHAPI__SettingTypeVersion_1a128d3490d334f968e82b0ab89318c5b3)`()` | Clears the value of KeyRegex_Optional and sets KeyRegex_IsSet to false.
`public inline bool `[`IsKeyRegexSet`](#structFRHAPI__SettingTypeVersion_1ac51e05129f1d60643b36bb5d78d97d84)`() const` | Checks whether KeyRegex_Optional has been set.
`public inline bool `[`IsKeyRegexDefaultValue`](#structFRHAPI__SettingTypeVersion_1a5936bb1b4543b1a515ff9b69d296bc76)`() const` | Returns true if KeyRegex_Optional is set and matches the default value.
`public inline void `[`SetKeyRegexToDefault`](#structFRHAPI__SettingTypeVersion_1a22341ac9a7abce8cbb643ac7cf1089d2)`()` | Sets the value of KeyRegex_Optional to its default and also sets KeyRegex_IsSet to true.
`public inline TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetValueJsonschema`](#structFRHAPI__SettingTypeVersion_1a345675813990bbf3a0585f9b2c2f9b8a)`()` | Gets the value of ValueJsonschema.
`public inline const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetValueJsonschema`](#structFRHAPI__SettingTypeVersion_1a082ff7440c9d9d09d3562d9782ab2db3)`() const` | Gets the value of ValueJsonschema.
`public inline void `[`SetValueJsonschema`](#structFRHAPI__SettingTypeVersion_1a5d0fef2231c659b457c96fc6c313ed04)`(const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & NewValue)` | Sets the value of ValueJsonschema.
`public inline void `[`SetValueJsonschema`](#structFRHAPI__SettingTypeVersion_1a026ef0ecd81d62e9fa599d7337f248cd)`(TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > && NewValue)` | Sets the value of ValueJsonschema using move semantics.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SettingTypeVersion_1a457cef055c69aed21085fbf36b650388)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SettingTypeVersion_1a0aaaa34bc17777c0293750c31df4a602)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SettingTypeVersion_1adcbffd372f24647c8778955287f17e1b)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__SettingTypeVersion_1a77dcaf48288c55129f4f280cfd046733)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SettingTypeVersion_1a45fa9bbe2a95839babdd775aa0479ad3)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SettingTypeVersion_1ac7807e6a59d891355c62d0b834aa8a4f)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__SettingTypeVersion_1a7ed286238c590cb17baa353e2efee115)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__SettingTypeVersion_1ac44584ad713fb7900e15f1a74579832d)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__SettingTypeVersion_1a87ffa31269dfdc6b9737d3f8653735bc)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__SettingTypeVersion_1a8fad33c74164a01e246f742ea92b88e5)`() const` | Checks whether CustomData_Optional has been set.

### Members

#### `public bool `[`AllowUpdate_Optional`](#structFRHAPI__SettingTypeVersion_1a7cde63d5e798189074a83f5e9b24a3e8) <a id="structFRHAPI__SettingTypeVersion_1a7cde63d5e798189074a83f5e9b24a3e8"></a>

Are players allowed to set/update keys to this version of the setting type? Does not affect getting or deleting existing settings.

#### `public bool `[`AllowUpdate_IsSet`](#structFRHAPI__SettingTypeVersion_1aee033cacb8048accef460ffe06293b98) <a id="structFRHAPI__SettingTypeVersion_1aee033cacb8048accef460ffe06293b98"></a>

true if AllowUpdate_Optional has been set to a value

#### `public bool `[`IsInternal_Optional`](#structFRHAPI__SettingTypeVersion_1a22b2ddbc08e1c7379b5bcbda96d80bcd) <a id="structFRHAPI__SettingTypeVersion_1a22b2ddbc08e1c7379b5bcbda96d80bcd"></a>

#### `public bool `[`IsInternal_IsSet`](#structFRHAPI__SettingTypeVersion_1a3f88f168366b12dd1fba3cf260d91faf) <a id="structFRHAPI__SettingTypeVersion_1a3f88f168366b12dd1fba3cf260d91faf"></a>

true if IsInternal_Optional has been set to a value

#### `public bool `[`IsInternal_IsNull`](#structFRHAPI__SettingTypeVersion_1a6c85871e595a7d70aab0ab8ee9cc9118) <a id="structFRHAPI__SettingTypeVersion_1a6c85871e595a7d70aab0ab8ee9cc9118"></a>

true if IsInternal_Optional has been explicitly set to null

#### `public FString `[`KeyRegex_Optional`](#structFRHAPI__SettingTypeVersion_1a560ade93145afb89f7492f48cd498b22) <a id="structFRHAPI__SettingTypeVersion_1a560ade93145afb89f7492f48cd498b22"></a>

Regex that is used to verify keys at assignment time.

#### `public bool `[`KeyRegex_IsSet`](#structFRHAPI__SettingTypeVersion_1a06f3feaf49700c1a9892c62a9c33cf5f) <a id="structFRHAPI__SettingTypeVersion_1a06f3feaf49700c1a9892c62a9c33cf5f"></a>

true if KeyRegex_Optional has been set to a value

#### `public TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > `[`ValueJsonschema`](#structFRHAPI__SettingTypeVersion_1ae71ccc0448ef3a3d199a78c12f27a4c0) <a id="structFRHAPI__SettingTypeVersion_1ae71ccc0448ef3a3d199a78c12f27a4c0"></a>

[jsonschema](https://json-schema.org/understanding-json-schema/index.html) that is used to verify values at assignment time

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SettingTypeVersion_1a7cbfb62ce0108a560c234e8eb60399f0) <a id="structFRHAPI__SettingTypeVersion_1a7cbfb62ce0108a560c234e8eb60399f0"></a>

Custom data that was provided when the setting type was created.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__SettingTypeVersion_1a417b1215b3b7522fe6f0d2c11a96bcda) <a id="structFRHAPI__SettingTypeVersion_1a417b1215b3b7522fe6f0d2c11a96bcda"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__SettingTypeVersion_1a847b27bcd2352e9669ec8e1ee7fc4725)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SettingTypeVersion_1a847b27bcd2352e9669ec8e1ee7fc4725"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SettingTypeVersion_1a8f6608915fd7d259d2ab4eff7229120d)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__SettingTypeVersion_1a8f6608915fd7d259d2ab4eff7229120d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline bool & `[`GetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1aca068a6d5cf3f80e46e964e784804aa0)`()` <a id="structFRHAPI__SettingTypeVersion_1aca068a6d5cf3f80e46e964e784804aa0"></a>

Gets the value of AllowUpdate_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1ae6ad934a08a2f33ba6bc80a497e587c8)`() const` <a id="structFRHAPI__SettingTypeVersion_1ae6ad934a08a2f33ba6bc80a497e587c8"></a>

Gets the value of AllowUpdate_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1a6bc1b129a1750a5305af24deddb0f9c0)`(const bool & DefaultValue) const` <a id="structFRHAPI__SettingTypeVersion_1a6bc1b129a1750a5305af24deddb0f9c0"></a>

Gets the value of AllowUpdate_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1aa16fb445c5661b7a5c497ea5ef9ede58)`(bool & OutValue) const` <a id="structFRHAPI__SettingTypeVersion_1aa16fb445c5661b7a5c497ea5ef9ede58"></a>

Fills OutValue with the value of AllowUpdate_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetAllowUpdateOrNull`](#structFRHAPI__SettingTypeVersion_1aaf9f755a58e70dff07d2f360500d7217)`()` <a id="structFRHAPI__SettingTypeVersion_1aaf9f755a58e70dff07d2f360500d7217"></a>

Returns a pointer to AllowUpdate_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetAllowUpdateOrNull`](#structFRHAPI__SettingTypeVersion_1a03006e11b5d53e2f29c1b8b6248fc61c)`() const` <a id="structFRHAPI__SettingTypeVersion_1a03006e11b5d53e2f29c1b8b6248fc61c"></a>

Returns a pointer to AllowUpdate_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1aa2ad062a6c4d47acd02c64d33d70d210)`(const bool & NewValue)` <a id="structFRHAPI__SettingTypeVersion_1aa2ad062a6c4d47acd02c64d33d70d210"></a>

Sets the value of AllowUpdate_Optional and also sets AllowUpdate_IsSet to true.

#### `public inline void `[`SetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1a67df6be7fc3e7aa6a79eb0360237a305)`(bool && NewValue)` <a id="structFRHAPI__SettingTypeVersion_1a67df6be7fc3e7aa6a79eb0360237a305"></a>

Sets the value of AllowUpdate_Optional and also sets AllowUpdate_IsSet to true using move semantics.

#### `public inline void `[`ClearAllowUpdate`](#structFRHAPI__SettingTypeVersion_1a98769cdb1c9d46e61140d4629267ea9a)`()` <a id="structFRHAPI__SettingTypeVersion_1a98769cdb1c9d46e61140d4629267ea9a"></a>

Clears the value of AllowUpdate_Optional and sets AllowUpdate_IsSet to false.

#### `public inline bool `[`IsAllowUpdateSet`](#structFRHAPI__SettingTypeVersion_1a81013f385f660bb26a466bf7cfa93d9b)`() const` <a id="structFRHAPI__SettingTypeVersion_1a81013f385f660bb26a466bf7cfa93d9b"></a>

Checks whether AllowUpdate_Optional has been set.

#### `public inline bool `[`IsAllowUpdateDefaultValue`](#structFRHAPI__SettingTypeVersion_1ac836a8cfed8cd7dae4a460fab86ab2e3)`() const` <a id="structFRHAPI__SettingTypeVersion_1ac836a8cfed8cd7dae4a460fab86ab2e3"></a>

Returns true if AllowUpdate_Optional is set and matches the default value.

#### `public inline void `[`SetAllowUpdateToDefault`](#structFRHAPI__SettingTypeVersion_1a391bf3452ed0068b495d2a3754156586)`()` <a id="structFRHAPI__SettingTypeVersion_1a391bf3452ed0068b495d2a3754156586"></a>

Sets the value of AllowUpdate_Optional to its default and also sets AllowUpdate_IsSet to true.

#### `public inline bool & `[`GetIsInternal`](#structFRHAPI__SettingTypeVersion_1a44cf992549a6ad3b23cdc92dc0ea025c)`()` <a id="structFRHAPI__SettingTypeVersion_1a44cf992549a6ad3b23cdc92dc0ea025c"></a>

Gets the value of IsInternal_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetIsInternal`](#structFRHAPI__SettingTypeVersion_1aaceabd4046abefc90f71d133aec5b118)`() const` <a id="structFRHAPI__SettingTypeVersion_1aaceabd4046abefc90f71d133aec5b118"></a>

Gets the value of IsInternal_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetIsInternal`](#structFRHAPI__SettingTypeVersion_1af1d09645f8be3c7f169703f4d3bf6d6a)`(const bool & DefaultValue) const` <a id="structFRHAPI__SettingTypeVersion_1af1d09645f8be3c7f169703f4d3bf6d6a"></a>

Gets the value of IsInternal_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetIsInternal`](#structFRHAPI__SettingTypeVersion_1af9273b5cb2ec64f115a8e6e2a8bed3b9)`(bool & OutValue) const` <a id="structFRHAPI__SettingTypeVersion_1af9273b5cb2ec64f115a8e6e2a8bed3b9"></a>

Fills OutValue with the value of IsInternal_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetIsInternalOrNull`](#structFRHAPI__SettingTypeVersion_1a2161e77ef73d11a11b12eee9b57df847)`()` <a id="structFRHAPI__SettingTypeVersion_1a2161e77ef73d11a11b12eee9b57df847"></a>

Returns a pointer to IsInternal_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetIsInternalOrNull`](#structFRHAPI__SettingTypeVersion_1a61e158747fd85fda550935713b8ca9af)`() const` <a id="structFRHAPI__SettingTypeVersion_1a61e158747fd85fda550935713b8ca9af"></a>

Returns a pointer to IsInternal_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetIsInternal`](#structFRHAPI__SettingTypeVersion_1a6c6e1516fa5a73e764022cba346bae73)`(const bool & NewValue)` <a id="structFRHAPI__SettingTypeVersion_1a6c6e1516fa5a73e764022cba346bae73"></a>

Sets the value of IsInternal_Optional and also sets IsInternal_IsSet to true.

#### `public inline void `[`SetIsInternal`](#structFRHAPI__SettingTypeVersion_1a982dfedcceeb2c0fc4636013d8b726db)`(bool && NewValue)` <a id="structFRHAPI__SettingTypeVersion_1a982dfedcceeb2c0fc4636013d8b726db"></a>

Sets the value of IsInternal_Optional and also sets IsInternal_IsSet to true using move semantics.

#### `public inline void `[`ClearIsInternal`](#structFRHAPI__SettingTypeVersion_1a2afb68686fccca3099dfded581101413)`()` <a id="structFRHAPI__SettingTypeVersion_1a2afb68686fccca3099dfded581101413"></a>

Clears the value of IsInternal_Optional and sets IsInternal_IsSet to false.

#### `public inline bool `[`IsIsInternalSet`](#structFRHAPI__SettingTypeVersion_1a790aa75ac5d0c518e5d49cf0ea713ac7)`() const` <a id="structFRHAPI__SettingTypeVersion_1a790aa75ac5d0c518e5d49cf0ea713ac7"></a>

Checks whether IsInternal_Optional has been set.

#### `public inline bool `[`IsIsInternalDefaultValue`](#structFRHAPI__SettingTypeVersion_1aafeaa774bf82ca1986575825b734a6a0)`() const` <a id="structFRHAPI__SettingTypeVersion_1aafeaa774bf82ca1986575825b734a6a0"></a>

Returns true if IsInternal_Optional is set and matches the default value.

#### `public inline void `[`SetIsInternalToDefault`](#structFRHAPI__SettingTypeVersion_1a50aedf812048223876b0c6fec228969e)`()` <a id="structFRHAPI__SettingTypeVersion_1a50aedf812048223876b0c6fec228969e"></a>

Sets the value of IsInternal_Optional to its default and also sets IsInternal_IsSet to true.

#### `public inline void `[`SetIsInternalToNull`](#structFRHAPI__SettingTypeVersion_1ad281df36d4ebf74b137c4545dc36e87d)`()` <a id="structFRHAPI__SettingTypeVersion_1ad281df36d4ebf74b137c4545dc36e87d"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsIsInternalNull`](#structFRHAPI__SettingTypeVersion_1a8dbeb81e1e9ae1d1cdab41e5b7a2c93a)`() const` <a id="structFRHAPI__SettingTypeVersion_1a8dbeb81e1e9ae1d1cdab41e5b7a2c93a"></a>

Checks whether IsInternal_Optional is set to null.

#### `public inline FString & `[`GetKeyRegex`](#structFRHAPI__SettingTypeVersion_1a002d75ca7a9a42b71a9a5715e3b0712f)`()` <a id="structFRHAPI__SettingTypeVersion_1a002d75ca7a9a42b71a9a5715e3b0712f"></a>

Gets the value of KeyRegex_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetKeyRegex`](#structFRHAPI__SettingTypeVersion_1a5a8af741d53501dcecbab3e2e7e34ea1)`() const` <a id="structFRHAPI__SettingTypeVersion_1a5a8af741d53501dcecbab3e2e7e34ea1"></a>

Gets the value of KeyRegex_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetKeyRegex`](#structFRHAPI__SettingTypeVersion_1ac5982a29fade1ef492abe0dd9081e630)`(const FString & DefaultValue) const` <a id="structFRHAPI__SettingTypeVersion_1ac5982a29fade1ef492abe0dd9081e630"></a>

Gets the value of KeyRegex_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetKeyRegex`](#structFRHAPI__SettingTypeVersion_1a83b8a32269644c1ff31d599254741e48)`(FString & OutValue) const` <a id="structFRHAPI__SettingTypeVersion_1a83b8a32269644c1ff31d599254741e48"></a>

Fills OutValue with the value of KeyRegex_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetKeyRegexOrNull`](#structFRHAPI__SettingTypeVersion_1a03fcc044134d557741028eca8a717aeb)`()` <a id="structFRHAPI__SettingTypeVersion_1a03fcc044134d557741028eca8a717aeb"></a>

Returns a pointer to KeyRegex_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetKeyRegexOrNull`](#structFRHAPI__SettingTypeVersion_1a2590c3bb978a07ccc2d1ca146af3f270)`() const` <a id="structFRHAPI__SettingTypeVersion_1a2590c3bb978a07ccc2d1ca146af3f270"></a>

Returns a pointer to KeyRegex_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetKeyRegex`](#structFRHAPI__SettingTypeVersion_1af6d12b1ce3b50b113d893d39d2e084b7)`(const FString & NewValue)` <a id="structFRHAPI__SettingTypeVersion_1af6d12b1ce3b50b113d893d39d2e084b7"></a>

Sets the value of KeyRegex_Optional and also sets KeyRegex_IsSet to true.

#### `public inline void `[`SetKeyRegex`](#structFRHAPI__SettingTypeVersion_1a6764762de099aea070c02fc68db3c0c6)`(FString && NewValue)` <a id="structFRHAPI__SettingTypeVersion_1a6764762de099aea070c02fc68db3c0c6"></a>

Sets the value of KeyRegex_Optional and also sets KeyRegex_IsSet to true using move semantics.

#### `public inline void `[`ClearKeyRegex`](#structFRHAPI__SettingTypeVersion_1a128d3490d334f968e82b0ab89318c5b3)`()` <a id="structFRHAPI__SettingTypeVersion_1a128d3490d334f968e82b0ab89318c5b3"></a>

Clears the value of KeyRegex_Optional and sets KeyRegex_IsSet to false.

#### `public inline bool `[`IsKeyRegexSet`](#structFRHAPI__SettingTypeVersion_1ac51e05129f1d60643b36bb5d78d97d84)`() const` <a id="structFRHAPI__SettingTypeVersion_1ac51e05129f1d60643b36bb5d78d97d84"></a>

Checks whether KeyRegex_Optional has been set.

#### `public inline bool `[`IsKeyRegexDefaultValue`](#structFRHAPI__SettingTypeVersion_1a5936bb1b4543b1a515ff9b69d296bc76)`() const` <a id="structFRHAPI__SettingTypeVersion_1a5936bb1b4543b1a515ff9b69d296bc76"></a>

Returns true if KeyRegex_Optional is set and matches the default value.

#### `public inline void `[`SetKeyRegexToDefault`](#structFRHAPI__SettingTypeVersion_1a22341ac9a7abce8cbb643ac7cf1089d2)`()` <a id="structFRHAPI__SettingTypeVersion_1a22341ac9a7abce8cbb643ac7cf1089d2"></a>

Sets the value of KeyRegex_Optional to its default and also sets KeyRegex_IsSet to true.

#### `public inline TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetValueJsonschema`](#structFRHAPI__SettingTypeVersion_1a345675813990bbf3a0585f9b2c2f9b8a)`()` <a id="structFRHAPI__SettingTypeVersion_1a345675813990bbf3a0585f9b2c2f9b8a"></a>

Gets the value of ValueJsonschema.

#### `public inline const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetValueJsonschema`](#structFRHAPI__SettingTypeVersion_1a082ff7440c9d9d09d3562d9782ab2db3)`() const` <a id="structFRHAPI__SettingTypeVersion_1a082ff7440c9d9d09d3562d9782ab2db3"></a>

Gets the value of ValueJsonschema.

#### `public inline void `[`SetValueJsonschema`](#structFRHAPI__SettingTypeVersion_1a5d0fef2231c659b457c96fc6c313ed04)`(const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & NewValue)` <a id="structFRHAPI__SettingTypeVersion_1a5d0fef2231c659b457c96fc6c313ed04"></a>

Sets the value of ValueJsonschema.

#### `public inline void `[`SetValueJsonschema`](#structFRHAPI__SettingTypeVersion_1a026ef0ecd81d62e9fa599d7337f248cd)`(TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > && NewValue)` <a id="structFRHAPI__SettingTypeVersion_1a026ef0ecd81d62e9fa599d7337f248cd"></a>

Sets the value of ValueJsonschema using move semantics.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SettingTypeVersion_1a457cef055c69aed21085fbf36b650388)`()` <a id="structFRHAPI__SettingTypeVersion_1a457cef055c69aed21085fbf36b650388"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SettingTypeVersion_1a0aaaa34bc17777c0293750c31df4a602)`() const` <a id="structFRHAPI__SettingTypeVersion_1a0aaaa34bc17777c0293750c31df4a602"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SettingTypeVersion_1adcbffd372f24647c8778955287f17e1b)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SettingTypeVersion_1adcbffd372f24647c8778955287f17e1b"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__SettingTypeVersion_1a77dcaf48288c55129f4f280cfd046733)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SettingTypeVersion_1a77dcaf48288c55129f4f280cfd046733"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SettingTypeVersion_1a45fa9bbe2a95839babdd775aa0479ad3)`()` <a id="structFRHAPI__SettingTypeVersion_1a45fa9bbe2a95839babdd775aa0479ad3"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SettingTypeVersion_1ac7807e6a59d891355c62d0b834aa8a4f)`() const` <a id="structFRHAPI__SettingTypeVersion_1ac7807e6a59d891355c62d0b834aa8a4f"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__SettingTypeVersion_1a7ed286238c590cb17baa353e2efee115)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__SettingTypeVersion_1a7ed286238c590cb17baa353e2efee115"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__SettingTypeVersion_1ac44584ad713fb7900e15f1a74579832d)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__SettingTypeVersion_1ac44584ad713fb7900e15f1a74579832d"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__SettingTypeVersion_1a87ffa31269dfdc6b9737d3f8653735bc)`()` <a id="structFRHAPI__SettingTypeVersion_1a87ffa31269dfdc6b9737d3f8653735bc"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__SettingTypeVersion_1a8fad33c74164a01e246f742ea92b88e5)`() const` <a id="structFRHAPI__SettingTypeVersion_1a8fad33c74164a01e246f742ea92b88e5"></a>

Checks whether CustomData_Optional has been set.

