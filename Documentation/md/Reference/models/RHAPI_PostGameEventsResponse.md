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
`public inline FORCEINLINE int32 & `[`GetPostedEvents`](#structFRHAPI__PostGameEventsResponse_1ab68db502b6e1a36ef3e0f260805cbcbc)`()` | Gets the value of PostedEvents.
`public inline FORCEINLINE const int32 & `[`GetPostedEvents`](#structFRHAPI__PostGameEventsResponse_1ac8ee1fea57e1d240629b5dc6e07b346f)`() const` | Gets the value of PostedEvents.
`public inline FORCEINLINE void `[`SetPostedEvents`](#structFRHAPI__PostGameEventsResponse_1a960d5eb73fda1737daad5147357fa1c7)`(const int32 & NewValue)` | Sets the value of PostedEvents.
`public inline FORCEINLINE void `[`SetPostedEvents`](#structFRHAPI__PostGameEventsResponse_1a0413d880655220c8b0929ad127be81c7)`(int32 && NewValue)` | Sets the value of PostedEvents using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PostedEvents`](#structFRHAPI__PostGameEventsResponse_1a0a66bb99ba150958329f03788a7fe617)`()` | Returns the default value of PostedEvents.
`public inline FORCEINLINE TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetErrors`](#structFRHAPI__PostGameEventsResponse_1a7f0aad111e43ce254ffb92fb7a338b3f)`()` | Gets the value of Errors_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetErrors`](#structFRHAPI__PostGameEventsResponse_1a0935b8536ee4154e5b90b21b70b89e18)`() const` | Gets the value of Errors_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetErrors`](#structFRHAPI__PostGameEventsResponse_1a672d28568f36c78284de6f1298695dae)`(const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & DefaultValue) const` | Gets the value of Errors_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetErrors`](#structFRHAPI__PostGameEventsResponse_1a58f2069998a0c1a8667dffa6153b3c1a)`(TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & OutValue) const` | Fills OutValue with the value of Errors_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetErrorsOrNull`](#structFRHAPI__PostGameEventsResponse_1a13f1c48e91a1416c59755d4f117c034d)`()` | Returns a pointer to Errors_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetErrorsOrNull`](#structFRHAPI__PostGameEventsResponse_1a9c27a121edada91b79d9cd98def82f94)`() const` | Returns a pointer to Errors_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetErrors`](#structFRHAPI__PostGameEventsResponse_1a7bbf8bd2a0c1ee89808edeee77f94f53)`(const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & NewValue)` | Sets the value of Errors_Optional and also sets Errors_IsSet to true.
`public inline FORCEINLINE void `[`SetErrors`](#structFRHAPI__PostGameEventsResponse_1ad8cefa5eceedadeeefe998f5c5c1a8de)`(TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > && NewValue)` | Sets the value of Errors_Optional and also sets Errors_IsSet to true using move semantics.
`public inline void `[`ClearErrors`](#structFRHAPI__PostGameEventsResponse_1afbb863db522201168db69a6f6c10e2af)`()` | Clears the value of Errors_Optional and sets Errors_IsSet to false.

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

#### `public inline FORCEINLINE int32 & `[`GetPostedEvents`](#structFRHAPI__PostGameEventsResponse_1ab68db502b6e1a36ef3e0f260805cbcbc)`()` <a id="structFRHAPI__PostGameEventsResponse_1ab68db502b6e1a36ef3e0f260805cbcbc"></a>

Gets the value of PostedEvents.

#### `public inline FORCEINLINE const int32 & `[`GetPostedEvents`](#structFRHAPI__PostGameEventsResponse_1ac8ee1fea57e1d240629b5dc6e07b346f)`() const` <a id="structFRHAPI__PostGameEventsResponse_1ac8ee1fea57e1d240629b5dc6e07b346f"></a>

Gets the value of PostedEvents.

#### `public inline FORCEINLINE void `[`SetPostedEvents`](#structFRHAPI__PostGameEventsResponse_1a960d5eb73fda1737daad5147357fa1c7)`(const int32 & NewValue)` <a id="structFRHAPI__PostGameEventsResponse_1a960d5eb73fda1737daad5147357fa1c7"></a>

Sets the value of PostedEvents.

#### `public inline FORCEINLINE void `[`SetPostedEvents`](#structFRHAPI__PostGameEventsResponse_1a0413d880655220c8b0929ad127be81c7)`(int32 && NewValue)` <a id="structFRHAPI__PostGameEventsResponse_1a0413d880655220c8b0929ad127be81c7"></a>

Sets the value of PostedEvents using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PostedEvents`](#structFRHAPI__PostGameEventsResponse_1a0a66bb99ba150958329f03788a7fe617)`()` <a id="structFRHAPI__PostGameEventsResponse_1a0a66bb99ba150958329f03788a7fe617"></a>

Returns the default value of PostedEvents.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetErrors`](#structFRHAPI__PostGameEventsResponse_1a7f0aad111e43ce254ffb92fb7a338b3f)`()` <a id="structFRHAPI__PostGameEventsResponse_1a7f0aad111e43ce254ffb92fb7a338b3f"></a>

Gets the value of Errors_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetErrors`](#structFRHAPI__PostGameEventsResponse_1a0935b8536ee4154e5b90b21b70b89e18)`() const` <a id="structFRHAPI__PostGameEventsResponse_1a0935b8536ee4154e5b90b21b70b89e18"></a>

Gets the value of Errors_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetErrors`](#structFRHAPI__PostGameEventsResponse_1a672d28568f36c78284de6f1298695dae)`(const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & DefaultValue) const` <a id="structFRHAPI__PostGameEventsResponse_1a672d28568f36c78284de6f1298695dae"></a>

Gets the value of Errors_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetErrors`](#structFRHAPI__PostGameEventsResponse_1a58f2069998a0c1a8667dffa6153b3c1a)`(TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & OutValue) const` <a id="structFRHAPI__PostGameEventsResponse_1a58f2069998a0c1a8667dffa6153b3c1a"></a>

Fills OutValue with the value of Errors_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetErrorsOrNull`](#structFRHAPI__PostGameEventsResponse_1a13f1c48e91a1416c59755d4f117c034d)`()` <a id="structFRHAPI__PostGameEventsResponse_1a13f1c48e91a1416c59755d4f117c034d"></a>

Returns a pointer to Errors_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetErrorsOrNull`](#structFRHAPI__PostGameEventsResponse_1a9c27a121edada91b79d9cd98def82f94)`() const` <a id="structFRHAPI__PostGameEventsResponse_1a9c27a121edada91b79d9cd98def82f94"></a>

Returns a pointer to Errors_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetErrors`](#structFRHAPI__PostGameEventsResponse_1a7bbf8bd2a0c1ee89808edeee77f94f53)`(const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & NewValue)` <a id="structFRHAPI__PostGameEventsResponse_1a7bbf8bd2a0c1ee89808edeee77f94f53"></a>

Sets the value of Errors_Optional and also sets Errors_IsSet to true.

#### `public inline FORCEINLINE void `[`SetErrors`](#structFRHAPI__PostGameEventsResponse_1ad8cefa5eceedadeeefe998f5c5c1a8de)`(TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > && NewValue)` <a id="structFRHAPI__PostGameEventsResponse_1ad8cefa5eceedadeeefe998f5c5c1a8de"></a>

Sets the value of Errors_Optional and also sets Errors_IsSet to true using move semantics.

#### `public inline void `[`ClearErrors`](#structFRHAPI__PostGameEventsResponse_1afbb863db522201168db69a6f6c10e2af)`()` <a id="structFRHAPI__PostGameEventsResponse_1afbb863db522201168db69a6f6c10e2af"></a>

Clears the value of Errors_Optional and sets Errors_IsSet to false.

