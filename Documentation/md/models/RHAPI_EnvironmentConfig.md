# group `RHAPI_EnvironmentConfig` <a id="group__RHAPI__EnvironmentConfig"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_EnvironmentConfig`](#structFRHAPI__EnvironmentConfig) | 

## struct `FRHAPI_EnvironmentConfig` <a id="structFRHAPI__EnvironmentConfig"></a>

```
struct FRHAPI_EnvironmentConfig
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`OrgId`](#structFRHAPI__EnvironmentConfig_1a926f0b5ba9b48fefac2117cb471ccaa0) | 
`public FGuid `[`ProductId`](#structFRHAPI__EnvironmentConfig_1ab56749b08fffa20c2ba9c53340249fee) | 
`public FGuid `[`EnvironmentId`](#structFRHAPI__EnvironmentConfig_1a1c8590990a98293aaaedeca48643f19c) | 
`public FGuid `[`SandboxId`](#structFRHAPI__EnvironmentConfig_1ae2348297d79294e5659e8c58a10107ae) | 
`public virtual bool `[`FromJson`](#structFRHAPI__EnvironmentConfig_1ac857b1dabad2b8f5fc78a4979616cf51)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__EnvironmentConfig_1a992656d1c13fc184430b3b56eba551fc)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetOrgId`](#structFRHAPI__EnvironmentConfig_1a4c13ed6b928931b9d64864ad5069ac4f)`()` | Gets the value of OrgId.
`public inline const FGuid & `[`GetOrgId`](#structFRHAPI__EnvironmentConfig_1a7571e912a0feeea1dbc4a54dd44d6738)`() const` | Gets the value of OrgId.
`public inline void `[`SetOrgId`](#structFRHAPI__EnvironmentConfig_1a217aaa6b259f025169925e42edc3a1f4)`(FGuid NewValue)` | Sets the value of OrgId.
`public inline FGuid & `[`GetProductId`](#structFRHAPI__EnvironmentConfig_1a08cebd90dad4ba6ce9eb24babaef0700)`()` | Gets the value of ProductId.
`public inline const FGuid & `[`GetProductId`](#structFRHAPI__EnvironmentConfig_1aaf5d4f63127880f8ec4696e8bd3ffcd7)`() const` | Gets the value of ProductId.
`public inline void `[`SetProductId`](#structFRHAPI__EnvironmentConfig_1a15a33e82912bd5db6470404fa694d73a)`(FGuid NewValue)` | Sets the value of ProductId.
`public inline FGuid & `[`GetEnvironmentId`](#structFRHAPI__EnvironmentConfig_1a018008a1bd6bd0a4041bf61ef3c72c89)`()` | Gets the value of EnvironmentId.
`public inline const FGuid & `[`GetEnvironmentId`](#structFRHAPI__EnvironmentConfig_1a6ae986129e98f693e0a8a70818976804)`() const` | Gets the value of EnvironmentId.
`public inline void `[`SetEnvironmentId`](#structFRHAPI__EnvironmentConfig_1ab5e72154ed40e723858163945f5ed099)`(FGuid NewValue)` | Sets the value of EnvironmentId.
`public inline FGuid & `[`GetSandboxId`](#structFRHAPI__EnvironmentConfig_1a7acb4d5de3cc1ea1a01d1be9399bf4be)`()` | Gets the value of SandboxId.
`public inline const FGuid & `[`GetSandboxId`](#structFRHAPI__EnvironmentConfig_1a3e6578345bf886dacedb02cdd4d71a15)`() const` | Gets the value of SandboxId.
`public inline void `[`SetSandboxId`](#structFRHAPI__EnvironmentConfig_1a4c6031583637831061ab5108bc5a4ff5)`(FGuid NewValue)` | Sets the value of SandboxId.

### Members

#### `public FGuid `[`OrgId`](#structFRHAPI__EnvironmentConfig_1a926f0b5ba9b48fefac2117cb471ccaa0) <a id="structFRHAPI__EnvironmentConfig_1a926f0b5ba9b48fefac2117cb471ccaa0"></a>

#### `public FGuid `[`ProductId`](#structFRHAPI__EnvironmentConfig_1ab56749b08fffa20c2ba9c53340249fee) <a id="structFRHAPI__EnvironmentConfig_1ab56749b08fffa20c2ba9c53340249fee"></a>

#### `public FGuid `[`EnvironmentId`](#structFRHAPI__EnvironmentConfig_1a1c8590990a98293aaaedeca48643f19c) <a id="structFRHAPI__EnvironmentConfig_1a1c8590990a98293aaaedeca48643f19c"></a>

#### `public FGuid `[`SandboxId`](#structFRHAPI__EnvironmentConfig_1ae2348297d79294e5659e8c58a10107ae) <a id="structFRHAPI__EnvironmentConfig_1ae2348297d79294e5659e8c58a10107ae"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__EnvironmentConfig_1ac857b1dabad2b8f5fc78a4979616cf51)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__EnvironmentConfig_1ac857b1dabad2b8f5fc78a4979616cf51"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__EnvironmentConfig_1a992656d1c13fc184430b3b56eba551fc)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__EnvironmentConfig_1a992656d1c13fc184430b3b56eba551fc"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetOrgId`](#structFRHAPI__EnvironmentConfig_1a4c13ed6b928931b9d64864ad5069ac4f)`()` <a id="structFRHAPI__EnvironmentConfig_1a4c13ed6b928931b9d64864ad5069ac4f"></a>

Gets the value of OrgId.

#### `public inline const FGuid & `[`GetOrgId`](#structFRHAPI__EnvironmentConfig_1a7571e912a0feeea1dbc4a54dd44d6738)`() const` <a id="structFRHAPI__EnvironmentConfig_1a7571e912a0feeea1dbc4a54dd44d6738"></a>

Gets the value of OrgId.

#### `public inline void `[`SetOrgId`](#structFRHAPI__EnvironmentConfig_1a217aaa6b259f025169925e42edc3a1f4)`(FGuid NewValue)` <a id="structFRHAPI__EnvironmentConfig_1a217aaa6b259f025169925e42edc3a1f4"></a>

Sets the value of OrgId.

#### `public inline FGuid & `[`GetProductId`](#structFRHAPI__EnvironmentConfig_1a08cebd90dad4ba6ce9eb24babaef0700)`()` <a id="structFRHAPI__EnvironmentConfig_1a08cebd90dad4ba6ce9eb24babaef0700"></a>

Gets the value of ProductId.

#### `public inline const FGuid & `[`GetProductId`](#structFRHAPI__EnvironmentConfig_1aaf5d4f63127880f8ec4696e8bd3ffcd7)`() const` <a id="structFRHAPI__EnvironmentConfig_1aaf5d4f63127880f8ec4696e8bd3ffcd7"></a>

Gets the value of ProductId.

#### `public inline void `[`SetProductId`](#structFRHAPI__EnvironmentConfig_1a15a33e82912bd5db6470404fa694d73a)`(FGuid NewValue)` <a id="structFRHAPI__EnvironmentConfig_1a15a33e82912bd5db6470404fa694d73a"></a>

Sets the value of ProductId.

#### `public inline FGuid & `[`GetEnvironmentId`](#structFRHAPI__EnvironmentConfig_1a018008a1bd6bd0a4041bf61ef3c72c89)`()` <a id="structFRHAPI__EnvironmentConfig_1a018008a1bd6bd0a4041bf61ef3c72c89"></a>

Gets the value of EnvironmentId.

#### `public inline const FGuid & `[`GetEnvironmentId`](#structFRHAPI__EnvironmentConfig_1a6ae986129e98f693e0a8a70818976804)`() const` <a id="structFRHAPI__EnvironmentConfig_1a6ae986129e98f693e0a8a70818976804"></a>

Gets the value of EnvironmentId.

#### `public inline void `[`SetEnvironmentId`](#structFRHAPI__EnvironmentConfig_1ab5e72154ed40e723858163945f5ed099)`(FGuid NewValue)` <a id="structFRHAPI__EnvironmentConfig_1ab5e72154ed40e723858163945f5ed099"></a>

Sets the value of EnvironmentId.

#### `public inline FGuid & `[`GetSandboxId`](#structFRHAPI__EnvironmentConfig_1a7acb4d5de3cc1ea1a01d1be9399bf4be)`()` <a id="structFRHAPI__EnvironmentConfig_1a7acb4d5de3cc1ea1a01d1be9399bf4be"></a>

Gets the value of SandboxId.

#### `public inline const FGuid & `[`GetSandboxId`](#structFRHAPI__EnvironmentConfig_1a3e6578345bf886dacedb02cdd4d71a15)`() const` <a id="structFRHAPI__EnvironmentConfig_1a3e6578345bf886dacedb02cdd4d71a15"></a>

Gets the value of SandboxId.

#### `public inline void `[`SetSandboxId`](#structFRHAPI__EnvironmentConfig_1a4c6031583637831061ab5108bc5a4ff5)`(FGuid NewValue)` <a id="structFRHAPI__EnvironmentConfig_1a4c6031583637831061ab5108bc5a4ff5"></a>

Sets the value of SandboxId.

