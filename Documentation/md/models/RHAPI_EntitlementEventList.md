# group `RHAPI_EntitlementEventList` <a id="group__RHAPI__EntitlementEventList"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_EntitlementEventList`](#structFRHAPI__EntitlementEventList) | 

## struct `FRHAPI_EntitlementEventList` <a id="structFRHAPI__EntitlementEventList"></a>

```
struct FRHAPI_EntitlementEventList
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_EntitlementEvent`](RHAPI_EntitlementEvent.md#structFRHAPI__EntitlementEvent)` > `[`Events`](#structFRHAPI__EntitlementEventList_1a3f05027a0a92306457e4e110ac0bb94f) | The list of events.
`public FString `[`Cursor_Optional`](#structFRHAPI__EntitlementEventList_1a408ef5f5bcc7a30ccd70aef3dc2b725b) | The cursor for the next page of events.
`public bool `[`Cursor_IsSet`](#structFRHAPI__EntitlementEventList_1ac03319ea77109225c8aab85baac83423) | true if Cursor_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__EntitlementEventList_1ad02c5e9cf0c7f78082a43a7c6df53f82)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__EntitlementEventList_1a33f1ede9d86a914b9ef81fee84d8b29e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_EntitlementEvent`](RHAPI_EntitlementEvent.md#structFRHAPI__EntitlementEvent)` > & `[`GetEvents`](#structFRHAPI__EntitlementEventList_1a8013cde2cf4350616ed670ab98d5b3d4)`()` | Gets the value of Events.
`public inline const TArray< `[`FRHAPI_EntitlementEvent`](RHAPI_EntitlementEvent.md#structFRHAPI__EntitlementEvent)` > & `[`GetEvents`](#structFRHAPI__EntitlementEventList_1a88b1e46345294753cdd0aa133e46e1f0)`() const` | Gets the value of Events.
`public inline void `[`SetEvents`](#structFRHAPI__EntitlementEventList_1ab93fb31f064e847fd1bf83fa2e0f726d)`(const TArray< `[`FRHAPI_EntitlementEvent`](RHAPI_EntitlementEvent.md#structFRHAPI__EntitlementEvent)` > & NewValue)` | Sets the value of Events.
`public inline void `[`SetEvents`](#structFRHAPI__EntitlementEventList_1a5819169e8082c2546bbe8adb48fd2023)`(TArray< `[`FRHAPI_EntitlementEvent`](RHAPI_EntitlementEvent.md#structFRHAPI__EntitlementEvent)` > && NewValue)` | Sets the value of Events using move semantics.
`public inline FString & `[`GetCursor`](#structFRHAPI__EntitlementEventList_1a8e178f8383eb98bcfc2bbbb62c21300f)`()` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetCursor`](#structFRHAPI__EntitlementEventList_1ae893bb04a293f12468aa5bbc455acc76)`() const` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetCursor`](#structFRHAPI__EntitlementEventList_1a0162673f909d7f63d25d36fc5827aa0f)`(const FString & DefaultValue) const` | Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCursor`](#structFRHAPI__EntitlementEventList_1aa85c0365ed689379000cfa35e2dc55a9)`(FString & OutValue) const` | Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCursorOrNull`](#structFRHAPI__EntitlementEventList_1ad7b540def8476ebe0bb6c7070b2fceb0)`()` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCursorOrNull`](#structFRHAPI__EntitlementEventList_1a59ec5c41978bc16804aba82f5f5da04c)`() const` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCursor`](#structFRHAPI__EntitlementEventList_1aad3eb200ef55d113aea11a8e19609c23)`(const FString & NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.
`public inline void `[`SetCursor`](#structFRHAPI__EntitlementEventList_1a5cf732a8165b81e2ddde2435ad36cc3d)`(FString && NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.
`public inline void `[`ClearCursor`](#structFRHAPI__EntitlementEventList_1ad53ca1646a6b5f74c4fcc9fd64d63c0f)`()` | Clears the value of Cursor_Optional and sets Cursor_IsSet to false.
`public inline bool `[`IsCursorSet`](#structFRHAPI__EntitlementEventList_1a495d29458e447466a5d54cabb0559b5b)`() const` | Checks whether Cursor_Optional has been set.

### Members

#### `public TArray< `[`FRHAPI_EntitlementEvent`](RHAPI_EntitlementEvent.md#structFRHAPI__EntitlementEvent)` > `[`Events`](#structFRHAPI__EntitlementEventList_1a3f05027a0a92306457e4e110ac0bb94f) <a id="structFRHAPI__EntitlementEventList_1a3f05027a0a92306457e4e110ac0bb94f"></a>

The list of events.

#### `public FString `[`Cursor_Optional`](#structFRHAPI__EntitlementEventList_1a408ef5f5bcc7a30ccd70aef3dc2b725b) <a id="structFRHAPI__EntitlementEventList_1a408ef5f5bcc7a30ccd70aef3dc2b725b"></a>

The cursor for the next page of events.

#### `public bool `[`Cursor_IsSet`](#structFRHAPI__EntitlementEventList_1ac03319ea77109225c8aab85baac83423) <a id="structFRHAPI__EntitlementEventList_1ac03319ea77109225c8aab85baac83423"></a>

true if Cursor_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__EntitlementEventList_1ad02c5e9cf0c7f78082a43a7c6df53f82)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__EntitlementEventList_1ad02c5e9cf0c7f78082a43a7c6df53f82"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__EntitlementEventList_1a33f1ede9d86a914b9ef81fee84d8b29e)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__EntitlementEventList_1a33f1ede9d86a914b9ef81fee84d8b29e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_EntitlementEvent`](RHAPI_EntitlementEvent.md#structFRHAPI__EntitlementEvent)` > & `[`GetEvents`](#structFRHAPI__EntitlementEventList_1a8013cde2cf4350616ed670ab98d5b3d4)`()` <a id="structFRHAPI__EntitlementEventList_1a8013cde2cf4350616ed670ab98d5b3d4"></a>

Gets the value of Events.

#### `public inline const TArray< `[`FRHAPI_EntitlementEvent`](RHAPI_EntitlementEvent.md#structFRHAPI__EntitlementEvent)` > & `[`GetEvents`](#structFRHAPI__EntitlementEventList_1a88b1e46345294753cdd0aa133e46e1f0)`() const` <a id="structFRHAPI__EntitlementEventList_1a88b1e46345294753cdd0aa133e46e1f0"></a>

Gets the value of Events.

#### `public inline void `[`SetEvents`](#structFRHAPI__EntitlementEventList_1ab93fb31f064e847fd1bf83fa2e0f726d)`(const TArray< `[`FRHAPI_EntitlementEvent`](RHAPI_EntitlementEvent.md#structFRHAPI__EntitlementEvent)` > & NewValue)` <a id="structFRHAPI__EntitlementEventList_1ab93fb31f064e847fd1bf83fa2e0f726d"></a>

Sets the value of Events.

#### `public inline void `[`SetEvents`](#structFRHAPI__EntitlementEventList_1a5819169e8082c2546bbe8adb48fd2023)`(TArray< `[`FRHAPI_EntitlementEvent`](RHAPI_EntitlementEvent.md#structFRHAPI__EntitlementEvent)` > && NewValue)` <a id="structFRHAPI__EntitlementEventList_1a5819169e8082c2546bbe8adb48fd2023"></a>

Sets the value of Events using move semantics.

#### `public inline FString & `[`GetCursor`](#structFRHAPI__EntitlementEventList_1a8e178f8383eb98bcfc2bbbb62c21300f)`()` <a id="structFRHAPI__EntitlementEventList_1a8e178f8383eb98bcfc2bbbb62c21300f"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__EntitlementEventList_1ae893bb04a293f12468aa5bbc455acc76)`() const` <a id="structFRHAPI__EntitlementEventList_1ae893bb04a293f12468aa5bbc455acc76"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__EntitlementEventList_1a0162673f909d7f63d25d36fc5827aa0f)`(const FString & DefaultValue) const` <a id="structFRHAPI__EntitlementEventList_1a0162673f909d7f63d25d36fc5827aa0f"></a>

Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCursor`](#structFRHAPI__EntitlementEventList_1aa85c0365ed689379000cfa35e2dc55a9)`(FString & OutValue) const` <a id="structFRHAPI__EntitlementEventList_1aa85c0365ed689379000cfa35e2dc55a9"></a>

Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCursorOrNull`](#structFRHAPI__EntitlementEventList_1ad7b540def8476ebe0bb6c7070b2fceb0)`()` <a id="structFRHAPI__EntitlementEventList_1ad7b540def8476ebe0bb6c7070b2fceb0"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCursorOrNull`](#structFRHAPI__EntitlementEventList_1a59ec5c41978bc16804aba82f5f5da04c)`() const` <a id="structFRHAPI__EntitlementEventList_1a59ec5c41978bc16804aba82f5f5da04c"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCursor`](#structFRHAPI__EntitlementEventList_1aad3eb200ef55d113aea11a8e19609c23)`(const FString & NewValue)` <a id="structFRHAPI__EntitlementEventList_1aad3eb200ef55d113aea11a8e19609c23"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.

#### `public inline void `[`SetCursor`](#structFRHAPI__EntitlementEventList_1a5cf732a8165b81e2ddde2435ad36cc3d)`(FString && NewValue)` <a id="structFRHAPI__EntitlementEventList_1a5cf732a8165b81e2ddde2435ad36cc3d"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.

#### `public inline void `[`ClearCursor`](#structFRHAPI__EntitlementEventList_1ad53ca1646a6b5f74c4fcc9fd64d63c0f)`()` <a id="structFRHAPI__EntitlementEventList_1ad53ca1646a6b5f74c4fcc9fd64d63c0f"></a>

Clears the value of Cursor_Optional and sets Cursor_IsSet to false.

#### `public inline bool `[`IsCursorSet`](#structFRHAPI__EntitlementEventList_1a495d29458e447466a5d54cabb0559b5b)`() const` <a id="structFRHAPI__EntitlementEventList_1a495d29458e447466a5d54cabb0559b5b"></a>

Checks whether Cursor_Optional has been set.

