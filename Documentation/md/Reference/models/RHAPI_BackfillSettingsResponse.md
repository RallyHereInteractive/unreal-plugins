---
title: RHAPI_BackfillSettingsResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_BackfillSettingsResponse`](#structFRHAPI__BackfillSettingsResponse) | 

## struct `FRHAPI_BackfillSettingsResponse` <a id="structFRHAPI__BackfillSettingsResponse"></a>

```
struct FRHAPI_BackfillSettingsResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public float `[`Timeout`](#structFRHAPI__BackfillSettingsResponse_1abe93a6bdf962bab45bb4767a775b8849) | How often we expect backfill heartbeats to occur.
`public virtual bool `[`FromJson`](#structFRHAPI__BackfillSettingsResponse_1ae07788aab320f0618ce003a68673c9ab)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BackfillSettingsResponse_1a2405cc804c821bc2b0527685b20b9124)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE float & `[`GetTimeout`](#structFRHAPI__BackfillSettingsResponse_1a4e9e0e531186a7729800e87177aa3e23)`()` | Gets the value of Timeout.
`public inline FORCEINLINE const float & `[`GetTimeout`](#structFRHAPI__BackfillSettingsResponse_1aed456ec0b1ad0597d4575567bd34b018)`() const` | Gets the value of Timeout.
`public inline FORCEINLINE void `[`SetTimeout`](#structFRHAPI__BackfillSettingsResponse_1aec71ebce7292d3477447fc7e1e971193)`(const float & NewValue)` | Sets the value of Timeout.
`public inline FORCEINLINE void `[`SetTimeout`](#structFRHAPI__BackfillSettingsResponse_1a8ad2563cffca2905c9f6916015c6889e)`(float && NewValue)` | Sets the value of Timeout using move semantics.

### Members

#### `public float `[`Timeout`](#structFRHAPI__BackfillSettingsResponse_1abe93a6bdf962bab45bb4767a775b8849) <a id="structFRHAPI__BackfillSettingsResponse_1abe93a6bdf962bab45bb4767a775b8849"></a>

How often we expect backfill heartbeats to occur.

#### `public virtual bool `[`FromJson`](#structFRHAPI__BackfillSettingsResponse_1ae07788aab320f0618ce003a68673c9ab)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BackfillSettingsResponse_1ae07788aab320f0618ce003a68673c9ab"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__BackfillSettingsResponse_1a2405cc804c821bc2b0527685b20b9124)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__BackfillSettingsResponse_1a2405cc804c821bc2b0527685b20b9124"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE float & `[`GetTimeout`](#structFRHAPI__BackfillSettingsResponse_1a4e9e0e531186a7729800e87177aa3e23)`()` <a id="structFRHAPI__BackfillSettingsResponse_1a4e9e0e531186a7729800e87177aa3e23"></a>

Gets the value of Timeout.

#### `public inline FORCEINLINE const float & `[`GetTimeout`](#structFRHAPI__BackfillSettingsResponse_1aed456ec0b1ad0597d4575567bd34b018)`() const` <a id="structFRHAPI__BackfillSettingsResponse_1aed456ec0b1ad0597d4575567bd34b018"></a>

Gets the value of Timeout.

#### `public inline FORCEINLINE void `[`SetTimeout`](#structFRHAPI__BackfillSettingsResponse_1aec71ebce7292d3477447fc7e1e971193)`(const float & NewValue)` <a id="structFRHAPI__BackfillSettingsResponse_1aec71ebce7292d3477447fc7e1e971193"></a>

Sets the value of Timeout.

#### `public inline FORCEINLINE void `[`SetTimeout`](#structFRHAPI__BackfillSettingsResponse_1a8ad2563cffca2905c9f6916015c6889e)`(float && NewValue)` <a id="structFRHAPI__BackfillSettingsResponse_1a8ad2563cffca2905c9f6916015c6889e"></a>

Sets the value of Timeout using move semantics.

