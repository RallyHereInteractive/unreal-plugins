# group `RHAPI_EventList` <a id="group__RHAPI__EventList"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__EventList_1a27fccb2ee3f7cc4403c9ac51d1a9e924)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__EventList_1af2eb5752d7bff14073f7062f6568e6f3)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > & `[`GetEventList`](#structFRHAPI__EventList_1aee65131c89751011cb94fb7d13e025fb)`()` | Gets the value of EventList.
`public inline const TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > & `[`GetEventList`](#structFRHAPI__EventList_1a93799dde50ffba542b135d905641c5ae)`() const` | Gets the value of EventList.
`public inline void `[`SetEventList`](#structFRHAPI__EventList_1a37bfeb079a01b6d73b07a1c4bd583950)`(const TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > & NewValue)` | Sets the value of EventList.
`public inline void `[`SetEventList`](#structFRHAPI__EventList_1a02efe36021b9fad2d7e9a1a9339c4a8d)`(TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > && NewValue)` | Sets the value of EventList using move semantics.

### Members

#### `public TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > `[`EventList`](#structFRHAPI__EventList_1ab40741de69839cb60db398e340ec2da7) <a id="structFRHAPI__EventList_1ab40741de69839cb60db398e340ec2da7"></a>

List of events.

#### `public virtual bool `[`FromJson`](#structFRHAPI__EventList_1a27fccb2ee3f7cc4403c9ac51d1a9e924)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__EventList_1a27fccb2ee3f7cc4403c9ac51d1a9e924"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__EventList_1af2eb5752d7bff14073f7062f6568e6f3)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__EventList_1af2eb5752d7bff14073f7062f6568e6f3"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > & `[`GetEventList`](#structFRHAPI__EventList_1aee65131c89751011cb94fb7d13e025fb)`()` <a id="structFRHAPI__EventList_1aee65131c89751011cb94fb7d13e025fb"></a>

Gets the value of EventList.

#### `public inline const TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > & `[`GetEventList`](#structFRHAPI__EventList_1a93799dde50ffba542b135d905641c5ae)`() const` <a id="structFRHAPI__EventList_1a93799dde50ffba542b135d905641c5ae"></a>

Gets the value of EventList.

#### `public inline void `[`SetEventList`](#structFRHAPI__EventList_1a37bfeb079a01b6d73b07a1c4bd583950)`(const TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > & NewValue)` <a id="structFRHAPI__EventList_1a37bfeb079a01b6d73b07a1c4bd583950"></a>

Sets the value of EventList.

#### `public inline void `[`SetEventList`](#structFRHAPI__EventList_1a02efe36021b9fad2d7e9a1a9339c4a8d)`(TArray< `[`FRHAPI_RallyHereEvent`](RHAPI_RallyHereEvent.md#structFRHAPI__RallyHereEvent)` > && NewValue)` <a id="structFRHAPI__EventList_1a02efe36021b9fad2d7e9a1a9339c4a8d"></a>

Sets the value of EventList using move semantics.

