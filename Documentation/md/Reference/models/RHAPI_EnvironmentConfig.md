---
title: RHAPI_EnvironmentConfig
---

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
`public virtual bool `[`FromJson`](#structFRHAPI__EnvironmentConfig_1a93fef0d1e16de7c1a1d4c4ae331c2d7e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__EnvironmentConfig_1a09cc64f9ff41da0dd08d7c4085be9926)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetOrgId`](#structFRHAPI__EnvironmentConfig_1a5db6163c32fd6129c291fcfcb2ce8c94)`()` | Gets the value of OrgId.
`public inline const FGuid & `[`GetOrgId`](#structFRHAPI__EnvironmentConfig_1a36bfcf5c1efc82e971772abe7b6bf706)`() const` | Gets the value of OrgId.
`public inline void `[`SetOrgId`](#structFRHAPI__EnvironmentConfig_1ab9d7a2bba99b90e236fd385172af442d)`(const FGuid & NewValue)` | Sets the value of OrgId.
`public inline void `[`SetOrgId`](#structFRHAPI__EnvironmentConfig_1ab9fd057c9862ab13f25254ca91d3e50a)`(FGuid && NewValue)` | Sets the value of OrgId using move semantics.
`public inline FGuid & `[`GetProductId`](#structFRHAPI__EnvironmentConfig_1a120725655fe10dc3f2c640f607542e86)`()` | Gets the value of ProductId.
`public inline const FGuid & `[`GetProductId`](#structFRHAPI__EnvironmentConfig_1aae66f89425e0af08869eabd939f3f1ca)`() const` | Gets the value of ProductId.
`public inline void `[`SetProductId`](#structFRHAPI__EnvironmentConfig_1a2d7d1f6d4ea36ab645b8a8aab9657b91)`(const FGuid & NewValue)` | Sets the value of ProductId.
`public inline void `[`SetProductId`](#structFRHAPI__EnvironmentConfig_1ae9494b03f879b1c648124a38c9124c83)`(FGuid && NewValue)` | Sets the value of ProductId using move semantics.
`public inline FGuid & `[`GetEnvironmentId`](#structFRHAPI__EnvironmentConfig_1a7eb4ad8f372927f64715a8595f9a3305)`()` | Gets the value of EnvironmentId.
`public inline const FGuid & `[`GetEnvironmentId`](#structFRHAPI__EnvironmentConfig_1a24dc301c5463e39ec361da72e279a6e1)`() const` | Gets the value of EnvironmentId.
`public inline void `[`SetEnvironmentId`](#structFRHAPI__EnvironmentConfig_1a47a63037cc7ab96bc14bdf70381569c1)`(const FGuid & NewValue)` | Sets the value of EnvironmentId.
`public inline void `[`SetEnvironmentId`](#structFRHAPI__EnvironmentConfig_1adc84daf3e3cde9e9f160f9b4ec790893)`(FGuid && NewValue)` | Sets the value of EnvironmentId using move semantics.
`public inline FGuid & `[`GetSandboxId`](#structFRHAPI__EnvironmentConfig_1ad07944ffea302e40530654f82d4cae6d)`()` | Gets the value of SandboxId.
`public inline const FGuid & `[`GetSandboxId`](#structFRHAPI__EnvironmentConfig_1a08488523a401b657eed34e2d52205292)`() const` | Gets the value of SandboxId.
`public inline void `[`SetSandboxId`](#structFRHAPI__EnvironmentConfig_1acdc601d8dcb71018fec2a04f54b64a05)`(const FGuid & NewValue)` | Sets the value of SandboxId.
`public inline void `[`SetSandboxId`](#structFRHAPI__EnvironmentConfig_1ac9abbce16daad56edc4e652aa9ee497d)`(FGuid && NewValue)` | Sets the value of SandboxId using move semantics.

### Members

#### `public FGuid `[`OrgId`](#structFRHAPI__EnvironmentConfig_1a926f0b5ba9b48fefac2117cb471ccaa0) <a id="structFRHAPI__EnvironmentConfig_1a926f0b5ba9b48fefac2117cb471ccaa0"></a>

#### `public FGuid `[`ProductId`](#structFRHAPI__EnvironmentConfig_1ab56749b08fffa20c2ba9c53340249fee) <a id="structFRHAPI__EnvironmentConfig_1ab56749b08fffa20c2ba9c53340249fee"></a>

#### `public FGuid `[`EnvironmentId`](#structFRHAPI__EnvironmentConfig_1a1c8590990a98293aaaedeca48643f19c) <a id="structFRHAPI__EnvironmentConfig_1a1c8590990a98293aaaedeca48643f19c"></a>

#### `public FGuid `[`SandboxId`](#structFRHAPI__EnvironmentConfig_1ae2348297d79294e5659e8c58a10107ae) <a id="structFRHAPI__EnvironmentConfig_1ae2348297d79294e5659e8c58a10107ae"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__EnvironmentConfig_1a93fef0d1e16de7c1a1d4c4ae331c2d7e)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__EnvironmentConfig_1a93fef0d1e16de7c1a1d4c4ae331c2d7e"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__EnvironmentConfig_1a09cc64f9ff41da0dd08d7c4085be9926)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__EnvironmentConfig_1a09cc64f9ff41da0dd08d7c4085be9926"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetOrgId`](#structFRHAPI__EnvironmentConfig_1a5db6163c32fd6129c291fcfcb2ce8c94)`()` <a id="structFRHAPI__EnvironmentConfig_1a5db6163c32fd6129c291fcfcb2ce8c94"></a>

Gets the value of OrgId.

#### `public inline const FGuid & `[`GetOrgId`](#structFRHAPI__EnvironmentConfig_1a36bfcf5c1efc82e971772abe7b6bf706)`() const` <a id="structFRHAPI__EnvironmentConfig_1a36bfcf5c1efc82e971772abe7b6bf706"></a>

Gets the value of OrgId.

#### `public inline void `[`SetOrgId`](#structFRHAPI__EnvironmentConfig_1ab9d7a2bba99b90e236fd385172af442d)`(const FGuid & NewValue)` <a id="structFRHAPI__EnvironmentConfig_1ab9d7a2bba99b90e236fd385172af442d"></a>

Sets the value of OrgId.

#### `public inline void `[`SetOrgId`](#structFRHAPI__EnvironmentConfig_1ab9fd057c9862ab13f25254ca91d3e50a)`(FGuid && NewValue)` <a id="structFRHAPI__EnvironmentConfig_1ab9fd057c9862ab13f25254ca91d3e50a"></a>

Sets the value of OrgId using move semantics.

#### `public inline FGuid & `[`GetProductId`](#structFRHAPI__EnvironmentConfig_1a120725655fe10dc3f2c640f607542e86)`()` <a id="structFRHAPI__EnvironmentConfig_1a120725655fe10dc3f2c640f607542e86"></a>

Gets the value of ProductId.

#### `public inline const FGuid & `[`GetProductId`](#structFRHAPI__EnvironmentConfig_1aae66f89425e0af08869eabd939f3f1ca)`() const` <a id="structFRHAPI__EnvironmentConfig_1aae66f89425e0af08869eabd939f3f1ca"></a>

Gets the value of ProductId.

#### `public inline void `[`SetProductId`](#structFRHAPI__EnvironmentConfig_1a2d7d1f6d4ea36ab645b8a8aab9657b91)`(const FGuid & NewValue)` <a id="structFRHAPI__EnvironmentConfig_1a2d7d1f6d4ea36ab645b8a8aab9657b91"></a>

Sets the value of ProductId.

#### `public inline void `[`SetProductId`](#structFRHAPI__EnvironmentConfig_1ae9494b03f879b1c648124a38c9124c83)`(FGuid && NewValue)` <a id="structFRHAPI__EnvironmentConfig_1ae9494b03f879b1c648124a38c9124c83"></a>

Sets the value of ProductId using move semantics.

#### `public inline FGuid & `[`GetEnvironmentId`](#structFRHAPI__EnvironmentConfig_1a7eb4ad8f372927f64715a8595f9a3305)`()` <a id="structFRHAPI__EnvironmentConfig_1a7eb4ad8f372927f64715a8595f9a3305"></a>

Gets the value of EnvironmentId.

#### `public inline const FGuid & `[`GetEnvironmentId`](#structFRHAPI__EnvironmentConfig_1a24dc301c5463e39ec361da72e279a6e1)`() const` <a id="structFRHAPI__EnvironmentConfig_1a24dc301c5463e39ec361da72e279a6e1"></a>

Gets the value of EnvironmentId.

#### `public inline void `[`SetEnvironmentId`](#structFRHAPI__EnvironmentConfig_1a47a63037cc7ab96bc14bdf70381569c1)`(const FGuid & NewValue)` <a id="structFRHAPI__EnvironmentConfig_1a47a63037cc7ab96bc14bdf70381569c1"></a>

Sets the value of EnvironmentId.

#### `public inline void `[`SetEnvironmentId`](#structFRHAPI__EnvironmentConfig_1adc84daf3e3cde9e9f160f9b4ec790893)`(FGuid && NewValue)` <a id="structFRHAPI__EnvironmentConfig_1adc84daf3e3cde9e9f160f9b4ec790893"></a>

Sets the value of EnvironmentId using move semantics.

#### `public inline FGuid & `[`GetSandboxId`](#structFRHAPI__EnvironmentConfig_1ad07944ffea302e40530654f82d4cae6d)`()` <a id="structFRHAPI__EnvironmentConfig_1ad07944ffea302e40530654f82d4cae6d"></a>

Gets the value of SandboxId.

#### `public inline const FGuid & `[`GetSandboxId`](#structFRHAPI__EnvironmentConfig_1a08488523a401b657eed34e2d52205292)`() const` <a id="structFRHAPI__EnvironmentConfig_1a08488523a401b657eed34e2d52205292"></a>

Gets the value of SandboxId.

#### `public inline void `[`SetSandboxId`](#structFRHAPI__EnvironmentConfig_1acdc601d8dcb71018fec2a04f54b64a05)`(const FGuid & NewValue)` <a id="structFRHAPI__EnvironmentConfig_1acdc601d8dcb71018fec2a04f54b64a05"></a>

Sets the value of SandboxId.

#### `public inline void `[`SetSandboxId`](#structFRHAPI__EnvironmentConfig_1ac9abbce16daad56edc4e652aa9ee497d)`(FGuid && NewValue)` <a id="structFRHAPI__EnvironmentConfig_1ac9abbce16daad56edc4e652aa9ee497d"></a>

Sets the value of SandboxId using move semantics.

