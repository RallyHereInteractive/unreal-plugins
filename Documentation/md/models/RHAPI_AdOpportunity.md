# group `RHAPI_AdOpportunity` <a id="group__RHAPI__AdOpportunity"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__AdOpportunity_1a021b3507f5edc302686d770788269419)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__AdOpportunity_1a4a1100d7ce89db79898d59dc8017effd)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetAdUrl`](#structFRHAPI__AdOpportunity_1a8dcf652a8c0b7ab48dd3c39f80628aab)`()` | Gets the value of AdUrl.
`public inline const FString & `[`GetAdUrl`](#structFRHAPI__AdOpportunity_1a5e81eba4f2fc85ab5c798c0d0e4b0b25)`() const` | Gets the value of AdUrl.
`public inline void `[`SetAdUrl`](#structFRHAPI__AdOpportunity_1a24737eca64f56436fb3aeaf4b918a4cf)`(const FString & NewValue)` | Sets the value of AdUrl.
`public inline void `[`SetAdUrl`](#structFRHAPI__AdOpportunity_1a4a108d1a88addd76146abb147d108fa0)`(FString && NewValue)` | Sets the value of AdUrl using move semantics.
`public inline int32 & `[`GetSeconds`](#structFRHAPI__AdOpportunity_1a81af9bc21531a9b893c63701c3a32226)`()` | Gets the value of Seconds.
`public inline const int32 & `[`GetSeconds`](#structFRHAPI__AdOpportunity_1a64f89adb2f2bc8a770256f856171edb1)`() const` | Gets the value of Seconds.
`public inline void `[`SetSeconds`](#structFRHAPI__AdOpportunity_1acc657d0d7b6df7335d24fc807c7aebe1)`(const int32 & NewValue)` | Sets the value of Seconds.
`public inline void `[`SetSeconds`](#structFRHAPI__AdOpportunity_1ae72d74fad0d91b7cb51a9683010a1833)`(int32 && NewValue)` | Sets the value of Seconds using move semantics.
`public inline bool `[`IsSecondsDefaultValue`](#structFRHAPI__AdOpportunity_1a9e54ef7649ae8449e4b91140e44019cc)`() const` | Returns true if Seconds matches the default value.
`public inline void `[`SetSecondsToDefault`](#structFRHAPI__AdOpportunity_1ad114b28f826eab6f93f6fb78fc405714)`()` | Sets the value of Seconds to its default
`public inline FString & `[`GetOpportunityId`](#structFRHAPI__AdOpportunity_1a6403415eb727e767876069dd98fd0296)`()` | Gets the value of OpportunityId.
`public inline const FString & `[`GetOpportunityId`](#structFRHAPI__AdOpportunity_1af16ec49a16ce1243bd2f250e0673d9b9)`() const` | Gets the value of OpportunityId.
`public inline void `[`SetOpportunityId`](#structFRHAPI__AdOpportunity_1a85c275760b0d78e1327247914d7e03e7)`(const FString & NewValue)` | Sets the value of OpportunityId.
`public inline void `[`SetOpportunityId`](#structFRHAPI__AdOpportunity_1a50b81c758d9391340e07a6ec1fe80aa7)`(FString && NewValue)` | Sets the value of OpportunityId using move semantics.

### Members

#### `public FString `[`AdUrl`](#structFRHAPI__AdOpportunity_1ab2196c8bbb55e7f99dcbdbefbe159761) <a id="structFRHAPI__AdOpportunity_1ab2196c8bbb55e7f99dcbdbefbe159761"></a>

The URL to the ad.

#### `public int32 `[`Seconds`](#structFRHAPI__AdOpportunity_1ad3fcac6b407583b0eff0b79eca7062f2) <a id="structFRHAPI__AdOpportunity_1ad3fcac6b407583b0eff0b79eca7062f2"></a>

The number of seconds the ad is.

#### `public FString `[`OpportunityId`](#structFRHAPI__AdOpportunity_1a08262c81d1b61b8000582e45c4b54049) <a id="structFRHAPI__AdOpportunity_1a08262c81d1b61b8000582e45c4b54049"></a>

The ID of the ad opportunity.

#### `public virtual bool `[`FromJson`](#structFRHAPI__AdOpportunity_1a021b3507f5edc302686d770788269419)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__AdOpportunity_1a021b3507f5edc302686d770788269419"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__AdOpportunity_1a4a1100d7ce89db79898d59dc8017effd)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__AdOpportunity_1a4a1100d7ce89db79898d59dc8017effd"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetAdUrl`](#structFRHAPI__AdOpportunity_1a8dcf652a8c0b7ab48dd3c39f80628aab)`()` <a id="structFRHAPI__AdOpportunity_1a8dcf652a8c0b7ab48dd3c39f80628aab"></a>

Gets the value of AdUrl.

#### `public inline const FString & `[`GetAdUrl`](#structFRHAPI__AdOpportunity_1a5e81eba4f2fc85ab5c798c0d0e4b0b25)`() const` <a id="structFRHAPI__AdOpportunity_1a5e81eba4f2fc85ab5c798c0d0e4b0b25"></a>

Gets the value of AdUrl.

#### `public inline void `[`SetAdUrl`](#structFRHAPI__AdOpportunity_1a24737eca64f56436fb3aeaf4b918a4cf)`(const FString & NewValue)` <a id="structFRHAPI__AdOpportunity_1a24737eca64f56436fb3aeaf4b918a4cf"></a>

Sets the value of AdUrl.

#### `public inline void `[`SetAdUrl`](#structFRHAPI__AdOpportunity_1a4a108d1a88addd76146abb147d108fa0)`(FString && NewValue)` <a id="structFRHAPI__AdOpportunity_1a4a108d1a88addd76146abb147d108fa0"></a>

Sets the value of AdUrl using move semantics.

#### `public inline int32 & `[`GetSeconds`](#structFRHAPI__AdOpportunity_1a81af9bc21531a9b893c63701c3a32226)`()` <a id="structFRHAPI__AdOpportunity_1a81af9bc21531a9b893c63701c3a32226"></a>

Gets the value of Seconds.

#### `public inline const int32 & `[`GetSeconds`](#structFRHAPI__AdOpportunity_1a64f89adb2f2bc8a770256f856171edb1)`() const` <a id="structFRHAPI__AdOpportunity_1a64f89adb2f2bc8a770256f856171edb1"></a>

Gets the value of Seconds.

#### `public inline void `[`SetSeconds`](#structFRHAPI__AdOpportunity_1acc657d0d7b6df7335d24fc807c7aebe1)`(const int32 & NewValue)` <a id="structFRHAPI__AdOpportunity_1acc657d0d7b6df7335d24fc807c7aebe1"></a>

Sets the value of Seconds.

#### `public inline void `[`SetSeconds`](#structFRHAPI__AdOpportunity_1ae72d74fad0d91b7cb51a9683010a1833)`(int32 && NewValue)` <a id="structFRHAPI__AdOpportunity_1ae72d74fad0d91b7cb51a9683010a1833"></a>

Sets the value of Seconds using move semantics.

#### `public inline bool `[`IsSecondsDefaultValue`](#structFRHAPI__AdOpportunity_1a9e54ef7649ae8449e4b91140e44019cc)`() const` <a id="structFRHAPI__AdOpportunity_1a9e54ef7649ae8449e4b91140e44019cc"></a>

Returns true if Seconds matches the default value.

#### `public inline void `[`SetSecondsToDefault`](#structFRHAPI__AdOpportunity_1ad114b28f826eab6f93f6fb78fc405714)`()` <a id="structFRHAPI__AdOpportunity_1ad114b28f826eab6f93f6fb78fc405714"></a>

Sets the value of Seconds to its default

#### `public inline FString & `[`GetOpportunityId`](#structFRHAPI__AdOpportunity_1a6403415eb727e767876069dd98fd0296)`()` <a id="structFRHAPI__AdOpportunity_1a6403415eb727e767876069dd98fd0296"></a>

Gets the value of OpportunityId.

#### `public inline const FString & `[`GetOpportunityId`](#structFRHAPI__AdOpportunity_1af16ec49a16ce1243bd2f250e0673d9b9)`() const` <a id="structFRHAPI__AdOpportunity_1af16ec49a16ce1243bd2f250e0673d9b9"></a>

Gets the value of OpportunityId.

#### `public inline void `[`SetOpportunityId`](#structFRHAPI__AdOpportunity_1a85c275760b0d78e1327247914d7e03e7)`(const FString & NewValue)` <a id="structFRHAPI__AdOpportunity_1a85c275760b0d78e1327247914d7e03e7"></a>

Sets the value of OpportunityId.

#### `public inline void `[`SetOpportunityId`](#structFRHAPI__AdOpportunity_1a50b81c758d9391340e07a6ec1fe80aa7)`(FString && NewValue)` <a id="structFRHAPI__AdOpportunity_1a50b81c758d9391340e07a6ec1fe80aa7"></a>

Sets the value of OpportunityId using move semantics.

