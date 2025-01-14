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
`public virtual void `[`WriteJson`](#structFRHAPI__Notes_1a0b3090f974db09c9daf44ef1fc03893b)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetNotes`](#structFRHAPI__Notes_1a2e20eec6a4238ca976ec66dd7a4c98d8)`()` | Gets the value of Notes_Optional, regardless of it having been set.
`public inline const FString & `[`GetNotes`](#structFRHAPI__Notes_1a389cdd875fbd7959ad89d97eef58419c)`() const` | Gets the value of Notes_Optional, regardless of it having been set.
`public inline const FString & `[`GetNotes`](#structFRHAPI__Notes_1a83c652776c34584964fce74f40a7a6e2)`(const FString & DefaultValue) const` | Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNotes`](#structFRHAPI__Notes_1a13701f221d08e09905879b05bebf8143)`(FString & OutValue) const` | Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetNotesOrNull`](#structFRHAPI__Notes_1a6d7d54804ae7235f864238bd6e662e0c)`()` | Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetNotesOrNull`](#structFRHAPI__Notes_1add68592c998425d1028cd78643860f52)`() const` | Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.
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

#### `public virtual void `[`WriteJson`](#structFRHAPI__Notes_1a0b3090f974db09c9daf44ef1fc03893b)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__Notes_1a0b3090f974db09c9daf44ef1fc03893b"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetNotes`](#structFRHAPI__Notes_1a2e20eec6a4238ca976ec66dd7a4c98d8)`()` <a id="structFRHAPI__Notes_1a2e20eec6a4238ca976ec66dd7a4c98d8"></a>

Gets the value of Notes_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetNotes`](#structFRHAPI__Notes_1a389cdd875fbd7959ad89d97eef58419c)`() const` <a id="structFRHAPI__Notes_1a389cdd875fbd7959ad89d97eef58419c"></a>

Gets the value of Notes_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetNotes`](#structFRHAPI__Notes_1a83c652776c34584964fce74f40a7a6e2)`(const FString & DefaultValue) const` <a id="structFRHAPI__Notes_1a83c652776c34584964fce74f40a7a6e2"></a>

Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetNotes`](#structFRHAPI__Notes_1a13701f221d08e09905879b05bebf8143)`(FString & OutValue) const` <a id="structFRHAPI__Notes_1a13701f221d08e09905879b05bebf8143"></a>

Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetNotesOrNull`](#structFRHAPI__Notes_1a6d7d54804ae7235f864238bd6e662e0c)`()` <a id="structFRHAPI__Notes_1a6d7d54804ae7235f864238bd6e662e0c"></a>

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetNotesOrNull`](#structFRHAPI__Notes_1add68592c998425d1028cd78643860f52)`() const` <a id="structFRHAPI__Notes_1add68592c998425d1028cd78643860f52"></a>

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetNotes`](#structFRHAPI__Notes_1a812d5440cf0507daea77518312bddf12)`(const FString & NewValue)` <a id="structFRHAPI__Notes_1a812d5440cf0507daea77518312bddf12"></a>

Sets the value of Notes_Optional and also sets Notes_IsSet to true.

#### `public inline void `[`SetNotes`](#structFRHAPI__Notes_1a9d68e7a02a2e6d2662eb3217a69b6da9)`(FString && NewValue)` <a id="structFRHAPI__Notes_1a9d68e7a02a2e6d2662eb3217a69b6da9"></a>

Sets the value of Notes_Optional and also sets Notes_IsSet to true using move semantics.

#### `public inline void `[`ClearNotes`](#structFRHAPI__Notes_1ad4213f307363f5dbc56d292b16ef1b65)`()` <a id="structFRHAPI__Notes_1ad4213f307363f5dbc56d292b16ef1b65"></a>

Clears the value of Notes_Optional and sets Notes_IsSet to false.

#### `public inline bool `[`IsNotesSet`](#structFRHAPI__Notes_1a2f52044c526aa5b04c9f7315b2f3c53d)`() const` <a id="structFRHAPI__Notes_1a2f52044c526aa5b04c9f7315b2f3c53d"></a>

Checks whether Notes_Optional has been set.

