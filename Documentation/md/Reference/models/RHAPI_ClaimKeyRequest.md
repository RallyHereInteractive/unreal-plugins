---
title: RHAPI_ClaimKeyRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_ClaimKeyRequest`](#structFRHAPI__ClaimKeyRequest) | Attempt to claim a Key Claim from a Marketing Campaign.

## struct `FRHAPI_ClaimKeyRequest` <a id="structFRHAPI__ClaimKeyRequest"></a>

```
struct FRHAPI_ClaimKeyRequest
  : public FRHAPI_Model
```

Attempt to claim a Key Claim from a Marketing Campaign.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`ExternalKeyType_Optional`](#structFRHAPI__ClaimKeyRequest_1a3a9418a3a1acb441401f18cec5077d78) | 
`public bool `[`ExternalKeyType_IsSet`](#structFRHAPI__ClaimKeyRequest_1af322e1222232be1c448e3fb279fb038d) | true if ExternalKeyType_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__ClaimKeyRequest_1adb2423c0daf9e031d02795b9d7aa0ae4)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__ClaimKeyRequest_1a81f29156ac03599f04eb0b4c1376a161)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a10e7509050ce723b86150dbdd622e444)`()` | Gets the value of ExternalKeyType_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a88e58996f529da87b9a8fbbcccc94f78)`() const` | Gets the value of ExternalKeyType_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1abe09422dde8a5d2e531a2cbc9d6aaa7a)`(const FString & DefaultValue) const` | Gets the value of ExternalKeyType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a645f6800782ff6f7299e3e0d38e15733)`(FString & OutValue) const` | Fills OutValue with the value of ExternalKeyType_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetExternalKeyTypeOrNull`](#structFRHAPI__ClaimKeyRequest_1a9418b2b67a53dbd16708b4989e271c53)`()` | Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetExternalKeyTypeOrNull`](#structFRHAPI__ClaimKeyRequest_1a4195841e9345f119d21b28669803ef6e)`() const` | Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a93d4341831134ac750ec70ac9861cd73)`(const FString & NewValue)` | Sets the value of ExternalKeyType_Optional and also sets ExternalKeyType_IsSet to true.
`public inline void `[`SetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a70a62d0472f976c80316c3153c158b99)`(FString && NewValue)` | Sets the value of ExternalKeyType_Optional and also sets ExternalKeyType_IsSet to true using move semantics.
`public inline void `[`ClearExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a945c53afa9624ef22d85bce0fd2c46e1)`()` | Clears the value of ExternalKeyType_Optional and sets ExternalKeyType_IsSet to false.
`public inline bool `[`IsExternalKeyTypeSet`](#structFRHAPI__ClaimKeyRequest_1a724766fbb9d9fc11246053a3137afb04)`() const` | Checks whether ExternalKeyType_Optional has been set.
`public inline bool `[`IsExternalKeyTypeDefaultValue`](#structFRHAPI__ClaimKeyRequest_1a0b7fb3f3756d8af98f56ae9da22036a7)`() const` | Returns true if ExternalKeyType_Optional is set and matches the default value.
`public inline void `[`SetExternalKeyTypeToDefault`](#structFRHAPI__ClaimKeyRequest_1a9c5278e971b44e220a33a63bc9361bbd)`()` | Sets the value of ExternalKeyType_Optional to its default and also sets ExternalKeyType_IsSet to true.

### Members

#### `public FString `[`ExternalKeyType_Optional`](#structFRHAPI__ClaimKeyRequest_1a3a9418a3a1acb441401f18cec5077d78) <a id="structFRHAPI__ClaimKeyRequest_1a3a9418a3a1acb441401f18cec5077d78"></a>

#### `public bool `[`ExternalKeyType_IsSet`](#structFRHAPI__ClaimKeyRequest_1af322e1222232be1c448e3fb279fb038d) <a id="structFRHAPI__ClaimKeyRequest_1af322e1222232be1c448e3fb279fb038d"></a>

true if ExternalKeyType_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__ClaimKeyRequest_1adb2423c0daf9e031d02795b9d7aa0ae4)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__ClaimKeyRequest_1adb2423c0daf9e031d02795b9d7aa0ae4"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__ClaimKeyRequest_1a81f29156ac03599f04eb0b4c1376a161)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__ClaimKeyRequest_1a81f29156ac03599f04eb0b4c1376a161"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a10e7509050ce723b86150dbdd622e444)`()` <a id="structFRHAPI__ClaimKeyRequest_1a10e7509050ce723b86150dbdd622e444"></a>

Gets the value of ExternalKeyType_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a88e58996f529da87b9a8fbbcccc94f78)`() const` <a id="structFRHAPI__ClaimKeyRequest_1a88e58996f529da87b9a8fbbcccc94f78"></a>

Gets the value of ExternalKeyType_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1abe09422dde8a5d2e531a2cbc9d6aaa7a)`(const FString & DefaultValue) const` <a id="structFRHAPI__ClaimKeyRequest_1abe09422dde8a5d2e531a2cbc9d6aaa7a"></a>

