# group `RHAPI_InstanceHealthStatusUpdate` <a id="group__RHAPI__InstanceHealthStatusUpdate"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__InstanceHealthStatusUpdate_1a7b36499cd62e987ae794f5148d65b043)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InstanceHealthStatusUpdate_1a6d5e5054aaf5929c1517761dca916347)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1aee3b1e634828fa5e708bb279f1ae3614)`()` | Gets the value of InstanceHealth.
`public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1a82f83d721db301c89eb0bdbce11a9ab3)`() const` | Gets the value of InstanceHealth.
`public inline void `[`SetInstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1ae0c0341088c6e28be4deeece1518dbc2)`(const ERHAPI_InstanceHealthStatus & NewValue)` | Sets the value of InstanceHealth.
`public inline void `[`SetInstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1a7751f9de636767b823e471255195468a)`(ERHAPI_InstanceHealthStatus && NewValue)` | Sets the value of InstanceHealth using move semantics.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1ac700bdfe25364183c4113ffd5f3a3c8e)`()` | Gets the value of InstanceId.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1adb98c332bf94570d61b2cc7be9466370)`() const` | Gets the value of InstanceId.
`public inline void `[`SetInstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1a3ce5e29bd4da65ab7afe71ad2752bc6c)`(const FString & NewValue)` | Sets the value of InstanceId.
`public inline void `[`SetInstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1acfdbd1699b4dd643e9837a2bd2c197d7)`(FString && NewValue)` | Sets the value of InstanceId using move semantics.

### Members

#### `public ERHAPI_InstanceHealthStatus `[`InstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1a22014dd48fb92af16e5c96500b5ecd2e) <a id="structFRHAPI__InstanceHealthStatusUpdate_1a22014dd48fb92af16e5c96500b5ecd2e"></a>

The health status of the instance.

#### `public FString `[`InstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1af49eb08bd68d937ff09af2ab23839b71) <a id="structFRHAPI__InstanceHealthStatusUpdate_1af49eb08bd68d937ff09af2ab23839b71"></a>

The instance ID for the instance whose health you are reporting.

#### `public virtual bool `[`FromJson`](#structFRHAPI__InstanceHealthStatusUpdate_1a7b36499cd62e987ae794f5148d65b043)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InstanceHealthStatusUpdate_1a7b36499cd62e987ae794f5148d65b043"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InstanceHealthStatusUpdate_1a6d5e5054aaf5929c1517761dca916347)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__InstanceHealthStatusUpdate_1a6d5e5054aaf5929c1517761dca916347"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1aee3b1e634828fa5e708bb279f1ae3614)`()` <a id="structFRHAPI__InstanceHealthStatusUpdate_1aee3b1e634828fa5e708bb279f1ae3614"></a>

Gets the value of InstanceHealth.

#### `public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1a82f83d721db301c89eb0bdbce11a9ab3)`() const` <a id="structFRHAPI__InstanceHealthStatusUpdate_1a82f83d721db301c89eb0bdbce11a9ab3"></a>

Gets the value of InstanceHealth.

#### `public inline void `[`SetInstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1ae0c0341088c6e28be4deeece1518dbc2)`(const ERHAPI_InstanceHealthStatus & NewValue)` <a id="structFRHAPI__InstanceHealthStatusUpdate_1ae0c0341088c6e28be4deeece1518dbc2"></a>

Sets the value of InstanceHealth.

#### `public inline void `[`SetInstanceHealth`](#structFRHAPI__InstanceHealthStatusUpdate_1a7751f9de636767b823e471255195468a)`(ERHAPI_InstanceHealthStatus && NewValue)` <a id="structFRHAPI__InstanceHealthStatusUpdate_1a7751f9de636767b823e471255195468a"></a>

Sets the value of InstanceHealth using move semantics.

#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1ac700bdfe25364183c4113ffd5f3a3c8e)`()` <a id="structFRHAPI__InstanceHealthStatusUpdate_1ac700bdfe25364183c4113ffd5f3a3c8e"></a>

Gets the value of InstanceId.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1adb98c332bf94570d61b2cc7be9466370)`() const` <a id="structFRHAPI__InstanceHealthStatusUpdate_1adb98c332bf94570d61b2cc7be9466370"></a>

Gets the value of InstanceId.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1a3ce5e29bd4da65ab7afe71ad2752bc6c)`(const FString & NewValue)` <a id="structFRHAPI__InstanceHealthStatusUpdate_1a3ce5e29bd4da65ab7afe71ad2752bc6c"></a>

Sets the value of InstanceId.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__InstanceHealthStatusUpdate_1acfdbd1699b4dd643e9837a2bd2c197d7)`(FString && NewValue)` <a id="structFRHAPI__InstanceHealthStatusUpdate_1acfdbd1699b4dd643e9837a2bd2c197d7"></a>

Sets the value of InstanceId using move semantics.

