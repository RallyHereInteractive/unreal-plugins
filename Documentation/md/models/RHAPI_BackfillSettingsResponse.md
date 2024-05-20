# RHAPI_BackfillSettingsResponse <a id="group__RHAPI__BackfillSettingsResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_BackfillSettingsResponse`](#structFRHAPI__BackfillSettingsResponse) | 

## struct `FRHAPI_BackfillSettingsResponse` <a id="structFRHAPI__BackfillSettingsResponse"></a>

```
struct FRHAPI_BackfillSettingsResponse
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public float `[`Timeout`](#structFRHAPI__BackfillSettingsResponse_1abe93a6bdf962bab45bb4767a775b8849) | How often we expect backfill heartbeats to occur.
`public virtual bool `[`FromJson`](#structFRHAPI__BackfillSettingsResponse_1ae24dfc7555827dcaf381240f4ce6729c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BackfillSettingsResponse_1a8bc2efddc2eeccb95e310cd81d818b1a)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline float & `[`GetTimeout`](#structFRHAPI__BackfillSettingsResponse_1ac079c953b4903b9cffc824a5672d01c1)`()` | Gets the value of Timeout.
`public inline const float & `[`GetTimeout`](#structFRHAPI__BackfillSettingsResponse_1ad8af373f0c08c40fe4bd1dc8a7ac81a7)`() const` | Gets the value of Timeout.
`public inline void `[`SetTimeout`](#structFRHAPI__BackfillSettingsResponse_1ad12bb0eb9309bce3b1a4219d916842bf)`(float NewValue)` | Sets the value of Timeout.

#### Members

#### `public float `[`Timeout`](#structFRHAPI__BackfillSettingsResponse_1abe93a6bdf962bab45bb4767a775b8849) <a id="structFRHAPI__BackfillSettingsResponse_1abe93a6bdf962bab45bb4767a775b8849"></a>

How often we expect backfill heartbeats to occur.

#### `public virtual bool `[`FromJson`](#structFRHAPI__BackfillSettingsResponse_1ae24dfc7555827dcaf381240f4ce6729c)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BackfillSettingsResponse_1ae24dfc7555827dcaf381240f4ce6729c"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__BackfillSettingsResponse_1a8bc2efddc2eeccb95e310cd81d818b1a)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__BackfillSettingsResponse_1a8bc2efddc2eeccb95e310cd81d818b1a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline float & `[`GetTimeout`](#structFRHAPI__BackfillSettingsResponse_1ac079c953b4903b9cffc824a5672d01c1)`()` <a id="structFRHAPI__BackfillSettingsResponse_1ac079c953b4903b9cffc824a5672d01c1"></a>

Gets the value of Timeout.

#### `public inline const float & `[`GetTimeout`](#structFRHAPI__BackfillSettingsResponse_1ad8af373f0c08c40fe4bd1dc8a7ac81a7)`() const` <a id="structFRHAPI__BackfillSettingsResponse_1ad8af373f0c08c40fe4bd1dc8a7ac81a7"></a>

Gets the value of Timeout.

#### `public inline void `[`SetTimeout`](#structFRHAPI__BackfillSettingsResponse_1ad12bb0eb9309bce3b1a4219d916842bf)`(float NewValue)` <a id="structFRHAPI__BackfillSettingsResponse_1ad12bb0eb9309bce3b1a4219d916842bf"></a>

Sets the value of Timeout.

