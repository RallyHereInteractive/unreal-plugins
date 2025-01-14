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
`public inline TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > & `[`GetEventList`](#structFRHAPI__EventList_1a543ba7ec4eede43774e5d39a075485dc)`()` | Gets the value of EventList.
`public inline const TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > & `[`GetEventList`](#structFRHAPI__EventList_1a615c1e065c9898774e321aab7f2eaed1)`() const` | Gets the value of EventList.
`public inline void `[`SetEventList`](#structFRHAPI__EventList_1a37bfeb079a01b6d73b07a1c4bd583950)`(const TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > & NewValue)` | Sets the value of EventList.
`public inline void `[`SetEventList`](#structFRHAPI__EventList_1a02efe36021b9fad2d7e9a1a9339c4a8d)`(TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > && NewValue)` | Sets the value of EventList using move semantics.

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

#### `public inline TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > & `[`GetEventList`](#structFRHAPI__EventList_1a543ba7ec4eede43774e5d39a075485dc)`()` <a id="structFRHAPI__EventList_1a543ba7ec4eede43774e5d39a075485dc"></a>

Gets the value of EventList.

#### `public inline const TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > & `[`GetEventList`](#structFRHAPI__EventList_1a615c1e065c9898774e321aab7f2eaed1)`() const` <a id="structFRHAPI__EventList_1a615c1e065c9898774e321aab7f2eaed1"></a>

Gets the value of EventList.

#### `public inline void `[`SetEventList`](#structFRHAPI__EventList_1a37bfeb079a01b6d73b07a1c4bd583950)`(const TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > & NewValue)` <a id="structFRHAPI__EventList_1a37bfeb079a01b6d73b07a1c4bd583950"></a>

Sets the value of EventList.

#### `public inline void `[`SetEventList`](#structFRHAPI__EventList_1a02efe36021b9fad2d7e9a1a9339c4a8d)`(TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > && NewValue)` <a id="structFRHAPI__EventList_1a02efe36021b9fad2d7e9a1a9339c4a8d"></a>

Sets the value of EventList using move semantics.

