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
`public inline FORCEINLINE FString & `[`GetNotes`](#structFRHAPI__Notes_1a1ef3358ff0d080aedc3e1cd2d7e79c24)`()` | Gets the value of Notes_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetNotes`](#structFRHAPI__Notes_1a4830644a1c4f40ded623d384495cf1f7)`() const` | Gets the value of Notes_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetNotes`](#structFRHAPI__Notes_1a3d7f51efd9022212d1daeb4b1afc9389)`(const FString & DefaultValue) const` | Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetNotes`](#structFRHAPI__Notes_1a0227fe389acb0919a345d47f7d27f2fa)`(FString & OutValue) const` | Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetNotesOrNull`](#structFRHAPI__Notes_1a588cac0f22f68d859524ed46fc87fba8)`()` | Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetNotesOrNull`](#structFRHAPI__Notes_1a10fe689e9272e0dfe81c7aa9d41eeebc)`() const` | Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetNotes`](#structFRHAPI__Notes_1a9018691938e48a69c1552a19846811d5)`(const FString & NewValue)` | Sets the value of Notes_Optional and also sets Notes_IsSet to true.
`public inline FORCEINLINE void `[`SetNotes`](#structFRHAPI__Notes_1aa2081cc63eb648e084a225b0c2ffa607)`(FString && NewValue)` | Sets the value of Notes_Optional and also sets Notes_IsSet to true using move semantics.
`public inline void `[`ClearNotes`](#structFRHAPI__Notes_1ad4213f307363f5dbc56d292b16ef1b65)`()` | Clears the value of Notes_Optional and sets Notes_IsSet to false.

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

#### `public inline FORCEINLINE FString & `[`GetNotes`](#structFRHAPI__Notes_1a1ef3358ff0d080aedc3e1cd2d7e79c24)`()` <a id="structFRHAPI__Notes_1a1ef3358ff0d080aedc3e1cd2d7e79c24"></a>

Gets the value of Notes_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetNotes`](#structFRHAPI__Notes_1a4830644a1c4f40ded623d384495cf1f7)`() const` <a id="structFRHAPI__Notes_1a4830644a1c4f40ded623d384495cf1f7"></a>

Gets the value of Notes_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetNotes`](#structFRHAPI__Notes_1a3d7f51efd9022212d1daeb4b1afc9389)`(const FString & DefaultValue) const` <a id="structFRHAPI__Notes_1a3d7f51efd9022212d1daeb4b1afc9389"></a>

Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetNotes`](#structFRHAPI__Notes_1a0227fe389acb0919a345d47f7d27f2fa)`(FString & OutValue) const` <a id="structFRHAPI__Notes_1a0227fe389acb0919a345d47f7d27f2fa"></a>

Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetNotesOrNull`](#structFRHAPI__Notes_1a588cac0f22f68d859524ed46fc87fba8)`()` <a id="structFRHAPI__Notes_1a588cac0f22f68d859524ed46fc87fba8"></a>

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetNotesOrNull`](#structFRHAPI__Notes_1a10fe689e9272e0dfe81c7aa9d41eeebc)`() const` <a id="structFRHAPI__Notes_1a10fe689e9272e0dfe81c7aa9d41eeebc"></a>

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetNotes`](#structFRHAPI__Notes_1a9018691938e48a69c1552a19846811d5)`(const FString & NewValue)` <a id="structFRHAPI__Notes_1a9018691938e48a69c1552a19846811d5"></a>

Sets the value of Notes_Optional and also sets Notes_IsSet to true.

#### `public inline FORCEINLINE void `[`SetNotes`](#structFRHAPI__Notes_1aa2081cc63eb648e084a225b0c2ffa607)`(FString && NewValue)` <a id="structFRHAPI__Notes_1aa2081cc63eb648e084a225b0c2ffa607"></a>

Sets the value of Notes_Optional and also sets Notes_IsSet to true using move semantics.

#### `public inline void `[`ClearNotes`](#structFRHAPI__Notes_1ad4213f307363f5dbc56d292b16ef1b65)`()` <a id="structFRHAPI__Notes_1ad4213f307363f5dbc56d292b16ef1b65"></a>

Clears the value of Notes_Optional and sets Notes_IsSet to false.

