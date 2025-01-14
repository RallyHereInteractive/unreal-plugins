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
`public inline int32 & `[`GetCadenceSeconds`](#structFRHAPI__InstanceHealthSettingsResponse_1ad89ce09545f796d57a6bd18eb3546a76)`()` | Gets the value of CadenceSeconds.
`public inline const int32 & `[`GetCadenceSeconds`](#structFRHAPI__InstanceHealthSettingsResponse_1a6431bd6f5a8f9b77682b1fc0db3f5788)`() const` | Gets the value of CadenceSeconds.
`public inline void `[`SetCadenceSeconds`](#structFRHAPI__InstanceHealthSettingsResponse_1ad309c1a1ebd7872ac5242a2b708ebd65)`(const int32 & NewValue)` | Sets the value of CadenceSeconds.
`public inline void `[`SetCadenceSeconds`](#structFRHAPI__InstanceHealthSettingsResponse_1a80909be5664c1b59f856e28294590960)`(int32 && NewValue)` | Sets the value of CadenceSeconds using move semantics.
`public inline bool `[`IsCadenceSecondsDefaultValue`](#structFRHAPI__InstanceHealthSettingsResponse_1a7611b5c46586c2d8991c3199e8c269c4)`() const` | Returns true if CadenceSeconds matches the default value.
`public inline void `[`SetCadenceSecondsToDefault`](#structFRHAPI__InstanceHealthSettingsResponse_1af06cb65f610db85ab0fb335d4a154087)`()` | Sets the value of CadenceSeconds to its default
`public inline float & `[`GetUnhealthyHealthCheckPercentage`](#structFRHAPI__InstanceHealthSettingsResponse_1ae295249b3c292ad957f1db4701fe0d54)`()` | Gets the value of UnhealthyHealthCheckPercentage.
`public inline const float & `[`GetUnhealthyHealthCheckPercentage`](#structFRHAPI__InstanceHealthSettingsResponse_1a14a5ab78aa21cca2f88546ed9537c4e1)`() const` | Gets the value of UnhealthyHealthCheckPercentage.
`public inline void `[`SetUnhealthyHealthCheckPercentage`](#structFRHAPI__InstanceHealthSettingsResponse_1a9ab263121dd9dafa4e6ab0c832a45f64)`(const float & NewValue)` | Sets the value of UnhealthyHealthCheckPercentage.
`public inline void `[`SetUnhealthyHealthCheckPercentage`](#structFRHAPI__InstanceHealthSettingsResponse_1ac2ade9ce0fe3ee109af198ae521c192f)`(float && NewValue)` | Sets the value of UnhealthyHealthCheckPercentage using move semantics.
`public inline int32 & `[`GetMissedChecksBeforeUnknown`](#structFRHAPI__InstanceHealthSettingsResponse_1a721c75c6b7354320142c84cbf7e7e6c8)`()` | Gets the value of MissedChecksBeforeUnknown.
`public inline const int32 & `[`GetMissedChecksBeforeUnknown`](#structFRHAPI__InstanceHealthSettingsResponse_1aaaec307c7fce2ffe10051b9be211c315)`() const` | Gets the value of MissedChecksBeforeUnknown.
`public inline void `[`SetMissedChecksBeforeUnknown`](#structFRHAPI__InstanceHealthSettingsResponse_1adb3d870f99ba84c90d3ff907acd7adb6)`(const int32 & NewValue)` | Sets the value of MissedChecksBeforeUnknown.
`public inline void `[`SetMissedChecksBeforeUnknown`](#structFRHAPI__InstanceHealthSettingsResponse_1a997f29cc7794297ace1ed0c19b53ef09)`(int32 && NewValue)` | Sets the value of MissedChecksBeforeUnknown using move semantics.
`public inline bool `[`IsMissedChecksBeforeUnknownDefaultValue`](#structFRHAPI__InstanceHealthSettingsResponse_1ac5c50dad723924530c69a0ea7166fcc3)`() const` | Returns true if MissedChecksBeforeUnknown matches the default value.
`public inline void `[`SetMissedChecksBeforeUnknownToDefault`](#structFRHAPI__InstanceHealthSettingsResponse_1a8664689c37913f913401736f03a9df95)`()` | Sets the value of MissedChecksBeforeUnknown to its default

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

#### `public inline int32 & `[`GetCadenceSeconds`](#structFRHAPI__InstanceHealthSettingsResponse_1ad89ce09545f796d57a6bd18eb3546a76)`()` <a id="structFRHAPI__InstanceHealthSettingsResponse_1ad89ce09545f796d57a6bd18eb3546a76"></a>

Gets the value of CadenceSeconds.

#### `public inline const int32 & `[`GetCadenceSeconds`](#structFRHAPI__InstanceHealthSettingsResponse_1a6431bd6f5a8f9b77682b1fc0db3f5788)`() const` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a6431bd6f5a8f9b77682b1fc0db3f5788"></a>

Gets the value of CadenceSeconds.

#### `public inline void `[`SetCadenceSeconds`](#structFRHAPI__InstanceHealthSettingsResponse_1ad309c1a1ebd7872ac5242a2b708ebd65)`(const int32 & NewValue)` <a id="structFRHAPI__InstanceHealthSettingsResponse_1ad309c1a1ebd7872ac5242a2b708ebd65"></a>

Sets the value of CadenceSeconds.

#### `public inline void `[`SetCadenceSeconds`](#structFRHAPI__InstanceHealthSettingsResponse_1a80909be5664c1b59f856e28294590960)`(int32 && NewValue)` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a80909be5664c1b59f856e28294590960"></a>

Sets the value of CadenceSeconds using move semantics.

#### `public inline bool `[`IsCadenceSecondsDefaultValue`](#structFRHAPI__InstanceHealthSettingsResponse_1a7611b5c46586c2d8991c3199e8c269c4)`() const` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a7611b5c46586c2d8991c3199e8c269c4"></a>

Returns true if CadenceSeconds matches the default value.

#### `public inline void `[`SetCadenceSecondsToDefault`](#structFRHAPI__InstanceHealthSettingsResponse_1af06cb65f610db85ab0fb335d4a154087)`()` <a id="structFRHAPI__InstanceHealthSettingsResponse_1af06cb65f610db85ab0fb335d4a154087"></a>

Sets the value of CadenceSeconds to its default

#### `public inline float & `[`GetUnhealthyHealthCheckPercentage`](#structFRHAPI__InstanceHealthSettingsResponse_1ae295249b3c292ad957f1db4701fe0d54)`()` <a id="structFRHAPI__InstanceHealthSettingsResponse_1ae295249b3c292ad957f1db4701fe0d54"></a>

Gets the value of UnhealthyHealthCheckPercentage.

#### `public inline const float & `[`GetUnhealthyHealthCheckPercentage`](#structFRHAPI__InstanceHealthSettingsResponse_1a14a5ab78aa21cca2f88546ed9537c4e1)`() const` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a14a5ab78aa21cca2f88546ed9537c4e1"></a>

Gets the value of UnhealthyHealthCheckPercentage.

#### `public inline void `[`SetUnhealthyHealthCheckPercentage`](#structFRHAPI__InstanceHealthSettingsResponse_1a9ab263121dd9dafa4e6ab0c832a45f64)`(const float & NewValue)` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a9ab263121dd9dafa4e6ab0c832a45f64"></a>

Sets the value of UnhealthyHealthCheckPercentage.

#### `public inline void `[`SetUnhealthyHealthCheckPercentage`](#structFRHAPI__InstanceHealthSettingsResponse_1ac2ade9ce0fe3ee109af198ae521c192f)`(float && NewValue)` <a id="structFRHAPI__InstanceHealthSettingsResponse_1ac2ade9ce0fe3ee109af198ae521c192f"></a>

Sets the value of UnhealthyHealthCheckPercentage using move semantics.

#### `public inline int32 & `[`GetMissedChecksBeforeUnknown`](#structFRHAPI__InstanceHealthSettingsResponse_1a721c75c6b7354320142c84cbf7e7e6c8)`()` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a721c75c6b7354320142c84cbf7e7e6c8"></a>

Gets the value of MissedChecksBeforeUnknown.

#### `public inline const int32 & `[`GetMissedChecksBeforeUnknown`](#structFRHAPI__InstanceHealthSettingsResponse_1aaaec307c7fce2ffe10051b9be211c315)`() const` <a id="structFRHAPI__InstanceHealthSettingsResponse_1aaaec307c7fce2ffe10051b9be211c315"></a>

Gets the value of MissedChecksBeforeUnknown.

#### `public inline void `[`SetMissedChecksBeforeUnknown`](#structFRHAPI__InstanceHealthSettingsResponse_1adb3d870f99ba84c90d3ff907acd7adb6)`(const int32 & NewValue)` <a id="structFRHAPI__InstanceHealthSettingsResponse_1adb3d870f99ba84c90d3ff907acd7adb6"></a>

Sets the value of MissedChecksBeforeUnknown.

#### `public inline void `[`SetMissedChecksBeforeUnknown`](#structFRHAPI__InstanceHealthSettingsResponse_1a997f29cc7794297ace1ed0c19b53ef09)`(int32 && NewValue)` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a997f29cc7794297ace1ed0c19b53ef09"></a>

Sets the value of MissedChecksBeforeUnknown using move semantics.

#### `public inline bool `[`IsMissedChecksBeforeUnknownDefaultValue`](#structFRHAPI__InstanceHealthSettingsResponse_1ac5c50dad723924530c69a0ea7166fcc3)`() const` <a id="structFRHAPI__InstanceHealthSettingsResponse_1ac5c50dad723924530c69a0ea7166fcc3"></a>

Returns true if MissedChecksBeforeUnknown matches the default value.

#### `public inline void `[`SetMissedChecksBeforeUnknownToDefault`](#structFRHAPI__InstanceHealthSettingsResponse_1a8664689c37913f913401736f03a9df95)`()` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a8664689c37913f913401736f03a9df95"></a>

Sets the value of MissedChecksBeforeUnknown to its default

