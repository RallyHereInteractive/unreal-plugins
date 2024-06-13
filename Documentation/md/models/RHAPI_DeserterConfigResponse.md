# group `RHAPI_DeserterConfigResponse` <a id="group__RHAPI__DeserterConfigResponse"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__DeserterConfigResponse_1a28a06318ec74423c87edef5fa580362b)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__DeserterConfigResponse_1a54584188e7918fbadd23226e4a596d8e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > & `[`GetDeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1af1b3277ecefd58d2923e7bb8f9ea46f7)`()` | Gets the value of DeserterConfigs.
`public inline const TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > & `[`GetDeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1aa746e1b67a1e07e8870fc00eec1c201c)`() const` | Gets the value of DeserterConfigs.
`public inline void `[`SetDeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1a59ff0c1dff04ed8f23f7734c840a60ad)`(const TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > & NewValue)` | Sets the value of DeserterConfigs.
`public inline void `[`SetDeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1ad4b4697f41c1b045f2a18f61c721c52a)`(TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > && NewValue)` | Sets the value of DeserterConfigs using move semantics.

### Members

#### `public TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > `[`DeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1a70fc399fc7586341e681d4937997689c) <a id="structFRHAPI__DeserterConfigResponse_1a70fc399fc7586341e681d4937997689c"></a>

List of desertion config objects.

#### `public virtual bool `[`FromJson`](#structFRHAPI__DeserterConfigResponse_1a28a06318ec74423c87edef5fa580362b)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__DeserterConfigResponse_1a28a06318ec74423c87edef5fa580362b"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__DeserterConfigResponse_1a54584188e7918fbadd23226e4a596d8e)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__DeserterConfigResponse_1a54584188e7918fbadd23226e4a596d8e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > & `[`GetDeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1af1b3277ecefd58d2923e7bb8f9ea46f7)`()` <a id="structFRHAPI__DeserterConfigResponse_1af1b3277ecefd58d2923e7bb8f9ea46f7"></a>

Gets the value of DeserterConfigs.

#### `public inline const TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > & `[`GetDeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1aa746e1b67a1e07e8870fc00eec1c201c)`() const` <a id="structFRHAPI__DeserterConfigResponse_1aa746e1b67a1e07e8870fc00eec1c201c"></a>

Gets the value of DeserterConfigs.

#### `public inline void `[`SetDeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1a59ff0c1dff04ed8f23f7734c840a60ad)`(const TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > & NewValue)` <a id="structFRHAPI__DeserterConfigResponse_1a59ff0c1dff04ed8f23f7734c840a60ad"></a>

Sets the value of DeserterConfigs.

#### `public inline void `[`SetDeserterConfigs`](#structFRHAPI__DeserterConfigResponse_1ad4b4697f41c1b045f2a18f61c721c52a)`(TArray< `[`FRHAPI_DeserterConfig`](RHAPI_DeserterConfig.md#structFRHAPI__DeserterConfig)` > && NewValue)` <a id="structFRHAPI__DeserterConfigResponse_1ad4b4697f41c1b045f2a18f61c721c52a"></a>

Sets the value of DeserterConfigs using move semantics.

