---
title: RHAPI_PostGameEventsResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PostGameEventsResponse`](#structFRHAPI__PostGameEventsResponse) | 

## struct `FRHAPI_PostGameEventsResponse` <a id="structFRHAPI__PostGameEventsResponse"></a>

```
struct FRHAPI_PostGameEventsResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`PostedEvents`](#structFRHAPI__PostGameEventsResponse_1ab14cbee3111a9f8af4d2dc4a81b91a77) | Number of events successfully posted to Event Hub.
`public TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > `[`Errors_Optional`](#structFRHAPI__PostGameEventsResponse_1a4bcd13cbbb6908fe7b3c2cd698b09b3d) | list of validation failure for each event.
`public bool `[`Errors_IsSet`](#structFRHAPI__PostGameEventsResponse_1a64e1d83ca099175ac36efd3fd0778b4f) | true if Errors_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PostGameEventsResponse_1a2dade96758fe7cd662dfb62d2d99c146)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PostGameEventsResponse_1ac259db813914b9921fa4f4bd447414a1)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetPostedEvents`](#structFRHAPI__PostGameEventsResponse_1a841c220754ebd703ad38d78aa3bb1bb1)`()` | Gets the value of PostedEvents.
`public inline const int32 & `[`GetPostedEvents`](#structFRHAPI__PostGameEventsResponse_1a83872bd0a130285b810a472faa8a36e3)`() const` | Gets the value of PostedEvents.
`public inline void `[`SetPostedEvents`](#structFRHAPI__PostGameEventsResponse_1a64844278435658b99e033b639e3a65cc)`(const int32 & NewValue)` | Sets the value of PostedEvents.
`public inline void `[`SetPostedEvents`](#structFRHAPI__PostGameEventsResponse_1a3ea085b5d38c73800b1ef512372cf713)`(int32 && NewValue)` | Sets the value of PostedEvents using move semantics.
`public inline bool `[`IsPostedEventsDefaultValue`](#structFRHAPI__PostGameEventsResponse_1a33f77ad6d36173417f8a53c402654493)`() const` | Returns true if PostedEvents matches the default value.
`public inline void `[`SetPostedEventsToDefault`](#structFRHAPI__PostGameEventsResponse_1a3f5dfe2d5d14b932b8502db6a2ca119a)`()` | Sets the value of PostedEvents to its default
`public inline TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetErrors`](#structFRHAPI__PostGameEventsResponse_1a78f771853a00c424557341500f49ba4f)`()` | Gets the value of Errors_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetErrors`](#structFRHAPI__PostGameEventsResponse_1a87812a8d28b0810620cd0e75b7a9800e)`() const` | Gets the value of Errors_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetErrors`](#structFRHAPI__PostGameEventsResponse_1a14e350b8257c829c1614fd0c78f6b704)`(const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & DefaultValue) const` | Gets the value of Errors_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetErrors`](#structFRHAPI__PostGameEventsResponse_1afdeb56eacaf89f648ca521d479fa2c23)`(TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & OutValue) const` | Fills OutValue with the value of Errors_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetErrorsOrNull`](#structFRHAPI__PostGameEventsResponse_1a26d4bd7c95770809cc2e7656c02f7ebc)`()` | Returns a pointer to Errors_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetErrorsOrNull`](#structFRHAPI__PostGameEventsResponse_1ad548ed62d6b2ac959d0c47e1bea029fd)`() const` | Returns a pointer to Errors_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetErrors`](#structFRHAPI__PostGameEventsResponse_1a6e16076b25ada896380954560c7174a9)`(const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & NewValue)` | Sets the value of Errors_Optional and also sets Errors_IsSet to true.
`public inline void `[`SetErrors`](#structFRHAPI__PostGameEventsResponse_1a68e03e76d789a236685f659d4347b830)`(TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > && NewValue)` | Sets the value of Errors_Optional and also sets Errors_IsSet to true using move semantics.
`public inline void `[`ClearErrors`](#structFRHAPI__PostGameEventsResponse_1afbb863db522201168db69a6f6c10e2af)`()` | Clears the value of Errors_Optional and sets Errors_IsSet to false.
`public inline bool `[`IsErrorsSet`](#structFRHAPI__PostGameEventsResponse_1a56fb4d3668da5ee77d3cb4233eb63b0f)`() const` | Checks whether Errors_Optional has been set.

### Members

#### `public int32 `[`PostedEvents`](#structFRHAPI__PostGameEventsResponse_1ab14cbee3111a9f8af4d2dc4a81b91a77) <a id="structFRHAPI__PostGameEventsResponse_1ab14cbee3111a9f8af4d2dc4a81b91a77"></a>

Number of events successfully posted to Event Hub.

#### `public TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > `[`Errors_Optional`](#structFRHAPI__PostGameEventsResponse_1a4bcd13cbbb6908fe7b3c2cd698b09b3d) <a id="structFRHAPI__PostGameEventsResponse_1a4bcd13cbbb6908fe7b3c2cd698b09b3d"></a>

list of validation failure for each event.

#### `public bool `[`Errors_IsSet`](#structFRHAPI__PostGameEventsResponse_1a64e1d83ca099175ac36efd3fd0778b4f) <a id="structFRHAPI__PostGameEventsResponse_1a64e1d83ca099175ac36efd3fd0778b4f"></a>

true if Errors_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PostGameEventsResponse_1a2dade96758fe7cd662dfb62d2d99c146)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PostGameEventsResponse_1a2dade96758fe7cd662dfb62d2d99c146"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PostGameEventsResponse_1ac259db813914b9921fa4f4bd447414a1)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PostGameEventsResponse_1ac259db813914b9921fa4f4bd447414a1"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetPostedEvents`](#structFRHAPI__PostGameEventsResponse_1a841c220754ebd703ad38d78aa3bb1bb1)`()` <a id="structFRHAPI__PostGameEventsResponse_1a841c220754ebd703ad38d78aa3bb1bb1"></a>

Gets the value of PostedEvents.

#### `public inline const int32 & `[`GetPostedEvents`](#structFRHAPI__PostGameEventsResponse_1a83872bd0a130285b810a472faa8a36e3)`() const` <a id="structFRHAPI__PostGameEventsResponse_1a83872bd0a130285b810a472faa8a36e3"></a>

Gets the value of PostedEvents.

#### `public inline void `[`SetPostedEvents`](#structFRHAPI__PostGameEventsResponse_1a64844278435658b99e033b639e3a65cc)`(const int32 & NewValue)` <a id="structFRHAPI__PostGameEventsResponse_1a64844278435658b99e033b639e3a65cc"></a>

Sets the value of PostedEvents.

#### `public inline void `[`SetPostedEvents`](#structFRHAPI__PostGameEventsResponse_1a3ea085b5d38c73800b1ef512372cf713)`(int32 && NewValue)` <a id="structFRHAPI__PostGameEventsResponse_1a3ea085b5d38c73800b1ef512372cf713"></a>

Sets the value of PostedEvents using move semantics.

#### `public inline bool `[`IsPostedEventsDefaultValue`](#structFRHAPI__PostGameEventsResponse_1a33f77ad6d36173417f8a53c402654493)`() const` <a id="structFRHAPI__PostGameEventsResponse_1a33f77ad6d36173417f8a53c402654493"></a>

Returns true if PostedEvents matches the default value.

#### `public inline void `[`SetPostedEventsToDefault`](#structFRHAPI__PostGameEventsResponse_1a3f5dfe2d5d14b932b8502db6a2ca119a)`()` <a id="structFRHAPI__PostGameEventsResponse_1a3f5dfe2d5d14b932b8502db6a2ca119a"></a>

Sets the value of PostedEvents to its default

#### `public inline TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetErrors`](#structFRHAPI__PostGameEventsResponse_1a78f771853a00c424557341500f49ba4f)`()` <a id="structFRHAPI__PostGameEventsResponse_1a78f771853a00c424557341500f49ba4f"></a>

Gets the value of Errors_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetErrors`](#structFRHAPI__PostGameEventsResponse_1a87812a8d28b0810620cd0e75b7a9800e)`() const` <a id="structFRHAPI__PostGameEventsResponse_1a87812a8d28b0810620cd0e75b7a9800e"></a>

Gets the value of Errors_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetErrors`](#structFRHAPI__PostGameEventsResponse_1a14e350b8257c829c1614fd0c78f6b704)`(const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & DefaultValue) const` <a id="structFRHAPI__PostGameEventsResponse_1a14e350b8257c829c1614fd0c78f6b704"></a>

Gets the value of Errors_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetErrors`](#structFRHAPI__PostGameEventsResponse_1afdeb56eacaf89f648ca521d479fa2c23)`(TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & OutValue) const` <a id="structFRHAPI__PostGameEventsResponse_1afdeb56eacaf89f648ca521d479fa2c23"></a>

Fills OutValue with the value of Errors_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetErrorsOrNull`](#structFRHAPI__PostGameEventsResponse_1a26d4bd7c95770809cc2e7656c02f7ebc)`()` <a id="structFRHAPI__PostGameEventsResponse_1a26d4bd7c95770809cc2e7656c02f7ebc"></a>

Returns a pointer to Errors_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetErrorsOrNull`](#structFRHAPI__PostGameEventsResponse_1ad548ed62d6b2ac959d0c47e1bea029fd)`() const` <a id="structFRHAPI__PostGameEventsResponse_1ad548ed62d6b2ac959d0c47e1bea029fd"></a>

Returns a pointer to Errors_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetErrors`](#structFRHAPI__PostGameEventsResponse_1a6e16076b25ada896380954560c7174a9)`(const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & NewValue)` <a id="structFRHAPI__PostGameEventsResponse_1a6e16076b25ada896380954560c7174a9"></a>

Sets the value of Errors_Optional and also sets Errors_IsSet to true.

#### `public inline void `[`SetErrors`](#structFRHAPI__PostGameEventsResponse_1a68e03e76d789a236685f659d4347b830)`(TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > && NewValue)` <a id="structFRHAPI__PostGameEventsResponse_1a68e03e76d789a236685f659d4347b830"></a>

Sets the value of Errors_Optional and also sets Errors_IsSet to true using move semantics.

#### `public inline void `[`ClearErrors`](#structFRHAPI__PostGameEventsResponse_1afbb863db522201168db69a6f6c10e2af)`()` <a id="structFRHAPI__PostGameEventsResponse_1afbb863db522201168db69a6f6c10e2af"></a>

Clears the value of Errors_Optional and sets Errors_IsSet to false.

#### `public inline bool `[`IsErrorsSet`](#structFRHAPI__PostGameEventsResponse_1a56fb4d3668da5ee77d3cb4233eb63b0f)`() const` <a id="structFRHAPI__PostGameEventsResponse_1a56fb4d3668da5ee77d3cb4233eb63b0f"></a>

Checks whether Errors_Optional has been set.

