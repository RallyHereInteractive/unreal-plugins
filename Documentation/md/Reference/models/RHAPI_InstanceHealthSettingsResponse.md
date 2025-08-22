---
title: RHAPI_InstanceHealthSettingsResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_InstanceHealthSettingsResponse`](#structFRHAPI__InstanceHealthSettingsResponse) | 

## struct `FRHAPI_InstanceHealthSettingsResponse` <a id="structFRHAPI__InstanceHealthSettingsResponse"></a>

```
struct FRHAPI_InstanceHealthSettingsResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`CadenceSeconds`](#structFRHAPI__InstanceHealthSettingsResponse_1a331b8938443e0f395989821e67608268) | How often we expect instance health checks to occur.
`public float `[`UnhealthyHealthCheckPercentage`](#structFRHAPI__InstanceHealthSettingsResponse_1a5d21d8d8ab047995a10b8bc9991bc598) | What percentage of health checks must be missing before an instance's status becomes unhealthy.
`public int32 `[`MissedChecksBeforeUnknown`](#structFRHAPI__InstanceHealthSettingsResponse_1a1d881188714ca34fcc840c46738fa9d7) | How many health checks we must miss in a row before an instance's status becomes unknown.
`public virtual bool `[`FromJson`](#structFRHAPI__InstanceHealthSettingsResponse_1a5548c4636a771fa158b544190e11486f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InstanceHealthSettingsResponse_1a257651450dba1ef068831a6088608142)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE int32 & `[`GetCadenceSeconds`](#structFRHAPI__InstanceHealthSettingsResponse_1ae6571663469a18e48fad1824e11112c1)`()` | Gets the value of CadenceSeconds.
`public inline FORCEINLINE const int32 & `[`GetCadenceSeconds`](#structFRHAPI__InstanceHealthSettingsResponse_1a59323861a2bb667c92ef5769506df057)`() const` | Gets the value of CadenceSeconds.
`public inline FORCEINLINE void `[`SetCadenceSeconds`](#structFRHAPI__InstanceHealthSettingsResponse_1af369add68a73639b5068f2172696acad)`(const int32 & NewValue)` | Sets the value of CadenceSeconds.
`public inline FORCEINLINE void `[`SetCadenceSeconds`](#structFRHAPI__InstanceHealthSettingsResponse_1acb99f6eace596a6858f1cb62da5797f9)`(int32 && NewValue)` | Sets the value of CadenceSeconds using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_CadenceSeconds`](#structFRHAPI__InstanceHealthSettingsResponse_1a3d75f51d94e3cc7b7a4bc2bccd31c474)`()` | Returns the default value of CadenceSeconds.
`public inline FORCEINLINE float & `[`GetUnhealthyHealthCheckPercentage`](#structFRHAPI__InstanceHealthSettingsResponse_1ac872fe02a1b6f852ad3d6061196d3544)`()` | Gets the value of UnhealthyHealthCheckPercentage.
`public inline FORCEINLINE const float & `[`GetUnhealthyHealthCheckPercentage`](#structFRHAPI__InstanceHealthSettingsResponse_1a4dc38a6155f3ed0e4a4725a62e673372)`() const` | Gets the value of UnhealthyHealthCheckPercentage.
`public inline FORCEINLINE void `[`SetUnhealthyHealthCheckPercentage`](#structFRHAPI__InstanceHealthSettingsResponse_1ae474249f118827bc208d6837f5f8a6f3)`(const float & NewValue)` | Sets the value of UnhealthyHealthCheckPercentage.
`public inline FORCEINLINE void `[`SetUnhealthyHealthCheckPercentage`](#structFRHAPI__InstanceHealthSettingsResponse_1a915ea3e2511e78f8e08a45aacf6e6a05)`(float && NewValue)` | Sets the value of UnhealthyHealthCheckPercentage using move semantics.
`public inline FORCEINLINE int32 & `[`GetMissedChecksBeforeUnknown`](#structFRHAPI__InstanceHealthSettingsResponse_1a8ca828af2f0f904a142312e3d87b8494)`()` | Gets the value of MissedChecksBeforeUnknown.
`public inline FORCEINLINE const int32 & `[`GetMissedChecksBeforeUnknown`](#structFRHAPI__InstanceHealthSettingsResponse_1a93328f5c26998fe5467b1ca07ced8f38)`() const` | Gets the value of MissedChecksBeforeUnknown.
`public inline FORCEINLINE void `[`SetMissedChecksBeforeUnknown`](#structFRHAPI__InstanceHealthSettingsResponse_1a9373bf5afcd5800ee10acef623dd28a4)`(const int32 & NewValue)` | Sets the value of MissedChecksBeforeUnknown.
`public inline FORCEINLINE void `[`SetMissedChecksBeforeUnknown`](#structFRHAPI__InstanceHealthSettingsResponse_1a3cb5e057aa98c3638c06a5648da6daa2)`(int32 && NewValue)` | Sets the value of MissedChecksBeforeUnknown using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_MissedChecksBeforeUnknown`](#structFRHAPI__InstanceHealthSettingsResponse_1aae502d14ba3bcd7a6410f746ed2f3b75)`()` | Returns the default value of MissedChecksBeforeUnknown.

### Members

#### `public int32 `[`CadenceSeconds`](#structFRHAPI__InstanceHealthSettingsResponse_1a331b8938443e0f395989821e67608268) <a id="structFRHAPI__InstanceHealthSettingsResponse_1a331b8938443e0f395989821e67608268"></a>

How often we expect instance health checks to occur.

#### `public float `[`UnhealthyHealthCheckPercentage`](#structFRHAPI__InstanceHealthSettingsResponse_1a5d21d8d8ab047995a10b8bc9991bc598) <a id="structFRHAPI__InstanceHealthSettingsResponse_1a5d21d8d8ab047995a10b8bc9991bc598"></a>

What percentage of health checks must be missing before an instance's status becomes unhealthy.

#### `public int32 `[`MissedChecksBeforeUnknown`](#structFRHAPI__InstanceHealthSettingsResponse_1a1d881188714ca34fcc840c46738fa9d7) <a id="structFRHAPI__InstanceHealthSettingsResponse_1a1d881188714ca34fcc840c46738fa9d7"></a>

How many health checks we must miss in a row before an instance's status becomes unknown.

#### `public virtual bool `[`FromJson`](#structFRHAPI__InstanceHealthSettingsResponse_1a5548c4636a771fa158b544190e11486f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a5548c4636a771fa158b544190e11486f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InstanceHealthSettingsResponse_1a257651450dba1ef068831a6088608142)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a257651450dba1ef068831a6088608142"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE int32 & `[`GetCadenceSeconds`](#structFRHAPI__InstanceHealthSettingsResponse_1ae6571663469a18e48fad1824e11112c1)`()` <a id="structFRHAPI__InstanceHealthSettingsResponse_1ae6571663469a18e48fad1824e11112c1"></a>

Gets the value of CadenceSeconds.

#### `public inline FORCEINLINE const int32 & `[`GetCadenceSeconds`](#structFRHAPI__InstanceHealthSettingsResponse_1a59323861a2bb667c92ef5769506df057)`() const` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a59323861a2bb667c92ef5769506df057"></a>

Gets the value of CadenceSeconds.

#### `public inline FORCEINLINE void `[`SetCadenceSeconds`](#structFRHAPI__InstanceHealthSettingsResponse_1af369add68a73639b5068f2172696acad)`(const int32 & NewValue)` <a id="structFRHAPI__InstanceHealthSettingsResponse_1af369add68a73639b5068f2172696acad"></a>

Sets the value of CadenceSeconds.

#### `public inline FORCEINLINE void `[`SetCadenceSeconds`](#structFRHAPI__InstanceHealthSettingsResponse_1acb99f6eace596a6858f1cb62da5797f9)`(int32 && NewValue)` <a id="structFRHAPI__InstanceHealthSettingsResponse_1acb99f6eace596a6858f1cb62da5797f9"></a>

Sets the value of CadenceSeconds using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_CadenceSeconds`](#structFRHAPI__InstanceHealthSettingsResponse_1a3d75f51d94e3cc7b7a4bc2bccd31c474)`()` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a3d75f51d94e3cc7b7a4bc2bccd31c474"></a>

Returns the default value of CadenceSeconds.

#### `public inline FORCEINLINE float & `[`GetUnhealthyHealthCheckPercentage`](#structFRHAPI__InstanceHealthSettingsResponse_1ac872fe02a1b6f852ad3d6061196d3544)`()` <a id="structFRHAPI__InstanceHealthSettingsResponse_1ac872fe02a1b6f852ad3d6061196d3544"></a>

Gets the value of UnhealthyHealthCheckPercentage.

#### `public inline FORCEINLINE const float & `[`GetUnhealthyHealthCheckPercentage`](#structFRHAPI__InstanceHealthSettingsResponse_1a4dc38a6155f3ed0e4a4725a62e673372)`() const` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a4dc38a6155f3ed0e4a4725a62e673372"></a>

Gets the value of UnhealthyHealthCheckPercentage.

#### `public inline FORCEINLINE void `[`SetUnhealthyHealthCheckPercentage`](#structFRHAPI__InstanceHealthSettingsResponse_1ae474249f118827bc208d6837f5f8a6f3)`(const float & NewValue)` <a id="structFRHAPI__InstanceHealthSettingsResponse_1ae474249f118827bc208d6837f5f8a6f3"></a>

Sets the value of UnhealthyHealthCheckPercentage.

#### `public inline FORCEINLINE void `[`SetUnhealthyHealthCheckPercentage`](#structFRHAPI__InstanceHealthSettingsResponse_1a915ea3e2511e78f8e08a45aacf6e6a05)`(float && NewValue)` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a915ea3e2511e78f8e08a45aacf6e6a05"></a>

Sets the value of UnhealthyHealthCheckPercentage using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetMissedChecksBeforeUnknown`](#structFRHAPI__InstanceHealthSettingsResponse_1a8ca828af2f0f904a142312e3d87b8494)`()` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a8ca828af2f0f904a142312e3d87b8494"></a>

Gets the value of MissedChecksBeforeUnknown.

#### `public inline FORCEINLINE const int32 & `[`GetMissedChecksBeforeUnknown`](#structFRHAPI__InstanceHealthSettingsResponse_1a93328f5c26998fe5467b1ca07ced8f38)`() const` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a93328f5c26998fe5467b1ca07ced8f38"></a>

Gets the value of MissedChecksBeforeUnknown.

#### `public inline FORCEINLINE void `[`SetMissedChecksBeforeUnknown`](#structFRHAPI__InstanceHealthSettingsResponse_1a9373bf5afcd5800ee10acef623dd28a4)`(const int32 & NewValue)` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a9373bf5afcd5800ee10acef623dd28a4"></a>

Sets the value of MissedChecksBeforeUnknown.

#### `public inline FORCEINLINE void `[`SetMissedChecksBeforeUnknown`](#structFRHAPI__InstanceHealthSettingsResponse_1a3cb5e057aa98c3638c06a5648da6daa2)`(int32 && NewValue)` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a3cb5e057aa98c3638c06a5648da6daa2"></a>

Sets the value of MissedChecksBeforeUnknown using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_MissedChecksBeforeUnknown`](#structFRHAPI__InstanceHealthSettingsResponse_1aae502d14ba3bcd7a6410f746ed2f3b75)`()` <a id="structFRHAPI__InstanceHealthSettingsResponse_1aae502d14ba3bcd7a6410f746ed2f3b75"></a>

Returns the default value of MissedChecksBeforeUnknown.

