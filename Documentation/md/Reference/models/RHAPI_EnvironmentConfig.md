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
`public inline FORCEINLINE FGuid & `[`GetOrgId`](#structFRHAPI__EnvironmentConfig_1ad74e0929beca879233f6b10930cc63ce)`()` | Gets the value of OrgId.
`public inline FORCEINLINE const FGuid & `[`GetOrgId`](#structFRHAPI__EnvironmentConfig_1a7ca6d3485468812ad8d4b61867a5e27c)`() const` | Gets the value of OrgId.
`public inline FORCEINLINE void `[`SetOrgId`](#structFRHAPI__EnvironmentConfig_1a394545b99e0053cc421e89c62eb825e6)`(const FGuid & NewValue)` | Sets the value of OrgId.
`public inline FORCEINLINE void `[`SetOrgId`](#structFRHAPI__EnvironmentConfig_1ab6ca2a1165dc71d016f57ed02a4e5b20)`(FGuid && NewValue)` | Sets the value of OrgId using move semantics.
`public inline FORCEINLINE FGuid & `[`GetProductId`](#structFRHAPI__EnvironmentConfig_1a7b81da8a322454ba99bc35a08a432abc)`()` | Gets the value of ProductId.
`public inline FORCEINLINE const FGuid & `[`GetProductId`](#structFRHAPI__EnvironmentConfig_1a665ef4b0447baa8e4cc7ac0b951d8133)`() const` | Gets the value of ProductId.
`public inline FORCEINLINE void `[`SetProductId`](#structFRHAPI__EnvironmentConfig_1a9a1b0a33f2fa2ea4f0fd7af154e60d0b)`(const FGuid & NewValue)` | Sets the value of ProductId.
`public inline FORCEINLINE void `[`SetProductId`](#structFRHAPI__EnvironmentConfig_1a7ffe58b4d4fec52876f5f892f94d3335)`(FGuid && NewValue)` | Sets the value of ProductId using move semantics.
`public inline FORCEINLINE FGuid & `[`GetEnvironmentId`](#structFRHAPI__EnvironmentConfig_1a6e982591065412033b71b4b445681637)`()` | Gets the value of EnvironmentId.
`public inline FORCEINLINE const FGuid & `[`GetEnvironmentId`](#structFRHAPI__EnvironmentConfig_1a99093e13c88346bddb668ffa2d1028ef)`() const` | Gets the value of EnvironmentId.
`public inline FORCEINLINE void `[`SetEnvironmentId`](#structFRHAPI__EnvironmentConfig_1a4a1056f9f884274067478f5b6c335a03)`(const FGuid & NewValue)` | Sets the value of EnvironmentId.
`public inline FORCEINLINE void `[`SetEnvironmentId`](#structFRHAPI__EnvironmentConfig_1ac3769de62de6eeba1db82dc2a4df82c4)`(FGuid && NewValue)` | Sets the value of EnvironmentId using move semantics.
`public inline FORCEINLINE FGuid & `[`GetSandboxId`](#structFRHAPI__EnvironmentConfig_1ad8ba5294fec89bb7fe2f63f0f868c58c)`()` | Gets the value of SandboxId.
`public inline FORCEINLINE const FGuid & `[`GetSandboxId`](#structFRHAPI__EnvironmentConfig_1a48f65cbbdc7449d18e7948994f2ebdf1)`() const` | Gets the value of SandboxId.
`public inline FORCEINLINE void `[`SetSandboxId`](#structFRHAPI__EnvironmentConfig_1ae0f57ad50ad6df1aee40491dd95eab46)`(const FGuid & NewValue)` | Sets the value of SandboxId.
`public inline FORCEINLINE void `[`SetSandboxId`](#structFRHAPI__EnvironmentConfig_1a3c52dd7357f58eec2f48829f8447c7ae)`(FGuid && NewValue)` | Sets the value of SandboxId using move semantics.

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

#### `public inline FORCEINLINE FGuid & `[`GetOrgId`](#structFRHAPI__EnvironmentConfig_1ad74e0929beca879233f6b10930cc63ce)`()` <a id="structFRHAPI__EnvironmentConfig_1ad74e0929beca879233f6b10930cc63ce"></a>

Gets the value of OrgId.

#### `public inline FORCEINLINE const FGuid & `[`GetOrgId`](#structFRHAPI__EnvironmentConfig_1a7ca6d3485468812ad8d4b61867a5e27c)`() const` <a id="structFRHAPI__EnvironmentConfig_1a7ca6d3485468812ad8d4b61867a5e27c"></a>

Gets the value of OrgId.

#### `public inline FORCEINLINE void `[`SetOrgId`](#structFRHAPI__EnvironmentConfig_1a394545b99e0053cc421e89c62eb825e6)`(const FGuid & NewValue)` <a id="structFRHAPI__EnvironmentConfig_1a394545b99e0053cc421e89c62eb825e6"></a>

Sets the value of OrgId.

#### `public inline FORCEINLINE void `[`SetOrgId`](#structFRHAPI__EnvironmentConfig_1ab6ca2a1165dc71d016f57ed02a4e5b20)`(FGuid && NewValue)` <a id="structFRHAPI__EnvironmentConfig_1ab6ca2a1165dc71d016f57ed02a4e5b20"></a>

Sets the value of OrgId using move semantics.

#### `public inline FORCEINLINE FGuid & `[`GetProductId`](#structFRHAPI__EnvironmentConfig_1a7b81da8a322454ba99bc35a08a432abc)`()` <a id="structFRHAPI__EnvironmentConfig_1a7b81da8a322454ba99bc35a08a432abc"></a>

Gets the value of ProductId.

#### `public inline FORCEINLINE const FGuid & `[`GetProductId`](#structFRHAPI__EnvironmentConfig_1a665ef4b0447baa8e4cc7ac0b951d8133)`() const` <a id="structFRHAPI__EnvironmentConfig_1a665ef4b0447baa8e4cc7ac0b951d8133"></a>

Gets the value of ProductId.

#### `public inline FORCEINLINE void `[`SetProductId`](#structFRHAPI__EnvironmentConfig_1a9a1b0a33f2fa2ea4f0fd7af154e60d0b)`(const FGuid & NewValue)` <a id="structFRHAPI__EnvironmentConfig_1a9a1b0a33f2fa2ea4f0fd7af154e60d0b"></a>

Sets the value of ProductId.

#### `public inline FORCEINLINE void `[`SetProductId`](#structFRHAPI__EnvironmentConfig_1a7ffe58b4d4fec52876f5f892f94d3335)`(FGuid && NewValue)` <a id="structFRHAPI__EnvironmentConfig_1a7ffe58b4d4fec52876f5f892f94d3335"></a>

Sets the value of ProductId using move semantics.

#### `public inline FORCEINLINE FGuid & `[`GetEnvironmentId`](#structFRHAPI__EnvironmentConfig_1a6e982591065412033b71b4b445681637)`()` <a id="structFRHAPI__EnvironmentConfig_1a6e982591065412033b71b4b445681637"></a>

Gets the value of EnvironmentId.

#### `public inline FORCEINLINE const FGuid & `[`GetEnvironmentId`](#structFRHAPI__EnvironmentConfig_1a99093e13c88346bddb668ffa2d1028ef)`() const` <a id="structFRHAPI__EnvironmentConfig_1a99093e13c88346bddb668ffa2d1028ef"></a>

Gets the value of EnvironmentId.

#### `public inline FORCEINLINE void `[`SetEnvironmentId`](#structFRHAPI__EnvironmentConfig_1a4a1056f9f884274067478f5b6c335a03)`(const FGuid & NewValue)` <a id="structFRHAPI__EnvironmentConfig_1a4a1056f9f884274067478f5b6c335a03"></a>

Sets the value of EnvironmentId.

#### `public inline FORCEINLINE void `[`SetEnvironmentId`](#structFRHAPI__EnvironmentConfig_1ac3769de62de6eeba1db82dc2a4df82c4)`(FGuid && NewValue)` <a id="structFRHAPI__EnvironmentConfig_1ac3769de62de6eeba1db82dc2a4df82c4"></a>

Sets the value of EnvironmentId using move semantics.

#### `public inline FORCEINLINE FGuid & `[`GetSandboxId`](#structFRHAPI__EnvironmentConfig_1ad8ba5294fec89bb7fe2f63f0f868c58c)`()` <a id="structFRHAPI__EnvironmentConfig_1ad8ba5294fec89bb7fe2f63f0f868c58c"></a>

Gets the value of SandboxId.

#### `public inline FORCEINLINE const FGuid & `[`GetSandboxId`](#structFRHAPI__EnvironmentConfig_1a48f65cbbdc7449d18e7948994f2ebdf1)`() const` <a id="structFRHAPI__EnvironmentConfig_1a48f65cbbdc7449d18e7948994f2ebdf1"></a>

Gets the value of SandboxId.

#### `public inline FORCEINLINE void `[`SetSandboxId`](#structFRHAPI__EnvironmentConfig_1ae0f57ad50ad6df1aee40491dd95eab46)`(const FGuid & NewValue)` <a id="structFRHAPI__EnvironmentConfig_1ae0f57ad50ad6df1aee40491dd95eab46"></a>

Sets the value of SandboxId.

#### `public inline FORCEINLINE void `[`SetSandboxId`](#structFRHAPI__EnvironmentConfig_1a3c52dd7357f58eec2f48829f8447c7ae)`(FGuid && NewValue)` <a id="structFRHAPI__EnvironmentConfig_1a3c52dd7357f58eec2f48829f8447c7ae"></a>

Sets the value of SandboxId using move semantics.

