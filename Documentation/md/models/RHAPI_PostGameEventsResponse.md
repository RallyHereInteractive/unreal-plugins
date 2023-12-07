# RHAPI_PostGameEventsResponse <a id="group__RHAPI__PostGameEventsResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PostGameEventsResponse`](#structFRHAPI__PostGameEventsResponse) | 

## struct `FRHAPI_PostGameEventsResponse` <a id="structFRHAPI__PostGameEventsResponse"></a>

```
struct FRHAPI_PostGameEventsResponse
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`PostedEvents`](#structFRHAPI__PostGameEventsResponse_1ab14cbee3111a9f8af4d2dc4a81b91a77) | Number of events successfully posted to Event Hub.
`public TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > `[`Errors_Optional`](#structFRHAPI__PostGameEventsResponse_1a4bcd13cbbb6908fe7b3c2cd698b09b3d) | list of validation failure for each event.
`public bool `[`Errors_IsSet`](#structFRHAPI__PostGameEventsResponse_1a64e1d83ca099175ac36efd3fd0778b4f) | true if Errors_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PostGameEventsResponse_1ae85902fce843a04afa56f4a445605834)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PostGameEventsResponse_1a2526583c3c98ef274d01a87d86108cb0)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetPostedEvents`](#structFRHAPI__PostGameEventsResponse_1a5d308cdc0e5647372e993ed02ec53701)`()` | Gets the value of PostedEvents.
`public inline const int32 & `[`GetPostedEvents`](#structFRHAPI__PostGameEventsResponse_1ac08763c5db10d34a410d0ed7711bf03a)`() const` | Gets the value of PostedEvents.
`public inline void `[`SetPostedEvents`](#structFRHAPI__PostGameEventsResponse_1a2ccb7747d3b05789b3362e423ec658fe)`(int32 NewValue)` | Sets the value of PostedEvents.
`public inline bool `[`IsPostedEventsDefaultValue`](#structFRHAPI__PostGameEventsResponse_1a33f77ad6d36173417f8a53c402654493)`() const` | Returns true if PostedEvents matches the default value.
`public inline void `[`SetPostedEventsToDefault`](#structFRHAPI__PostGameEventsResponse_1a3f5dfe2d5d14b932b8502db6a2ca119a)`()` | Sets the value of PostedEvents to its default
`public inline TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetErrors`](#structFRHAPI__PostGameEventsResponse_1af6ed576d107b976b7c215980b44843d9)`()` | Gets the value of Errors_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetErrors`](#structFRHAPI__PostGameEventsResponse_1a3547a97c61fc1e3f211c540c81159cd9)`() const` | Gets the value of Errors_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetErrors`](#structFRHAPI__PostGameEventsResponse_1ae108ad84828b04fde877aacd7553c19a)`(const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & DefaultValue) const` | Gets the value of Errors_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetErrors`](#structFRHAPI__PostGameEventsResponse_1afdeb56eacaf89f648ca521d479fa2c23)`(TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & OutValue) const` | Fills OutValue with the value of Errors_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetErrorsOrNull`](#structFRHAPI__PostGameEventsResponse_1a87b36b7499a7e78bdc27f1d32666d849)`()` | Returns a pointer to Errors_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetErrorsOrNull`](#structFRHAPI__PostGameEventsResponse_1a6e5cae343486059f6b3eaa11b8a60c90)`() const` | Returns a pointer to Errors_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetErrors`](#structFRHAPI__PostGameEventsResponse_1a25c25fc991dbbfa0bd1a9d4042835053)`(TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > NewValue)` | Sets the value of Errors_Optional and also sets Errors_IsSet to true.
`public inline void `[`ClearErrors`](#structFRHAPI__PostGameEventsResponse_1afbb863db522201168db69a6f6c10e2af)`()` | Clears the value of Errors_Optional and sets Errors_IsSet to false.

#### Members

#### `public int32 `[`PostedEvents`](#structFRHAPI__PostGameEventsResponse_1ab14cbee3111a9f8af4d2dc4a81b91a77) <a id="structFRHAPI__PostGameEventsResponse_1ab14cbee3111a9f8af4d2dc4a81b91a77"></a>

Number of events successfully posted to Event Hub.

<br>
#### `public TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > `[`Errors_Optional`](#structFRHAPI__PostGameEventsResponse_1a4bcd13cbbb6908fe7b3c2cd698b09b3d) <a id="structFRHAPI__PostGameEventsResponse_1a4bcd13cbbb6908fe7b3c2cd698b09b3d"></a>

list of validation failure for each event.

<br>
#### `public bool `[`Errors_IsSet`](#structFRHAPI__PostGameEventsResponse_1a64e1d83ca099175ac36efd3fd0778b4f) <a id="structFRHAPI__PostGameEventsResponse_1a64e1d83ca099175ac36efd3fd0778b4f"></a>

true if Errors_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__PostGameEventsResponse_1ae85902fce843a04afa56f4a445605834)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PostGameEventsResponse_1ae85902fce843a04afa56f4a445605834"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__PostGameEventsResponse_1a2526583c3c98ef274d01a87d86108cb0)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PostGameEventsResponse_1a2526583c3c98ef274d01a87d86108cb0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline int32 & `[`GetPostedEvents`](#structFRHAPI__PostGameEventsResponse_1a5d308cdc0e5647372e993ed02ec53701)`()` <a id="structFRHAPI__PostGameEventsResponse_1a5d308cdc0e5647372e993ed02ec53701"></a>

Gets the value of PostedEvents.

<br>
#### `public inline const int32 & `[`GetPostedEvents`](#structFRHAPI__PostGameEventsResponse_1ac08763c5db10d34a410d0ed7711bf03a)`() const` <a id="structFRHAPI__PostGameEventsResponse_1ac08763c5db10d34a410d0ed7711bf03a"></a>

Gets the value of PostedEvents.

<br>
#### `public inline void `[`SetPostedEvents`](#structFRHAPI__PostGameEventsResponse_1a2ccb7747d3b05789b3362e423ec658fe)`(int32 NewValue)` <a id="structFRHAPI__PostGameEventsResponse_1a2ccb7747d3b05789b3362e423ec658fe"></a>

Sets the value of PostedEvents.

<br>
#### `public inline bool `[`IsPostedEventsDefaultValue`](#structFRHAPI__PostGameEventsResponse_1a33f77ad6d36173417f8a53c402654493)`() const` <a id="structFRHAPI__PostGameEventsResponse_1a33f77ad6d36173417f8a53c402654493"></a>

Returns true if PostedEvents matches the default value.

<br>
#### `public inline void `[`SetPostedEventsToDefault`](#structFRHAPI__PostGameEventsResponse_1a3f5dfe2d5d14b932b8502db6a2ca119a)`()` <a id="structFRHAPI__PostGameEventsResponse_1a3f5dfe2d5d14b932b8502db6a2ca119a"></a>

Sets the value of PostedEvents to its default

<br>
#### `public inline TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetErrors`](#structFRHAPI__PostGameEventsResponse_1af6ed576d107b976b7c215980b44843d9)`()` <a id="structFRHAPI__PostGameEventsResponse_1af6ed576d107b976b7c215980b44843d9"></a>

Gets the value of Errors_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetErrors`](#structFRHAPI__PostGameEventsResponse_1a3547a97c61fc1e3f211c540c81159cd9)`() const` <a id="structFRHAPI__PostGameEventsResponse_1a3547a97c61fc1e3f211c540c81159cd9"></a>

Gets the value of Errors_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetErrors`](#structFRHAPI__PostGameEventsResponse_1ae108ad84828b04fde877aacd7553c19a)`(const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & DefaultValue) const` <a id="structFRHAPI__PostGameEventsResponse_1ae108ad84828b04fde877aacd7553c19a"></a>

Gets the value of Errors_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetErrors`](#structFRHAPI__PostGameEventsResponse_1afdeb56eacaf89f648ca521d479fa2c23)`(TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & OutValue) const` <a id="structFRHAPI__PostGameEventsResponse_1afdeb56eacaf89f648ca521d479fa2c23"></a>

Fills OutValue with the value of Errors_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetErrorsOrNull`](#structFRHAPI__PostGameEventsResponse_1a87b36b7499a7e78bdc27f1d32666d849)`()` <a id="structFRHAPI__PostGameEventsResponse_1a87b36b7499a7e78bdc27f1d32666d849"></a>

Returns a pointer to Errors_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetErrorsOrNull`](#structFRHAPI__PostGameEventsResponse_1a6e5cae343486059f6b3eaa11b8a60c90)`() const` <a id="structFRHAPI__PostGameEventsResponse_1a6e5cae343486059f6b3eaa11b8a60c90"></a>

Returns a pointer to Errors_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetErrors`](#structFRHAPI__PostGameEventsResponse_1a25c25fc991dbbfa0bd1a9d4042835053)`(TArray< `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > NewValue)` <a id="structFRHAPI__PostGameEventsResponse_1a25c25fc991dbbfa0bd1a9d4042835053"></a>

Sets the value of Errors_Optional and also sets Errors_IsSet to true.

<br>
#### `public inline void `[`ClearErrors`](#structFRHAPI__PostGameEventsResponse_1afbb863db522201168db69a6f6c10e2af)`()` <a id="structFRHAPI__PostGameEventsResponse_1afbb863db522201168db69a6f6c10e2af"></a>

Clears the value of Errors_Optional and sets Errors_IsSet to false.

<br>
