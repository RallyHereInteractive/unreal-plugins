---
title: RHAPI_InstanceHealthStatusUpdate
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_InstanceHealthStatusUpdate`](#structFRHAPI__InstanceHealthStatusUpdate) | A request body for an instances health check.

## struct `FRHAPI_InstanceHealthStatusUpdate` <a id="structFRHAPI__InstanceHealthStatusUpdate"></a>

```
struct FRHAPI_InstanceHealthStatusUpdate
  : public FRHAPI_Model
```

A request body for an instances health check.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_InstanceHealthStatus `[`InstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1a22014dd48fb92af16e5c96500b5ecd2e) | The health status of the instance.
`public FString `[`InstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1af49eb08bd68d937ff09af2ab23839b71) | The instance ID for the instance whose health you are reporting.
`public virtual bool `[`FromJson`](#structFRHAPI__InstanceHealthStatusUpdate_1aeae6992032322c39c97439c7a68ba68d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InstanceHealthStatusUpdate_1a98c19a13de67cc3b209c22ea2512fc54)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1ace37cd7e7ebccaae5f8d6db828be1313)`()` | Gets the value of InstanceHealth.
`public inline FORCEINLINE const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1a9488e27591ff78d5e4feb3193b8a454a)`() const` | Gets the value of InstanceHealth.
`public inline FORCEINLINE void `[`SetInstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1ad9f6cf7cca8aad5e951eaf2a8c944d9c)`(const ERHAPI_InstanceHealthStatus & NewValue)` | Sets the value of InstanceHealth.
`public inline FORCEINLINE void `[`SetInstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1ab61e2cf727eac293fb28a15db7ee2594)`(ERHAPI_InstanceHealthStatus && NewValue)` | Sets the value of InstanceHealth using move semantics.
`public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1a0463a5cf9fc156286ba05f7f4ad3b1ce)`()` | Gets the value of InstanceId.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1a6ed48b0ca1c61969ae5522a3cf3eae8e)`() const` | Gets the value of InstanceId.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1ae8a0dfb50ad6e1faa29f8530ec6d5f00)`(const FString & NewValue)` | Sets the value of InstanceId.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1a1d42eb67a315e72b7872b3952c37590f)`(FString && NewValue)` | Sets the value of InstanceId using move semantics.

### Members

#### `public ERHAPI_InstanceHealthStatus `[`InstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1a22014dd48fb92af16e5c96500b5ecd2e) <a id="structFRHAPI__InstanceHealthStatusUpdate_1a22014dd48fb92af16e5c96500b5ecd2e"></a>

The health status of the instance.

#### `public FString `[`InstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1af49eb08bd68d937ff09af2ab23839b71) <a id="structFRHAPI__InstanceHealthStatusUpdate_1af49eb08bd68d937ff09af2ab23839b71"></a>

The instance ID for the instance whose health you are reporting.

#### `public virtual bool `[`FromJson`](#structFRHAPI__InstanceHealthStatusUpdate_1aeae6992032322c39c97439c7a68ba68d)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InstanceHealthStatusUpdate_1aeae6992032322c39c97439c7a68ba68d"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InstanceHealthStatusUpdate_1a98c19a13de67cc3b209c22ea2512fc54)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__InstanceHealthStatusUpdate_1a98c19a13de67cc3b209c22ea2512fc54"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1ace37cd7e7ebccaae5f8d6db828be1313)`()` <a id="structFRHAPI__InstanceHealthStatusUpdate_1ace37cd7e7ebccaae5f8d6db828be1313"></a>

Gets the value of InstanceHealth.

#### `public inline FORCEINLINE const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1a9488e27591ff78d5e4feb3193b8a454a)`() const` <a id="structFRHAPI__InstanceHealthStatusUpdate_1a9488e27591ff78d5e4feb3193b8a454a"></a>

Gets the value of InstanceHealth.

#### `public inline FORCEINLINE void `[`SetInstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1ad9f6cf7cca8aad5e951eaf2a8c944d9c)`(const ERHAPI_InstanceHealthStatus & NewValue)` <a id="structFRHAPI__InstanceHealthStatusUpdate_1ad9f6cf7cca8aad5e951eaf2a8c944d9c"></a>

Sets the value of InstanceHealth.

#### `public inline FORCEINLINE void `[`SetInstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1ab61e2cf727eac293fb28a15db7ee2594)`(ERHAPI_InstanceHealthStatus && NewValue)` <a id="structFRHAPI__InstanceHealthStatusUpdate_1ab61e2cf727eac293fb28a15db7ee2594"></a>

Sets the value of InstanceHealth using move semantics.

#### `public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1a0463a5cf9fc156286ba05f7f4ad3b1ce)`()` <a id="structFRHAPI__InstanceHealthStatusUpdate_1a0463a5cf9fc156286ba05f7f4ad3b1ce"></a>

Gets the value of InstanceId.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1a6ed48b0ca1c61969ae5522a3cf3eae8e)`() const` <a id="structFRHAPI__InstanceHealthStatusUpdate_1a6ed48b0ca1c61969ae5522a3cf3eae8e"></a>

Gets the value of InstanceId.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1ae8a0dfb50ad6e1faa29f8530ec6d5f00)`(const FString & NewValue)` <a id="structFRHAPI__InstanceHealthStatusUpdate_1ae8a0dfb50ad6e1faa29f8530ec6d5f00"></a>

Sets the value of InstanceId.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1a1d42eb67a315e72b7872b3952c37590f)`(FString && NewValue)` <a id="structFRHAPI__InstanceHealthStatusUpdate_1a1d42eb67a315e72b7872b3952c37590f"></a>

Sets the value of InstanceId using move semantics.

