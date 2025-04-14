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
`public inline TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & `[`GetEvents`](#structFRHAPI__MatchTimeline_1a9d5e7f25d100498a38d4077d8f4f0e30)`()` | Gets the value of Events.
`public inline const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & `[`GetEvents`](#structFRHAPI__MatchTimeline_1a75db4c0e2759e65450916487e7424ea7)`() const` | Gets the value of Events.
`public inline void `[`SetEvents`](#structFRHAPI__MatchTimeline_1a25e75e06b8c70bd43d33f9958adf2573)`(const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & NewValue)` | Sets the value of Events.
`public inline void `[`SetEvents`](#structFRHAPI__MatchTimeline_1a4c97c69834a1ee74e0160da1f19c3bb5)`(TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > && NewValue)` | Sets the value of Events using move semantics.

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

#### `public inline TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & `[`GetEvents`](#structFRHAPI__MatchTimeline_1a9d5e7f25d100498a38d4077d8f4f0e30)`()` <a id="structFRHAPI__MatchTimeline_1a9d5e7f25d100498a38d4077d8f4f0e30"></a>

Gets the value of Events.

#### `public inline const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & `[`GetEvents`](#structFRHAPI__MatchTimeline_1a75db4c0e2759e65450916487e7424ea7)`() const` <a id="structFRHAPI__MatchTimeline_1a75db4c0e2759e65450916487e7424ea7"></a>

Gets the value of Events.

#### `public inline void `[`SetEvents`](#structFRHAPI__MatchTimeline_1a25e75e06b8c70bd43d33f9958adf2573)`(const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & NewValue)` <a id="structFRHAPI__MatchTimeline_1a25e75e06b8c70bd43d33f9958adf2573"></a>

Sets the value of Events.

#### `public inline void `[`SetEvents`](#structFRHAPI__MatchTimeline_1a4c97c69834a1ee74e0160da1f19c3bb5)`(TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > && NewValue)` <a id="structFRHAPI__MatchTimeline_1a4c97c69834a1ee74e0160da1f19c3bb5"></a>

Sets the value of Events using move semantics.

