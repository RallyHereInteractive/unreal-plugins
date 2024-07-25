# group `RHAPI_QueuesResponseV2` <a id="group__RHAPI__QueuesResponseV2"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_QueuesResponseV2`](#structFRHAPI__QueuesResponseV2) | A list of configuration about queues.

## struct `FRHAPI_QueuesResponseV2` <a id="structFRHAPI__QueuesResponseV2"></a>

```
struct FRHAPI_QueuesResponseV2
  : public FRHAPI_Model
```

A list of configuration about queues.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_QueueConfigV2`](RHAPI_QueueConfigV2.md#structFRHAPI__QueueConfigV2)` > `[`Queues`](#structFRHAPI__QueuesResponseV2_1aeed6d70e3ffa1037df56c9526e6b9777) | List of queues.
`public virtual bool `[`FromJson`](#structFRHAPI__QueuesResponseV2_1ae894d0b39a06843b9014131101d4e6b8)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__QueuesResponseV2_1ada1b68967622a80d59079fed3cf3f740)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_QueueConfigV2`](RHAPI_QueueConfigV2.md#structFRHAPI__QueueConfigV2)` > & `[`GetQueues`](#structFRHAPI__QueuesResponseV2_1abb321e52232f0bc6d94b28451e4c9550)`()` | Gets the value of Queues.
`public inline const TArray< `[`FRHAPI_QueueConfigV2`](RHAPI_QueueConfigV2.md#structFRHAPI__QueueConfigV2)` > & `[`GetQueues`](#structFRHAPI__QueuesResponseV2_1a3d7675d6083b26d4b9d4a728846c365a)`() const` | Gets the value of Queues.
`public inline void `[`SetQueues`](#structFRHAPI__QueuesResponseV2_1a3397237c8b20e217615839f043fc096a)`(const TArray< `[`FRHAPI_QueueConfigV2`](RHAPI_QueueConfigV2.md#structFRHAPI__QueueConfigV2)` > & NewValue)` | Sets the value of Queues.
`public inline void `[`SetQueues`](#structFRHAPI__QueuesResponseV2_1acf2caa57328e562b1c528c63be9121f9)`(TArray< `[`FRHAPI_QueueConfigV2`](RHAPI_QueueConfigV2.md#structFRHAPI__QueueConfigV2)` > && NewValue)` | Sets the value of Queues using move semantics.

### Members

#### `public TArray< `[`FRHAPI_QueueConfigV2`](RHAPI_QueueConfigV2.md#structFRHAPI__QueueConfigV2)` > `[`Queues`](#structFRHAPI__QueuesResponseV2_1aeed6d70e3ffa1037df56c9526e6b9777) <a id="structFRHAPI__QueuesResponseV2_1aeed6d70e3ffa1037df56c9526e6b9777"></a>

List of queues.

#### `public virtual bool `[`FromJson`](#structFRHAPI__QueuesResponseV2_1ae894d0b39a06843b9014131101d4e6b8)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__QueuesResponseV2_1ae894d0b39a06843b9014131101d4e6b8"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__QueuesResponseV2_1ada1b68967622a80d59079fed3cf3f740)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__QueuesResponseV2_1ada1b68967622a80d59079fed3cf3f740"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_QueueConfigV2`](RHAPI_QueueConfigV2.md#structFRHAPI__QueueConfigV2)` > & `[`GetQueues`](#structFRHAPI__QueuesResponseV2_1abb321e52232f0bc6d94b28451e4c9550)`()` <a id="structFRHAPI__QueuesResponseV2_1abb321e52232f0bc6d94b28451e4c9550"></a>

Gets the value of Queues.

#### `public inline const TArray< `[`FRHAPI_QueueConfigV2`](RHAPI_QueueConfigV2.md#structFRHAPI__QueueConfigV2)` > & `[`GetQueues`](#structFRHAPI__QueuesResponseV2_1a3d7675d6083b26d4b9d4a728846c365a)`() const` <a id="structFRHAPI__QueuesResponseV2_1a3d7675d6083b26d4b9d4a728846c365a"></a>

Gets the value of Queues.

#### `public inline void `[`SetQueues`](#structFRHAPI__QueuesResponseV2_1a3397237c8b20e217615839f043fc096a)`(const TArray< `[`FRHAPI_QueueConfigV2`](RHAPI_QueueConfigV2.md#structFRHAPI__QueueConfigV2)` > & NewValue)` <a id="structFRHAPI__QueuesResponseV2_1a3397237c8b20e217615839f043fc096a"></a>

Sets the value of Queues.

#### `public inline void `[`SetQueues`](#structFRHAPI__QueuesResponseV2_1acf2caa57328e562b1c528c63be9121f9)`(TArray< `[`FRHAPI_QueueConfigV2`](RHAPI_QueueConfigV2.md#structFRHAPI__QueueConfigV2)` > && NewValue)` <a id="structFRHAPI__QueuesResponseV2_1acf2caa57328e562b1c528c63be9121f9"></a>

Sets the value of Queues using move semantics.

