---
title: RHAPI_SettingData
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SettingData`](#structFRHAPI__SettingData) | Setting version/value document from a specific setting type/key for a player.

## struct `FRHAPI_SettingData` <a id="structFRHAPI__SettingData"></a>

```
struct FRHAPI_SettingData
  : public FRHAPI_Model
```

Setting version/value document from a specific setting type/key for a player.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`V`](#structFRHAPI__SettingData_1a2512594c15d94a1fb5d9f3265fe2959b) | Version of the Setting Type schema that was used to validate the value document.
`public `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` `[`Value`](#structFRHAPI__SettingData_1a6c2d9e18c1f6895155bcf0313ffc5d94) | Setting Value document.
`public bool `[`Value_IsNull`](#structFRHAPI__SettingData_1a15f523906b538bb4dd436a0993fbfb86) | true if Value has been explicitly set to null
`public FString `[`Etag_Optional`](#structFRHAPI__SettingData_1af82281651a9ddc4398975f45cff44f9f) | 
`public bool `[`Etag_IsSet`](#structFRHAPI__SettingData_1a5795139476325e4ef5f873805804d276) | true if Etag_Optional has been set to a value
`public bool `[`Etag_IsNull`](#structFRHAPI__SettingData_1a5d15612b64b7b909d3f9d06f0d0958fa) | true if Etag_Optional has been explicitly set to null
`public FDateTime `[`LastModified_Optional`](#structFRHAPI__SettingData_1aa2f13ab92a05e6b200d6f294a1cd5604) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`LastModified_IsSet`](#structFRHAPI__SettingData_1a0e2a721fdc358ca6ac5c250c2c09159d) | true if LastModified_Optional has been set to a value
`public bool `[`LastModified_IsNull`](#structFRHAPI__SettingData_1af6ef8e0a01bb9854d36240a6fee4e0f3) | true if LastModified_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__SettingData_1a451b18556c313331a9fdfae19f669f48)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SettingData_1a1b7bfed54ce9270255fbb46255d7c5b2)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetV`](#structFRHAPI__SettingData_1a540c85e652ecbfbd2641e8500c27b66a)`()` | Gets the value of V.
`public inline const int32 & `[`GetV`](#structFRHAPI__SettingData_1abebe2f1a931f0bf0a8b90e57c4a59845)`() const` | Gets the value of V.
`public inline void `[`SetV`](#structFRHAPI__SettingData_1a25a11ae202e4d86e865063d20c39cdc7)`(const int32 & NewValue)` | Sets the value of V.
`public inline void `[`SetV`](#structFRHAPI__SettingData_1ae470149875008c4ee6bd9a4ee47822aa)`(int32 && NewValue)` | Sets the value of V using move semantics.
`public inline bool `[`IsVDefaultValue`](#structFRHAPI__SettingData_1afac8ce0d0cac1f2a2880f9378d959d14)`() const` | Returns true if V matches the default value.
`public inline void `[`SetVToDefault`](#structFRHAPI__SettingData_1a96191983827c14b416c2bcd6b2cc660e)`()` | Sets the value of V to its default
`public inline `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SettingData_1aad140fab11a097a469db39728f50c2d0)`()` | Gets the value of Value.
`public inline const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SettingData_1a47d2ca1fdd7a840b69434baca62f972f)`() const` | Gets the value of Value.
`public inline void `[`SetValue`](#structFRHAPI__SettingData_1af8e69c18963b052c7387eaa4d301451e)`(const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & NewValue)` | Sets the value of Value.
`public inline void `[`SetValue`](#structFRHAPI__SettingData_1a7e44672c04f8bfef29258ea4fca0d8cb)`(`[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` && NewValue)` | Sets the value of Value using move semantics.
`public inline void `[`SetValueToNull`](#structFRHAPI__SettingData_1a501cbe0943435421c563cd8ffc200faa)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsValueNull`](#structFRHAPI__SettingData_1aa030381d1a1f052d397cb14cda8106c3)`() const` | Checks whether Value is set to null.
`public inline FString & `[`GetEtag`](#structFRHAPI__SettingData_1ac373c7b99881701189b929abd29ec126)`()` | Gets the value of Etag_Optional, regardless of it having been set.
`public inline const FString & `[`GetEtag`](#structFRHAPI__SettingData_1ac2a20b17bff66da2252f75d52a8b09ec)`() const` | Gets the value of Etag_Optional, regardless of it having been set.
`public inline const FString & `[`GetEtag`](#structFRHAPI__SettingData_1ac869caf1ccabc9e7b346695d67c1ab25)`(const FString & DefaultValue) const` | Gets the value of Etag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEtag`](#structFRHAPI__SettingData_1a665f65c4781b2b68648cc5e9d3f252c2)`(FString & OutValue) const` | Fills OutValue with the value of Etag_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetEtagOrNull`](#structFRHAPI__SettingData_1a83fa8d240dae0a2644fa585ecee919c0)`()` | Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetEtagOrNull`](#structFRHAPI__SettingData_1afafcb7d5cbeabda9bb8eaea9a450b031)`() const` | Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEtag`](#structFRHAPI__SettingData_1a40c46f48e5d4dad1df770779ffa40d2f)`(const FString & NewValue)` | Sets the value of Etag_Optional and also sets Etag_IsSet to true.
`public inline void `[`SetEtag`](#structFRHAPI__SettingData_1adc901eb5774c67c20647a53345e01059)`(FString && NewValue)` | Sets the value of Etag_Optional and also sets Etag_IsSet to true using move semantics.
`public inline void `[`ClearEtag`](#structFRHAPI__SettingData_1acf6fba7f6275365555f9967a7aa35c1b)`()` | Clears the value of Etag_Optional and sets Etag_IsSet to false.
`public inline bool `[`IsEtagSet`](#structFRHAPI__SettingData_1a4c659cdfcfb5833fd1466b7dacfa19b6)`() const` | Checks whether Etag_Optional has been set.
`public inline void `[`SetEtagToNull`](#structFRHAPI__SettingData_1a6a600703b3df66b7e6d0a3472255c1a8)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsEtagNull`](#structFRHAPI__SettingData_1afb972f4f496a0afc6852312ee9af785f)`() const` | Checks whether Etag_Optional is set to null.
`public inline FDateTime & `[`GetLastModified`](#structFRHAPI__SettingData_1ace7c551860fd1ef29aa7185afdc62896)`()` | Gets the value of LastModified_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastModified`](#structFRHAPI__SettingData_1a50a6c265bcf322f84fc50f1633a708a4)`() const` | Gets the value of LastModified_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastModified`](#structFRHAPI__SettingData_1acc0f8bfa4d15d3124aa4b637a906024e)`(const FDateTime & DefaultValue) const` | Gets the value of LastModified_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLastModified`](#structFRHAPI__SettingData_1a3bce965c6675cd41b7734be83ca6617c)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastModified_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetLastModifiedOrNull`](#structFRHAPI__SettingData_1ac780d793b82cabde57be831876642b43)`()` | Returns a pointer to LastModified_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetLastModifiedOrNull`](#structFRHAPI__SettingData_1a1aed4b803be78943f33c772eb87a8a35)`() const` | Returns a pointer to LastModified_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLastModified`](#structFRHAPI__SettingData_1ac486000e1dfdcf4d6e3a5b202f6221b5)`(const FDateTime & NewValue)` | Sets the value of LastModified_Optional and also sets LastModified_IsSet to true.
`public inline void `[`SetLastModified`](#structFRHAPI__SettingData_1a5c62f7947de051f351597ec7369a50a2)`(FDateTime && NewValue)` | Sets the value of LastModified_Optional and also sets LastModified_IsSet to true using move semantics.
`public inline void `[`ClearLastModified`](#structFRHAPI__SettingData_1a36af553f5c7ce48c9d87a5ba3e0cf4f1)`()` | Clears the value of LastModified_Optional and sets LastModified_IsSet to false.
`public inline bool `[`IsLastModifiedSet`](#structFRHAPI__SettingData_1a6d9d67818cc015ca2f37d24b7e8a8464)`() const` | Checks whether LastModified_Optional has been set.
`public inline void `[`SetLastModifiedToNull`](#structFRHAPI__SettingData_1a37f8081c3e90b434ecfb526a81b601f3)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsLastModifiedNull`](#structFRHAPI__SettingData_1ae9b412a46aaabd3881fee6f20afab159)`() const` | Checks whether LastModified_Optional is set to null.

### Members

#### `public int32 `[`V`](#structFRHAPI__SettingData_1a2512594c15d94a1fb5d9f3265fe2959b) <a id="structFRHAPI__SettingData_1a2512594c15d94a1fb5d9f3265fe2959b"></a>

Version of the Setting Type schema that was used to validate the value document.

#### `public `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` `[`Value`](#structFRHAPI__SettingData_1a6c2d9e18c1f6895155bcf0313ffc5d94) <a id="structFRHAPI__SettingData_1a6c2d9e18c1f6895155bcf0313ffc5d94"></a>

Setting Value document.

#### `public bool `[`Value_IsNull`](#structFRHAPI__SettingData_1a15f523906b538bb4dd436a0993fbfb86) <a id="structFRHAPI__SettingData_1a15f523906b538bb4dd436a0993fbfb86"></a>

true if Value has been explicitly set to null

#### `public FString `[`Etag_Optional`](#structFRHAPI__SettingData_1af82281651a9ddc4398975f45cff44f9f) <a id="structFRHAPI__SettingData_1af82281651a9ddc4398975f45cff44f9f"></a>

#### `public bool `[`Etag_IsSet`](#structFRHAPI__SettingData_1a5795139476325e4ef5f873805804d276) <a id="structFRHAPI__SettingData_1a5795139476325e4ef5f873805804d276"></a>

true if Etag_Optional has been set to a value

#### `public bool `[`Etag_IsNull`](#structFRHAPI__SettingData_1a5d15612b64b7b909d3f9d06f0d0958fa) <a id="structFRHAPI__SettingData_1a5d15612b64b7b909d3f9d06f0d0958fa"></a>

true if Etag_Optional has been explicitly set to null

#### `public FDateTime `[`LastModified_Optional`](#structFRHAPI__SettingData_1aa2f13ab92a05e6b200d6f294a1cd5604) <a id="structFRHAPI__SettingData_1aa2f13ab92a05e6b200d6f294a1cd5604"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`LastModified_IsSet`](#structFRHAPI__SettingData_1a0e2a721fdc358ca6ac5c250c2c09159d) <a id="structFRHAPI__SettingData_1a0e2a721fdc358ca6ac5c250c2c09159d"></a>

true if LastModified_Optional has been set to a value

#### `public bool `[`LastModified_IsNull`](#structFRHAPI__SettingData_1af6ef8e0a01bb9854d36240a6fee4e0f3) <a id="structFRHAPI__SettingData_1af6ef8e0a01bb9854d36240a6fee4e0f3"></a>

true if LastModified_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__SettingData_1a451b18556c313331a9fdfae19f669f48)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SettingData_1a451b18556c313331a9fdfae19f669f48"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SettingData_1a1b7bfed54ce9270255fbb46255d7c5b2)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__SettingData_1a1b7bfed54ce9270255fbb46255d7c5b2"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetV`](#structFRHAPI__SettingData_1a540c85e652ecbfbd2641e8500c27b66a)`()` <a id="structFRHAPI__SettingData_1a540c85e652ecbfbd2641e8500c27b66a"></a>

Gets the value of V.

#### `public inline const int32 & `[`GetV`](#structFRHAPI__SettingData_1abebe2f1a931f0bf0a8b90e57c4a59845)`() const` <a id="structFRHAPI__SettingData_1abebe2f1a931f0bf0a8b90e57c4a59845"></a>

Gets the value of V.

#### `public inline void `[`SetV`](#structFRHAPI__SettingData_1a25a11ae202e4d86e865063d20c39cdc7)`(const int32 & NewValue)` <a id="structFRHAPI__SettingData_1a25a11ae202e4d86e865063d20c39cdc7"></a>

Sets the value of V.

#### `public inline void `[`SetV`](#structFRHAPI__SettingData_1ae470149875008c4ee6bd9a4ee47822aa)`(int32 && NewValue)` <a id="structFRHAPI__SettingData_1ae470149875008c4ee6bd9a4ee47822aa"></a>

Sets the value of V using move semantics.

#### `public inline bool `[`IsVDefaultValue`](#structFRHAPI__SettingData_1afac8ce0d0cac1f2a2880f9378d959d14)`() const` <a id="structFRHAPI__SettingData_1afac8ce0d0cac1f2a2880f9378d959d14"></a>

Returns true if V matches the default value.

#### `public inline void `[`SetVToDefault`](#structFRHAPI__SettingData_1a96191983827c14b416c2bcd6b2cc660e)`()` <a id="structFRHAPI__SettingData_1a96191983827c14b416c2bcd6b2cc660e"></a>

Sets the value of V to its default

#### `public inline `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SettingData_1aad140fab11a097a469db39728f50c2d0)`()` <a id="structFRHAPI__SettingData_1aad140fab11a097a469db39728f50c2d0"></a>

Gets the value of Value.

#### `public inline const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SettingData_1a47d2ca1fdd7a840b69434baca62f972f)`() const` <a id="structFRHAPI__SettingData_1a47d2ca1fdd7a840b69434baca62f972f"></a>

Gets the value of Value.

#### `public inline void `[`SetValue`](#structFRHAPI__SettingData_1af8e69c18963b052c7387eaa4d301451e)`(const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & NewValue)` <a id="structFRHAPI__SettingData_1af8e69c18963b052c7387eaa4d301451e"></a>

Sets the value of Value.

#### `public inline void `[`SetValue`](#structFRHAPI__SettingData_1a7e44672c04f8bfef29258ea4fca0d8cb)`(`[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` && NewValue)` <a id="structFRHAPI__SettingData_1a7e44672c04f8bfef29258ea4fca0d8cb"></a>

Sets the value of Value using move semantics.

#### `public inline void `[`SetValueToNull`](#structFRHAPI__SettingData_1a501cbe0943435421c563cd8ffc200faa)`()` <a id="structFRHAPI__SettingData_1a501cbe0943435421c563cd8ffc200faa"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsValueNull`](#structFRHAPI__SettingData_1aa030381d1a1f052d397cb14cda8106c3)`() const` <a id="structFRHAPI__SettingData_1aa030381d1a1f052d397cb14cda8106c3"></a>

Checks whether Value is set to null.

#### `public inline FString & `[`GetEtag`](#structFRHAPI__SettingData_1ac373c7b99881701189b929abd29ec126)`()` <a id="structFRHAPI__SettingData_1ac373c7b99881701189b929abd29ec126"></a>

Gets the value of Etag_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetEtag`](#structFRHAPI__SettingData_1ac2a20b17bff66da2252f75d52a8b09ec)`() const` <a id="structFRHAPI__SettingData_1ac2a20b17bff66da2252f75d52a8b09ec"></a>

Gets the value of Etag_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetEtag`](#structFRHAPI__SettingData_1ac869caf1ccabc9e7b346695d67c1ab25)`(const FString & DefaultValue) const` <a id="structFRHAPI__SettingData_1ac869caf1ccabc9e7b346695d67c1ab25"></a>

Gets the value of Etag_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEtag`](#structFRHAPI__SettingData_1a665f65c4781b2b68648cc5e9d3f252c2)`(FString & OutValue) const` <a id="structFRHAPI__SettingData_1a665f65c4781b2b68648cc5e9d3f252c2"></a>

Fills OutValue with the value of Etag_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetEtagOrNull`](#structFRHAPI__SettingData_1a83fa8d240dae0a2644fa585ecee919c0)`()` <a id="structFRHAPI__SettingData_1a83fa8d240dae0a2644fa585ecee919c0"></a>

Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetEtagOrNull`](#structFRHAPI__SettingData_1afafcb7d5cbeabda9bb8eaea9a450b031)`() const` <a id="structFRHAPI__SettingData_1afafcb7d5cbeabda9bb8eaea9a450b031"></a>

Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEtag`](#structFRHAPI__SettingData_1a40c46f48e5d4dad1df770779ffa40d2f)`(const FString & NewValue)` <a id="structFRHAPI__SettingData_1a40c46f48e5d4dad1df770779ffa40d2f"></a>

Sets the value of Etag_Optional and also sets Etag_IsSet to true.

#### `public inline void `[`SetEtag`](#structFRHAPI__SettingData_1adc901eb5774c67c20647a53345e01059)`(FString && NewValue)` <a id="structFRHAPI__SettingData_1adc901eb5774c67c20647a53345e01059"></a>

Sets the value of Etag_Optional and also sets Etag_IsSet to true using move semantics.

#### `public inline void `[`ClearEtag`](#structFRHAPI__SettingData_1acf6fba7f6275365555f9967a7aa35c1b)`()` <a id="structFRHAPI__SettingData_1acf6fba7f6275365555f9967a7aa35c1b"></a>

Clears the value of Etag_Optional and sets Etag_IsSet to false.

#### `public inline bool `[`IsEtagSet`](#structFRHAPI__SettingData_1a4c659cdfcfb5833fd1466b7dacfa19b6)`() const` <a id="structFRHAPI__SettingData_1a4c659cdfcfb5833fd1466b7dacfa19b6"></a>

Checks whether Etag_Optional has been set.

#### `public inline void `[`SetEtagToNull`](#structFRHAPI__SettingData_1a6a600703b3df66b7e6d0a3472255c1a8)`()` <a id="structFRHAPI__SettingData_1a6a600703b3df66b7e6d0a3472255c1a8"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsEtagNull`](#structFRHAPI__SettingData_1afb972f4f496a0afc6852312ee9af785f)`() const` <a id="structFRHAPI__SettingData_1afb972f4f496a0afc6852312ee9af785f"></a>

Checks whether Etag_Optional is set to null.

#### `public inline FDateTime & `[`GetLastModified`](#structFRHAPI__SettingData_1ace7c551860fd1ef29aa7185afdc62896)`()` <a id="structFRHAPI__SettingData_1ace7c551860fd1ef29aa7185afdc62896"></a>

Gets the value of LastModified_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLastModified`](#structFRHAPI__SettingData_1a50a6c265bcf322f84fc50f1633a708a4)`() const` <a id="structFRHAPI__SettingData_1a50a6c265bcf322f84fc50f1633a708a4"></a>

Gets the value of LastModified_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLastModified`](#structFRHAPI__SettingData_1acc0f8bfa4d15d3124aa4b637a906024e)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__SettingData_1acc0f8bfa4d15d3124aa4b637a906024e"></a>

Gets the value of LastModified_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLastModified`](#structFRHAPI__SettingData_1a3bce965c6675cd41b7734be83ca6617c)`(FDateTime & OutValue) const` <a id="structFRHAPI__SettingData_1a3bce965c6675cd41b7734be83ca6617c"></a>

Fills OutValue with the value of LastModified_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetLastModifiedOrNull`](#structFRHAPI__SettingData_1ac780d793b82cabde57be831876642b43)`()` <a id="structFRHAPI__SettingData_1ac780d793b82cabde57be831876642b43"></a>

Returns a pointer to LastModified_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetLastModifiedOrNull`](#structFRHAPI__SettingData_1a1aed4b803be78943f33c772eb87a8a35)`() const` <a id="structFRHAPI__SettingData_1a1aed4b803be78943f33c772eb87a8a35"></a>

Returns a pointer to LastModified_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLastModified`](#structFRHAPI__SettingData_1ac486000e1dfdcf4d6e3a5b202f6221b5)`(const FDateTime & NewValue)` <a id="structFRHAPI__SettingData_1ac486000e1dfdcf4d6e3a5b202f6221b5"></a>

Sets the value of LastModified_Optional and also sets LastModified_IsSet to true.

#### `public inline void `[`SetLastModified`](#structFRHAPI__SettingData_1a5c62f7947de051f351597ec7369a50a2)`(FDateTime && NewValue)` <a id="structFRHAPI__SettingData_1a5c62f7947de051f351597ec7369a50a2"></a>

Sets the value of LastModified_Optional and also sets LastModified_IsSet to true using move semantics.

#### `public inline void `[`ClearLastModified`](#structFRHAPI__SettingData_1a36af553f5c7ce48c9d87a5ba3e0cf4f1)`()` <a id="structFRHAPI__SettingData_1a36af553f5c7ce48c9d87a5ba3e0cf4f1"></a>

Clears the value of LastModified_Optional and sets LastModified_IsSet to false.

#### `public inline bool `[`IsLastModifiedSet`](#structFRHAPI__SettingData_1a6d9d67818cc015ca2f37d24b7e8a8464)`() const` <a id="structFRHAPI__SettingData_1a6d9d67818cc015ca2f37d24b7e8a8464"></a>

Checks whether LastModified_Optional has been set.

#### `public inline void `[`SetLastModifiedToNull`](#structFRHAPI__SettingData_1a37f8081c3e90b434ecfb526a81b601f3)`()` <a id="structFRHAPI__SettingData_1a37f8081c3e90b434ecfb526a81b601f3"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsLastModifiedNull`](#structFRHAPI__SettingData_1ae9b412a46aaabd3881fee6f20afab159)`() const` <a id="structFRHAPI__SettingData_1ae9b412a46aaabd3881fee6f20afab159"></a>

Checks whether LastModified_Optional is set to null.

