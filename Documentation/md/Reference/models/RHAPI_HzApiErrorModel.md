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
`public inline FORCEINLINE bool & `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a98e225838a15f3b2dae68d505c4b574e)`()` | Gets the value of AuthSuccess_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1af91e7a433b7f8480f5744ff6a8bb2067)`() const` | Gets the value of AuthSuccess_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1aa3d10bc4fd8cff2eab9c058230746140)`(const bool & DefaultValue) const` | Gets the value of AuthSuccess_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1ada8dc0f876d2a02adf8a06c6efb72960)`(bool & OutValue) const` | Fills OutValue with the value of AuthSuccess_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__HzApiErrorModel_1a755821c37a8273c10d78cc191d1fae86)`()` | Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__HzApiErrorModel_1a1e861dcddc0ff006bbfc58ed3e04ff99)`() const` | Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a1b4d604f6c2cc5e4d5c6d02abdc2892a)`(const bool & NewValue)` | Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true.
`public inline FORCEINLINE void `[`SetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a84d2eb32372c878163987c2224828775)`(bool && NewValue)` | Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true using move semantics.
`public inline void `[`ClearAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a02132e1b9773e2f1ad0177f1f9bec798)`()` | Clears the value of AuthSuccess_Optional and sets AuthSuccess_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_AuthSuccess`](#structFRHAPI__HzApiErrorModel_1a703055a77b5cdcde176297f3a1d72489)`()` | Returns the default value of AuthSuccess.
`public inline FORCEINLINE FString & `[`GetErrorCode`](#structFRHAPI__HzApiErrorModel_1a44679250b8be783c257b3e7812747c0c)`()` | Gets the value of ErrorCode.
`public inline FORCEINLINE const FString & `[`GetErrorCode`](#structFRHAPI__HzApiErrorModel_1aa94a085fc903cee00d7d989fbc63a39f)`() const` | Gets the value of ErrorCode.
`public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__HzApiErrorModel_1a88e0fe7633e8d6bc72568fc50d8f869a)`(const FString & NewValue)` | Sets the value of ErrorCode.
`public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__HzApiErrorModel_1abe9656958b871d1cac0ff66f063f0ea2)`(FString && NewValue)` | Sets the value of ErrorCode using move semantics.
`public inline FORCEINLINE FString & `[`GetDesc`](#structFRHAPI__HzApiErrorModel_1ab3bf5576def459917fe50779a95f4472)`()` | Gets the value of Desc.
`public inline FORCEINLINE const FString & `[`GetDesc`](#structFRHAPI__HzApiErrorModel_1a9edf914bfcf9057b9c7e6b6a90da34ba)`() const` | Gets the value of Desc.
`public inline FORCEINLINE void `[`SetDesc`](#structFRHAPI__HzApiErrorModel_1a0eae81693d2f698c6d8f873c373b6b36)`(const FString & NewValue)` | Sets the value of Desc.
`public inline FORCEINLINE void `[`SetDesc`](#structFRHAPI__HzApiErrorModel_1ab243a67aab02717255b3d66bb8ca00d9)`(FString && NewValue)` | Sets the value of Desc using move semantics.

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

#### `public inline FORCEINLINE bool & `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a98e225838a15f3b2dae68d505c4b574e)`()` <a id="structFRHAPI__HzApiErrorModel_1a98e225838a15f3b2dae68d505c4b574e"></a>

Gets the value of AuthSuccess_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1af91e7a433b7f8480f5744ff6a8bb2067)`() const` <a id="structFRHAPI__HzApiErrorModel_1af91e7a433b7f8480f5744ff6a8bb2067"></a>

Gets the value of AuthSuccess_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1aa3d10bc4fd8cff2eab9c058230746140)`(const bool & DefaultValue) const` <a id="structFRHAPI__HzApiErrorModel_1aa3d10bc4fd8cff2eab9c058230746140"></a>

Gets the value of AuthSuccess_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1ada8dc0f876d2a02adf8a06c6efb72960)`(bool & OutValue) const` <a id="structFRHAPI__HzApiErrorModel_1ada8dc0f876d2a02adf8a06c6efb72960"></a>

Fills OutValue with the value of AuthSuccess_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__HzApiErrorModel_1a755821c37a8273c10d78cc191d1fae86)`()` <a id="structFRHAPI__HzApiErrorModel_1a755821c37a8273c10d78cc191d1fae86"></a>

Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__HzApiErrorModel_1a1e861dcddc0ff006bbfc58ed3e04ff99)`() const` <a id="structFRHAPI__HzApiErrorModel_1a1e861dcddc0ff006bbfc58ed3e04ff99"></a>

Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a1b4d604f6c2cc5e4d5c6d02abdc2892a)`(const bool & NewValue)` <a id="structFRHAPI__HzApiErrorModel_1a1b4d604f6c2cc5e4d5c6d02abdc2892a"></a>

Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a84d2eb32372c878163987c2224828775)`(bool && NewValue)` <a id="structFRHAPI__HzApiErrorModel_1a84d2eb32372c878163987c2224828775"></a>

Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true using move semantics.

#### `public inline void `[`ClearAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a02132e1b9773e2f1ad0177f1f9bec798)`()` <a id="structFRHAPI__HzApiErrorModel_1a02132e1b9773e2f1ad0177f1f9bec798"></a>

