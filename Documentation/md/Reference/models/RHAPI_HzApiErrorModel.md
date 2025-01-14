---
title: RHAPI_HzApiErrorModel
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_HzApiErrorModel`](#structFRHAPI__HzApiErrorModel) | 

## struct `FRHAPI_HzApiErrorModel` <a id="structFRHAPI__HzApiErrorModel"></a>

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
`public virtual void `[`WriteJson`](#structFRHAPI__HzApiErrorModel_1a53198a2bf1a7af829365f516b38dcfd7)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline bool & `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1ac768bdfa8c34cddb69876419a1f91eee)`()` | Gets the value of AuthSuccess_Optional, regardless of it having been set.
`public inline const bool & `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1aa9aa065a3411bf8c97625f1d06a7441c)`() const` | Gets the value of AuthSuccess_Optional, regardless of it having been set.
`public inline const bool & `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1aa7b146647f692f6b138f85cbf06505ca)`(const bool & DefaultValue) const` | Gets the value of AuthSuccess_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a86294d7f68007b62297b4ebdce7b387c)`(bool & OutValue) const` | Fills OutValue with the value of AuthSuccess_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__HzApiErrorModel_1a01de984046545d8220f44f99903d8e7f)`()` | Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__HzApiErrorModel_1ae73b1e6ba47481e3337712b874504f6b)`() const` | Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1aeb10d045ab0483d2c861ce8c004da323)`(const bool & NewValue)` | Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true.
`public inline void `[`SetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a62c8d08698ebae0949ca8de3fa3d0ed9)`(bool && NewValue)` | Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true using move semantics.
`public inline void `[`ClearAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a02132e1b9773e2f1ad0177f1f9bec798)`()` | Clears the value of AuthSuccess_Optional and sets AuthSuccess_IsSet to false.
`public inline bool `[`IsAuthSuccessSet`](#structFRHAPI__HzApiErrorModel_1aa4ec41b0761d17a76b17263c54828a14)`() const` | Checks whether AuthSuccess_Optional has been set.
`public inline bool `[`IsAuthSuccessDefaultValue`](#structFRHAPI__HzApiErrorModel_1a9dba3f3ce37138195c71b0569de4cfd6)`() const` | Returns true if AuthSuccess_Optional is set and matches the default value.
`public inline void `[`SetAuthSuccessToDefault`](#structFRHAPI__HzApiErrorModel_1a46994e9d2e4a2f35c4663a06b6c3ba35)`()` | Sets the value of AuthSuccess_Optional to its default and also sets AuthSuccess_IsSet to true.
`public inline FString & `[`GetErrorCode`](#structFRHAPI__HzApiErrorModel_1ad6b9fd32a6ccda1a3dcfc2242d84a7d6)`()` | Gets the value of ErrorCode.
`public inline const FString & `[`GetErrorCode`](#structFRHAPI__HzApiErrorModel_1a2dba0383b3ee7f3eaf0e96fe2443c449)`() const` | Gets the value of ErrorCode.
`public inline void `[`SetErrorCode`](#structFRHAPI__HzApiErrorModel_1a28916e46afed0e412f028ed0d3f6eb36)`(const FString & NewValue)` | Sets the value of ErrorCode.
`public inline void `[`SetErrorCode`](#structFRHAPI__HzApiErrorModel_1a9094c6b8a7d02dc0b2405ed955a9e075)`(FString && NewValue)` | Sets the value of ErrorCode using move semantics.
`public inline FString & `[`GetDesc`](#structFRHAPI__HzApiErrorModel_1a9ee34cad152fe2bacc946381c8d49820)`()` | Gets the value of Desc.
`public inline const FString & `[`GetDesc`](#structFRHAPI__HzApiErrorModel_1a18f31a1f11b00cfea0eb183fb7d987e6)`() const` | Gets the value of Desc.
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

#### `public virtual void `[`WriteJson`](#structFRHAPI__HzApiErrorModel_1a53198a2bf1a7af829365f516b38dcfd7)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__HzApiErrorModel_1a53198a2bf1a7af829365f516b38dcfd7"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline bool & `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1ac768bdfa8c34cddb69876419a1f91eee)`()` <a id="structFRHAPI__HzApiErrorModel_1ac768bdfa8c34cddb69876419a1f91eee"></a>

Gets the value of AuthSuccess_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1aa9aa065a3411bf8c97625f1d06a7441c)`() const` <a id="structFRHAPI__HzApiErrorModel_1aa9aa065a3411bf8c97625f1d06a7441c"></a>

Gets the value of AuthSuccess_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1aa7b146647f692f6b138f85cbf06505ca)`(const bool & DefaultValue) const` <a id="structFRHAPI__HzApiErrorModel_1aa7b146647f692f6b138f85cbf06505ca"></a>

Gets the value of AuthSuccess_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a86294d7f68007b62297b4ebdce7b387c)`(bool & OutValue) const` <a id="structFRHAPI__HzApiErrorModel_1a86294d7f68007b62297b4ebdce7b387c"></a>

Fills OutValue with the value of AuthSuccess_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__HzApiErrorModel_1a01de984046545d8220f44f99903d8e7f)`()` <a id="structFRHAPI__HzApiErrorModel_1a01de984046545d8220f44f99903d8e7f"></a>

Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__HzApiErrorModel_1ae73b1e6ba47481e3337712b874504f6b)`() const` <a id="structFRHAPI__HzApiErrorModel_1ae73b1e6ba47481e3337712b874504f6b"></a>

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

#### `public inline FString & `[`GetErrorCode`](#structFRHAPI__HzApiErrorModel_1ad6b9fd32a6ccda1a3dcfc2242d84a7d6)`()` <a id="structFRHAPI__HzApiErrorModel_1ad6b9fd32a6ccda1a3dcfc2242d84a7d6"></a>

Gets the value of ErrorCode.

#### `public inline const FString & `[`GetErrorCode`](#structFRHAPI__HzApiErrorModel_1a2dba0383b3ee7f3eaf0e96fe2443c449)`() const` <a id="structFRHAPI__HzApiErrorModel_1a2dba0383b3ee7f3eaf0e96fe2443c449"></a>

Gets the value of ErrorCode.

#### `public inline void `[`SetErrorCode`](#structFRHAPI__HzApiErrorModel_1a28916e46afed0e412f028ed0d3f6eb36)`(const FString & NewValue)` <a id="structFRHAPI__HzApiErrorModel_1a28916e46afed0e412f028ed0d3f6eb36"></a>

Sets the value of ErrorCode.

#### `public inline void `[`SetErrorCode`](#structFRHAPI__HzApiErrorModel_1a9094c6b8a7d02dc0b2405ed955a9e075)`(FString && NewValue)` <a id="structFRHAPI__HzApiErrorModel_1a9094c6b8a7d02dc0b2405ed955a9e075"></a>

Sets the value of ErrorCode using move semantics.

#### `public inline FString & `[`GetDesc`](#structFRHAPI__HzApiErrorModel_1a9ee34cad152fe2bacc946381c8d49820)`()` <a id="structFRHAPI__HzApiErrorModel_1a9ee34cad152fe2bacc946381c8d49820"></a>

Gets the value of Desc.

#### `public inline const FString & `[`GetDesc`](#structFRHAPI__HzApiErrorModel_1a18f31a1f11b00cfea0eb183fb7d987e6)`() const` <a id="structFRHAPI__HzApiErrorModel_1a18f31a1f11b00cfea0eb183fb7d987e6"></a>

Gets the value of Desc.

#### `public inline void `[`SetDesc`](#structFRHAPI__HzApiErrorModel_1ae459d740cce8090ea8848e56f42c0238)`(const FString & NewValue)` <a id="structFRHAPI__HzApiErrorModel_1ae459d740cce8090ea8848e56f42c0238"></a>

Sets the value of Desc.

#### `public inline void `[`SetDesc`](#structFRHAPI__HzApiErrorModel_1ac168956ae2561b559455c29aed860bc2)`(FString && NewValue)` <a id="structFRHAPI__HzApiErrorModel_1ac168956ae2561b559455c29aed860bc2"></a>

Sets the value of Desc using move semantics.

