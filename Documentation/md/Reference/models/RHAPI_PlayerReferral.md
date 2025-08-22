---
title: RHAPI_PlayerReferral
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerReferral`](#structFRHAPI__PlayerReferral) | Represents a player referral relationship where one player was referred by another.

## struct `FRHAPI_PlayerReferral` <a id="structFRHAPI__PlayerReferral"></a>

```
struct FRHAPI_PlayerReferral
  : public FRHAPI_Model
```

Represents a player referral relationship where one player was referred by another.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`ReferreePlayerUuid`](#structFRHAPI__PlayerReferral_1a34d5cf07337d62c31ac10a04ac02f5f3) | 
`public FGuid `[`ReferrerPlayerUuid`](#structFRHAPI__PlayerReferral_1a905c954f06291e665f8e3969488177a5) | 
`public FDateTime `[`CreatedDatetime`](#structFRHAPI__PlayerReferral_1a8c52cdf389d567341654b8835e641e92) | 
`public FDateTime `[`LastModifiedTimestamp`](#structFRHAPI__PlayerReferral_1a48816bbc61307481f3fdb15e5e5321d4) | 
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerReferral_1abebeb0c7affa26a9de43ed7e3b3bea9d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerReferral_1a27e432ccd6fa8bca79075579cdaff64f)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetReferreePlayerUuid`](#structFRHAPI__PlayerReferral_1a2bcd83fc32edd89fb9046877a61ece37)`()` | Gets the value of ReferreePlayerUuid.
`public inline FORCEINLINE const FGuid & `[`GetReferreePlayerUuid`](#structFRHAPI__PlayerReferral_1a6f92704b92e52a999b36a33d4c253ca4)`() const` | Gets the value of ReferreePlayerUuid.
`public inline FORCEINLINE void `[`SetReferreePlayerUuid`](#structFRHAPI__PlayerReferral_1a89367fd2d01e7fdfeac5d06fefabfb6e)`(const FGuid & NewValue)` | Sets the value of ReferreePlayerUuid.
`public inline FORCEINLINE void `[`SetReferreePlayerUuid`](#structFRHAPI__PlayerReferral_1a5658e8620101341f1053bce39d6ffe31)`(FGuid && NewValue)` | Sets the value of ReferreePlayerUuid using move semantics.
`public inline FORCEINLINE FGuid & `[`GetReferrerPlayerUuid`](#structFRHAPI__PlayerReferral_1ab5aaab0fbd4962134a8accc9e56becb8)`()` | Gets the value of ReferrerPlayerUuid.
`public inline FORCEINLINE const FGuid & `[`GetReferrerPlayerUuid`](#structFRHAPI__PlayerReferral_1a9d0490370dd451b44263d72757c75d5f)`() const` | Gets the value of ReferrerPlayerUuid.
`public inline FORCEINLINE void `[`SetReferrerPlayerUuid`](#structFRHAPI__PlayerReferral_1a69b1d9a0e6414fa9b1f8fe64b0f1a1d3)`(const FGuid & NewValue)` | Sets the value of ReferrerPlayerUuid.
`public inline FORCEINLINE void `[`SetReferrerPlayerUuid`](#structFRHAPI__PlayerReferral_1a8171cf0fa585334141c291d9b19a5d63)`(FGuid && NewValue)` | Sets the value of ReferrerPlayerUuid using move semantics.
`public inline FORCEINLINE FDateTime & `[`GetCreatedDatetime`](#structFRHAPI__PlayerReferral_1aa6a386de9d157e7abd5cc09fc09c7024)`()` | Gets the value of CreatedDatetime.
`public inline FORCEINLINE const FDateTime & `[`GetCreatedDatetime`](#structFRHAPI__PlayerReferral_1a29e1e66c45d209f6d89435fb808acb47)`() const` | Gets the value of CreatedDatetime.
`public inline FORCEINLINE void `[`SetCreatedDatetime`](#structFRHAPI__PlayerReferral_1a4be0edded09633601c3c26c667c73fa8)`(const FDateTime & NewValue)` | Sets the value of CreatedDatetime.
`public inline FORCEINLINE void `[`SetCreatedDatetime`](#structFRHAPI__PlayerReferral_1aa73bcbb8a5733b3854b61d5a3b0ca46d)`(FDateTime && NewValue)` | Sets the value of CreatedDatetime using move semantics.
`public inline FORCEINLINE FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__PlayerReferral_1ae1c8929bdfce631b39d41ce0439306b9)`()` | Gets the value of LastModifiedTimestamp.
`public inline FORCEINLINE const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__PlayerReferral_1afb26871a1d9c4760f0c8f70de7dbf77a)`() const` | Gets the value of LastModifiedTimestamp.
`public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__PlayerReferral_1ae2ccc14aa47ef923a6fe93eddcb5670e)`(const FDateTime & NewValue)` | Sets the value of LastModifiedTimestamp.
`public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__PlayerReferral_1a877180974464e04e0872d3f3062a27b4)`(FDateTime && NewValue)` | Sets the value of LastModifiedTimestamp using move semantics.

### Members

#### `public FGuid `[`ReferreePlayerUuid`](#structFRHAPI__PlayerReferral_1a34d5cf07337d62c31ac10a04ac02f5f3) <a id="structFRHAPI__PlayerReferral_1a34d5cf07337d62c31ac10a04ac02f5f3"></a>

#### `public FGuid `[`ReferrerPlayerUuid`](#structFRHAPI__PlayerReferral_1a905c954f06291e665f8e3969488177a5) <a id="structFRHAPI__PlayerReferral_1a905c954f06291e665f8e3969488177a5"></a>

#### `public FDateTime `[`CreatedDatetime`](#structFRHAPI__PlayerReferral_1a8c52cdf389d567341654b8835e641e92) <a id="structFRHAPI__PlayerReferral_1a8c52cdf389d567341654b8835e641e92"></a>

#### `public FDateTime `[`LastModifiedTimestamp`](#structFRHAPI__PlayerReferral_1a48816bbc61307481f3fdb15e5e5321d4) <a id="structFRHAPI__PlayerReferral_1a48816bbc61307481f3fdb15e5e5321d4"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerReferral_1abebeb0c7affa26a9de43ed7e3b3bea9d)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerReferral_1abebeb0c7affa26a9de43ed7e3b3bea9d"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerReferral_1a27e432ccd6fa8bca79075579cdaff64f)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerReferral_1a27e432ccd6fa8bca79075579cdaff64f"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetReferreePlayerUuid`](#structFRHAPI__PlayerReferral_1a2bcd83fc32edd89fb9046877a61ece37)`()` <a id="structFRHAPI__PlayerReferral_1a2bcd83fc32edd89fb9046877a61ece37"></a>

Gets the value of ReferreePlayerUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetReferreePlayerUuid`](#structFRHAPI__PlayerReferral_1a6f92704b92e52a999b36a33d4c253ca4)`() const` <a id="structFRHAPI__PlayerReferral_1a6f92704b92e52a999b36a33d4c253ca4"></a>

Gets the value of ReferreePlayerUuid.

#### `public inline FORCEINLINE void `[`SetReferreePlayerUuid`](#structFRHAPI__PlayerReferral_1a89367fd2d01e7fdfeac5d06fefabfb6e)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerReferral_1a89367fd2d01e7fdfeac5d06fefabfb6e"></a>

Sets the value of ReferreePlayerUuid.

#### `public inline FORCEINLINE void `[`SetReferreePlayerUuid`](#structFRHAPI__PlayerReferral_1a5658e8620101341f1053bce39d6ffe31)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerReferral_1a5658e8620101341f1053bce39d6ffe31"></a>

Sets the value of ReferreePlayerUuid using move semantics.

#### `public inline FORCEINLINE FGuid & `[`GetReferrerPlayerUuid`](#structFRHAPI__PlayerReferral_1ab5aaab0fbd4962134a8accc9e56becb8)`()` <a id="structFRHAPI__PlayerReferral_1ab5aaab0fbd4962134a8accc9e56becb8"></a>

Gets the value of ReferrerPlayerUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetReferrerPlayerUuid`](#structFRHAPI__PlayerReferral_1a9d0490370dd451b44263d72757c75d5f)`() const` <a id="structFRHAPI__PlayerReferral_1a9d0490370dd451b44263d72757c75d5f"></a>

Gets the value of ReferrerPlayerUuid.

#### `public inline FORCEINLINE void `[`SetReferrerPlayerUuid`](#structFRHAPI__PlayerReferral_1a69b1d9a0e6414fa9b1f8fe64b0f1a1d3)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerReferral_1a69b1d9a0e6414fa9b1f8fe64b0f1a1d3"></a>

Sets the value of ReferrerPlayerUuid.

#### `public inline FORCEINLINE void `[`SetReferrerPlayerUuid`](#structFRHAPI__PlayerReferral_1a8171cf0fa585334141c291d9b19a5d63)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerReferral_1a8171cf0fa585334141c291d9b19a5d63"></a>

Sets the value of ReferrerPlayerUuid using move semantics.

#### `public inline FORCEINLINE FDateTime & `[`GetCreatedDatetime`](#structFRHAPI__PlayerReferral_1aa6a386de9d157e7abd5cc09fc09c7024)`()` <a id="structFRHAPI__PlayerReferral_1aa6a386de9d157e7abd5cc09fc09c7024"></a>

Gets the value of CreatedDatetime.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreatedDatetime`](#structFRHAPI__PlayerReferral_1a29e1e66c45d209f6d89435fb808acb47)`() const` <a id="structFRHAPI__PlayerReferral_1a29e1e66c45d209f6d89435fb808acb47"></a>

Gets the value of CreatedDatetime.

#### `public inline FORCEINLINE void `[`SetCreatedDatetime`](#structFRHAPI__PlayerReferral_1a4be0edded09633601c3c26c667c73fa8)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerReferral_1a4be0edded09633601c3c26c667c73fa8"></a>

Sets the value of CreatedDatetime.

#### `public inline FORCEINLINE void `[`SetCreatedDatetime`](#structFRHAPI__PlayerReferral_1aa73bcbb8a5733b3854b61d5a3b0ca46d)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerReferral_1aa73bcbb8a5733b3854b61d5a3b0ca46d"></a>

Sets the value of CreatedDatetime using move semantics.

#### `public inline FORCEINLINE FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__PlayerReferral_1ae1c8929bdfce631b39d41ce0439306b9)`()` <a id="structFRHAPI__PlayerReferral_1ae1c8929bdfce631b39d41ce0439306b9"></a>

Gets the value of LastModifiedTimestamp.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__PlayerReferral_1afb26871a1d9c4760f0c8f70de7dbf77a)`() const` <a id="structFRHAPI__PlayerReferral_1afb26871a1d9c4760f0c8f70de7dbf77a"></a>

Gets the value of LastModifiedTimestamp.

#### `public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__PlayerReferral_1ae2ccc14aa47ef923a6fe93eddcb5670e)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerReferral_1ae2ccc14aa47ef923a6fe93eddcb5670e"></a>

Sets the value of LastModifiedTimestamp.

#### `public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__PlayerReferral_1a877180974464e04e0872d3f3062a27b4)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerReferral_1a877180974464e04e0872d3f3062a27b4"></a>

Sets the value of LastModifiedTimestamp using move semantics.

