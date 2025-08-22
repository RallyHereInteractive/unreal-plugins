---
title: RHAPI_MatchTimeline
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchTimeline`](#structFRHAPI__MatchTimeline) | 

## struct `FRHAPI_MatchTimeline` <a id="structFRHAPI__MatchTimeline"></a>

```
struct FRHAPI_MatchTimeline
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > `[`Events`](#structFRHAPI__MatchTimeline_1aa39a1c9eedc8263962d60fff0a8a40bb) | Events to add to the match timeline.
`public virtual bool `[`FromJson`](#structFRHAPI__MatchTimeline_1aa62982d372391daa34ab8048562ea3c8)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchTimeline_1abcaeb975d46c1c1a1c7c12d2991fa10d)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & `[`GetEvents`](#structFRHAPI__MatchTimeline_1af9e1d389895ec2fa27791e01a8239cb5)`()` | Gets the value of Events.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & `[`GetEvents`](#structFRHAPI__MatchTimeline_1adf9d3bd4f6180da7f21fd5a03841a3e7)`() const` | Gets the value of Events.
`public inline FORCEINLINE void `[`SetEvents`](#structFRHAPI__MatchTimeline_1a1915baa0eb339a42ba420a6fd997c16a)`(const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & NewValue)` | Sets the value of Events.
`public inline FORCEINLINE void `[`SetEvents`](#structFRHAPI__MatchTimeline_1a16607616a29dc21db297908be979b2bc)`(TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > && NewValue)` | Sets the value of Events using move semantics.

### Members

#### `public TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > `[`Events`](#structFRHAPI__MatchTimeline_1aa39a1c9eedc8263962d60fff0a8a40bb) <a id="structFRHAPI__MatchTimeline_1aa39a1c9eedc8263962d60fff0a8a40bb"></a>

Events to add to the match timeline.

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchTimeline_1aa62982d372391daa34ab8048562ea3c8)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchTimeline_1aa62982d372391daa34ab8048562ea3c8"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchTimeline_1abcaeb975d46c1c1a1c7c12d2991fa10d)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchTimeline_1abcaeb975d46c1c1a1c7c12d2991fa10d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & `[`GetEvents`](#structFRHAPI__MatchTimeline_1af9e1d389895ec2fa27791e01a8239cb5)`()` <a id="structFRHAPI__MatchTimeline_1af9e1d389895ec2fa27791e01a8239cb5"></a>

Gets the value of Events.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & `[`GetEvents`](#structFRHAPI__MatchTimeline_1adf9d3bd4f6180da7f21fd5a03841a3e7)`() const` <a id="structFRHAPI__MatchTimeline_1adf9d3bd4f6180da7f21fd5a03841a3e7"></a>

Gets the value of Events.

#### `public inline FORCEINLINE void `[`SetEvents`](#structFRHAPI__MatchTimeline_1a1915baa0eb339a42ba420a6fd997c16a)`(const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & NewValue)` <a id="structFRHAPI__MatchTimeline_1a1915baa0eb339a42ba420a6fd997c16a"></a>

Sets the value of Events.

#### `public inline FORCEINLINE void `[`SetEvents`](#structFRHAPI__MatchTimeline_1a16607616a29dc21db297908be979b2bc)`(TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > && NewValue)` <a id="structFRHAPI__MatchTimeline_1a16607616a29dc21db297908be979b2bc"></a>

Sets the value of Events using move semantics.

