---
title: RHAPI_EventParamsSchemaResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_EventParamsSchemaResponse`](#structFRHAPI__EventParamsSchemaResponse) | 

## struct `FRHAPI_EventParamsSchemaResponse` <a id="structFRHAPI__EventParamsSchemaResponse"></a>

```
struct FRHAPI_EventParamsSchemaResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`EventParamSchemas`](#structFRHAPI__EventParamsSchemaResponse_1aa40d8c50e528ce8456a35b58e44c7bbe) | Dictionary contains event name and Json schema definition for its event_params parameter.
`public virtual bool `[`FromJson`](#structFRHAPI__EventParamsSchemaResponse_1ad7a4d175e117620e4fe094477b10864b)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__EventParamsSchemaResponse_1a8a682e196152e51f01cbe0ff937797d6)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetEventParamSchemas`](#structFRHAPI__EventParamsSchemaResponse_1a559ea930841451e6894dfe2fc24e770d)`()` | Gets the value of EventParamSchemas.
`public inline FORCEINLINE const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetEventParamSchemas`](#structFRHAPI__EventParamsSchemaResponse_1aa5166930b4d8eccf9686bdf7801d4f87)`() const` | Gets the value of EventParamSchemas.
`public inline FORCEINLINE void `[`SetEventParamSchemas`](#structFRHAPI__EventParamsSchemaResponse_1a2662dfca0d2527e739efd21273c91bcc)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` | Sets the value of EventParamSchemas.
`public inline FORCEINLINE void `[`SetEventParamSchemas`](#structFRHAPI__EventParamsSchemaResponse_1af45b1a55b1921fd4695896ae02a0f0ac)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` | Sets the value of EventParamSchemas using move semantics.

### Members

#### `public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`EventParamSchemas`](#structFRHAPI__EventParamsSchemaResponse_1aa40d8c50e528ce8456a35b58e44c7bbe) <a id="structFRHAPI__EventParamsSchemaResponse_1aa40d8c50e528ce8456a35b58e44c7bbe"></a>

Dictionary contains event name and Json schema definition for its event_params parameter.

#### `public virtual bool `[`FromJson`](#structFRHAPI__EventParamsSchemaResponse_1ad7a4d175e117620e4fe094477b10864b)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__EventParamsSchemaResponse_1ad7a4d175e117620e4fe094477b10864b"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__EventParamsSchemaResponse_1a8a682e196152e51f01cbe0ff937797d6)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__EventParamsSchemaResponse_1a8a682e196152e51f01cbe0ff937797d6"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetEventParamSchemas`](#structFRHAPI__EventParamsSchemaResponse_1a559ea930841451e6894dfe2fc24e770d)`()` <a id="structFRHAPI__EventParamsSchemaResponse_1a559ea930841451e6894dfe2fc24e770d"></a>

Gets the value of EventParamSchemas.

#### `public inline FORCEINLINE const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetEventParamSchemas`](#structFRHAPI__EventParamsSchemaResponse_1aa5166930b4d8eccf9686bdf7801d4f87)`() const` <a id="structFRHAPI__EventParamsSchemaResponse_1aa5166930b4d8eccf9686bdf7801d4f87"></a>

Gets the value of EventParamSchemas.

#### `public inline FORCEINLINE void `[`SetEventParamSchemas`](#structFRHAPI__EventParamsSchemaResponse_1a2662dfca0d2527e739efd21273c91bcc)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` <a id="structFRHAPI__EventParamsSchemaResponse_1a2662dfca0d2527e739efd21273c91bcc"></a>

Sets the value of EventParamSchemas.

#### `public inline FORCEINLINE void `[`SetEventParamSchemas`](#structFRHAPI__EventParamsSchemaResponse_1af45b1a55b1921fd4695896ae02a0f0ac)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` <a id="structFRHAPI__EventParamsSchemaResponse_1af45b1a55b1921fd4695896ae02a0f0ac"></a>

Sets the value of EventParamSchemas using move semantics.

