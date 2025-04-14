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
`public inline TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & `[`GetEvents`](#structFRHAPI__MatchTimelinePage_1a046966837e812d2d2bb8d348d05a5b84)`()` | Gets the value of Events_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & `[`GetEvents`](#structFRHAPI__MatchTimelinePage_1aa2051e8624100ab7f1213d43aeb9f4e0)`() const` | Gets the value of Events_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & `[`GetEvents`](#structFRHAPI__MatchTimelinePage_1a85cd993815ed4e63c9186773d7b9dd5d)`(const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & DefaultValue) const` | Gets the value of Events_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEvents`](#structFRHAPI__MatchTimelinePage_1ad71469e9a6a49ba98328dc56d1d10200)`(TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & OutValue) const` | Fills OutValue with the value of Events_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > * `[`GetEventsOrNull`](#structFRHAPI__MatchTimelinePage_1a98d03913d6d056b0083a10cf4fb81cde)`()` | Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > * `[`GetEventsOrNull`](#structFRHAPI__MatchTimelinePage_1a4b4cdd9ca2c0c6a18f9657411e2fd3bd)`() const` | Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEvents`](#structFRHAPI__MatchTimelinePage_1a1d62b134b2796cccc274e2e0a4f2652a)`(const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & NewValue)` | Sets the value of Events_Optional and also sets Events_IsSet to true.
`public inline void `[`SetEvents`](#structFRHAPI__MatchTimelinePage_1adcb5f594dc0a5dfdc543683cb14367e0)`(TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > && NewValue)` | Sets the value of Events_Optional and also sets Events_IsSet to true using move semantics.
`public inline void `[`ClearEvents`](#structFRHAPI__MatchTimelinePage_1adc3e100608a85c1e77178e6ce1230ddc)`()` | Clears the value of Events_Optional and sets Events_IsSet to false.
`public inline bool `[`IsEventsSet`](#structFRHAPI__MatchTimelinePage_1a75ec9d2adc0c3379f667273627d43b14)`() const` | Checks whether Events_Optional has been set.
`public inline FString & `[`GetCursor`](#structFRHAPI__MatchTimelinePage_1a4e5eba392ac2e56bac01c32a08376e00)`()` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetCursor`](#structFRHAPI__MatchTimelinePage_1a023101e8379480542e41193255b1b913)`() const` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetCursor`](#structFRHAPI__MatchTimelinePage_1a5d73a445845d9980cf576d7a31497043)`(const FString & DefaultValue) const` | Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCursor`](#structFRHAPI__MatchTimelinePage_1add46a056e08ee5e4dcfb271480fb7ab3)`(FString & OutValue) const` | Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCursorOrNull`](#structFRHAPI__MatchTimelinePage_1a46526b0a00b8421e4ec7b43a2e7a8feb)`()` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCursorOrNull`](#structFRHAPI__MatchTimelinePage_1a7bf83494c2ed4e43d7a727031ae26262)`() const` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCursor`](#structFRHAPI__MatchTimelinePage_1a1e80b968afb33e5829b02f8f0bdadc55)`(const FString & NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.
`public inline void `[`SetCursor`](#structFRHAPI__MatchTimelinePage_1acfb2705deef01ea18ac81fe2f246edf3)`(FString && NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.
`public inline void `[`ClearCursor`](#structFRHAPI__MatchTimelinePage_1a4cc443c8b67b4fff6d8444563967e26d)`()` | Clears the value of Cursor_Optional and sets Cursor_IsSet to false.
`public inline bool `[`IsCursorSet`](#structFRHAPI__MatchTimelinePage_1a1f1306fc0d165042b0e9bfb54d79329c)`() const` | Checks whether Cursor_Optional has been set.
`public inline void `[`SetCursorToNull`](#structFRHAPI__MatchTimelinePage_1a81f2a7c9174f526f5bb66a5ec58c968b)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCursorNull`](#structFRHAPI__MatchTimelinePage_1a98ee8eb3277e02aa64ce32fe3e27f2a6)`() const` | Checks whether Cursor_Optional is set to null.

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

#### `public inline TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & `[`GetEvents`](#structFRHAPI__MatchTimelinePage_1a046966837e812d2d2bb8d348d05a5b84)`()` <a id="structFRHAPI__MatchTimelinePage_1a046966837e812d2d2bb8d348d05a5b84"></a>

Gets the value of Events_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & `[`GetEvents`](#structFRHAPI__MatchTimelinePage_1aa2051e8624100ab7f1213d43aeb9f4e0)`() const` <a id="structFRHAPI__MatchTimelinePage_1aa2051e8624100ab7f1213d43aeb9f4e0"></a>

Gets the value of Events_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & `[`GetEvents`](#structFRHAPI__MatchTimelinePage_1a85cd993815ed4e63c9186773d7b9dd5d)`(const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & DefaultValue) const` <a id="structFRHAPI__MatchTimelinePage_1a85cd993815ed4e63c9186773d7b9dd5d"></a>

Gets the value of Events_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEvents`](#structFRHAPI__MatchTimelinePage_1ad71469e9a6a49ba98328dc56d1d10200)`(TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & OutValue) const` <a id="structFRHAPI__MatchTimelinePage_1ad71469e9a6a49ba98328dc56d1d10200"></a>

Fills OutValue with the value of Events_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > * `[`GetEventsOrNull`](#structFRHAPI__MatchTimelinePage_1a98d03913d6d056b0083a10cf4fb81cde)`()` <a id="structFRHAPI__MatchTimelinePage_1a98d03913d6d056b0083a10cf4fb81cde"></a>

Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > * `[`GetEventsOrNull`](#structFRHAPI__MatchTimelinePage_1a4b4cdd9ca2c0c6a18f9657411e2fd3bd)`() const` <a id="structFRHAPI__MatchTimelinePage_1a4b4cdd9ca2c0c6a18f9657411e2fd3bd"></a>

Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEvents`](#structFRHAPI__MatchTimelinePage_1a1d62b134b2796cccc274e2e0a4f2652a)`(const TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > & NewValue)` <a id="structFRHAPI__MatchTimelinePage_1a1d62b134b2796cccc274e2e0a4f2652a"></a>

Sets the value of Events_Optional and also sets Events_IsSet to true.

#### `public inline void `[`SetEvents`](#structFRHAPI__MatchTimelinePage_1adcb5f594dc0a5dfdc543683cb14367e0)`(TArray< `[`FRHAPI_MatchTimelineEvent`](RHAPI_MatchTimelineEvent.md#structFRHAPI__MatchTimelineEvent)` > && NewValue)` <a id="structFRHAPI__MatchTimelinePage_1adcb5f594dc0a5dfdc543683cb14367e0"></a>

Sets the value of Events_Optional and also sets Events_IsSet to true using move semantics.

#### `public inline void `[`ClearEvents`](#structFRHAPI__MatchTimelinePage_1adc3e100608a85c1e77178e6ce1230ddc)`()` <a id="structFRHAPI__MatchTimelinePage_1adc3e100608a85c1e77178e6ce1230ddc"></a>

Clears the value of Events_Optional and sets Events_IsSet to false.

#### `public inline bool `[`IsEventsSet`](#structFRHAPI__MatchTimelinePage_1a75ec9d2adc0c3379f667273627d43b14)`() const` <a id="structFRHAPI__MatchTimelinePage_1a75ec9d2adc0c3379f667273627d43b14"></a>

Checks whether Events_Optional has been set.

#### `public inline FString & `[`GetCursor`](#structFRHAPI__MatchTimelinePage_1a4e5eba392ac2e56bac01c32a08376e00)`()` <a id="structFRHAPI__MatchTimelinePage_1a4e5eba392ac2e56bac01c32a08376e00"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__MatchTimelinePage_1a023101e8379480542e41193255b1b913)`() const` <a id="structFRHAPI__MatchTimelinePage_1a023101e8379480542e41193255b1b913"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__MatchTimelinePage_1a5d73a445845d9980cf576d7a31497043)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelinePage_1a5d73a445845d9980cf576d7a31497043"></a>

Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCursor`](#structFRHAPI__MatchTimelinePage_1add46a056e08ee5e4dcfb271480fb7ab3)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelinePage_1add46a056e08ee5e4dcfb271480fb7ab3"></a>

Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCursorOrNull`](#structFRHAPI__MatchTimelinePage_1a46526b0a00b8421e4ec7b43a2e7a8feb)`()` <a id="structFRHAPI__MatchTimelinePage_1a46526b0a00b8421e4ec7b43a2e7a8feb"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCursorOrNull`](#structFRHAPI__MatchTimelinePage_1a7bf83494c2ed4e43d7a727031ae26262)`() const` <a id="structFRHAPI__MatchTimelinePage_1a7bf83494c2ed4e43d7a727031ae26262"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCursor`](#structFRHAPI__MatchTimelinePage_1a1e80b968afb33e5829b02f8f0bdadc55)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelinePage_1a1e80b968afb33e5829b02f8f0bdadc55"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.

#### `public inline void `[`SetCursor`](#structFRHAPI__MatchTimelinePage_1acfb2705deef01ea18ac81fe2f246edf3)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelinePage_1acfb2705deef01ea18ac81fe2f246edf3"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.

#### `public inline void `[`ClearCursor`](#structFRHAPI__MatchTimelinePage_1a4cc443c8b67b4fff6d8444563967e26d)`()` <a id="structFRHAPI__MatchTimelinePage_1a4cc443c8b67b4fff6d8444563967e26d"></a>

Clears the value of Cursor_Optional and sets Cursor_IsSet to false.

#### `public inline bool `[`IsCursorSet`](#structFRHAPI__MatchTimelinePage_1a1f1306fc0d165042b0e9bfb54d79329c)`() const` <a id="structFRHAPI__MatchTimelinePage_1a1f1306fc0d165042b0e9bfb54d79329c"></a>

Checks whether Cursor_Optional has been set.

#### `public inline void `[`SetCursorToNull`](#structFRHAPI__MatchTimelinePage_1a81f2a7c9174f526f5bb66a5ec58c968b)`()` <a id="structFRHAPI__MatchTimelinePage_1a81f2a7c9174f526f5bb66a5ec58c968b"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCursorNull`](#structFRHAPI__MatchTimelinePage_1a98ee8eb3277e02aa64ce32fe3e27f2a6)`() const` <a id="structFRHAPI__MatchTimelinePage_1a98ee8eb3277e02aa64ce32fe3e27f2a6"></a>

Checks whether Cursor_Optional is set to null.

