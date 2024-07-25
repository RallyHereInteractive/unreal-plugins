# group `RHAPI_EventParamsSchemaResponse` <a id="group__RHAPI__EventParamsSchemaResponse"></a>

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
`public virtual void `[`WriteJson`](#structFRHAPI__EventParamsSchemaResponse_1aee9cf79731358ff0d654ee83a888a7ce)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetEventParamSchemas`](#structFRHAPI__EventParamsSchemaResponse_1ac59fd588bf42e8a3fd8d63e4557f5072)`()` | Gets the value of EventParamSchemas.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetEventParamSchemas`](#structFRHAPI__EventParamsSchemaResponse_1a19f51b10761cc867c81d2ed06fd61b02)`() const` | Gets the value of EventParamSchemas.
`public inline void `[`SetEventParamSchemas`](#structFRHAPI__EventParamsSchemaResponse_1acb8b642988bba54b7ad855bcf18c99eb)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` | Sets the value of EventParamSchemas.
`public inline void `[`SetEventParamSchemas`](#structFRHAPI__EventParamsSchemaResponse_1aeb9f1bd86e565de192b250bcade39243)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` | Sets the value of EventParamSchemas using move semantics.

### Members

#### `public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`EventParamSchemas`](#structFRHAPI__EventParamsSchemaResponse_1aa40d8c50e528ce8456a35b58e44c7bbe) <a id="structFRHAPI__EventParamsSchemaResponse_1aa40d8c50e528ce8456a35b58e44c7bbe"></a>

Dictionary contains event name and Json schema definition for its event_params parameter.

#### `public virtual bool `[`FromJson`](#structFRHAPI__EventParamsSchemaResponse_1ad7a4d175e117620e4fe094477b10864b)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__EventParamsSchemaResponse_1ad7a4d175e117620e4fe094477b10864b"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__EventParamsSchemaResponse_1aee9cf79731358ff0d654ee83a888a7ce)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__EventParamsSchemaResponse_1aee9cf79731358ff0d654ee83a888a7ce"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetEventParamSchemas`](#structFRHAPI__EventParamsSchemaResponse_1ac59fd588bf42e8a3fd8d63e4557f5072)`()` <a id="structFRHAPI__EventParamsSchemaResponse_1ac59fd588bf42e8a3fd8d63e4557f5072"></a>

Gets the value of EventParamSchemas.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetEventParamSchemas`](#structFRHAPI__EventParamsSchemaResponse_1a19f51b10761cc867c81d2ed06fd61b02)`() const` <a id="structFRHAPI__EventParamsSchemaResponse_1a19f51b10761cc867c81d2ed06fd61b02"></a>

Gets the value of EventParamSchemas.

#### `public inline void `[`SetEventParamSchemas`](#structFRHAPI__EventParamsSchemaResponse_1acb8b642988bba54b7ad855bcf18c99eb)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` <a id="structFRHAPI__EventParamsSchemaResponse_1acb8b642988bba54b7ad855bcf18c99eb"></a>

Sets the value of EventParamSchemas.

#### `public inline void `[`SetEventParamSchemas`](#structFRHAPI__EventParamsSchemaResponse_1aeb9f1bd86e565de192b250bcade39243)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` <a id="structFRHAPI__EventParamsSchemaResponse_1aeb9f1bd86e565de192b250bcade39243"></a>

Sets the value of EventParamSchemas using move semantics.

