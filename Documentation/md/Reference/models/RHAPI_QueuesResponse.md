---
title: RHAPI_QueuesResponse
---

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
`public virtual void `[`WriteJson`](#structFRHAPI__QueuesResponse_1a0acd96308a10f19c44ab660c31a6d00a)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_QueueConfig`](RHAPI_QueueConfig.md#structFRHAPI__QueueConfig)` > & `[`GetQueues`](#structFRHAPI__QueuesResponse_1a81b780fa383773f6a7985cc3c5e73f04)`()` | Gets the value of Queues.
`public inline FORCEINLINE const TArray< `[`FRHAPI_QueueConfig`](RHAPI_QueueConfig.md#structFRHAPI__QueueConfig)` > & `[`GetQueues`](#structFRHAPI__QueuesResponse_1a344963affd57a315f5c967bb567d4959)`() const` | Gets the value of Queues.
`public inline FORCEINLINE void `[`SetQueues`](#structFRHAPI__QueuesResponse_1a19758a063222b0d3f71c9e6b76aa9b41)`(const TArray< `[`FRHAPI_QueueConfig`](RHAPI_QueueConfig.md#structFRHAPI__QueueConfig)` > & NewValue)` | Sets the value of Queues.
`public inline FORCEINLINE void `[`SetQueues`](#structFRHAPI__QueuesResponse_1ad9e041054f2857ce0466f04a8ed22bef)`(TArray< `[`FRHAPI_QueueConfig`](RHAPI_QueueConfig.md#structFRHAPI__QueueConfig)` > && NewValue)` | Sets the value of Queues using move semantics.

### Members

#### `public TArray< `[`FRHAPI_QueueConfig`](RHAPI_QueueConfig.md#structFRHAPI__QueueConfig)` > `[`Queues`](#structFRHAPI__QueuesResponse_1a53242423e1b15a69a599d22a44d5278b) <a id="structFRHAPI__QueuesResponse_1a53242423e1b15a69a599d22a44d5278b"></a>

List of queues.

#### `public virtual bool `[`FromJson`](#structFRHAPI__QueuesResponse_1a5c49070521d3a51f4473ef63b2cf3528)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__QueuesResponse_1a5c49070521d3a51f4473ef63b2cf3528"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__QueuesResponse_1a0acd96308a10f19c44ab660c31a6d00a)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__QueuesResponse_1a0acd96308a10f19c44ab660c31a6d00a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_QueueConfig`](RHAPI_QueueConfig.md#structFRHAPI__QueueConfig)` > & `[`GetQueues`](#structFRHAPI__QueuesResponse_1a81b780fa383773f6a7985cc3c5e73f04)`()` <a id="structFRHAPI__QueuesResponse_1a81b780fa383773f6a7985cc3c5e73f04"></a>

Gets the value of Queues.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_QueueConfig`](RHAPI_QueueConfig.md#structFRHAPI__QueueConfig)` > & `[`GetQueues`](#structFRHAPI__QueuesResponse_1a344963affd57a315f5c967bb567d4959)`() const` <a id="structFRHAPI__QueuesResponse_1a344963affd57a315f5c967bb567d4959"></a>

Gets the value of Queues.

#### `public inline FORCEINLINE void `[`SetQueues`](#structFRHAPI__QueuesResponse_1a19758a063222b0d3f71c9e6b76aa9b41)`(const TArray< `[`FRHAPI_QueueConfig`](RHAPI_QueueConfig.md#structFRHAPI__QueueConfig)` > & NewValue)` <a id="structFRHAPI__QueuesResponse_1a19758a063222b0d3f71c9e6b76aa9b41"></a>

Sets the value of Queues.

#### `public inline FORCEINLINE void `[`SetQueues`](#structFRHAPI__QueuesResponse_1ad9e041054f2857ce0466f04a8ed22bef)`(TArray< `[`FRHAPI_QueueConfig`](RHAPI_QueueConfig.md#structFRHAPI__QueueConfig)` > && NewValue)` <a id="structFRHAPI__QueuesResponse_1ad9e041054f2857ce0466f04a8ed22bef"></a>

Sets the value of Queues using move semantics.

