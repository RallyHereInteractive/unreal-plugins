---
title: RHAPI_EventList
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_EventList`](#structFRHAPI__EventList) | 

## struct `FRHAPI_EventList` <a id="structFRHAPI__EventList"></a>

```
struct FRHAPI_EventList
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > `[`EventList`](#structFRHAPI__EventList_1ab40741de69839cb60db398e340ec2da7) | List of events.
`public virtual bool `[`FromJson`](#structFRHAPI__EventList_1aca32196f1f1da902986dca067702a819)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__EventList_1ac46ee6f9908f8fd60b27079d489e11bd)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > & `[`GetEventList`](#structFRHAPI__EventList_1a7d50a640b2358326b95037cbb4273c86)`()` | Gets the value of EventList.
`public inline FORCEINLINE const TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > & `[`GetEventList`](#structFRHAPI__EventList_1a11136d01111e5f8c805f033f95374829)`() const` | Gets the value of EventList.
`public inline FORCEINLINE void `[`SetEventList`](#structFRHAPI__EventList_1a73bde6cf5089eb757df537c0e7552ce3)`(const TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > & NewValue)` | Sets the value of EventList.
`public inline FORCEINLINE void `[`SetEventList`](#structFRHAPI__EventList_1ad9bee9b6451d066cf981682a8dcc94c2)`(TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > && NewValue)` | Sets the value of EventList using move semantics.

### Members

#### `public TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > `[`EventList`](#structFRHAPI__EventList_1ab40741de69839cb60db398e340ec2da7) <a id="structFRHAPI__EventList_1ab40741de69839cb60db398e340ec2da7"></a>

List of events.

#### `public virtual bool `[`FromJson`](#structFRHAPI__EventList_1aca32196f1f1da902986dca067702a819)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__EventList_1aca32196f1f1da902986dca067702a819"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__EventList_1ac46ee6f9908f8fd60b27079d489e11bd)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__EventList_1ac46ee6f9908f8fd60b27079d489e11bd"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > & `[`GetEventList`](#structFRHAPI__EventList_1a7d50a640b2358326b95037cbb4273c86)`()` <a id="structFRHAPI__EventList_1a7d50a640b2358326b95037cbb4273c86"></a>

Gets the value of EventList.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > & `[`GetEventList`](#structFRHAPI__EventList_1a11136d01111e5f8c805f033f95374829)`() const` <a id="structFRHAPI__EventList_1a11136d01111e5f8c805f033f95374829"></a>

Gets the value of EventList.

#### `public inline FORCEINLINE void `[`SetEventList`](#structFRHAPI__EventList_1a73bde6cf5089eb757df537c0e7552ce3)`(const TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > & NewValue)` <a id="structFRHAPI__EventList_1a73bde6cf5089eb757df537c0e7552ce3"></a>

Sets the value of EventList.

#### `public inline FORCEINLINE void `[`SetEventList`](#structFRHAPI__EventList_1ad9bee9b6451d066cf981682a8dcc94c2)`(TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > && NewValue)` <a id="structFRHAPI__EventList_1ad9bee9b6451d066cf981682a8dcc94c2"></a>

Sets the value of EventList using move semantics.