Gets the value of ExternalKeyType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a645f6800782ff6f7299e3e0d38e15733)`(FString & OutValue) const` <a id="structFRHAPI__ClaimKeyRequest_1a645f6800782ff6f7299e3e0d38e15733"></a>

Fills OutValue with the value of ExternalKeyType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetExternalKeyTypeOrNull`](#structFRHAPI__ClaimKeyRequest_1a9418b2b67a53dbd16708b4989e271c53)`()` <a id="structFRHAPI__ClaimKeyRequest_1a9418b2b67a53dbd16708b4989e271c53"></a>

Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetExternalKeyTypeOrNull`](#structFRHAPI__ClaimKeyRequest_1a4195841e9345f119d21b28669803ef6e)`() const` <a id="structFRHAPI__ClaimKeyRequest_1a4195841e9345f119d21b28669803ef6e"></a>

Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a93d4341831134ac750ec70ac9861cd73)`(const FString & NewValue)` <a id="structFRHAPI__ClaimKeyRequest_1a93d4341831134ac750ec70ac9861cd73"></a>

Sets the value of ExternalKeyType_Optional and also sets ExternalKeyType_IsSet to true.

#### `public inline void `[`SetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a70a62d0472f976c80316c3153c158b99)`(FString && NewValue)` <a id="structFRHAPI__ClaimKeyRequest_1a70a62d0472f976c80316c3153c158b99"></a>

Sets the value of ExternalKeyType_Optional and also sets ExternalKeyType_IsSet to true using move semantics.

#### `public inline void `[`ClearExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a945c53afa9624ef22d85bce0fd2c46e1)`()` <a id="structFRHAPI__ClaimKeyRequest_1a945c53afa9624ef22d85bce0fd2c46e1"></a>

Clears the value of ExternalKeyType_Optional and sets ExternalKeyType_IsSet to false.

#### `public inline bool `[`IsExternalKeyTypeSet`](#structFRHAPI__ClaimKeyRequest_1a724766fbb9d9fc11246053a3137afb04)`() const` <a id="structFRHAPI__ClaimKeyRequest_1a724766fbb9d9fc11246053a3137afb04"></a>

Checks whether ExternalKeyType_Optional has been set.

#### `public inline bool `[`IsExternalKeyTypeDefaultValue`](#structFRHAPI__ClaimKeyRequest_1a0b7fb3f3756d8af98f56ae9da22036a7)`() const` <a id="structFRHAPI__ClaimKeyRequest_1a0b7fb3f3756d8af98f56ae9da22036a7"></a>

Returns true if ExternalKeyType_Optional is set and matches the default value.

#### `public inline void `[`SetExternalKeyTypeToDefault`](#structFRHAPI__ClaimKeyRequest_1a9c5278e971b44e220a33a63bc9361bbd)`()` <a id="structFRHAPI__ClaimKeyRequest_1a9c5278e971b44e220a33a63bc9361bbd"></a>

Sets the value of ExternalKeyType_Optional to its default and also sets ExternalKeyType_IsSet to true.

