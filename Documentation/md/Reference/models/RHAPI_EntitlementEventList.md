---
title: RHAPI_EntitlementEventList
---

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
`public FString `[`Cursor_Optional`](#structFRHAPI__EntitlementEventList_1a408ef5f5bcc7a30ccd70aef3dc2b725b) | 
`public bool `[`Cursor_IsSet`](#structFRHAPI__EntitlementEventList_1ac03319ea77109225c8aab85baac83423) | true if Cursor_Optional has been set to a value
`public bool `[`Cursor_IsNull`](#structFRHAPI__EntitlementEventList_1aa42cafaf52f0066382ec888a00a32f87) | true if Cursor_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__EntitlementEventList_1ad02c5e9cf0c7f78082a43a7c6df53f82)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__EntitlementEventList_1a508ba63137f25f37784c7de9c6fd9c1e)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_EntitlementEvent`](RHAPI_EntitlementEvent.md#structFRHAPI__EntitlementEvent)` > & `[`GetEvents`](#structFRHAPI__EntitlementEventList_1aa517fc8519277b845b24ff731a9e3af3)`()` | Gets the value of Events.
`public inline FORCEINLINE const TArray< `[`FRHAPI_EntitlementEvent`](RHAPI_EntitlementEvent.md#structFRHAPI__EntitlementEvent)` > & `[`GetEvents`](#structFRHAPI__EntitlementEventList_1ab0baf267ac6bf0ea13ee2c06be60d042)`() const` | Gets the value of Events.
`public inline FORCEINLINE void `[`SetEvents`](#structFRHAPI__EntitlementEventList_1a20c194360029d812b83c45778d2baa96)`(const TArray< `[`FRHAPI_EntitlementEvent`](RHAPI_EntitlementEvent.md#structFRHAPI__EntitlementEvent)` > & NewValue)` | Sets the value of Events.
`public inline FORCEINLINE void `[`SetEvents`](#structFRHAPI__EntitlementEventList_1a6fd51ea1255ca1ecac1cb89007ce9123)`(TArray< `[`FRHAPI_EntitlementEvent`](RHAPI_EntitlementEvent.md#structFRHAPI__EntitlementEvent)` > && NewValue)` | Sets the value of Events using move semantics.
`public inline FORCEINLINE FString & `[`GetCursor`](#structFRHAPI__EntitlementEventList_1ac92cc28146182095c758cfe18a2cd3bf)`()` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__EntitlementEventList_1a198c8c673f7f693d7718f37997848514)`() const` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__EntitlementEventList_1a9dc789d0145856ebc7b07f799fd7d74a)`(const FString & DefaultValue) const` | Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCursor`](#structFRHAPI__EntitlementEventList_1a17a108987914d590547368426ec16401)`(FString & OutValue) const` | Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetCursorOrNull`](#structFRHAPI__EntitlementEventList_1a216372cd5bfc03f62233cf272db6474f)`()` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetCursorOrNull`](#structFRHAPI__EntitlementEventList_1afa3e0fe5703d803820ada5cf01328c05)`() const` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__EntitlementEventList_1a81f33bd7d2f94281b824af94db1cd423)`(const FString & NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__EntitlementEventList_1a8e5bfe944e29336c15136a56feb2d528)`(FString && NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.
`public inline void `[`ClearCursor`](#structFRHAPI__EntitlementEventList_1ad53ca1646a6b5f74c4fcc9fd64d63c0f)`()` | Clears the value of Cursor_Optional and sets Cursor_IsSet to false.
`public inline FORCEINLINE void `[`SetCursorToNull`](#structFRHAPI__EntitlementEventList_1ad22efdf04988ee614c882fda8057e77f)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCursorNull`](#structFRHAPI__EntitlementEventList_1adeca948d6fa18bb8c38c4847c1990d03)`() const` | Checks whether Cursor_Optional is set to null.

### Members

#### `public TArray< `[`FRHAPI_EntitlementEvent`](RHAPI_EntitlementEvent.md#structFRHAPI__EntitlementEvent)` > `[`Events`](#structFRHAPI__EntitlementEventList_1a3f05027a0a92306457e4e110ac0bb94f) <a id="structFRHAPI__EntitlementEventList_1a3f05027a0a92306457e4e110ac0bb94f"></a>

The list of events.

#### `public FString `[`Cursor_Optional`](#structFRHAPI__EntitlementEventList_1a408ef5f5bcc7a30ccd70aef3dc2b725b) <a id="structFRHAPI__EntitlementEventList_1a408ef5f5bcc7a30ccd70aef3dc2b725b"></a>

#### `public bool `[`Cursor_IsSet`](#structFRHAPI__EntitlementEventList_1ac03319ea77109225c8aab85baac83423) <a id="structFRHAPI__EntitlementEventList_1ac03319ea77109225c8aab85baac83423"></a>

true if Cursor_Optional has been set to a value

#### `public bool `[`Cursor_IsNull`](#structFRHAPI__EntitlementEventList_1aa42cafaf52f0066382ec888a00a32f87) <a id="structFRHAPI__EntitlementEventList_1aa42cafaf52f0066382ec888a00a32f87"></a>

true if Cursor_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__EntitlementEventList_1ad02c5e9cf0c7f78082a43a7c6df53f82)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__EntitlementEventList_1ad02c5e9cf0c7f78082a43a7c6df53f82"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__EntitlementEventList_1a508ba63137f25f37784c7de9c6fd9c1e)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__EntitlementEventList_1a508ba63137f25f37784c7de9c6fd9c1e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_EntitlementEvent`](RHAPI_EntitlementEvent.md#structFRHAPI__EntitlementEvent)` > & `[`GetEvents`](#structFRHAPI__EntitlementEventList_1aa517fc8519277b845b24ff731a9e3af3)`()` <a id="structFRHAPI__EntitlementEventList_1aa517fc8519277b845b24ff731a9e3af3"></a>

Gets the value of Events.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_EntitlementEvent`](RHAPI_EntitlementEvent.md#structFRHAPI__EntitlementEvent)` > & `[`GetEvents`](#structFRHAPI__EntitlementEventList_1ab0baf267ac6bf0ea13ee2c06be60d042)`() const` <a id="structFRHAPI__EntitlementEventList_1ab0baf267ac6bf0ea13ee2c06be60d042"></a>

Gets the value of Events.

#### `public inline FORCEINLINE void `[`SetEvents`](#structFRHAPI__EntitlementEventList_1a20c194360029d812b83c45778d2baa96)`(const TArray< `[`FRHAPI_EntitlementEvent`](RHAPI_EntitlementEvent.md#structFRHAPI__EntitlementEvent)` > & NewValue)` <a id="structFRHAPI__EntitlementEventList_1a20c194360029d812b83c45778d2baa96"></a>

Sets the value of Events.

#### `public inline FORCEINLINE void `[`SetEvents`](#structFRHAPI__EntitlementEventList_1a6fd51ea1255ca1ecac1cb89007ce9123)`(TArray< `[`FRHAPI_EntitlementEvent`](RHAPI_EntitlementEvent.md#structFRHAPI__EntitlementEvent)` > && NewValue)` <a id="structFRHAPI__EntitlementEventList_1a6fd51ea1255ca1ecac1cb89007ce9123"></a>

Sets the value of Events using move semantics.

#### `public inline FORCEINLINE FString & `[`GetCursor`](#structFRHAPI__EntitlementEventList_1ac92cc28146182095c758cfe18a2cd3bf)`()` <a id="structFRHAPI__EntitlementEventList_1ac92cc28146182095c758cfe18a2cd3bf"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__EntitlementEventList_1a198c8c673f7f693d7718f37997848514)`() const` <a id="structFRHAPI__EntitlementEventList_1a198c8c673f7f693d7718f37997848514"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__EntitlementEventList_1a9dc789d0145856ebc7b07f799fd7d74a)`(const FString & DefaultValue) const` <a id="structFRHAPI__EntitlementEventList_1a9dc789d0145856ebc7b07f799fd7d74a"></a>

Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCursor`](#structFRHAPI__EntitlementEventList_1a17a108987914d590547368426ec16401)`(FString & OutValue) const` <a id="structFRHAPI__EntitlementEventList_1a17a108987914d590547368426ec16401"></a>

Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetCursorOrNull`](#structFRHAPI__EntitlementEventList_1a216372cd5bfc03f62233cf272db6474f)`()` <a id="structFRHAPI__EntitlementEventList_1a216372cd5bfc03f62233cf272db6474f"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetCursorOrNull`](#structFRHAPI__EntitlementEventList_1afa3e0fe5703d803820ada5cf01328c05)`() const` <a id="structFRHAPI__EntitlementEventList_1afa3e0fe5703d803820ada5cf01328c05"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__EntitlementEventList_1a81f33bd7d2f94281b824af94db1cd423)`(const FString & NewValue)` <a id="structFRHAPI__EntitlementEventList_1a81f33bd7d2f94281b824af94db1cd423"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__EntitlementEventList_1a8e5bfe944e29336c15136a56feb2d528)`(FString && NewValue)` <a id="structFRHAPI__EntitlementEventList_1a8e5bfe944e29336c15136a56feb2d528"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.

#### `public inline void `[`ClearCursor`](#structFRHAPI__EntitlementEventList_1ad53ca1646a6b5f74c4fcc9fd64d63c0f)`()` <a id="structFRHAPI__EntitlementEventList_1ad53ca1646a6b5f74c4fcc9fd64d63c0f"></a>

Clears the value of Cursor_Optional and sets Cursor_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCursorToNull`](#structFRHAPI__EntitlementEventList_1ad22efdf04988ee614c882fda8057e77f)`()` <a id="structFRHAPI__EntitlementEventList_1ad22efdf04988ee614c882fda8057e77f"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCursorNull`](#structFRHAPI__EntitlementEventList_1adeca948d6fa18bb8c38c4847c1990d03)`() const` <a id="structFRHAPI__EntitlementEventList_1adeca948d6fa18bb8c38c4847c1990d03"></a>

Checks whether Cursor_Optional is set to null.