Clears the value of AuthSuccess_Optional and sets AuthSuccess_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_AuthSuccess`](#structFRHAPI__HzApiErrorModel_1a703055a77b5cdcde176297f3a1d72489)`()` <a id="structFRHAPI__HzApiErrorModel_1a703055a77b5cdcde176297f3a1d72489"></a>

Returns the default value of AuthSuccess.

#### `public inline FORCEINLINE FString & `[`GetErrorCode`](#structFRHAPI__HzApiErrorModel_1a44679250b8be783c257b3e7812747c0c)`()` <a id="structFRHAPI__HzApiErrorModel_1a44679250b8be783c257b3e7812747c0c"></a>

Gets the value of ErrorCode.

#### `public inline FORCEINLINE const FString & `[`GetErrorCode`](#structFRHAPI__HzApiErrorModel_1aa94a085fc903cee00d7d989fbc63a39f)`() const` <a id="structFRHAPI__HzApiErrorModel_1aa94a085fc903cee00d7d989fbc63a39f"></a>

Gets the value of ErrorCode.

#### `public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__HzApiErrorModel_1a88e0fe7633e8d6bc72568fc50d8f869a)`(const FString & NewValue)` <a id="structFRHAPI__HzApiErrorModel_1a88e0fe7633e8d6bc72568fc50d8f869a"></a>

Sets the value of ErrorCode.

#### `public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__HzApiErrorModel_1abe9656958b871d1cac0ff66f063f0ea2)`(FString && NewValue)` <a id="structFRHAPI__HzApiErrorModel_1abe9656958b871d1cac0ff66f063f0ea2"></a>

Sets the value of ErrorCode using move semantics.

#### `public inline FORCEINLINE FString & `[`GetDesc`](#structFRHAPI__HzApiErrorModel_1ab3bf5576def459917fe50779a95f4472)`()` <a id="structFRHAPI__HzApiErrorModel_1ab3bf5576def459917fe50779a95f4472"></a>

Gets the value of Desc.

#### `public inline FORCEINLINE const FString & `[`GetDesc`](#structFRHAPI__HzApiErrorModel_1a9edf914bfcf9057b9c7e6b6a90da34ba)`() const` <a id="structFRHAPI__HzApiErrorModel_1a9edf914bfcf9057b9c7e6b6a90da34ba"></a>

Gets the value of Desc.

#### `public inline FORCEINLINE void `[`SetDesc`](#structFRHAPI__HzApiErrorModel_1a0eae81693d2f698c6d8f873c373b6b36)`(const FString & NewValue)` <a id="structFRHAPI__HzApiErrorModel_1a0eae81693d2f698c6d8f873c373b6b36"></a>

Sets the value of Desc.

#### `public inline FORCEINLINE void `[`SetDesc`](#structFRHAPI__HzApiErrorModel_1ab243a67aab02717255b3d66bb8ca00d9)`(FString && NewValue)` <a id="structFRHAPI__HzApiErrorModel_1ab243a67aab02717255b3d66bb8ca00d9"></a>

Sets the value of Desc using move semantics.

