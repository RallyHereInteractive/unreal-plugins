---
title: RHAPI_QueuesResponseV2
---

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
`public virtual void `[`WriteJson`](#structFRHAPI__QueuesResponseV2_1a0e17888c59af74fc4d13d01a31f249aa)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_QueueConfigV2`](RHAPI_QueueConfigV2.md#structFRHAPI__QueueConfigV2)` > & `[`GetQueues`](#structFRHAPI__QueuesResponseV2_1ae5240f24627e33ba1597f19c7303bd2d)`()` | Gets the value of Queues.
`public inline FORCEINLINE const TArray< `[`FRHAPI_QueueConfigV2`](RHAPI_QueueConfigV2.md#structFRHAPI__QueueConfigV2)` > & `[`GetQueues`](#structFRHAPI__QueuesResponseV2_1a8012ae87d51b058292dc5b337c86bcc2)`() const` | Gets the value of Queues.
`public inline FORCEINLINE void `[`SetQueues`](#structFRHAPI__QueuesResponseV2_1a1718cc1c75cedeb1813be76b142f0898)`(const TArray< `[`FRHAPI_QueueConfigV2`](RHAPI_QueueConfigV2.md#structFRHAPI__QueueConfigV2)` > & NewValue)` | Sets the value of Queues.
`public inline FORCEINLINE void `[`SetQueues`](#structFRHAPI__QueuesResponseV2_1a679d28c6d27c20e79d9da9b7d8328819)`(TArray< `[`FRHAPI_QueueConfigV2`](RHAPI_QueueConfigV2.md#structFRHAPI__QueueConfigV2)` > && NewValue)` | Sets the value of Queues using move semantics.

### Members

#### `public TArray< `[`FRHAPI_QueueConfigV2`](RHAPI_QueueConfigV2.md#structFRHAPI__QueueConfigV2)` > `[`Queues`](#structFRHAPI__QueuesResponseV2_1aeed6d70e3ffa1037df56c9526e6b9777) <a id="structFRHAPI__QueuesResponseV2_1aeed6d70e3ffa1037df56c9526e6b9777"></a>

List of queues.

#### `public virtual bool `[`FromJson`](#structFRHAPI__QueuesResponseV2_1ae894d0b39a06843b9014131101d4e6b8)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__QueuesResponseV2_1ae894d0b39a06843b9014131101d4e6b8"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__QueuesResponseV2_1a0e17888c59af74fc4d13d01a31f249aa)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__QueuesResponseV2_1a0e17888c59af74fc4d13d01a31f249aa"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_QueueConfigV2`](RHAPI_QueueConfigV2.md#structFRHAPI__QueueConfigV2)` > & `[`GetQueues`](#structFRHAPI__QueuesResponseV2_1ae5240f24627e33ba1597f19c7303bd2d)`()` <a id="structFRHAPI__QueuesResponseV2_1ae5240f24627e33ba1597f19c7303bd2d"></a>

Gets the value of Queues.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_QueueConfigV2`](RHAPI_QueueConfigV2.md#structFRHAPI__QueueConfigV2)` > & `[`GetQueues`](#structFRHAPI__QueuesResponseV2_1a8012ae87d51b058292dc5b337c86bcc2)`() const` <a id="structFRHAPI__QueuesResponseV2_1a8012ae87d51b058292dc5b337c86bcc2"></a>

Gets the value of Queues.

#### `public inline FORCEINLINE void `[`SetQueues`](#structFRHAPI__QueuesResponseV2_1a1718cc1c75cedeb1813be76b142f0898)`(const TArray< `[`FRHAPI_QueueConfigV2`](RHAPI_QueueConfigV2.md#structFRHAPI__QueueConfigV2)` > & NewValue)` <a id="structFRHAPI__QueuesResponseV2_1a1718cc1c75cedeb1813be76b142f0898"></a>

Sets the value of Queues.

#### `public inline FORCEINLINE void `[`SetQueues`](#structFRHAPI__QueuesResponseV2_1a679d28c6d27c20e79d9da9b7d8328819)`(TArray< `[`FRHAPI_QueueConfigV2`](RHAPI_QueueConfigV2.md#structFRHAPI__QueueConfigV2)` > && NewValue)` <a id="structFRHAPI__QueuesResponseV2_1a679d28c6d27c20e79d9da9b7d8328819"></a>

Sets the value of Queues using move semantics.

