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
`public virtual void `[`WriteJson`](#structFRHAPI__SettingData_1a637b3b15012f3260998f97ec2c6d72ec)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE int32 & `[`GetV`](#structFRHAPI__SettingData_1a6797460b5ff6b843a5a63ade640a26f5)`()` | Gets the value of V.
`public inline FORCEINLINE const int32 & `[`GetV`](#structFRHAPI__SettingData_1adad894b4169978df6476a942ca9bc1b8)`() const` | Gets the value of V.
`public inline FORCEINLINE void `[`SetV`](#structFRHAPI__SettingData_1ae6e61f8f5c69d2dec7668f843e700a63)`(const int32 & NewValue)` | Sets the value of V.
`public inline FORCEINLINE void `[`SetV`](#structFRHAPI__SettingData_1abb33f37938e91ed7e04d612892d2a4b3)`(int32 && NewValue)` | Sets the value of V using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_V`](#structFRHAPI__SettingData_1ab066c6e34bb307cd9bcbd37d6f96e1c6)`()` | Returns the default value of V.
`public inline FORCEINLINE `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SettingData_1a6586b6b33fad9a13c4bcecc7a879716e)`()` | Gets the value of Value.
`public inline FORCEINLINE const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SettingData_1adfa40fedad0a13f0a0aec8bebdbd1276)`() const` | Gets the value of Value.
`public inline FORCEINLINE void `[`SetValue`](#structFRHAPI__SettingData_1a72d2abdf754da9b64fb10adcfd918aa1)`(const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & NewValue)` | Sets the value of Value.
`public inline FORCEINLINE void `[`SetValue`](#structFRHAPI__SettingData_1ae515f8b0aab51b873523faf6f83c77dd)`(`[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` && NewValue)` | Sets the value of Value using move semantics.
`public inline FORCEINLINE void `[`SetValueToNull`](#structFRHAPI__SettingData_1abc309a1632e468ea46d8ad242bd3c307)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsValueNull`](#structFRHAPI__SettingData_1a71d67b6382bc9239862a86a9d7797d06)`() const` | Checks whether Value is set to null.
`public inline FORCEINLINE FString & `[`GetEtag`](#structFRHAPI__SettingData_1a2bfa8a32c83fe6bf6ea509ebf0776017)`()` | Gets the value of Etag_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetEtag`](#structFRHAPI__SettingData_1a677bb32a0881855e105e07e2bcc93ba0)`() const` | Gets the value of Etag_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetEtag`](#structFRHAPI__SettingData_1a34b6c918f784e4cc11e95fb9d9185036)`(const FString & DefaultValue) const` | Gets the value of Etag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEtag`](#structFRHAPI__SettingData_1a916e994af4566b446fc97f8764cafd02)`(FString & OutValue) const` | Fills OutValue with the value of Etag_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetEtagOrNull`](#structFRHAPI__SettingData_1af86a6feab8e2f0c953e306b2f2bb15da)`()` | Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetEtagOrNull`](#structFRHAPI__SettingData_1abb40d92846b1c957507ea04de7044307)`() const` | Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEtag`](#structFRHAPI__SettingData_1a5ec90fc611ce591422f43008c1fc1da3)`(const FString & NewValue)` | Sets the value of Etag_Optional and also sets Etag_IsSet to true.
`public inline FORCEINLINE void `[`SetEtag`](#structFRHAPI__SettingData_1ab4b1320f590ec5cf260f61d292ad781b)`(FString && NewValue)` | Sets the value of Etag_Optional and also sets Etag_IsSet to true using move semantics.
`public inline void `[`ClearEtag`](#structFRHAPI__SettingData_1acf6fba7f6275365555f9967a7aa35c1b)`()` | Clears the value of Etag_Optional and sets Etag_IsSet to false.
`public inline FORCEINLINE void `[`SetEtagToNull`](#structFRHAPI__SettingData_1a5db227aa64d69462030618622e9c091f)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsEtagNull`](#structFRHAPI__SettingData_1af1a9b18af5050c07dff0e6a4ed6efa1e)`() const` | Checks whether Etag_Optional is set to null.
`public inline FORCEINLINE FDateTime & `[`GetLastModified`](#structFRHAPI__SettingData_1ad7d4169d17eb4d688d03f2b4e4a633c7)`()` | Gets the value of LastModified_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLastModified`](#structFRHAPI__SettingData_1acffece8be1629aed857d5ce150b0c05e)`() const` | Gets the value of LastModified_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLastModified`](#structFRHAPI__SettingData_1a37d785c1bee343f695af2fb09197bc22)`(const FDateTime & DefaultValue) const` | Gets the value of LastModified_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLastModified`](#structFRHAPI__SettingData_1a62353063ae075de3abe1c5c6fcca676d)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastModified_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetLastModifiedOrNull`](#structFRHAPI__SettingData_1a032215e7df569d7a12b208f1b705b282)`()` | Returns a pointer to LastModified_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetLastModifiedOrNull`](#structFRHAPI__SettingData_1ac911007eb60f431c2781bacd9b5fa317)`() const` | Returns a pointer to LastModified_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLastModified`](#structFRHAPI__SettingData_1a9998800db075a167cc66fe288c5753e6)`(const FDateTime & NewValue)` | Sets the value of LastModified_Optional and also sets LastModified_IsSet to true.
`public inline FORCEINLINE void `[`SetLastModified`](#structFRHAPI__SettingData_1a5a47cfc030e2c93e22b5917a64fd7417)`(FDateTime && NewValue)` | Sets the value of LastModified_Optional and also sets LastModified_IsSet to true using move semantics.
`public inline void `[`ClearLastModified`](#structFRHAPI__SettingData_1a36af553f5c7ce48c9d87a5ba3e0cf4f1)`()` | Clears the value of LastModified_Optional and sets LastModified_IsSet to false.
`public inline FORCEINLINE void `[`SetLastModifiedToNull`](#structFRHAPI__SettingData_1a62c41061f6f9127b5bb9f3453273a9a4)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsLastModifiedNull`](#structFRHAPI__SettingData_1a9e3fb90b61e55211d0d92d0fc87e6075)`() const` | Checks whether LastModified_Optional is set to null.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__SettingData_1a637b3b15012f3260998f97ec2c6d72ec)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__SettingData_1a637b3b15012f3260998f97ec2c6d72ec"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE int32 & `[`GetV`](#structFRHAPI__SettingData_1a6797460b5ff6b843a5a63ade640a26f5)`()` <a id="structFRHAPI__SettingData_1a6797460b5ff6b843a5a63ade640a26f5"></a>

Gets the value of V.

#### `public inline FORCEINLINE const int32 & `[`GetV`](#structFRHAPI__SettingData_1adad894b4169978df6476a942ca9bc1b8)`() const` <a id="structFRHAPI__SettingData_1adad894b4169978df6476a942ca9bc1b8"></a>

Gets the value of V.

#### `public inline FORCEINLINE void `[`SetV`](#structFRHAPI__SettingData_1ae6e61f8f5c69d2dec7668f843e700a63)`(const int32 & NewValue)` <a id="structFRHAPI__SettingData_1ae6e61f8f5c69d2dec7668f843e700a63"></a>

Sets the value of V.

#### `public inline FORCEINLINE void `[`SetV`](#structFRHAPI__SettingData_1abb33f37938e91ed7e04d612892d2a4b3)`(int32 && NewValue)` <a id="structFRHAPI__SettingData_1abb33f37938e91ed7e04d612892d2a4b3"></a>

Sets the value of V using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_V`](#structFRHAPI__SettingData_1ab066c6e34bb307cd9bcbd37d6f96e1c6)`()` <a id="structFRHAPI__SettingData_1ab066c6e34bb307cd9bcbd37d6f96e1c6"></a>

Returns the default value of V.

#### `public inline FORCEINLINE `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SettingData_1a6586b6b33fad9a13c4bcecc7a879716e)`()` <a id="structFRHAPI__SettingData_1a6586b6b33fad9a13c4bcecc7a879716e"></a>

Gets the value of Value.

#### `public inline FORCEINLINE const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SettingData_1adfa40fedad0a13f0a0aec8bebdbd1276)`() const` <a id="structFRHAPI__SettingData_1adfa40fedad0a13f0a0aec8bebdbd1276"></a>

Gets the value of Value.

#### `public inline FORCEINLINE void `[`SetValue`](#structFRHAPI__SettingData_1a72d2abdf754da9b64fb10adcfd918aa1)`(const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & NewValue)` <a id="structFRHAPI__SettingData_1a72d2abdf754da9b64fb10adcfd918aa1"></a>

Sets the value of Value.

#### `public inline FORCEINLINE void `[`SetValue`](#structFRHAPI__SettingData_1ae515f8b0aab51b873523faf6f83c77dd)`(`[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` && NewValue)` <a id="structFRHAPI__SettingData_1ae515f8b0aab51b873523faf6f83c77dd"></a>

Sets the value of Value using move semantics.

#### `public inline FORCEINLINE void `[`SetValueToNull`](#structFRHAPI__SettingData_1abc309a1632e468ea46d8ad242bd3c307)`()` <a id="structFRHAPI__SettingData_1abc309a1632e468ea46d8ad242bd3c307"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsValueNull`](#structFRHAPI__SettingData_1a71d67b6382bc9239862a86a9d7797d06)`() const` <a id="structFRHAPI__SettingData_1a71d67b6382bc9239862a86a9d7797d06"></a>

Checks whether Value is set to null.

#### `public inline FORCEINLINE FString & `[`GetEtag`](#structFRHAPI__SettingData_1a2bfa8a32c83fe6bf6ea509ebf0776017)`()` <a id="structFRHAPI__SettingData_1a2bfa8a32c83fe6bf6ea509ebf0776017"></a>

Gets the value of Etag_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetEtag`](#structFRHAPI__SettingData_1a677bb32a0881855e105e07e2bcc93ba0)`() const` <a id="structFRHAPI__SettingData_1a677bb32a0881855e105e07e2bcc93ba0"></a>

Gets the value of Etag_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetEtag`](#structFRHAPI__SettingData_1a34b6c918f784e4cc11e95fb9d9185036)`(const FString & DefaultValue) const` <a id="structFRHAPI__SettingData_1a34b6c918f784e4cc11e95fb9d9185036"></a>

Gets the value of Etag_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEtag`](#structFRHAPI__SettingData_1a916e994af4566b446fc97f8764cafd02)`(FString & OutValue) const` <a id="structFRHAPI__SettingData_1a916e994af4566b446fc97f8764cafd02"></a>

Fills OutValue with the value of Etag_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetEtagOrNull`](#structFRHAPI__SettingData_1af86a6feab8e2f0c953e306b2f2bb15da)`()` <a id="structFRHAPI__SettingData_1af86a6feab8e2f0c953e306b2f2bb15da"></a>

Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetEtagOrNull`](#structFRHAPI__SettingData_1abb40d92846b1c957507ea04de7044307)`() const` <a id="structFRHAPI__SettingData_1abb40d92846b1c957507ea04de7044307"></a>

Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEtag`](#structFRHAPI__SettingData_1a5ec90fc611ce591422f43008c1fc1da3)`(const FString & NewValue)` <a id="structFRHAPI__SettingData_1a5ec90fc611ce591422f43008c1fc1da3"></a>

Sets the value of Etag_Optional and also sets Etag_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEtag`](#structFRHAPI__SettingData_1ab4b1320f590ec5cf260f61d292ad781b)`(FString && NewValue)` <a id="structFRHAPI__SettingData_1ab4b1320f590ec5cf260f61d292ad781b"></a>

Sets the value of Etag_Optional and also sets Etag_IsSet to true using move semantics.

#### `public inline void `[`ClearEtag`](#structFRHAPI__SettingData_1acf6fba7f6275365555f9967a7aa35c1b)`()` <a id="structFRHAPI__SettingData_1acf6fba7f6275365555f9967a7aa35c1b"></a>

Clears the value of Etag_Optional and sets Etag_IsSet to false.

#### `public inline FORCEINLINE void `[`SetEtagToNull`](#structFRHAPI__SettingData_1a5db227aa64d69462030618622e9c091f)`()` <a id="structFRHAPI__SettingData_1a5db227aa64d69462030618622e9c091f"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsEtagNull`](#structFRHAPI__SettingData_1af1a9b18af5050c07dff0e6a4ed6efa1e)`() const` <a id="structFRHAPI__SettingData_1af1a9b18af5050c07dff0e6a4ed6efa1e"></a>

Checks whether Etag_Optional is set to null.

#### `public inline FORCEINLINE FDateTime & `[`GetLastModified`](#structFRHAPI__SettingData_1ad7d4169d17eb4d688d03f2b4e4a633c7)`()` <a id="structFRHAPI__SettingData_1ad7d4169d17eb4d688d03f2b4e4a633c7"></a>

Gets the value of LastModified_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastModified`](#structFRHAPI__SettingData_1acffece8be1629aed857d5ce150b0c05e)`() const` <a id="structFRHAPI__SettingData_1acffece8be1629aed857d5ce150b0c05e"></a>

Gets the value of LastModified_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastModified`](#structFRHAPI__SettingData_1a37d785c1bee343f695af2fb09197bc22)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__SettingData_1a37d785c1bee343f695af2fb09197bc22"></a>

Gets the value of LastModified_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLastModified`](#structFRHAPI__SettingData_1a62353063ae075de3abe1c5c6fcca676d)`(FDateTime & OutValue) const` <a id="structFRHAPI__SettingData_1a62353063ae075de3abe1c5c6fcca676d"></a>

Fills OutValue with the value of LastModified_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetLastModifiedOrNull`](#structFRHAPI__SettingData_1a032215e7df569d7a12b208f1b705b282)`()` <a id="structFRHAPI__SettingData_1a032215e7df569d7a12b208f1b705b282"></a>

Returns a pointer to LastModified_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetLastModifiedOrNull`](#structFRHAPI__SettingData_1ac911007eb60f431c2781bacd9b5fa317)`() const` <a id="structFRHAPI__SettingData_1ac911007eb60f431c2781bacd9b5fa317"></a>

Returns a pointer to LastModified_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLastModified`](#structFRHAPI__SettingData_1a9998800db075a167cc66fe288c5753e6)`(const FDateTime & NewValue)` <a id="structFRHAPI__SettingData_1a9998800db075a167cc66fe288c5753e6"></a>

Sets the value of LastModified_Optional and also sets LastModified_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLastModified`](#structFRHAPI__SettingData_1a5a47cfc030e2c93e22b5917a64fd7417)`(FDateTime && NewValue)` <a id="structFRHAPI__SettingData_1a5a47cfc030e2c93e22b5917a64fd7417"></a>

Sets the value of LastModified_Optional and also sets LastModified_IsSet to true using move semantics.

#### `public inline void `[`ClearLastModified`](#structFRHAPI__SettingData_1a36af553f5c7ce48c9d87a5ba3e0cf4f1)`()` <a id="structFRHAPI__SettingData_1a36af553f5c7ce48c9d87a5ba3e0cf4f1"></a>

Clears the value of LastModified_Optional and sets LastModified_IsSet to false.

#### `public inline FORCEINLINE void `[`SetLastModifiedToNull`](#structFRHAPI__SettingData_1a62c41061f6f9127b5bb9f3453273a9a4)`()` <a id="structFRHAPI__SettingData_1a62c41061f6f9127b5bb9f3453273a9a4"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsLastModifiedNull`](#structFRHAPI__SettingData_1a9e3fb90b61e55211d0d92d0fc87e6075)`() const` <a id="structFRHAPI__SettingData_1a9e3fb90b61e55211d0d92d0fc87e6075"></a>

Checks whether LastModified_Optional is set to null.

