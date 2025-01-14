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
`public inline TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > & `[`GetDeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1aabc387dcd9f3a545c5209d1c97b81c72)`()` | Gets the value of DeserterConfigs.
`public inline const TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > & `[`GetDeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1ac8c6d005de5086e847b70ad5c083d152)`() const` | Gets the value of DeserterConfigs.
`public inline void `[`SetDeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1a59ff0c1dff04ed8f23f7734c840a60ad)`(const TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > & NewValue)` | Sets the value of DeserterConfigs.
`public inline void `[`SetDeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1ad4b4697f41c1b045f2a18f61c721c52a)`(TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > && NewValue)` | Sets the value of DeserterConfigs using move semantics.

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

#### `public inline TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > & `[`GetDeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1aabc387dcd9f3a545c5209d1c97b81c72)`()` <a id="structFRHAPI__DeserterConfigResponse_1aabc387dcd9f3a545c5209d1c97b81c72"></a>

Gets the value of DeserterConfigs.

#### `public inline const TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > & `[`GetDeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1ac8c6d005de5086e847b70ad5c083d152)`() const` <a id="structFRHAPI__DeserterConfigResponse_1ac8c6d005de5086e847b70ad5c083d152"></a>

Gets the value of DeserterConfigs.

#### `public inline void `[`SetDeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1a59ff0c1dff04ed8f23f7734c840a60ad)`(const TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > & NewValue)` <a id="structFRHAPI__DeserterConfigResponse_1a59ff0c1dff04ed8f23f7734c840a60ad"></a>

Sets the value of DeserterConfigs.

#### `public inline void `[`SetDeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1ad4b4697f41c1b045f2a18f61c721c52a)`(TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > && NewValue)` <a id="structFRHAPI__DeserterConfigResponse_1ad4b4697f41c1b045f2a18f61c721c52a"></a>

Sets the value of DeserterConfigs using move semantics.

