# RHAPI_RankConfigRequestResponse <a id="group__RHAPI__RankConfigRequestResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_RankConfigRequestResponse`](#structFRHAPI__RankConfigRequestResponse) | Response to successfully requesting all rank config.

## struct `FRHAPI_RankConfigRequestResponse` <a id="structFRHAPI__RankConfigRequestResponse"></a>

```
struct FRHAPI_RankConfigRequestResponse
  : public FRHAPI_Model
```

Response to successfully requesting all rank config.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_RankConfig`](RHAPI_RankConfig.md#structFRHAPI__RankConfig)` > `[`RankConfigs`](#structFRHAPI__RankConfigRequestResponse_1a06467dc9fc36b86f7882b698da59ca3c) | List of rank configurations.
`public virtual bool `[`FromJson`](#structFRHAPI__RankConfigRequestResponse_1a9a012bba332ab54b4bc7dfa69b30cb07)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RankConfigRequestResponse_1a6b1bbc830bc841a1ad8f440b490d651c)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_RankConfig`](RHAPI_RankConfig.md#structFRHAPI__RankConfig)` > & `[`GetRankConfigs`](#structFRHAPI__RankConfigRequestResponse_1a10293ed196ac1e3e124af3b85a34fb44)`()` | Gets the value of RankConfigs.
`public inline const TArray< `[`FRHAPI_RankConfig`](RHAPI_RankConfig.md#structFRHAPI__RankConfig)` > & `[`GetRankConfigs`](#structFRHAPI__RankConfigRequestResponse_1aeb54e898307a9b90a72e029b626fee85)`() const` | Gets the value of RankConfigs.
`public inline void `[`SetRankConfigs`](#structFRHAPI__RankConfigRequestResponse_1a7df52291c8b3cdce8418cde93a3ae6ad)`(TArray< `[`FRHAPI_RankConfig`](RHAPI_RankConfig.md#structFRHAPI__RankConfig)` > NewValue)` | Sets the value of RankConfigs.

#### Members

#### `public TArray< `[`FRHAPI_RankConfig`](RHAPI_RankConfig.md#structFRHAPI__RankConfig)` > `[`RankConfigs`](#structFRHAPI__RankConfigRequestResponse_1a06467dc9fc36b86f7882b698da59ca3c) <a id="structFRHAPI__RankConfigRequestResponse_1a06467dc9fc36b86f7882b698da59ca3c"></a>

List of rank configurations.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__RankConfigRequestResponse_1a9a012bba332ab54b4bc7dfa69b30cb07)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RankConfigRequestResponse_1a9a012bba332ab54b4bc7dfa69b30cb07"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__RankConfigRequestResponse_1a6b1bbc830bc841a1ad8f440b490d651c)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__RankConfigRequestResponse_1a6b1bbc830bc841a1ad8f440b490d651c"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TArray< `[`FRHAPI_RankConfig`](RHAPI_RankConfig.md#structFRHAPI__RankConfig)` > & `[`GetRankConfigs`](#structFRHAPI__RankConfigRequestResponse_1a10293ed196ac1e3e124af3b85a34fb44)`()` <a id="structFRHAPI__RankConfigRequestResponse_1a10293ed196ac1e3e124af3b85a34fb44"></a>

Gets the value of RankConfigs.

<br>
#### `public inline const TArray< `[`FRHAPI_RankConfig`](RHAPI_RankConfig.md#structFRHAPI__RankConfig)` > & `[`GetRankConfigs`](#structFRHAPI__RankConfigRequestResponse_1aeb54e898307a9b90a72e029b626fee85)`() const` <a id="structFRHAPI__RankConfigRequestResponse_1aeb54e898307a9b90a72e029b626fee85"></a>

Gets the value of RankConfigs.

<br>
#### `public inline void `[`SetRankConfigs`](#structFRHAPI__RankConfigRequestResponse_1a7df52291c8b3cdce8418cde93a3ae6ad)`(TArray< `[`FRHAPI_RankConfig`](RHAPI_RankConfig.md#structFRHAPI__RankConfig)` > NewValue)` <a id="structFRHAPI__RankConfigRequestResponse_1a7df52291c8b3cdce8418cde93a3ae6ad"></a>

Sets the value of RankConfigs.

<br>
