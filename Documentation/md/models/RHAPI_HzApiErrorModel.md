# RHAPI_HzApiErrorModel <a id="group__RHAPI__HzApiErrorModel"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_HzApiErrorModel`](#structFRHAPI__HzApiErrorModel) | 

## struct `FRHAPI_HzApiErrorModel` <a id="structFRHAPI__HzApiErrorModel"></a>

```
struct FRHAPI_HzApiErrorModel
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public bool `[`AuthSuccess_Optional`](#structFRHAPI__HzApiErrorModel_1a9a5418359a128a7d076782f4a2363ab6) | 
`public bool `[`AuthSuccess_IsSet`](#structFRHAPI__HzApiErrorModel_1a8743e89eaeebc32c0e0a3c15286e4bd9) | true if AuthSuccess_Optional has been set to a value
`public FString `[`ErrorCode`](#structFRHAPI__HzApiErrorModel_1a3e69f02ecb9d38383cb749fa5b23ff87) | 
`public FString `[`Desc`](#structFRHAPI__HzApiErrorModel_1a9c18c43b5bafba6c2ac066314de64c6e) | 
`public virtual bool `[`FromJson`](#structFRHAPI__HzApiErrorModel_1a44bc1857b178377cbb1d2c33a628e0d8)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__HzApiErrorModel_1ae3ff4b3417bad010cd00b4723df2b990)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline bool & `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a0d4c66b9ee3833401f1dfa7d182d6321)`()` | Gets the value of AuthSuccess_Optional, regardless of it having been set.
`public inline const bool & `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a2e10bfd42982da16deac8330f73923c3)`() const` | Gets the value of AuthSuccess_Optional, regardless of it having been set.
`public inline const bool & `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1af5a3889d452ff7ac240a1be4d5671853)`(const bool & DefaultValue) const` | Gets the value of AuthSuccess_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a86294d7f68007b62297b4ebdce7b387c)`(bool & OutValue) const` | Fills OutValue with the value of AuthSuccess_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__HzApiErrorModel_1a679ac0e5c83ba18fc7797d8a7fdf6585)`()` | Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__HzApiErrorModel_1aa7c5416fce5423f21e85331eb7cc17df)`() const` | Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a2cfd62235e5ce61e8e53f014152f5b08)`(bool NewValue)` | Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true.
`public inline void `[`ClearAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a02132e1b9773e2f1ad0177f1f9bec798)`()` | Clears the value of AuthSuccess_Optional and sets AuthSuccess_IsSet to false.
`public inline bool `[`IsAuthSuccessDefaultValue`](#structFRHAPI__HzApiErrorModel_1a9dba3f3ce37138195c71b0569de4cfd6)`() const` | Returns true if AuthSuccess_Optional is set and matches the default value.
`public inline void `[`SetAuthSuccessToDefault`](#structFRHAPI__HzApiErrorModel_1a46994e9d2e4a2f35c4663a06b6c3ba35)`()` | Sets the value of AuthSuccess_Optional to its default and also sets AuthSuccess_IsSet to true.
`public inline FString & `[`GetErrorCode`](#structFRHAPI__HzApiErrorModel_1ad0a304e4b2f1f60f2f62319237856ac8)`()` | Gets the value of ErrorCode.
`public inline const FString & `[`GetErrorCode`](#structFRHAPI__HzApiErrorModel_1a755d0d8b52c5f8ad55313b5bf810f62e)`() const` | Gets the value of ErrorCode.
`public inline void `[`SetErrorCode`](#structFRHAPI__HzApiErrorModel_1ac18374ef3ff865995112c28ed1b185b9)`(FString NewValue)` | Sets the value of ErrorCode.
`public inline FString & `[`GetDesc`](#structFRHAPI__HzApiErrorModel_1a496a4192b0576bc7002e9f125ce2f749)`()` | Gets the value of Desc.
`public inline const FString & `[`GetDesc`](#structFRHAPI__HzApiErrorModel_1a65965171338907af99cdae71df426171)`() const` | Gets the value of Desc.
`public inline void `[`SetDesc`](#structFRHAPI__HzApiErrorModel_1af32229f3c1dc37276045d5221e905d27)`(FString NewValue)` | Sets the value of Desc.

#### Members

#### `public bool `[`AuthSuccess_Optional`](#structFRHAPI__HzApiErrorModel_1a9a5418359a128a7d076782f4a2363ab6) <a id="structFRHAPI__HzApiErrorModel_1a9a5418359a128a7d076782f4a2363ab6"></a>

<br>
#### `public bool `[`AuthSuccess_IsSet`](#structFRHAPI__HzApiErrorModel_1a8743e89eaeebc32c0e0a3c15286e4bd9) <a id="structFRHAPI__HzApiErrorModel_1a8743e89eaeebc32c0e0a3c15286e4bd9"></a>

true if AuthSuccess_Optional has been set to a value

<br>
#### `public FString `[`ErrorCode`](#structFRHAPI__HzApiErrorModel_1a3e69f02ecb9d38383cb749fa5b23ff87) <a id="structFRHAPI__HzApiErrorModel_1a3e69f02ecb9d38383cb749fa5b23ff87"></a>

<br>
#### `public FString `[`Desc`](#structFRHAPI__HzApiErrorModel_1a9c18c43b5bafba6c2ac066314de64c6e) <a id="structFRHAPI__HzApiErrorModel_1a9c18c43b5bafba6c2ac066314de64c6e"></a>

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__HzApiErrorModel_1a44bc1857b178377cbb1d2c33a628e0d8)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__HzApiErrorModel_1a44bc1857b178377cbb1d2c33a628e0d8"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__HzApiErrorModel_1ae3ff4b3417bad010cd00b4723df2b990)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__HzApiErrorModel_1ae3ff4b3417bad010cd00b4723df2b990"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline bool & `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a0d4c66b9ee3833401f1dfa7d182d6321)`()` <a id="structFRHAPI__HzApiErrorModel_1a0d4c66b9ee3833401f1dfa7d182d6321"></a>

