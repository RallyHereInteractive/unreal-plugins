---
title: RHAPI_StageCreateRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_StageCreateRequest`](#structFRHAPI__StageCreateRequest) | 

## struct `FRHAPI_StageCreateRequest` <a id="structFRHAPI__StageCreateRequest"></a>

```
struct FRHAPI_StageCreateRequest
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_StageCreate`](RHAPI_StageCreate.md#structFRHAPI__StageCreate)` > `[`Stages`](#structFRHAPI__StageCreateRequest_1adc3ae194ce066721c2a8499da412a896) | Stages to create.
`public virtual bool `[`FromJson`](#structFRHAPI__StageCreateRequest_1a749b4f4568c9b1c242e18d27972f6e68)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__StageCreateRequest_1ab78ca73eda058f5d6c10723d2e35d581)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_StageCreate`](RHAPI_StageCreate.md#structFRHAPI__StageCreate)` > & `[`GetStages`](#structFRHAPI__StageCreateRequest_1a6979c941a2d25e92c9c47103660fcd35)`()` | Gets the value of Stages.
`public inline FORCEINLINE const TArray< `[`FRHAPI_StageCreate`](RHAPI_StageCreate.md#structFRHAPI__StageCreate)` > & `[`GetStages`](#structFRHAPI__StageCreateRequest_1a78d048b996d282655ce87206876f2cf6)`() const` | Gets the value of Stages.
`public inline FORCEINLINE void `[`SetStages`](#structFRHAPI__StageCreateRequest_1aa0b24d9dceef5a025dbbebe3dd9c93f8)`(const TArray< `[`FRHAPI_StageCreate`](RHAPI_StageCreate.md#structFRHAPI__StageCreate)` > & NewValue)` | Sets the value of Stages.
`public inline FORCEINLINE void `[`SetStages`](#structFRHAPI__StageCreateRequest_1adb18224a609de1c7fb7092ba96e51350)`(TArray< `[`FRHAPI_StageCreate`](RHAPI_StageCreate.md#structFRHAPI__StageCreate)` > && NewValue)` | Sets the value of Stages using move semantics.

### Members

#### `public TArray< `[`FRHAPI_StageCreate`](RHAPI_StageCreate.md#structFRHAPI__StageCreate)` > `[`Stages`](#structFRHAPI__StageCreateRequest_1adc3ae194ce066721c2a8499da412a896) <a id="structFRHAPI__StageCreateRequest_1adc3ae194ce066721c2a8499da412a896"></a>

Stages to create.

#### `public virtual bool `[`FromJson`](#structFRHAPI__StageCreateRequest_1a749b4f4568c9b1c242e18d27972f6e68)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__StageCreateRequest_1a749b4f4568c9b1c242e18d27972f6e68"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__StageCreateRequest_1ab78ca73eda058f5d6c10723d2e35d581)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__StageCreateRequest_1ab78ca73eda058f5d6c10723d2e35d581"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_StageCreate`](RHAPI_StageCreate.md#structFRHAPI__StageCreate)` > & `[`GetStages`](#structFRHAPI__StageCreateRequest_1a6979c941a2d25e92c9c47103660fcd35)`()` <a id="structFRHAPI__StageCreateRequest_1a6979c941a2d25e92c9c47103660fcd35"></a>

Gets the value of Stages.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_StageCreate`](RHAPI_StageCreate.md#structFRHAPI__StageCreate)` > & `[`GetStages`](#structFRHAPI__StageCreateRequest_1a78d048b996d282655ce87206876f2cf6)`() const` <a id="structFRHAPI__StageCreateRequest_1a78d048b996d282655ce87206876f2cf6"></a>

Gets the value of Stages.

#### `public inline FORCEINLINE void `[`SetStages`](#structFRHAPI__StageCreateRequest_1aa0b24d9dceef5a025dbbebe3dd9c93f8)`(const TArray< `[`FRHAPI_StageCreate`](RHAPI_StageCreate.md#structFRHAPI__StageCreate)` > & NewValue)` <a id="structFRHAPI__StageCreateRequest_1aa0b24d9dceef5a025dbbebe3dd9c93f8"></a>

Sets the value of Stages.

#### `public inline FORCEINLINE void `[`SetStages`](#structFRHAPI__StageCreateRequest_1adb18224a609de1c7fb7092ba96e51350)`(TArray< `[`FRHAPI_StageCreate`](RHAPI_StageCreate.md#structFRHAPI__StageCreate)` > && NewValue)` <a id="structFRHAPI__StageCreateRequest_1adb18224a609de1c7fb7092ba96e51350"></a>

Sets the value of Stages using move semantics.

