---
title: RHAPI_Notes
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Notes`](#structFRHAPI__Notes) | Notes to set for the Player&#39;s friend. If you don&#39;t want to modify notes, no not include in body when adding a friend.

## struct `FRHAPI_Notes` <a id="structFRHAPI__Notes"></a>

```
struct FRHAPI_Notes
  : public FRHAPI_Model
```

Notes to set for the Player&#39;s friend. If you don&#39;t want to modify notes, no not include in body when adding a friend.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Notes_Optional`](#structFRHAPI__Notes_1af5e920428c55e9adcab7d93324814a92) | 
`public bool `[`Notes_IsSet`](#structFRHAPI__Notes_1a5f51571b830edca98b4fa43c993bbad1) | true if Notes_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__Notes_1a45ce8d3cecbffcfa0324adf0958ec2d4)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Notes_1aadc77e7af50a9a620cbb971fdea5eacf)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetNotes`](#structFRHAPI__Notes_1a46d12e52642cb84d44cb993ca1e342bd)`()` | Gets the value of Notes_Optional, regardless of it having been set.
`public inline const FString & `[`GetNotes`](#structFRHAPI__Notes_1a03d2bce2d019cd9d78074617683abf97)`() const` | Gets the value of Notes_Optional, regardless of it having been set.
`public inline const FString & `[`GetNotes`](#structFRHAPI__Notes_1ac09158d85a46f453a940ce679c7d8d7d)`(const FString & DefaultValue) const` | Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNotes`](#structFRHAPI__Notes_1a13701f221d08e09905879b05bebf8143)`(FString & OutValue) const` | Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetNotesOrNull`](#structFRHAPI__Notes_1a599ca202519c01a24e5497cf1ef9d060)`()` | Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetNotesOrNull`](#structFRHAPI__Notes_1a07d7b8992e4f5231ce1c7cd7d2a3173e)`() const` | Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNotes`](#structFRHAPI__Notes_1a812d5440cf0507daea77518312bddf12)`(const FString & NewValue)` | Sets the value of Notes_Optional and also sets Notes_IsSet to true.
`public inline void `[`SetNotes`](#structFRHAPI__Notes_1a9d68e7a02a2e6d2662eb3217a69b6da9)`(FString && NewValue)` | Sets the value of Notes_Optional and also sets Notes_IsSet to true using move semantics.
`public inline void `[`ClearNotes`](#structFRHAPI__Notes_1ad4213f307363f5dbc56d292b16ef1b65)`()` | Clears the value of Notes_Optional and sets Notes_IsSet to false.
`public inline bool `[`IsNotesSet`](#structFRHAPI__Notes_1a2f52044c526aa5b04c9f7315b2f3c53d)`() const` | Checks whether Notes_Optional has been set.

### Members

#### `public FString `[`Notes_Optional`](#structFRHAPI__Notes_1af5e920428c55e9adcab7d93324814a92) <a id="structFRHAPI__Notes_1af5e920428c55e9adcab7d93324814a92"></a>

#### `public bool `[`Notes_IsSet`](#structFRHAPI__Notes_1a5f51571b830edca98b4fa43c993bbad1) <a id="structFRHAPI__Notes_1a5f51571b830edca98b4fa43c993bbad1"></a>

true if Notes_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__Notes_1a45ce8d3cecbffcfa0324adf0958ec2d4)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Notes_1a45ce8d3cecbffcfa0324adf0958ec2d4"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Notes_1aadc77e7af50a9a620cbb971fdea5eacf)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Notes_1aadc77e7af50a9a620cbb971fdea5eacf"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetNotes`](#structFRHAPI__Notes_1a46d12e52642cb84d44cb993ca1e342bd)`()` <a id="structFRHAPI__Notes_1a46d12e52642cb84d44cb993ca1e342bd"></a>

Gets the value of Notes_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetNotes`](#structFRHAPI__Notes_1a03d2bce2d019cd9d78074617683abf97)`() const` <a id="structFRHAPI__Notes_1a03d2bce2d019cd9d78074617683abf97"></a>

Gets the value of Notes_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetNotes`](#structFRHAPI__Notes_1ac09158d85a46f453a940ce679c7d8d7d)`(const FString & DefaultValue) const` <a id="structFRHAPI__Notes_1ac09158d85a46f453a940ce679c7d8d7d"></a>

Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetNotes`](#structFRHAPI__Notes_1a13701f221d08e09905879b05bebf8143)`(FString & OutValue) const` <a id="structFRHAPI__Notes_1a13701f221d08e09905879b05bebf8143"></a>

Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetNotesOrNull`](#structFRHAPI__Notes_1a599ca202519c01a24e5497cf1ef9d060)`()` <a id="structFRHAPI__Notes_1a599ca202519c01a24e5497cf1ef9d060"></a>

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetNotesOrNull`](#structFRHAPI__Notes_1a07d7b8992e4f5231ce1c7cd7d2a3173e)`() const` <a id="structFRHAPI__Notes_1a07d7b8992e4f5231ce1c7cd7d2a3173e"></a>

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetNotes`](#structFRHAPI__Notes_1a812d5440cf0507daea77518312bddf12)`(const FString & NewValue)` <a id="structFRHAPI__Notes_1a812d5440cf0507daea77518312bddf12"></a>

Sets the value of Notes_Optional and also sets Notes_IsSet to true.

#### `public inline void `[`SetNotes`](#structFRHAPI__Notes_1a9d68e7a02a2e6d2662eb3217a69b6da9)`(FString && NewValue)` <a id="structFRHAPI__Notes_1a9d68e7a02a2e6d2662eb3217a69b6da9"></a>

Sets the value of Notes_Optional and also sets Notes_IsSet to true using move semantics.

#### `public inline void `[`ClearNotes`](#structFRHAPI__Notes_1ad4213f307363f5dbc56d292b16ef1b65)`()` <a id="structFRHAPI__Notes_1ad4213f307363f5dbc56d292b16ef1b65"></a>

Clears the value of Notes_Optional and sets Notes_IsSet to false.

#### `public inline bool `[`IsNotesSet`](#structFRHAPI__Notes_1a2f52044c526aa5b04c9f7315b2f3c53d)`() const` <a id="structFRHAPI__Notes_1a2f52044c526aa5b04c9f7315b2f3c53d"></a>

Checks whether Notes_Optional has been set.
