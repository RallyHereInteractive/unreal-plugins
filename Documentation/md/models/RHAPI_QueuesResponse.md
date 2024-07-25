# group `RHAPI_QueuesResponse` <a id="group__RHAPI__QueuesResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_QueuesResponse`](#structFRHAPI__QueuesResponse) | DEPRECATED - A list of configuration about queues.

## struct `FRHAPI_QueuesResponse` <a id="structFRHAPI__QueuesResponse"></a>

```
struct FRHAPI_QueuesResponse
  : public FRHAPI_Model
```

DEPRECATED - A list of configuration about queues.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_QueueConfig`](RHAPI_QueueConfig.md#structFRHAPI__QueueConfig)` > `[`Queues`](#structFRHAPI__QueuesResponse_1a53242423e1b15a69a599d22a44d5278b) | List of queues.
`public virtual bool `[`FromJson`](#structFRHAPI__QueuesResponse_1a5c49070521d3a51f4473ef63b2cf3528)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__QueuesResponse_1a2ea1128f4fd4c89439d93aa028536931)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_QueueConfig`](RHAPI_QueueConfig.md#structFRHAPI__QueueConfig)` > & `[`GetQueues`](#structFRHAPI__QueuesResponse_1ad64eb9a9701424f3d57c6345f22936d2)`()` | Gets the value of Queues.
`public inline const TArray< `[`FRHAPI_QueueConfig`](RHAPI_QueueConfig.md#structFRHAPI__QueueConfig)` > & `[`GetQueues`](#structFRHAPI__QueuesResponse_1abbf9ad5940f96346c4b7d96441f6550a)`() const` | Gets the value of Queues.
`public inline void `[`SetQueues`](#structFRHAPI__QueuesResponse_1a218b5995bb455cc238db8f7020e55a95)`(const TArray< `[`FRHAPI_QueueConfig`](RHAPI_QueueConfig.md#structFRHAPI__QueueConfig)` > & NewValue)` | Sets the value of Queues.
`public inline void `[`SetQueues`](#structFRHAPI__QueuesResponse_1ae4cb639d07facf18baafbc12b4c50cca)`(TArray< `[`FRHAPI_QueueConfig`](RHAPI_QueueConfig.md#structFRHAPI__QueueConfig)` > && NewValue)` | Sets the value of Queues using move semantics.

### Members

#### `public TArray< `[`FRHAPI_QueueConfig`](RHAPI_QueueConfig.md#structFRHAPI__QueueConfig)` > `[`Queues`](#structFRHAPI__QueuesResponse_1a53242423e1b15a69a599d22a44d5278b) <a id="structFRHAPI__QueuesResponse_1a53242423e1b15a69a599d22a44d5278b"></a>

List of queues.

#### `public virtual bool `[`FromJson`](#structFRHAPI__QueuesResponse_1a5c49070521d3a51f4473ef63b2cf3528)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__QueuesResponse_1a5c49070521d3a51f4473ef63b2cf3528"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__QueuesResponse_1a2ea1128f4fd4c89439d93aa028536931)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__QueuesResponse_1a2ea1128f4fd4c89439d93aa028536931"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_QueueConfig`](RHAPI_QueueConfig.md#structFRHAPI__QueueConfig)` > & `[`GetQueues`](#structFRHAPI__QueuesResponse_1ad64eb9a9701424f3d57c6345f22936d2)`()` <a id="structFRHAPI__QueuesResponse_1ad64eb9a9701424f3d57c6345f22936d2"></a>

Gets the value of Queues.

#### `public inline const TArray< `[`FRHAPI_QueueConfig`](RHAPI_QueueConfig.md#structFRHAPI__QueueConfig)` > & `[`GetQueues`](#structFRHAPI__QueuesResponse_1abbf9ad5940f96346c4b7d96441f6550a)`() const` <a id="structFRHAPI__QueuesResponse_1abbf9ad5940f96346c4b7d96441f6550a"></a>

Gets the value of Queues.

#### `public inline void `[`SetQueues`](#structFRHAPI__QueuesResponse_1a218b5995bb455cc238db8f7020e55a95)`(const TArray< `[`FRHAPI_QueueConfig`](RHAPI_QueueConfig.md#structFRHAPI__QueueConfig)` > & NewValue)` <a id="structFRHAPI__QueuesResponse_1a218b5995bb455cc238db8f7020e55a95"></a>

Sets the value of Queues.

#### `public inline void `[`SetQueues`](#structFRHAPI__QueuesResponse_1ae4cb639d07facf18baafbc12b4c50cca)`(TArray< `[`FRHAPI_QueueConfig`](RHAPI_QueueConfig.md#structFRHAPI__QueueConfig)` > && NewValue)` <a id="structFRHAPI__QueuesResponse_1ae4cb639d07facf18baafbc12b4c50cca"></a>

Sets the value of Queues using move semantics.