Gets the value of AuthSuccess_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a2e10bfd42982da16deac8330f73923c3)`() const` <a id="structFRHAPI__HzApiErrorModel_1a2e10bfd42982da16deac8330f73923c3"></a>

Gets the value of AuthSuccess_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1af5a3889d452ff7ac240a1be4d5671853)`(const bool & DefaultValue) const` <a id="structFRHAPI__HzApiErrorModel_1af5a3889d452ff7ac240a1be4d5671853"></a>

Gets the value of AuthSuccess_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a86294d7f68007b62297b4ebdce7b387c)`(bool & OutValue) const` <a id="structFRHAPI__HzApiErrorModel_1a86294d7f68007b62297b4ebdce7b387c"></a>

Fills OutValue with the value of AuthSuccess_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__HzApiErrorModel_1a679ac0e5c83ba18fc7797d8a7fdf6585)`()` <a id="structFRHAPI__HzApiErrorModel_1a679ac0e5c83ba18fc7797d8a7fdf6585"></a>

Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const bool * `[`GetAuthSuccessOrNull`](#structFRHAPI__HzApiErrorModel_1aa7c5416fce5423f21e85331eb7cc17df)`() const` <a id="structFRHAPI__HzApiErrorModel_1aa7c5416fce5423f21e85331eb7cc17df"></a>

Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a2cfd62235e5ce61e8e53f014152f5b08)`(bool NewValue)` <a id="structFRHAPI__HzApiErrorModel_1a2cfd62235e5ce61e8e53f014152f5b08"></a>

Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true.

<br>
#### `public inline void `[`ClearAuthSuccess`](#structFRHAPI__HzApiErrorModel_1a02132e1b9773e2f1ad0177f1f9bec798)`()` <a id="structFRHAPI__HzApiErrorModel_1a02132e1b9773e2f1ad0177f1f9bec798"></a>

Clears the value of AuthSuccess_Optional and sets AuthSuccess_IsSet to false.

<br>
#### `public inline bool `[`IsAuthSuccessDefaultValue`](#structFRHAPI__HzApiErrorModel_1a9dba3f3ce37138195c71b0569de4cfd6)`() const` <a id="structFRHAPI__HzApiErrorModel_1a9dba3f3ce37138195c71b0569de4cfd6"></a>

Returns true if AuthSuccess_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetAuthSuccessToDefault`](#structFRHAPI__HzApiErrorModel_1a46994e9d2e4a2f35c4663a06b6c3ba35)`()` <a id="structFRHAPI__HzApiErrorModel_1a46994e9d2e4a2f35c4663a06b6c3ba35"></a>

Sets the value of AuthSuccess_Optional to its default and also sets AuthSuccess_IsSet to true.

<br>
#### `public inline FString & `[`GetErrorCode`](#structFRHAPI__HzApiErrorModel_1ad0a304e4b2f1f60f2f62319237856ac8)`()` <a id="structFRHAPI__HzApiErrorModel_1ad0a304e4b2f1f60f2f62319237856ac8"></a>

Gets the value of ErrorCode.

<br>
#### `public inline const FString & `[`GetErrorCode`](#structFRHAPI__HzApiErrorModel_1a755d0d8b52c5f8ad55313b5bf810f62e)`() const` <a id="structFRHAPI__HzApiErrorModel_1a755d0d8b52c5f8ad55313b5bf810f62e"></a>

Gets the value of ErrorCode.

<br>
#### `public inline void `[`SetErrorCode`](#structFRHAPI__HzApiErrorModel_1ac18374ef3ff865995112c28ed1b185b9)`(FString NewValue)` <a id="structFRHAPI__HzApiErrorModel_1ac18374ef3ff865995112c28ed1b185b9"></a>

Sets the value of ErrorCode.

<br>
#### `public inline FString & `[`GetDesc`](#structFRHAPI__HzApiErrorModel_1a496a4192b0576bc7002e9f125ce2f749)`()` <a id="structFRHAPI__HzApiErrorModel_1a496a4192b0576bc7002e9f125ce2f749"></a>

Gets the value of Desc.

<br>
#### `public inline const FString & `[`GetDesc`](#structFRHAPI__HzApiErrorModel_1a65965171338907af99cdae71df426171)`() const` <a id="structFRHAPI__HzApiErrorModel_1a65965171338907af99cdae71df426171"></a>

Gets the value of Desc.

<br>
#### `public inline void `[`SetDesc`](#structFRHAPI__HzApiErrorModel_1af32229f3c1dc37276045d5221e905d27)`(FString NewValue)` <a id="structFRHAPI__HzApiErrorModel_1af32229f3c1dc37276045d5221e905d27"></a>

Sets the value of Desc.

<br>
