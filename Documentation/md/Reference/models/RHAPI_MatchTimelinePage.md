---
title: RHAPI_MatchTimelinePage
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchTimelinePage`](#structFRHAPI__MatchTimelinePage) | 

## struct `FRHAPI_MatchTimelinePage` <a id="structFRHAPI__MatchTimelinePage"></a>

```
struct FRHAPI_MatchTimelinePage
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > `[`Events_Optional`](#structFRHAPI__MatchTimelinePage_1a010d07253597fab36f79d5cda9bc8d61) | Page of events.
`public bool `[`Events_IsSet`](#structFRHAPI__MatchTimelinePage_1a07c5249fd26f388c8b2a76e52c55a513) | true if Events_Optional has been set to a value
`public FString `[`Cursor_Optional`](#structFRHAPI__MatchTimelinePage_1a37077de5830417e6427260941e5bd0a1) | 
`public bool `[`Cursor_IsSet`](#structFRHAPI__MatchTimelinePage_1a2f2bf9e1be4d594a321955f112566b00) | true if Cursor_Optional has been set to a value
`public bool `[`Cursor_IsNull`](#structFRHAPI__MatchTimelinePage_1aa9785e608952fd971df308f9c775f169) | true if Cursor_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__MatchTimelinePage_1ae7fc3045c1e61fb0a899d47c776a649f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchTimelinePage_1a7a065d27c30421e24213c34580e12868)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & `[`GetEvents`](#structFRHAPI__MatchTimelinePage_1a0f21f2fddf2c34c8b730826260be1dd2)`()` | Gets the value of Events_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & `[`GetEvents`](#structFRHAPI__MatchTimelinePage_1acfaa3aa066483c8353b4731b249056e0)`() const` | Gets the value of Events_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & `[`GetEvents`](#structFRHAPI__MatchTimelinePage_1a4ccd4c6a427bf4544e8e6748af44fca8)`(const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & DefaultValue) const` | Gets the value of Events_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEvents`](#structFRHAPI__MatchTimelinePage_1a446b381102988899d6824e02648ee10d)`(TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & OutValue) const` | Fills OutValue with the value of Events_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > * `[`GetEventsOrNull`](#structFRHAPI__MatchTimelinePage_1ace73aae2b9064d41382d2f5bdaedf63d)`()` | Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > * `[`GetEventsOrNull`](#structFRHAPI__MatchTimelinePage_1a1965796f6886f10b1fa3d032128855eb)`() const` | Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEvents`](#structFRHAPI__MatchTimelinePage_1a20d813430181eebd4dd886db00335ad1)`(const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & NewValue)` | Sets the value of Events_Optional and also sets Events_IsSet to true.
`public inline FORCEINLINE void `[`SetEvents`](#structFRHAPI__MatchTimelinePage_1ab1c193b067631737d5ac24f56a2498d5)`(TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > && NewValue)` | Sets the value of Events_Optional and also sets Events_IsSet to true using move semantics.
`public inline void `[`ClearEvents`](#structFRHAPI__MatchTimelinePage_1adc3e100608a85c1e77178e6ce1230ddc)`()` | Clears the value of Events_Optional and sets Events_IsSet to false.
`public inline FORCEINLINE FString & `[`GetCursor`](#structFRHAPI__MatchTimelinePage_1a17b7625ad106babf8afe2f64596fbd9c)`()` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__MatchTimelinePage_1a63e5a37369564bd3f0e51d285855fc56)`() const` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__MatchTimelinePage_1ab11290a859219d1281b147d440210038)`(const FString & DefaultValue) const` | Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCursor`](#structFRHAPI__MatchTimelinePage_1a4c947bfb03ab30efd9353ad3f4fed7f1)`(FString & OutValue) const` | Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetCursorOrNull`](#structFRHAPI__MatchTimelinePage_1a6f6046d5fb679db16ed3c3681ebd4b74)`()` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetCursorOrNull`](#structFRHAPI__MatchTimelinePage_1a998c57e005bc6ae73c46409fc1e9a368)`() const` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__MatchTimelinePage_1a7b5634a25c84fd6efecf2237627a4fcf)`(const FString & NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__MatchTimelinePage_1a6e47d771e4f570651765b9fe3291e4e8)`(FString && NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.
`public inline void `[`ClearCursor`](#structFRHAPI__MatchTimelinePage_1a4cc443c8b67b4fff6d8444563967e26d)`()` | Clears the value of Cursor_Optional and sets Cursor_IsSet to false.
`public inline FORCEINLINE void `[`SetCursorToNull`](#structFRHAPI__MatchTimelinePage_1a74bb1c0a99387099a211a6359f2c430f)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCursorNull`](#structFRHAPI__MatchTimelinePage_1a9be1819513a5019f7a1ecdde59216e51)`() const` | Checks whether Cursor_Optional is set to null.

### Members

#### `public TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > `[`Events_Optional`](#structFRHAPI__MatchTimelinePage_1a010d07253597fab36f79d5cda9bc8d61) <a id="structFRHAPI__MatchTimelinePage_1a010d07253597fab36f79d5cda9bc8d61"></a>

Page of events.

#### `public bool `[`Events_IsSet`](#structFRHAPI__MatchTimelinePage_1a07c5249fd26f388c8b2a76e52c55a513) <a id="structFRHAPI__MatchTimelinePage_1a07c5249fd26f388c8b2a76e52c55a513"></a>

true if Events_Optional has been set to a value

#### `public FString `[`Cursor_Optional`](#structFRHAPI__MatchTimelinePage_1a37077de5830417e6427260941e5bd0a1) <a id="structFRHAPI__MatchTimelinePage_1a37077de5830417e6427260941e5bd0a1"></a>

#### `public bool `[`Cursor_IsSet`](#structFRHAPI__MatchTimelinePage_1a2f2bf9e1be4d594a321955f112566b00) <a id="structFRHAPI__MatchTimelinePage_1a2f2bf9e1be4d594a321955f112566b00"></a>

true if Cursor_Optional has been set to a value

#### `public bool `[`Cursor_IsNull`](#structFRHAPI__MatchTimelinePage_1aa9785e608952fd971df308f9c775f169) <a id="structFRHAPI__MatchTimelinePage_1aa9785e608952fd971df308f9c775f169"></a>

true if Cursor_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchTimelinePage_1ae7fc3045c1e61fb0a899d47c776a649f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchTimelinePage_1ae7fc3045c1e61fb0a899d47c776a649f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchTimelinePage_1a7a065d27c30421e24213c34580e12868)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchTimelinePage_1a7a065d27c30421e24213c34580e12868"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & `[`GetEvents`](#structFRHAPI__MatchTimelinePage_1a0f21f2fddf2c34c8b730826260be1dd2)`()` <a id="structFRHAPI__MatchTimelinePage_1a0f21f2fddf2c34c8b730826260be1dd2"></a>

Gets the value of Events_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & `[`GetEvents`](#structFRHAPI__MatchTimelinePage_1acfaa3aa066483c8353b4731b249056e0)`() const` <a id="structFRHAPI__MatchTimelinePage_1acfaa3aa066483c8353b4731b249056e0"></a>

Gets the value of Events_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & `[`GetEvents`](#structFRHAPI__MatchTimelinePage_1a4ccd4c6a427bf4544e8e6748af44fca8)`(const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & DefaultValue) const` <a id="structFRHAPI__MatchTimelinePage_1a4ccd4c6a427bf4544e8e6748af44fca8"></a>

Gets the value of Events_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEvents`](#structFRHAPI__MatchTimelinePage_1a446b381102988899d6824e02648ee10d)`(TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & OutValue) const` <a id="structFRHAPI__MatchTimelinePage_1a446b381102988899d6824e02648ee10d"></a>

Fills OutValue with the value of Events_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > * `[`GetEventsOrNull`](#structFRHAPI__MatchTimelinePage_1ace73aae2b9064d41382d2f5bdaedf63d)`()` <a id="structFRHAPI__MatchTimelinePage_1ace73aae2b9064d41382d2f5bdaedf63d"></a>

Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > * `[`GetEventsOrNull`](#structFRHAPI__MatchTimelinePage_1a1965796f6886f10b1fa3d032128855eb)`() const` <a id="structFRHAPI__MatchTimelinePage_1a1965796f6886f10b1fa3d032128855eb"></a>

Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEvents`](#structFRHAPI__MatchTimelinePage_1a20d813430181eebd4dd886db00335ad1)`(const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & NewValue)` <a id="structFRHAPI__MatchTimelinePage_1a20d813430181eebd4dd886db00335ad1"></a>

Sets the value of Events_Optional and also sets Events_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEvents`](#structFRHAPI__MatchTimelinePage_1ab1c193b067631737d5ac24f56a2498d5)`(TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > && NewValue)` <a id="structFRHAPI__MatchTimelinePage_1ab1c193b067631737d5ac24f56a2498d5"></a>

Sets the value of Events_Optional and also sets Events_IsSet to true using move semantics.

#### `public inline void `[`ClearEvents`](#structFRHAPI__MatchTimelinePage_1adc3e100608a85c1e77178e6ce1230ddc)`()` <a id="structFRHAPI__MatchTimelinePage_1adc3e100608a85c1e77178e6ce1230ddc"></a>

Clears the value of Events_Optional and sets Events_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetCursor`](#structFRHAPI__MatchTimelinePage_1a17b7625ad106babf8afe2f64596fbd9c)`()` <a id="structFRHAPI__MatchTimelinePage_1a17b7625ad106babf8afe2f64596fbd9c"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__MatchTimelinePage_1a63e5a37369564bd3f0e51d285855fc56)`() const` <a id="structFRHAPI__MatchTimelinePage_1a63e5a37369564bd3f0e51d285855fc56"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__MatchTimelinePage_1ab11290a859219d1281b147d440210038)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelinePage_1ab11290a859219d1281b147d440210038"></a>

Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCursor`](#structFRHAPI__MatchTimelinePage_1a4c947bfb03ab30efd9353ad3f4fed7f1)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelinePage_1a4c947bfb03ab30efd9353ad3f4fed7f1"></a>

Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetCursorOrNull`](#structFRHAPI__MatchTimelinePage_1a6f6046d5fb679db16ed3c3681ebd4b74)`()` <a id="structFRHAPI__MatchTimelinePage_1a6f6046d5fb679db16ed3c3681ebd4b74"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetCursorOrNull`](#structFRHAPI__MatchTimelinePage_1a998c57e005bc6ae73c46409fc1e9a368)`() const` <a id="structFRHAPI__MatchTimelinePage_1a998c57e005bc6ae73c46409fc1e9a368"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__MatchTimelinePage_1a7b5634a25c84fd6efecf2237627a4fcf)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelinePage_1a7b5634a25c84fd6efecf2237627a4fcf"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__MatchTimelinePage_1a6e47d771e4f570651765b9fe3291e4e8)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelinePage_1a6e47d771e4f570651765b9fe3291e4e8"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.

#### `public inline void `[`ClearCursor`](#structFRHAPI__MatchTimelinePage_1a4cc443c8b67b4fff6d8444563967e26d)`()` <a id="structFRHAPI__MatchTimelinePage_1a4cc443c8b67b4fff6d8444563967e26d"></a>

Clears the value of Cursor_Optional and sets Cursor_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCursorToNull`](#structFRHAPI__MatchTimelinePage_1a74bb1c0a99387099a211a6359f2c430f)`()` <a id="structFRHAPI__MatchTimelinePage_1a74bb1c0a99387099a211a6359f2c430f"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCursorNull`](#structFRHAPI__MatchTimelinePage_1a9be1819513a5019f7a1ecdde59216e51)`() const` <a id="structFRHAPI__MatchTimelinePage_1a9be1819513a5019f7a1ecdde59216e51"></a>

Checks whether Cursor_Optional is set to null.

