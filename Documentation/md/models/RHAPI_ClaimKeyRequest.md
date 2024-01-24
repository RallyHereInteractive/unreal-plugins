# RHAPI_ClaimKeyRequest <a id="group__RHAPI__ClaimKeyRequest"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`ExternalKeyType_Optional`](#structFRHAPI__ClaimKeyRequest_1a3a9418a3a1acb441401f18cec5077d78) | 
`public bool `[`ExternalKeyType_IsSet`](#structFRHAPI__ClaimKeyRequest_1af322e1222232be1c448e3fb279fb038d) | true if ExternalKeyType_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__ClaimKeyRequest_1ac5dc1ebe4f25ea36578b93d697aac68f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__ClaimKeyRequest_1a23d93298cbb8260133bae382eff1e3d7)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a50303725f59a3b3be4235dd3e351107c)`()` | Gets the value of ExternalKeyType_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1aab9b0b649f6396e50a4f4dc82fb8c2ba)`() const` | Gets the value of ExternalKeyType_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a623175a00bf53dfab29617889f21891c)`(const FString & DefaultValue) const` | Gets the value of ExternalKeyType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a645f6800782ff6f7299e3e0d38e15733)`(FString & OutValue) const` | Fills OutValue with the value of ExternalKeyType_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetExternalKeyTypeOrNull`](#structFRHAPI__ClaimKeyRequest_1a19e37ab022c3bbd1d0132c548c21adbb)`()` | Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetExternalKeyTypeOrNull`](#structFRHAPI__ClaimKeyRequest_1aa476809ffd8c08b344601d1b0168f0cf)`() const` | Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a05e05c87e26ed6f66b5c34fd003fec3c)`(FString NewValue)` | Sets the value of ExternalKeyType_Optional and also sets ExternalKeyType_IsSet to true.
`public inline void `[`ClearExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a945c53afa9624ef22d85bce0fd2c46e1)`()` | Clears the value of ExternalKeyType_Optional and sets ExternalKeyType_IsSet to false.
`public inline bool `[`IsExternalKeyTypeDefaultValue`](#structFRHAPI__ClaimKeyRequest_1a0b7fb3f3756d8af98f56ae9da22036a7)`() const` | Returns true if ExternalKeyType_Optional is set and matches the default value.
`public inline void `[`SetExternalKeyTypeToDefault`](#structFRHAPI__ClaimKeyRequest_1a9c5278e971b44e220a33a63bc9361bbd)`()` | Sets the value of ExternalKeyType_Optional to its default and also sets ExternalKeyType_IsSet to true.

#### Members

#### `public FString `[`ExternalKeyType_Optional`](#structFRHAPI__ClaimKeyRequest_1a3a9418a3a1acb441401f18cec5077d78) <a id="structFRHAPI__ClaimKeyRequest_1a3a9418a3a1acb441401f18cec5077d78"></a>

<br>
#### `public bool `[`ExternalKeyType_IsSet`](#structFRHAPI__ClaimKeyRequest_1af322e1222232be1c448e3fb279fb038d) <a id="structFRHAPI__ClaimKeyRequest_1af322e1222232be1c448e3fb279fb038d"></a>

true if ExternalKeyType_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__ClaimKeyRequest_1ac5dc1ebe4f25ea36578b93d697aac68f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__ClaimKeyRequest_1ac5dc1ebe4f25ea36578b93d697aac68f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__ClaimKeyRequest_1a23d93298cbb8260133bae382eff1e3d7)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__ClaimKeyRequest_1a23d93298cbb8260133bae382eff1e3d7"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a50303725f59a3b3be4235dd3e351107c)`()` <a id="structFRHAPI__ClaimKeyRequest_1a50303725f59a3b3be4235dd3e351107c"></a>

Gets the value of ExternalKeyType_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1aab9b0b649f6396e50a4f4dc82fb8c2ba)`() const` <a id="structFRHAPI__ClaimKeyRequest_1aab9b0b649f6396e50a4f4dc82fb8c2ba"></a>

Gets the value of ExternalKeyType_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a623175a00bf53dfab29617889f21891c)`(const FString & DefaultValue) const` <a id="structFRHAPI__ClaimKeyRequest_1a623175a00bf53dfab29617889f21891c"></a>

Gets the value of ExternalKeyType_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a645f6800782ff6f7299e3e0d38e15733)`(FString & OutValue) const` <a id="structFRHAPI__ClaimKeyRequest_1a645f6800782ff6f7299e3e0d38e15733"></a>

Fills OutValue with the value of ExternalKeyType_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetExternalKeyTypeOrNull`](#structFRHAPI__ClaimKeyRequest_1a19e37ab022c3bbd1d0132c548c21adbb)`()` <a id="structFRHAPI__ClaimKeyRequest_1a19e37ab022c3bbd1d0132c548c21adbb"></a>

Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetExternalKeyTypeOrNull`](#structFRHAPI__ClaimKeyRequest_1aa476809ffd8c08b344601d1b0168f0cf)`() const` <a id="structFRHAPI__ClaimKeyRequest_1aa476809ffd8c08b344601d1b0168f0cf"></a>

Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a05e05c87e26ed6f66b5c34fd003fec3c)`(FString NewValue)` <a id="structFRHAPI__ClaimKeyRequest_1a05e05c87e26ed6f66b5c34fd003fec3c"></a>

Sets the value of ExternalKeyType_Optional and also sets ExternalKeyType_IsSet to true.

<br>
#### `public inline void `[`ClearExternalKeyType`](#structFRHAPI__ClaimKeyRequest_1a945c53afa9624ef22d85bce0fd2c46e1)`()` <a id="structFRHAPI__ClaimKeyRequest_1a945c53afa9624ef22d85bce0fd2c46e1"></a>

Clears the value of ExternalKeyType_Optional and sets ExternalKeyType_IsSet to false.

<br>
#### `public inline bool `[`IsExternalKeyTypeDefaultValue`](#structFRHAPI__ClaimKeyRequest_1a0b7fb3f3756d8af98f56ae9da22036a7)`() const` <a id="structFRHAPI__ClaimKeyRequest_1a0b7fb3f3756d8af98f56ae9da22036a7"></a>

Returns true if ExternalKeyType_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetExternalKeyTypeToDefault`](#structFRHAPI__ClaimKeyRequest_1a9c5278e971b44e220a33a63bc9361bbd)`()` <a id="structFRHAPI__ClaimKeyRequest_1a9c5278e971b44e220a33a63bc9361bbd"></a>

Sets the value of ExternalKeyType_Optional to its default and also sets ExternalKeyType_IsSet to true.

<br>
