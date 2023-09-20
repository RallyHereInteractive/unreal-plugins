# RHAPI_SessionEvents <a id="group__RHAPI__SessionEvents"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SessionEvents`](#structFRHAPI__SessionEvents) | A list of events that occurred in a session.

## struct `FRHAPI_SessionEvents` <a id="structFRHAPI__SessionEvents"></a>

```
struct FRHAPI_SessionEvents
  : public FRHAPI_Model
```

A list of events that occurred in a session.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_SessionEvent`](RHAPI_SessionEvent.md#structFRHAPI__SessionEvent)` > `[`Events_Optional`](#structFRHAPI__SessionEvents_1afa117b66782f3028c18566fd8b9d1cab) | A list of the events that have occurred in a given session.
`public bool `[`Events_IsSet`](#structFRHAPI__SessionEvents_1aba39793fed0e479f324a41e3a2d17f14) | true if Events_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SessionEvents_1a55953462f01cbd21c46f0a8ab59e3ce9)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionEvents_1aaab6f4110d88366d0647cfef9599c440)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_SessionEvent`](RHAPI_SessionEvent.md#structFRHAPI__SessionEvent)` > & `[`GetEvents`](#structFRHAPI__SessionEvents_1a907a373a6b5bb6bb50b2607db99114ea)`()` | Gets the value of Events_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_SessionEvent`](RHAPI_SessionEvent.md#structFRHAPI__SessionEvent)` > & `[`GetEvents`](#structFRHAPI__SessionEvents_1a5ee6ceda5517ee888373526aaed8bb32)`() const` | Gets the value of Events_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_SessionEvent`](RHAPI_SessionEvent.md#structFRHAPI__SessionEvent)` > & `[`GetEvents`](#structFRHAPI__SessionEvents_1a140834e1af9be77df4d20f78b28797b9)`(const TArray< `[`FRHAPI_SessionEvent`](RHAPI_SessionEvent.md#structFRHAPI__SessionEvent)` > & DefaultValue) const` | Gets the value of Events_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEvents`](#structFRHAPI__SessionEvents_1a0dbfe1a06ad0b9efecad61e8c3f64007)`(TArray< `[`FRHAPI_SessionEvent`](RHAPI_SessionEvent.md#structFRHAPI__SessionEvent)` > & OutValue) const` | Fills OutValue with the value of Events_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_SessionEvent`](RHAPI_SessionEvent.md#structFRHAPI__SessionEvent)` > * `[`GetEventsOrNull`](#structFRHAPI__SessionEvents_1ae6c1cb65b7d819b36bb7e45b7b62df18)`()` | Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_SessionEvent`](RHAPI_SessionEvent.md#structFRHAPI__SessionEvent)` > * `[`GetEventsOrNull`](#structFRHAPI__SessionEvents_1afbad1e6c9072e3166dcdc713959a9168)`() const` | Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEvents`](#structFRHAPI__SessionEvents_1a826209e591429c44673122ea2d55cd41)`(TArray< `[`FRHAPI_SessionEvent`](RHAPI_SessionEvent.md#structFRHAPI__SessionEvent)` > NewValue)` | Sets the value of Events_Optional and also sets Events_IsSet to true.
`public inline void `[`ClearEvents`](#structFRHAPI__SessionEvents_1a073b1af664748fe26ad7b73ce54b75d4)`()` | Clears the value of Events_Optional and sets Events_IsSet to false.

#### Members

#### `public TArray< `[`FRHAPI_SessionEvent`](RHAPI_SessionEvent.md#structFRHAPI__SessionEvent)` > `[`Events_Optional`](#structFRHAPI__SessionEvents_1afa117b66782f3028c18566fd8b9d1cab) <a id="structFRHAPI__SessionEvents_1afa117b66782f3028c18566fd8b9d1cab"></a>

A list of the events that have occurred in a given session.

<br>
#### `public bool `[`Events_IsSet`](#structFRHAPI__SessionEvents_1aba39793fed0e479f324a41e3a2d17f14) <a id="structFRHAPI__SessionEvents_1aba39793fed0e479f324a41e3a2d17f14"></a>

true if Events_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionEvents_1a55953462f01cbd21c46f0a8ab59e3ce9)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionEvents_1a55953462f01cbd21c46f0a8ab59e3ce9"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionEvents_1aaab6f4110d88366d0647cfef9599c440)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__SessionEvents_1aaab6f4110d88366d0647cfef9599c440"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TArray< `[`FRHAPI_SessionEvent`](RHAPI_SessionEvent.md#structFRHAPI__SessionEvent)` > & `[`GetEvents`](#structFRHAPI__SessionEvents_1a907a373a6b5bb6bb50b2607db99114ea)`()` <a id="structFRHAPI__SessionEvents_1a907a373a6b5bb6bb50b2607db99114ea"></a>

Gets the value of Events_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_SessionEvent`](RHAPI_SessionEvent.md#structFRHAPI__SessionEvent)` > & `[`GetEvents`](#structFRHAPI__SessionEvents_1a5ee6ceda5517ee888373526aaed8bb32)`() const` <a id="structFRHAPI__SessionEvents_1a5ee6ceda5517ee888373526aaed8bb32"></a>

Gets the value of Events_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_SessionEvent`](RHAPI_SessionEvent.md#structFRHAPI__SessionEvent)` > & `[`GetEvents`](#structFRHAPI__SessionEvents_1a140834e1af9be77df4d20f78b28797b9)`(const TArray< `[`FRHAPI_SessionEvent`](RHAPI_SessionEvent.md#structFRHAPI__SessionEvent)` > & DefaultValue) const` <a id="structFRHAPI__SessionEvents_1a140834e1af9be77df4d20f78b28797b9"></a>

Gets the value of Events_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetEvents`](#structFRHAPI__SessionEvents_1a0dbfe1a06ad0b9efecad61e8c3f64007)`(TArray< `[`FRHAPI_SessionEvent`](RHAPI_SessionEvent.md#structFRHAPI__SessionEvent)` > & OutValue) const` <a id="structFRHAPI__SessionEvents_1a0dbfe1a06ad0b9efecad61e8c3f64007"></a>

Fills OutValue with the value of Events_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_SessionEvent`](RHAPI_SessionEvent.md#structFRHAPI__SessionEvent)` > * `[`GetEventsOrNull`](#structFRHAPI__SessionEvents_1ae6c1cb65b7d819b36bb7e45b7b62df18)`()` <a id="structFRHAPI__SessionEvents_1ae6c1cb65b7d819b36bb7e45b7b62df18"></a>

Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_SessionEvent`](RHAPI_SessionEvent.md#structFRHAPI__SessionEvent)` > * `[`GetEventsOrNull`](#structFRHAPI__SessionEvents_1afbad1e6c9072e3166dcdc713959a9168)`() const` <a id="structFRHAPI__SessionEvents_1afbad1e6c9072e3166dcdc713959a9168"></a>

Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetEvents`](#structFRHAPI__SessionEvents_1a826209e591429c44673122ea2d55cd41)`(TArray< `[`FRHAPI_SessionEvent`](RHAPI_SessionEvent.md#structFRHAPI__SessionEvent)` > NewValue)` <a id="structFRHAPI__SessionEvents_1a826209e591429c44673122ea2d55cd41"></a>

Sets the value of Events_Optional and also sets Events_IsSet to true.

<br>
#### `public inline void `[`ClearEvents`](#structFRHAPI__SessionEvents_1a073b1af664748fe26ad7b73ce54b75d4)`()` <a id="structFRHAPI__SessionEvents_1a073b1af664748fe26ad7b73ce54b75d4"></a>

Clears the value of Events_Optional and sets Events_IsSet to false.

<br>
