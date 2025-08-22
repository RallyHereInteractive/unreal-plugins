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
`public inline FORCEINLINE bool & `[`GetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1afeb09affbd2978a34fda40be3157f556)`()` | Gets the value of AllowUpdate_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1a02e40a9495124ed0c94c0825782d1ab9)`() const` | Gets the value of AllowUpdate_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1ad6260b1d2343737c108fd38b863ad808)`(const bool & DefaultValue) const` | Gets the value of AllowUpdate_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1acf3a8642d56f62a21b4dcfc200e942eb)`(bool & OutValue) const` | Fills OutValue with the value of AllowUpdate_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetAllowUpdateOrNull`](#structFRHAPI__SettingTypeVersion_1a8f965ee3aff42f6be2a26b59338dd877)`()` | Returns a pointer to AllowUpdate_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetAllowUpdateOrNull`](#structFRHAPI__SettingTypeVersion_1ad21ec89080762e2c36f0dde3919c998e)`() const` | Returns a pointer to AllowUpdate_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1a08eb59d4e89e58c384cd552a395c993e)`(const bool & NewValue)` | Sets the value of AllowUpdate_Optional and also sets AllowUpdate_IsSet to true.
`public inline FORCEINLINE void `[`SetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1a6e8b7222c222c0c2ccb709972dbb6fa5)`(bool && NewValue)` | Sets the value of AllowUpdate_Optional and also sets AllowUpdate_IsSet to true using move semantics.
`public inline void `[`ClearAllowUpdate`](#structFRHAPI__SettingTypeVersion_1a98769cdb1c9d46e61140d4629267ea9a)`()` | Clears the value of AllowUpdate_Optional and sets AllowUpdate_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_AllowUpdate`](#structFRHAPI__SettingTypeVersion_1af8a1a97bb1d895910f9d79534ca5576f)`()` | Returns the default value of AllowUpdate.
`public inline FORCEINLINE bool & `[`GetIsInternal`](#structFRHAPI__SettingTypeVersion_1a16dc24aa7a014227f75798507112eb00)`()` | Gets the value of IsInternal_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetIsInternal`](#structFRHAPI__SettingTypeVersion_1a86dff9e1c76dbc68d2ae0c701d4eb200)`() const` | Gets the value of IsInternal_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetIsInternal`](#structFRHAPI__SettingTypeVersion_1a31809b150a7dd3edaec0f02749df1581)`(const bool & DefaultValue) const` | Gets the value of IsInternal_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetIsInternal`](#structFRHAPI__SettingTypeVersion_1a9d3a54d8d1830d944f128f76befe17d8)`(bool & OutValue) const` | Fills OutValue with the value of IsInternal_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetIsInternalOrNull`](#structFRHAPI__SettingTypeVersion_1a9135572b562ab49f99556c602b02bb1a)`()` | Returns a pointer to IsInternal_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetIsInternalOrNull`](#structFRHAPI__SettingTypeVersion_1ad35340291adf460402d4900ea734cd20)`() const` | Returns a pointer to IsInternal_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetIsInternal`](#structFRHAPI__SettingTypeVersion_1a460eb891bda4e893c36d4910e017a83d)`(const bool & NewValue)` | Sets the value of IsInternal_Optional and also sets IsInternal_IsSet to true.
`public inline FORCEINLINE void `[`SetIsInternal`](#structFRHAPI__SettingTypeVersion_1a6c745ea3df8a209a2262198ba9ed0889)`(bool && NewValue)` | Sets the value of IsInternal_Optional and also sets IsInternal_IsSet to true using move semantics.
`public inline void `[`ClearIsInternal`](#structFRHAPI__SettingTypeVersion_1a2afb68686fccca3099dfded581101413)`()` | Clears the value of IsInternal_Optional and sets IsInternal_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_IsInternal`](#structFRHAPI__SettingTypeVersion_1ae75cab448cbae1e48f4166210b21dbf1)`()` | Returns the default value of IsInternal.
`public inline FORCEINLINE void `[`SetIsInternalToNull`](#structFRHAPI__SettingTypeVersion_1a616d22af4848b7b98792ab7713e8b45b)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsIsInternalNull`](#structFRHAPI__SettingTypeVersion_1aa07ea4f92df41c70a6063e43bd771c9b)`() const` | Checks whether IsInternal_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetKeyRegex`](#structFRHAPI__SettingTypeVersion_1a09383e208d680412e93574b619002fd7)`()` | Gets the value of KeyRegex_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetKeyRegex`](#structFRHAPI__SettingTypeVersion_1aae1f1ab114633edf88176cc3268a6651)`() const` | Gets the value of KeyRegex_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetKeyRegex`](#structFRHAPI__SettingTypeVersion_1a0de077e62c800f77971624818869e85c)`(const FString & DefaultValue) const` | Gets the value of KeyRegex_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetKeyRegex`](#structFRHAPI__SettingTypeVersion_1a5ab463669db161fee374a84f1a49d123)`(FString & OutValue) const` | Fills OutValue with the value of KeyRegex_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetKeyRegexOrNull`](#structFRHAPI__SettingTypeVersion_1ab1b0c11a0b12c3c64e60803df2afb85b)`()` | Returns a pointer to KeyRegex_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetKeyRegexOrNull`](#structFRHAPI__SettingTypeVersion_1a7c8dac394574795c4fa94d62d56ac813)`() const` | Returns a pointer to KeyRegex_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetKeyRegex`](#structFRHAPI__SettingTypeVersion_1ab2e7dfe1fe662e5f3e1bedaddb8cea16)`(const FString & NewValue)` | Sets the value of KeyRegex_Optional and also sets KeyRegex_IsSet to true.
`public inline FORCEINLINE void `[`SetKeyRegex`](#structFRHAPI__SettingTypeVersion_1a656638b6d00c5ad44707a2c42145c749)`(FString && NewValue)` | Sets the value of KeyRegex_Optional and also sets KeyRegex_IsSet to true using move semantics.
`public inline void `[`ClearKeyRegex`](#structFRHAPI__SettingTypeVersion_1a128d3490d334f968e82b0ab89318c5b3)`()` | Clears the value of KeyRegex_Optional and sets KeyRegex_IsSet to false.
`public inline FORCEINLINE FString `[`GetDefaultValue_KeyRegex`](#structFRHAPI__SettingTypeVersion_1ad325133cac7f290b161b8e42e34fba4e)`()` | Returns the default value of KeyRegex.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetValueJsonschema`](#structFRHAPI__SettingTypeVersion_1a4d62a6c536b0e455f4843bc861813d1d)`()` | Gets the value of ValueJsonschema.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetValueJsonschema`](#structFRHAPI__SettingTypeVersion_1a7aacb2d992c38ccb934a7710fdc83f10)`() const` | Gets the value of ValueJsonschema.
`public inline FORCEINLINE void `[`SetValueJsonschema`](#structFRHAPI__SettingTypeVersion_1ad56ee87a0437ecb9b626fe87ca3577f7)`(const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & NewValue)` | Sets the value of ValueJsonschema.
`public inline FORCEINLINE void `[`SetValueJsonschema`](#structFRHAPI__SettingTypeVersion_1a0770a3d17ebd143d17ee4c10f1ca7b66)`(TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > && NewValue)` | Sets the value of ValueJsonschema using move semantics.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SettingTypeVersion_1aaf9f65f377b281d67a9a2433a08b0bf1)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SettingTypeVersion_1a2eb97c7eb11317da674998408178a32e)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SettingTypeVersion_1a4cf30d58b5f4f23a2126781c5a631bc1)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__SettingTypeVersion_1ac4577bac4a920cfc3272650f45388ad2)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SettingTypeVersion_1af420d6527e216c241523aaabb7cce66a)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SettingTypeVersion_1a273ea9e0fe1315232b7a63f13f41a9ef)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SettingTypeVersion_1aaab80027ade6ec45379aea1a23e93ee3)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SettingTypeVersion_1af7aa4ca080d757cbe60542d54127aad7)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__SettingTypeVersion_1a87ffa31269dfdc6b9737d3f8653735bc)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

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

#### `public inline FORCEINLINE bool & `[`GetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1afeb09affbd2978a34fda40be3157f556)`()` <a id="structFRHAPI__SettingTypeVersion_1afeb09affbd2978a34fda40be3157f556"></a>

Gets the value of AllowUpdate_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1a02e40a9495124ed0c94c0825782d1ab9)`() const` <a id="structFRHAPI__SettingTypeVersion_1a02e40a9495124ed0c94c0825782d1ab9"></a>

Gets the value of AllowUpdate_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1ad6260b1d2343737c108fd38b863ad808)`(const bool & DefaultValue) const` <a id="structFRHAPI__SettingTypeVersion_1ad6260b1d2343737c108fd38b863ad808"></a>

Gets the value of AllowUpdate_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1acf3a8642d56f62a21b4dcfc200e942eb)`(bool & OutValue) const` <a id="structFRHAPI__SettingTypeVersion_1acf3a8642d56f62a21b4dcfc200e942eb"></a>

Fills OutValue with the value of AllowUpdate_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetAllowUpdateOrNull`](#structFRHAPI__SettingTypeVersion_1a8f965ee3aff42f6be2a26b59338dd877)`()` <a id="structFRHAPI__SettingTypeVersion_1a8f965ee3aff42f6be2a26b59338dd877"></a>

Returns a pointer to AllowUpdate_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetAllowUpdateOrNull`](#structFRHAPI__SettingTypeVersion_1ad21ec89080762e2c36f0dde3919c998e)`() const` <a id="structFRHAPI__SettingTypeVersion_1ad21ec89080762e2c36f0dde3919c998e"></a>

Returns a pointer to AllowUpdate_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1a08eb59d4e89e58c384cd552a395c993e)`(const bool & NewValue)` <a id="structFRHAPI__SettingTypeVersion_1a08eb59d4e89e58c384cd552a395c993e"></a>

Sets the value of AllowUpdate_Optional and also sets AllowUpdate_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAllowUpdate`](#structFRHAPI__SettingTypeVersion_1a6e8b7222c222c0c2ccb709972dbb6fa5)`(bool && NewValue)` <a id="structFRHAPI__SettingTypeVersion_1a6e8b7222c222c0c2ccb709972dbb6fa5"></a>

Sets the value of AllowUpdate_Optional and also sets AllowUpdate_IsSet to true using move semantics.

#### `public inline void `[`ClearAllowUpdate`](#structFRHAPI__SettingTypeVersion_1a98769cdb1c9d46e61140d4629267ea9a)`()` <a id="structFRHAPI__SettingTypeVersion_1a98769cdb1c9d46e61140d4629267ea9a"></a>

Clears the value of AllowUpdate_Optional and sets AllowUpdate_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_AllowUpdate`](#structFRHAPI__SettingTypeVersion_1af8a1a97bb1d895910f9d79534ca5576f)`()` <a id="structFRHAPI__SettingTypeVersion_1af8a1a97bb1d895910f9d79534ca5576f"></a>

Returns the default value of AllowUpdate.

#### `public inline FORCEINLINE bool & `[`GetIsInternal`](#structFRHAPI__SettingTypeVersion_1a16dc24aa7a014227f75798507112eb00)`()` <a id="structFRHAPI__SettingTypeVersion_1a16dc24aa7a014227f75798507112eb00"></a>

Gets the value of IsInternal_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetIsInternal`](#structFRHAPI__SettingTypeVersion_1a86dff9e1c76dbc68d2ae0c701d4eb200)`() const` <a id="structFRHAPI__SettingTypeVersion_1a86dff9e1c76dbc68d2ae0c701d4eb200"></a>

Gets the value of IsInternal_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetIsInternal`](#structFRHAPI__SettingTypeVersion_1a31809b150a7dd3edaec0f02749df1581)`(const bool & DefaultValue) const` <a id="structFRHAPI__SettingTypeVersion_1a31809b150a7dd3edaec0f02749df1581"></a>

Gets the value of IsInternal_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetIsInternal`](#structFRHAPI__SettingTypeVersion_1a9d3a54d8d1830d944f128f76befe17d8)`(bool & OutValue) const` <a id="structFRHAPI__SettingTypeVersion_1a9d3a54d8d1830d944f128f76befe17d8"></a>

Fills OutValue with the value of IsInternal_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetIsInternalOrNull`](#structFRHAPI__SettingTypeVersion_1a9135572b562ab49f99556c602b02bb1a)`()` <a id="structFRHAPI__SettingTypeVersion_1a9135572b562ab49f99556c602b02bb1a"></a>

Returns a pointer to IsInternal_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetIsInternalOrNull`](#structFRHAPI__SettingTypeVersion_1ad35340291adf460402d4900ea734cd20)`() const` <a id="structFRHAPI__SettingTypeVersion_1ad35340291adf460402d4900ea734cd20"></a>

Returns a pointer to IsInternal_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetIsInternal`](#structFRHAPI__SettingTypeVersion_1a460eb891bda4e893c36d4910e017a83d)`(const bool & NewValue)` <a id="structFRHAPI__SettingTypeVersion_1a460eb891bda4e893c36d4910e017a83d"></a>

Sets the value of IsInternal_Optional and also sets IsInternal_IsSet to true.

#### `public inline FORCEINLINE void `[`SetIsInternal`](#structFRHAPI__SettingTypeVersion_1a6c745ea3df8a209a2262198ba9ed0889)`(bool && NewValue)` <a id="structFRHAPI__SettingTypeVersion_1a6c745ea3df8a209a2262198ba9ed0889"></a>

Sets the value of IsInternal_Optional and also sets IsInternal_IsSet to true using move semantics.

#### `public inline void `[`ClearIsInternal`](#structFRHAPI__SettingTypeVersion_1a2afb68686fccca3099dfded581101413)`()` <a id="structFRHAPI__SettingTypeVersion_1a2afb68686fccca3099dfded581101413"></a>

Clears the value of IsInternal_Optional and sets IsInternal_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_IsInternal`](#structFRHAPI__SettingTypeVersion_1ae75cab448cbae1e48f4166210b21dbf1)`()` <a id="structFRHAPI__SettingTypeVersion_1ae75cab448cbae1e48f4166210b21dbf1"></a>

Returns the default value of IsInternal.

#### `public inline FORCEINLINE void `[`SetIsInternalToNull`](#structFRHAPI__SettingTypeVersion_1a616d22af4848b7b98792ab7713e8b45b)`()` <a id="structFRHAPI__SettingTypeVersion_1a616d22af4848b7b98792ab7713e8b45b"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsIsInternalNull`](#structFRHAPI__SettingTypeVersion_1aa07ea4f92df41c70a6063e43bd771c9b)`() const` <a id="structFRHAPI__SettingTypeVersion_1aa07ea4f92df41c70a6063e43bd771c9b"></a>

Checks whether IsInternal_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetKeyRegex`](#structFRHAPI__SettingTypeVersion_1a09383e208d680412e93574b619002fd7)`()` <a id="structFRHAPI__SettingTypeVersion_1a09383e208d680412e93574b619002fd7"></a>

Gets the value of KeyRegex_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetKeyRegex`](#structFRHAPI__SettingTypeVersion_1aae1f1ab114633edf88176cc3268a6651)`() const` <a id="structFRHAPI__SettingTypeVersion_1aae1f1ab114633edf88176cc3268a6651"></a>

Gets the value of KeyRegex_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetKeyRegex`](#structFRHAPI__SettingTypeVersion_1a0de077e62c800f77971624818869e85c)`(const FString & DefaultValue) const` <a id="structFRHAPI__SettingTypeVersion_1a0de077e62c800f77971624818869e85c"></a>

Gets the value of KeyRegex_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetKeyRegex`](#structFRHAPI__SettingTypeVersion_1a5ab463669db161fee374a84f1a49d123)`(FString & OutValue) const` <a id="structFRHAPI__SettingTypeVersion_1a5ab463669db161fee374a84f1a49d123"></a>

Fills OutValue with the value of KeyRegex_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetKeyRegexOrNull`](#structFRHAPI__SettingTypeVersion_1ab1b0c11a0b12c3c64e60803df2afb85b)`()` <a id="structFRHAPI__SettingTypeVersion_1ab1b0c11a0b12c3c64e60803df2afb85b"></a>

Returns a pointer to KeyRegex_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetKeyRegexOrNull`](#structFRHAPI__SettingTypeVersion_1a7c8dac394574795c4fa94d62d56ac813)`() const` <a id="structFRHAPI__SettingTypeVersion_1a7c8dac394574795c4fa94d62d56ac813"></a>

Returns a pointer to KeyRegex_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetKeyRegex`](#structFRHAPI__SettingTypeVersion_1ab2e7dfe1fe662e5f3e1bedaddb8cea16)`(const FString & NewValue)` <a id="structFRHAPI__SettingTypeVersion_1ab2e7dfe1fe662e5f3e1bedaddb8cea16"></a>

Sets the value of KeyRegex_Optional and also sets KeyRegex_IsSet to true.

#### `public inline FORCEINLINE void `[`SetKeyRegex`](#structFRHAPI__SettingTypeVersion_1a656638b6d00c5ad44707a2c42145c749)`(FString && NewValue)` <a id="structFRHAPI__SettingTypeVersion_1a656638b6d00c5ad44707a2c42145c749"></a>

Sets the value of KeyRegex_Optional and also sets KeyRegex_IsSet to true using move semantics.

#### `public inline void `[`ClearKeyRegex`](#structFRHAPI__SettingTypeVersion_1a128d3490d334f968e82b0ab89318c5b3)`()` <a id="structFRHAPI__SettingTypeVersion_1a128d3490d334f968e82b0ab89318c5b3"></a>

Clears the value of KeyRegex_Optional and sets KeyRegex_IsSet to false.

#### `public inline FORCEINLINE FString `[`GetDefaultValue_KeyRegex`](#structFRHAPI__SettingTypeVersion_1ad325133cac7f290b161b8e42e34fba4e)`()` <a id="structFRHAPI__SettingTypeVersion_1ad325133cac7f290b161b8e42e34fba4e"></a>

Returns the default value of KeyRegex.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetValueJsonschema`](#structFRHAPI__SettingTypeVersion_1a4d62a6c536b0e455f4843bc861813d1d)`()` <a id="structFRHAPI__SettingTypeVersion_1a4d62a6c536b0e455f4843bc861813d1d"></a>

Gets the value of ValueJsonschema.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetValueJsonschema`](#structFRHAPI__SettingTypeVersion_1a7aacb2d992c38ccb934a7710fdc83f10)`() const` <a id="structFRHAPI__SettingTypeVersion_1a7aacb2d992c38ccb934a7710fdc83f10"></a>

Gets the value of ValueJsonschema.

#### `public inline FORCEINLINE void `[`SetValueJsonschema`](#structFRHAPI__SettingTypeVersion_1ad56ee87a0437ecb9b626fe87ca3577f7)`(const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & NewValue)` <a id="structFRHAPI__SettingTypeVersion_1ad56ee87a0437ecb9b626fe87ca3577f7"></a>

Sets the value of ValueJsonschema.

#### `public inline FORCEINLINE void `[`SetValueJsonschema`](#structFRHAPI__SettingTypeVersion_1a0770a3d17ebd143d17ee4c10f1ca7b66)`(TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > && NewValue)` <a id="structFRHAPI__SettingTypeVersion_1a0770a3d17ebd143d17ee4c10f1ca7b66"></a>

Sets the value of ValueJsonschema using move semantics.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SettingTypeVersion_1aaf9f65f377b281d67a9a2433a08b0bf1)`()` <a id="structFRHAPI__SettingTypeVersion_1aaf9f65f377b281d67a9a2433a08b0bf1"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SettingTypeVersion_1a2eb97c7eb11317da674998408178a32e)`() const` <a id="structFRHAPI__SettingTypeVersion_1a2eb97c7eb11317da674998408178a32e"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SettingTypeVersion_1a4cf30d58b5f4f23a2126781c5a631bc1)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SettingTypeVersion_1a4cf30d58b5f4f23a2126781c5a631bc1"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__SettingTypeVersion_1ac4577bac4a920cfc3272650f45388ad2)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SettingTypeVersion_1ac4577bac4a920cfc3272650f45388ad2"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SettingTypeVersion_1af420d6527e216c241523aaabb7cce66a)`()` <a id="structFRHAPI__SettingTypeVersion_1af420d6527e216c241523aaabb7cce66a"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SettingTypeVersion_1a273ea9e0fe1315232b7a63f13f41a9ef)`() const` <a id="structFRHAPI__SettingTypeVersion_1a273ea9e0fe1315232b7a63f13f41a9ef"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SettingTypeVersion_1aaab80027ade6ec45379aea1a23e93ee3)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__SettingTypeVersion_1aaab80027ade6ec45379aea1a23e93ee3"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SettingTypeVersion_1af7aa4ca080d757cbe60542d54127aad7)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__SettingTypeVersion_1af7aa4ca080d757cbe60542d54127aad7"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__SettingTypeVersion_1a87ffa31269dfdc6b9737d3f8653735bc)`()` <a id="structFRHAPI__SettingTypeVersion_1a87ffa31269dfdc6b9737d3f8653735bc"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

