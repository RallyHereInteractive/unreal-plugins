---
title: RHAPI_DeserterConfigResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_DeserterConfigResponse`](#structFRHAPI__DeserterConfigResponse) | 

## struct `FRHAPI_DeserterConfigResponse` <a id="structFRHAPI__DeserterConfigResponse"></a>

```
struct FRHAPI_DeserterConfigResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > `[`DeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1a70fc399fc7586341e681d4937997689c) | List of desertion config objects.
`public virtual bool `[`FromJson`](#structFRHAPI__DeserterConfigResponse_1a21dacde9b6f2fde5ca2caaf2da30cf24)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__DeserterConfigResponse_1a39b1a7a49aee592015734e80c3faf918)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > & `[`GetDeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1a0e04a6d4e0779d24157a2979c93f085b)`()` | Gets the value of DeserterConfigs.
`public inline FORCEINLINE const TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > & `[`GetDeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1aab4381fb51ac54d1830910c8c78f0be9)`() const` | Gets the value of DeserterConfigs.
`public inline FORCEINLINE void `[`SetDeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1a78ceb96ecc65f1167b19bcad7ce7e986)`(const TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > & NewValue)` | Sets the value of DeserterConfigs.
`public inline FORCEINLINE void `[`SetDeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1a1466cbc6940483f30025d3022b2da422)`(TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > && NewValue)` | Sets the value of DeserterConfigs using move semantics.

### Members

#### `public TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > `[`DeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1a70fc399fc7586341e681d4937997689c) <a id="structFRHAPI__DeserterConfigResponse_1a70fc399fc7586341e681d4937997689c"></a>

List of desertion config objects.

#### `public virtual bool `[`FromJson`](#structFRHAPI__DeserterConfigResponse_1a21dacde9b6f2fde5ca2caaf2da30cf24)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__DeserterConfigResponse_1a21dacde9b6f2fde5ca2caaf2da30cf24"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__DeserterConfigResponse_1a39b1a7a49aee592015734e80c3faf918)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__DeserterConfigResponse_1a39b1a7a49aee592015734e80c3faf918"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > & `[`GetDeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1a0e04a6d4e0779d24157a2979c93f085b)`()` <a id="structFRHAPI__DeserterConfigResponse_1a0e04a6d4e0779d24157a2979c93f085b"></a>

Gets the value of DeserterConfigs.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > & `[`GetDeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1aab4381fb51ac54d1830910c8c78f0be9)`() const` <a id="structFRHAPI__DeserterConfigResponse_1aab4381fb51ac54d1830910c8c78f0be9"></a>

Gets the value of DeserterConfigs.

#### `public inline FORCEINLINE void `[`SetDeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1a78ceb96ecc65f1167b19bcad7ce7e986)`(const TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > & NewValue)` <a id="structFRHAPI__DeserterConfigResponse_1a78ceb96ecc65f1167b19bcad7ce7e986"></a>

Sets the value of DeserterConfigs.

#### `public inline FORCEINLINE void `[`SetDeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1a1466cbc6940483f30025d3022b2da422)`(TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > && NewValue)` <a id="structFRHAPI__DeserterConfigResponse_1a1466cbc6940483f30025d3022b2da422"></a>

Sets the value of DeserterConfigs using move semantics.

