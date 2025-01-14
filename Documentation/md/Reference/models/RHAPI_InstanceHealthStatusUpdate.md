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
`public inline ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1aa1162ce854a0159eaaa6b8d3934bb9bf)`()` | Gets the value of InstanceHealth.
`public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1ac1fc469d6ebc48a3f2343db4c3ed13aa)`() const` | Gets the value of InstanceHealth.
`public inline void `[`SetInstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1ae0c0341088c6e28be4deeece1518dbc2)`(const ERHAPI_InstanceHealthStatus & NewValue)` | Sets the value of InstanceHealth.
`public inline void `[`SetInstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1a7751f9de636767b823e471255195468a)`(ERHAPI_InstanceHealthStatus && NewValue)` | Sets the value of InstanceHealth using move semantics.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1ab1fbc1066915019843ba0b44f2e172d1)`()` | Gets the value of InstanceId.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1a8139fd137f4b2bb126f1ea8f3feaed7e)`() const` | Gets the value of InstanceId.
`public inline void `[`SetInstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1a3ce5e29bd4da65ab7afe71ad2752bc6c)`(const FString & NewValue)` | Sets the value of InstanceId.
`public inline void `[`SetInstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1acfdbd1699b4dd643e9837a2bd2c197d7)`(FString && NewValue)` | Sets the value of InstanceId using move semantics.

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

#### `public inline ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1aa1162ce854a0159eaaa6b8d3934bb9bf)`()` <a id="structFRHAPI__InstanceHealthStatusUpdate_1aa1162ce854a0159eaaa6b8d3934bb9bf"></a>

Gets the value of InstanceHealth.

#### `public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1ac1fc469d6ebc48a3f2343db4c3ed13aa)`() const` <a id="structFRHAPI__InstanceHealthStatusUpdate_1ac1fc469d6ebc48a3f2343db4c3ed13aa"></a>

Gets the value of InstanceHealth.

#### `public inline void `[`SetInstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1ae0c0341088c6e28be4deeece1518dbc2)`(const ERHAPI_InstanceHealthStatus & NewValue)` <a id="structFRHAPI__InstanceHealthStatusUpdate_1ae0c0341088c6e28be4deeece1518dbc2"></a>

Sets the value of InstanceHealth.

#### `public inline void `[`SetInstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1a7751f9de636767b823e471255195468a)`(ERHAPI_InstanceHealthStatus && NewValue)` <a id="structFRHAPI__InstanceHealthStatusUpdate_1a7751f9de636767b823e471255195468a"></a>

Sets the value of InstanceHealth using move semantics.

#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1ab1fbc1066915019843ba0b44f2e172d1)`()` <a id="structFRHAPI__InstanceHealthStatusUpdate_1ab1fbc1066915019843ba0b44f2e172d1"></a>

Gets the value of InstanceId.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1a8139fd137f4b2bb126f1ea8f3feaed7e)`() const` <a id="structFRHAPI__InstanceHealthStatusUpdate_1a8139fd137f4b2bb126f1ea8f3feaed7e"></a>

Gets the value of InstanceId.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1a3ce5e29bd4da65ab7afe71ad2752bc6c)`(const FString & NewValue)` <a id="structFRHAPI__InstanceHealthStatusUpdate_1a3ce5e29bd4da65ab7afe71ad2752bc6c"></a>

Sets the value of InstanceId.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1acfdbd1699b4dd643e9837a2bd2c197d7)`(FString && NewValue)` <a id="structFRHAPI__InstanceHealthStatusUpdate_1acfdbd1699b4dd643e9837a2bd2c197d7"></a>

Sets the value of InstanceId using move semantics.

