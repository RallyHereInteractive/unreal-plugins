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
`public inline float & `[`GetTimeout`](#structFRHAPI__BackfillSettingsResponse_1a3518c0da6d461460a2e2bbab9b2bd405)`()` | Gets the value of Timeout.
`public inline const float & `[`GetTimeout`](#structFRHAPI__BackfillSettingsResponse_1ac59ef1f23246bf333f9aab9ebc2c660a)`() const` | Gets the value of Timeout.
`public inline void `[`SetTimeout`](#structFRHAPI__BackfillSettingsResponse_1afeb2fc798d52bcde3c6021a564e36d85)`(const float & NewValue)` | Sets the value of Timeout.
`public inline void `[`SetTimeout`](#structFRHAPI__BackfillSettingsResponse_1ae3981a6b345312f27351e9ecec552ca0)`(float && NewValue)` | Sets the value of Timeout using move semantics.

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

#### `public inline float & `[`GetTimeout`](#structFRHAPI__BackfillSettingsResponse_1a3518c0da6d461460a2e2bbab9b2bd405)`()` <a id="structFRHAPI__BackfillSettingsResponse_1a3518c0da6d461460a2e2bbab9b2bd405"></a>

Gets the value of Timeout.

#### `public inline const float & `[`GetTimeout`](#structFRHAPI__BackfillSettingsResponse_1ac59ef1f23246bf333f9aab9ebc2c660a)`() const` <a id="structFRHAPI__BackfillSettingsResponse_1ac59ef1f23246bf333f9aab9ebc2c660a"></a>

Gets the value of Timeout.

#### `public inline void `[`SetTimeout`](#structFRHAPI__BackfillSettingsResponse_1afeb2fc798d52bcde3c6021a564e36d85)`(const float & NewValue)` <a id="structFRHAPI__BackfillSettingsResponse_1afeb2fc798d52bcde3c6021a564e36d85"></a>

Sets the value of Timeout.

#### `public inline void `[`SetTimeout`](#structFRHAPI__BackfillSettingsResponse_1ae3981a6b345312f27351e9ecec552ca0)`(float && NewValue)` <a id="structFRHAPI__BackfillSettingsResponse_1ae3981a6b345312f27351e9ecec552ca0"></a>

Sets the value of Timeout using move semantics.

