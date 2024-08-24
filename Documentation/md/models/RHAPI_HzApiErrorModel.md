# group `RHAPI_HzApiErrorModel` <a id="group__RHAPI__HzApiErrorModel"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_HzApiErrorModel`](#structFRHAPI__HzApiErrorModel) | 

---
title: FRHAPI_HzApiErrorModel
---

```
struct FRHAPI_HzApiErrorModel
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public bool `[`AuthSuccess_Optional`](#structFRHAPI__HzApiErrorModel_1a9a5418359a128a7d076782f4a2363ab6) | 
`public bool `[`AuthSuccess_IsSet`](#structFRHAPI__HzApiErrorModel_1a8743e89eaeebc32c0e0a3c15286e4bd9) | true if AuthSuccess_Optional has been set to a value
`public FString `[`ErrorCode`](#structFRHAPI__HzApiErrorModel_1a3e69f02ecb9d38383cb749fa5b23ff87) | 
`public FString `[`Desc`](#structFRHAPI__HzApiErrorModel_1a9c18c43b5bafba6c2ac066314de64c6e) | 
`public virtual bool `[`FromJson`](#structFRHAPI__HzApiErrorModel_1ac4ca27dad7eb8d62b67f79890072580e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__HzApiErrorModel_1adbb55cd65f6151c576f419735816b2a1)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline bool & `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a0d4c66b9ee3833401f1dfa7d182d6321)`()` | Gets the value of AuthSuccess_Optional, regardless of it having been set.
`public inline const bool & `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a2e10bfd42982da16deac8330f73923c3)`() const` | Gets the value of AuthSuccess_Optional, regardless of it having been set.
`public inline const bool & `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1af5a3889d452ff7ac240a1be4d5671853)`(const bool & DefaultValue) const` | Gets the value of AuthSuccess_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a86294d7f68007b62297b4ebdce7b387c)`(bool & OutValue) const` | Fills OutValue with the value of AuthSuccess_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__HzApiErrorModel_1a679ac0e5c83ba18fc7797d8a7fdf6585)`()` | Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__HzApiErrorModel_1aa7c5416fce5423f21e85331eb7cc17df)`() const` | Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1aeb10d045ab0483d2c861ce8c004da323)`(const bool & NewValue)` | Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true.
`public inline void `[`SetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a62c8d08698ebae0949ca8de3fa3d0ed9)`(bool && NewValue)` | Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true using move semantics.
`public inline void `[`ClearAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a02132e1b9773e2f1ad0177f1f9bec798)`()` | Clears the value of AuthSuccess_Optional and sets AuthSuccess_IsSet to false.
`public inline bool `[`IsAuthSuccessSet`](#structFRHAPI__HzApiErrorModel_1aa4ec41b0761d17a76b17263c54828a14)`() const` | Checks whether AuthSuccess_Optional has been set.
`public inline bool `[`IsAuthSuccessDefaultValue`](#structFRHAPI__HzApiErrorModel_1a9dba3f3ce37138195c71b0569de4cfd6)`() const` | Returns true if AuthSuccess_Optional is set and matches the default value.
`public inline void `[`SetAuthSuccessToDefault`](#structFRHAPI__HzApiErrorModel_1a46994e9d2e4a2f35c4663a06b6c3ba35)`()` | Sets the value of AuthSuccess_Optional to its default and also sets AuthSuccess_IsSet to true.
`public inline FString & `[`GetErrorCode`](#structFRHAPI__HzApiErrorModel_1ad0a304e4b2f1f60f2f62319237856ac8)`()` | Gets the value of ErrorCode.
`public inline const FString & `[`GetErrorCode`](#structFRHAPI__HzApiErrorModel_1a755d0d8b52c5f8ad55313b5bf810f62e)`() const` | Gets the value of ErrorCode.
`public inline void `[`SetErrorCode`](#structFRHAPI__HzApiErrorModel_1a28916e46afed0e412f028ed0d3f6eb36)`(const FString & NewValue)` | Sets the value of ErrorCode.
`public inline void `[`SetErrorCode`](#structFRHAPI__HzApiErrorModel_1a9094c6b8a7d02dc0b2405ed955a9e075)`(FString && NewValue)` | Sets the value of ErrorCode using move semantics.
`public inline FString & `[`GetDesc`](#structFRHAPI__HzApiErrorModel_1a496a4192b0576bc7002e9f125ce2f749)`()` | Gets the value of Desc.
`public inline const FString & `[`GetDesc`](#structFRHAPI__HzApiErrorModel_1a65965171338907af99cdae71df426171)`() const` | Gets the value of Desc.
`public inline void `[`SetDesc`](#structFRHAPI__HzApiErrorModel_1ae459d740cce8090ea8848e56f42c0238)`(const FString & NewValue)` | Sets the value of Desc.
`public inline void `[`SetDesc`](#structFRHAPI__HzApiErrorModel_1ac168956ae2561b559455c29aed860bc2)`(FString && NewValue)` | Sets the value of Desc using move semantics.

### Members

#### `public bool `[`AuthSuccess_Optional`](#structFRHAPI__HzApiErrorModel_1a9a5418359a128a7d076782f4a2363ab6) <a id="structFRHAPI__HzApiErrorModel_1a9a5418359a128a7d076782f4a2363ab6"></a>

#### `public bool `[`AuthSuccess_IsSet`](#structFRHAPI__HzApiErrorModel_1a8743e89eaeebc32c0e0a3c15286e4bd9) <a id="structFRHAPI__HzApiErrorModel_1a8743e89eaeebc32c0e0a3c15286e4bd9"></a>

true if AuthSuccess_Optional has been set to a value

#### `public FString `[`ErrorCode`](#structFRHAPI__HzApiErrorModel_1a3e69f02ecb9d38383cb749fa5b23ff87) <a id="structFRHAPI__HzApiErrorModel_1a3e69f02ecb9d38383cb749fa5b23ff87"></a>

#### `public FString `[`Desc`](#structFRHAPI__HzApiErrorModel_1a9c18c43b5bafba6c2ac066314de64c6e) <a id="structFRHAPI__HzApiErrorModel_1a9c18c43b5bafba6c2ac066314de64c6e"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__HzApiErrorModel_1ac4ca27dad7eb8d62b67f79890072580e)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__HzApiErrorModel_1ac4ca27dad7eb8d62b67f79890072580e"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__HzApiErrorModel_1adbb55cd65f6151c576f419735816b2a1)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__HzApiErrorModel_1adbb55cd65f6151c576f419735816b2a1"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline bool & `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a0d4c66b9ee3833401f1dfa7d182d6321)`()` <a id="structFRHAPI__HzApiErrorModel_1a0d4c66b9ee3833401f1dfa7d182d6321"></a>

Gets the value of AuthSuccess_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a2e10bfd42982da16deac8330f73923c3)`() const` <a id="structFRHAPI__HzApiErrorModel_1a2e10bfd42982da16deac8330f73923c3"></a>

Gets the value of AuthSuccess_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1af5a3889d452ff7ac240a1be4d5671853)`(const bool & DefaultValue) const` <a id="structFRHAPI__HzApiErrorModel_1af5a3889d452ff7ac240a1be4d5671853"></a>

Gets the value of AuthSuccess_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a86294d7f68007b62297b4ebdce7b387c)`(bool & OutValue) const` <a id="structFRHAPI__HzApiErrorModel_1a86294d7f68007b62297b4ebdce7b387c"></a>

Fills OutValue with the value of AuthSuccess_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__HzApiErrorModel_1a679ac0e5c83ba18fc7797d8a7fdf6585)`()` <a id="structFRHAPI__HzApiErrorModel_1a679ac0e5c83ba18fc7797d8a7fdf6585"></a>

Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__HzApiErrorModel_1aa7c5416fce5423f21e85331eb7cc17df)`() const` <a id="structFRHAPI__HzApiErrorModel_1aa7c5416fce5423f21e85331eb7cc17df"></a>

Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1aeb10d045ab0483d2c861ce8c004da323)`(const bool & NewValue)` <a id="structFRHAPI__HzApiErrorModel_1aeb10d045ab0483d2c861ce8c004da323"></a>

Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true.

#### `public inline void `[`SetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a62c8d08698ebae0949ca8de3fa3d0ed9)`(bool && NewValue)` <a id="structFRHAPI__HzApiErrorModel_1a62c8d08698ebae0949ca8de3fa3d0ed9"></a>

Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true using move semantics.

#### `public inline void `[`ClearAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a02132e1b9773e2f1ad0177f1f9bec798)`()` <a id="structFRHAPI__HzApiErrorModel_1a02132e1b9773e2f1ad0177f1f9bec798"></a>

Clears the value of AuthSuccess_Optional and sets AuthSuccess_IsSet to false.

#### `public inline bool `[`IsAuthSuccessSet`](#structFRHAPI__HzApiErrorModel_1aa4ec41b0761d17a76b17263c54828a14)`() const` <a id="structFRHAPI__HzApiErrorModel_1aa4ec41b0761d17a76b17263c54828a14"></a>

Checks whether AuthSuccess_Optional has been set.

#### `public inline bool `[`IsAuthSuccessDefaultValue`](#structFRHAPI__HzApiErrorModel_1a9dba3f3ce37138195c71b0569de4cfd6)`() const` <a id="structFRHAPI__HzApiErrorModel_1a9dba3f3ce37138195c71b0569de4cfd6"></a>

Returns true if AuthSuccess_Optional is set and matches the default value.

#### `public inline void `[`SetAuthSuccessToDefault`](#structFRHAPI__HzApiErrorModel_1a46994e9d2e4a2f35c4663a06b6c3ba35)`()` <a id="structFRHAPI__HzApiErrorModel_1a46994e9d2e4a2f35c4663a06b6c3ba35"></a>

Sets the value of AuthSuccess_Optional to its default and also sets AuthSuccess_IsSet to true.

#### `public inline FString & `[`GetErrorCode`](#structFRHAPI__HzApiErrorModel_1ad0a304e4b2f1f60f2f62319237856ac8)`()` <a id="structFRHAPI__HzApiErrorModel_1ad0a304e4b2f1f60f2f62319237856ac8"></a>

Gets the value of ErrorCode.

#### `public inline const FString & `[`GetErrorCode`](#structFRHAPI__HzApiErrorModel_1a755d0d8b52c5f8ad55313b5bf810f62e)`() const` <a id="structFRHAPI__HzApiErrorModel_1a755d0d8b52c5f8ad55313b5bf810f62e"></a>

Gets the value of ErrorCode.

#### `public inline void `[`SetErrorCode`](#structFRHAPI__HzApiErrorModel_1a28916e46afed0e412f028ed0d3f6eb36)`(const FString & NewValue)` <a id="structFRHAPI__HzApiErrorModel_1a28916e46afed0e412f028ed0d3f6eb36"></a>

Sets the value of ErrorCode.

#### `public inline void `[`SetErrorCode`](#structFRHAPI__HzApiErrorModel_1a9094c6b8a7d02dc0b2405ed955a9e075)`(FString && NewValue)` <a id="structFRHAPI__HzApiErrorModel_1a9094c6b8a7d02dc0b2405ed955a9e075"></a>

Sets the value of ErrorCode using move semantics.

#### `public inline FString & `[`GetDesc`](#structFRHAPI__HzApiErrorModel_1a496a4192b0576bc7002e9f125ce2f749)`()` <a id="structFRHAPI__HzApiErrorModel_1a496a4192b0576bc7002e9f125ce2f749"></a>

Gets the value of Desc.

#### `public inline const FString & `[`GetDesc`](#structFRHAPI__HzApiErrorModel_1a65965171338907af99cdae71df426171)`() const` <a id="structFRHAPI__HzApiErrorModel_1a65965171338907af99cdae71df426171"></a>

Gets the value of Desc.

#### `public inline void `[`SetDesc`](#structFRHAPI__HzApiErrorModel_1ae459d740cce8090ea8848e56f42c0238)`(const FString & NewValue)` <a id="structFRHAPI__HzApiErrorModel_1ae459d740cce8090ea8848e56f42c0238"></a>

Sets the value of Desc.

#### `public inline void `[`SetDesc`](#structFRHAPI__HzApiErrorModel_1ac168956ae2561b559455c29aed860bc2)`(FString && NewValue)` <a id="structFRHAPI__HzApiErrorModel_1ac168956ae2561b559455c29aed860bc2"></a>

Sets the value of Desc using move semantics.

