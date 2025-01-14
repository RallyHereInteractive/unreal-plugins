---
title: RHAPI_AdOpportunity
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_AdOpportunity`](#structFRHAPI__AdOpportunity) | 

## struct `FRHAPI_AdOpportunity` <a id="structFRHAPI__AdOpportunity"></a>

```
struct FRHAPI_AdOpportunity
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`AdUrl`](#structFRHAPI__AdOpportunity_1ab2196c8bbb55e7f99dcbdbefbe159761) | The URL to the ad.
`public int32 `[`Seconds`](#structFRHAPI__AdOpportunity_1ad3fcac6b407583b0eff0b79eca7062f2) | The number of seconds the ad is.
`public FString `[`OpportunityId`](#structFRHAPI__AdOpportunity_1a08262c81d1b61b8000582e45c4b54049) | The ID of the ad opportunity.
`public virtual bool `[`FromJson`](#structFRHAPI__AdOpportunity_1a3ad321b7b639f2f168664c3c9e1232d9)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__AdOpportunity_1a15e0e0ce190cd9e710a8b2a745d724e9)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetAdUrl`](#structFRHAPI__AdOpportunity_1a73baebde8db2d2af58dfcd6eb84718ca)`()` | Gets the value of AdUrl.
`public inline const FString & `[`GetAdUrl`](#structFRHAPI__AdOpportunity_1a75d7fe0f1835af39e2f31416a6d7b1c8)`() const` | Gets the value of AdUrl.
`public inline void `[`SetAdUrl`](#structFRHAPI__AdOpportunity_1a24737eca64f56436fb3aeaf4b918a4cf)`(const FString & NewValue)` | Sets the value of AdUrl.
`public inline void `[`SetAdUrl`](#structFRHAPI__AdOpportunity_1a4a108d1a88addd76146abb147d108fa0)`(FString && NewValue)` | Sets the value of AdUrl using move semantics.
`public inline int32 & `[`GetSeconds`](#structFRHAPI__AdOpportunity_1ac6701c567d7fa8386c9f195fb79dcc2e)`()` | Gets the value of Seconds.
`public inline const int32 & `[`GetSeconds`](#structFRHAPI__AdOpportunity_1a8d203915350a2aca8737227b82a31cdf)`() const` | Gets the value of Seconds.
`public inline void `[`SetSeconds`](#structFRHAPI__AdOpportunity_1acc657d0d7b6df7335d24fc807c7aebe1)`(const int32 & NewValue)` | Sets the value of Seconds.
`public inline void `[`SetSeconds`](#structFRHAPI__AdOpportunity_1ae72d74fad0d91b7cb51a9683010a1833)`(int32 && NewValue)` | Sets the value of Seconds using move semantics.
`public inline bool `[`IsSecondsDefaultValue`](#structFRHAPI__AdOpportunity_1a9e54ef7649ae8449e4b91140e44019cc)`() const` | Returns true if Seconds matches the default value.
`public inline void `[`SetSecondsToDefault`](#structFRHAPI__AdOpportunity_1ad114b28f826eab6f93f6fb78fc405714)`()` | Sets the value of Seconds to its default
`public inline FString & `[`GetOpportunityId`](#structFRHAPI__AdOpportunity_1a58eecbf0c51e9e1076abc5e6d8e3d233)`()` | Gets the value of OpportunityId.
`public inline const FString & `[`GetOpportunityId`](#structFRHAPI__AdOpportunity_1a5e8bdde2882dcc712f69393aa269443b)`() const` | Gets the value of OpportunityId.
`public inline void `[`SetOpportunityId`](#structFRHAPI__AdOpportunity_1a85c275760b0d78e1327247914d7e03e7)`(const FString & NewValue)` | Sets the value of OpportunityId.
`public inline void `[`SetOpportunityId`](#structFRHAPI__AdOpportunity_1a50b81c758d9391340e07a6ec1fe80aa7)`(FString && NewValue)` | Sets the value of OpportunityId using move semantics.

### Members

#### `public FString `[`AdUrl`](#structFRHAPI__AdOpportunity_1ab2196c8bbb55e7f99dcbdbefbe159761) <a id="structFRHAPI__AdOpportunity_1ab2196c8bbb55e7f99dcbdbefbe159761"></a>

The URL to the ad.

#### `public int32 `[`Seconds`](#structFRHAPI__AdOpportunity_1ad3fcac6b407583b0eff0b79eca7062f2) <a id="structFRHAPI__AdOpportunity_1ad3fcac6b407583b0eff0b79eca7062f2"></a>

The number of seconds the ad is.

#### `public FString `[`OpportunityId`](#structFRHAPI__AdOpportunity_1a08262c81d1b61b8000582e45c4b54049) <a id="structFRHAPI__AdOpportunity_1a08262c81d1b61b8000582e45c4b54049"></a>

The ID of the ad opportunity.

#### `public virtual bool `[`FromJson`](#structFRHAPI__AdOpportunity_1a3ad321b7b639f2f168664c3c9e1232d9)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__AdOpportunity_1a3ad321b7b639f2f168664c3c9e1232d9"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__AdOpportunity_1a15e0e0ce190cd9e710a8b2a745d724e9)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__AdOpportunity_1a15e0e0ce190cd9e710a8b2a745d724e9"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetAdUrl`](#structFRHAPI__AdOpportunity_1a73baebde8db2d2af58dfcd6eb84718ca)`()` <a id="structFRHAPI__AdOpportunity_1a73baebde8db2d2af58dfcd6eb84718ca"></a>

Gets the value of AdUrl.

#### `public inline const FString & `[`GetAdUrl`](#structFRHAPI__AdOpportunity_1a75d7fe0f1835af39e2f31416a6d7b1c8)`() const` <a id="structFRHAPI__AdOpportunity_1a75d7fe0f1835af39e2f31416a6d7b1c8"></a>

Gets the value of AdUrl.

#### `public inline void `[`SetAdUrl`](#structFRHAPI__AdOpportunity_1a24737eca64f56436fb3aeaf4b918a4cf)`(const FString & NewValue)` <a id="structFRHAPI__AdOpportunity_1a24737eca64f56436fb3aeaf4b918a4cf"></a>

Sets the value of AdUrl.

#### `public inline void `[`SetAdUrl`](#structFRHAPI__AdOpportunity_1a4a108d1a88addd76146abb147d108fa0)`(FString && NewValue)` <a id="structFRHAPI__AdOpportunity_1a4a108d1a88addd76146abb147d108fa0"></a>

Sets the value of AdUrl using move semantics.

#### `public inline int32 & `[`GetSeconds`](#structFRHAPI__AdOpportunity_1ac6701c567d7fa8386c9f195fb79dcc2e)`()` <a id="structFRHAPI__AdOpportunity_1ac6701c567d7fa8386c9f195fb79dcc2e"></a>

Gets the value of Seconds.

#### `public inline const int32 & `[`GetSeconds`](#structFRHAPI__AdOpportunity_1a8d203915350a2aca8737227b82a31cdf)`() const` <a id="structFRHAPI__AdOpportunity_1a8d203915350a2aca8737227b82a31cdf"></a>

Gets the value of Seconds.

#### `public inline void `[`SetSeconds`](#structFRHAPI__AdOpportunity_1acc657d0d7b6df7335d24fc807c7aebe1)`(const int32 & NewValue)` <a id="structFRHAPI__AdOpportunity_1acc657d0d7b6df7335d24fc807c7aebe1"></a>

Sets the value of Seconds.

#### `public inline void `[`SetSeconds`](#structFRHAPI__AdOpportunity_1ae72d74fad0d91b7cb51a9683010a1833)`(int32 && NewValue)` <a id="structFRHAPI__AdOpportunity_1ae72d74fad0d91b7cb51a9683010a1833"></a>

Sets the value of Seconds using move semantics.

#### `public inline bool `[`IsSecondsDefaultValue`](#structFRHAPI__AdOpportunity_1a9e54ef7649ae8449e4b91140e44019cc)`() const` <a id="structFRHAPI__AdOpportunity_1a9e54ef7649ae8449e4b91140e44019cc"></a>

Returns true if Seconds matches the default value.

#### `public inline void `[`SetSecondsToDefault`](#structFRHAPI__AdOpportunity_1ad114b28f826eab6f93f6fb78fc405714)`()` <a id="structFRHAPI__AdOpportunity_1ad114b28f826eab6f93f6fb78fc405714"></a>

Sets the value of Seconds to its default

#### `public inline FString & `[`GetOpportunityId`](#structFRHAPI__AdOpportunity_1a58eecbf0c51e9e1076abc5e6d8e3d233)`()` <a id="structFRHAPI__AdOpportunity_1a58eecbf0c51e9e1076abc5e6d8e3d233"></a>

Gets the value of OpportunityId.

#### `public inline const FString & `[`GetOpportunityId`](#structFRHAPI__AdOpportunity_1a5e8bdde2882dcc712f69393aa269443b)`() const` <a id="structFRHAPI__AdOpportunity_1a5e8bdde2882dcc712f69393aa269443b"></a>

Gets the value of OpportunityId.

#### `public inline void `[`SetOpportunityId`](#structFRHAPI__AdOpportunity_1a85c275760b0d78e1327247914d7e03e7)`(const FString & NewValue)` <a id="structFRHAPI__AdOpportunity_1a85c275760b0d78e1327247914d7e03e7"></a>

Sets the value of OpportunityId.

#### `public inline void `[`SetOpportunityId`](#structFRHAPI__AdOpportunity_1a50b81c758d9391340e07a6ec1fe80aa7)`(FString && NewValue)` <a id="structFRHAPI__AdOpportunity_1a50b81c758d9391340e07a6ec1fe80aa7"></a>

Sets the value of OpportunityId using move semantics.

