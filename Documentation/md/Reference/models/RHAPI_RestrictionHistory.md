---
title: RHAPI_RestrictionHistory
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_RestrictionHistory`](#structFRHAPI__RestrictionHistory) | List of restriction events that have been applied to a user.

## struct `FRHAPI_RestrictionHistory` <a id="structFRHAPI__RestrictionHistory"></a>

```
struct FRHAPI_RestrictionHistory
  : public FRHAPI_Model
```

List of restriction events that have been applied to a user.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_RestrictionEvent`](RHAPI_RestrictionEvent.md#structFRHAPI__RestrictionEvent)` > `[`Entries`](#structFRHAPI__RestrictionHistory_1a339d04ae15fc545bc4cd2c28dbc2e5cb) | The restriction history entries.
`public FString `[`ContinuationToken_Optional`](#structFRHAPI__RestrictionHistory_1a3c6d71c4d0a233a7daa1cde5ea80933f) | Token to retrieve the next page of results.
`public bool `[`ContinuationToken_IsSet`](#structFRHAPI__RestrictionHistory_1acaee17e62bdffe209842d289a21455d4) | true if ContinuationToken_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__RestrictionHistory_1a9663b6e9edc806d24441cc94710ad1a5)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RestrictionHistory_1a106741c6fa2c680ce45490a108925c85)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_RestrictionEvent`](RHAPI_RestrictionEvent.md#structFRHAPI__RestrictionEvent)` > & `[`GetEntries`](#structFRHAPI__RestrictionHistory_1af4cca44ff2f53a12c50cbd8de0e35715)`()` | Gets the value of Entries.
`public inline const TArray< `[`FRHAPI_RestrictionEvent`](RHAPI_RestrictionEvent.md#structFRHAPI__RestrictionEvent)` > & `[`GetEntries`](#structFRHAPI__RestrictionHistory_1a55718aafff866a737baf7719e345451f)`() const` | Gets the value of Entries.
`public inline void `[`SetEntries`](#structFRHAPI__RestrictionHistory_1a6d3527de7ea7513feacc3745182bfd77)`(const TArray< `[`FRHAPI_RestrictionEvent`](RHAPI_RestrictionEvent.md#structFRHAPI__RestrictionEvent)` > & NewValue)` | Sets the value of Entries.
`public inline void `[`SetEntries`](#structFRHAPI__RestrictionHistory_1a785598fb53634b403f31e52b96c10b36)`(TArray< `[`FRHAPI_RestrictionEvent`](RHAPI_RestrictionEvent.md#structFRHAPI__RestrictionEvent)` > && NewValue)` | Sets the value of Entries using move semantics.
`public inline FString & `[`GetContinuationToken`](#structFRHAPI__RestrictionHistory_1ab3ad05d54c97741d00360a7d4bbcbd74)`()` | Gets the value of ContinuationToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetContinuationToken`](#structFRHAPI__RestrictionHistory_1aa64c69a87573c9f505d83df3ac90cbe1)`() const` | Gets the value of ContinuationToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetContinuationToken`](#structFRHAPI__RestrictionHistory_1a921a8a7cfe90baf50d73d2f02aba43b7)`(const FString & DefaultValue) const` | Gets the value of ContinuationToken_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetContinuationToken`](#structFRHAPI__RestrictionHistory_1aa010f5d6b94c1e7b311467ef1d9c3623)`(FString & OutValue) const` | Fills OutValue with the value of ContinuationToken_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__RestrictionHistory_1aba6ef47330ea7930ea035fa8f0f70dfa)`()` | Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__RestrictionHistory_1ae01e54f9828642f1a9f7f54b0d9fb8b2)`() const` | Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetContinuationToken`](#structFRHAPI__RestrictionHistory_1afe62c5d12686e32517c98437b1e78f23)`(const FString & NewValue)` | Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true.
`public inline void `[`SetContinuationToken`](#structFRHAPI__RestrictionHistory_1aeade84a0c4f8ff0f1e813b69894c9c45)`(FString && NewValue)` | Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true using move semantics.
`public inline void `[`ClearContinuationToken`](#structFRHAPI__RestrictionHistory_1a6abb9e6975963e0fdfd90a370c442c5e)`()` | Clears the value of ContinuationToken_Optional and sets ContinuationToken_IsSet to false.
`public inline bool `[`IsContinuationTokenSet`](#structFRHAPI__RestrictionHistory_1a8ff1642349b313ef19fe7ae58030cfc8)`() const` | Checks whether ContinuationToken_Optional has been set.

### Members

#### `public TArray< `[`FRHAPI_RestrictionEvent`](RHAPI_RestrictionEvent.md#structFRHAPI__RestrictionEvent)` > `[`Entries`](#structFRHAPI__RestrictionHistory_1a339d04ae15fc545bc4cd2c28dbc2e5cb) <a id="structFRHAPI__RestrictionHistory_1a339d04ae15fc545bc4cd2c28dbc2e5cb"></a>

The restriction history entries.

#### `public FString `[`ContinuationToken_Optional`](#structFRHAPI__RestrictionHistory_1a3c6d71c4d0a233a7daa1cde5ea80933f) <a id="structFRHAPI__RestrictionHistory_1a3c6d71c4d0a233a7daa1cde5ea80933f"></a>

Token to retrieve the next page of results.

#### `public bool `[`ContinuationToken_IsSet`](#structFRHAPI__RestrictionHistory_1acaee17e62bdffe209842d289a21455d4) <a id="structFRHAPI__RestrictionHistory_1acaee17e62bdffe209842d289a21455d4"></a>

true if ContinuationToken_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__RestrictionHistory_1a9663b6e9edc806d24441cc94710ad1a5)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RestrictionHistory_1a9663b6e9edc806d24441cc94710ad1a5"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__RestrictionHistory_1a106741c6fa2c680ce45490a108925c85)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__RestrictionHistory_1a106741c6fa2c680ce45490a108925c85"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_RestrictionEvent`](RHAPI_RestrictionEvent.md#structFRHAPI__RestrictionEvent)` > & `[`GetEntries`](#structFRHAPI__RestrictionHistory_1af4cca44ff2f53a12c50cbd8de0e35715)`()` <a id="structFRHAPI__RestrictionHistory_1af4cca44ff2f53a12c50cbd8de0e35715"></a>

Gets the value of Entries.

#### `public inline const TArray< `[`FRHAPI_RestrictionEvent`](RHAPI_RestrictionEvent.md#structFRHAPI__RestrictionEvent)` > & `[`GetEntries`](#structFRHAPI__RestrictionHistory_1a55718aafff866a737baf7719e345451f)`() const` <a id="structFRHAPI__RestrictionHistory_1a55718aafff866a737baf7719e345451f"></a>

Gets the value of Entries.

#### `public inline void `[`SetEntries`](#structFRHAPI__RestrictionHistory_1a6d3527de7ea7513feacc3745182bfd77)`(const TArray< `[`FRHAPI_RestrictionEvent`](RHAPI_RestrictionEvent.md#structFRHAPI__RestrictionEvent)` > & NewValue)` <a id="structFRHAPI__RestrictionHistory_1a6d3527de7ea7513feacc3745182bfd77"></a>

Sets the value of Entries.

#### `public inline void `[`SetEntries`](#structFRHAPI__RestrictionHistory_1a785598fb53634b403f31e52b96c10b36)`(TArray< `[`FRHAPI_RestrictionEvent`](RHAPI_RestrictionEvent.md#structFRHAPI__RestrictionEvent)` > && NewValue)` <a id="structFRHAPI__RestrictionHistory_1a785598fb53634b403f31e52b96c10b36"></a>

Sets the value of Entries using move semantics.

#### `public inline FString & `[`GetContinuationToken`](#structFRHAPI__RestrictionHistory_1ab3ad05d54c97741d00360a7d4bbcbd74)`()` <a id="structFRHAPI__RestrictionHistory_1ab3ad05d54c97741d00360a7d4bbcbd74"></a>

Gets the value of ContinuationToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetContinuationToken`](#structFRHAPI__RestrictionHistory_1aa64c69a87573c9f505d83df3ac90cbe1)`() const` <a id="structFRHAPI__RestrictionHistory_1aa64c69a87573c9f505d83df3ac90cbe1"></a>

Gets the value of ContinuationToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetContinuationToken`](#structFRHAPI__RestrictionHistory_1a921a8a7cfe90baf50d73d2f02aba43b7)`(const FString & DefaultValue) const` <a id="structFRHAPI__RestrictionHistory_1a921a8a7cfe90baf50d73d2f02aba43b7"></a>

Gets the value of ContinuationToken_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetContinuationToken`](#structFRHAPI__RestrictionHistory_1aa010f5d6b94c1e7b311467ef1d9c3623)`(FString & OutValue) const` <a id="structFRHAPI__RestrictionHistory_1aa010f5d6b94c1e7b311467ef1d9c3623"></a>

Fills OutValue with the value of ContinuationToken_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__RestrictionHistory_1aba6ef47330ea7930ea035fa8f0f70dfa)`()` <a id="structFRHAPI__RestrictionHistory_1aba6ef47330ea7930ea035fa8f0f70dfa"></a>

Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__RestrictionHistory_1ae01e54f9828642f1a9f7f54b0d9fb8b2)`() const` <a id="structFRHAPI__RestrictionHistory_1ae01e54f9828642f1a9f7f54b0d9fb8b2"></a>

Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetContinuationToken`](#structFRHAPI__RestrictionHistory_1afe62c5d12686e32517c98437b1e78f23)`(const FString & NewValue)` <a id="structFRHAPI__RestrictionHistory_1afe62c5d12686e32517c98437b1e78f23"></a>

Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true.

#### `public inline void `[`SetContinuationToken`](#structFRHAPI__RestrictionHistory_1aeade84a0c4f8ff0f1e813b69894c9c45)`(FString && NewValue)` <a id="structFRHAPI__RestrictionHistory_1aeade84a0c4f8ff0f1e813b69894c9c45"></a>

Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true using move semantics.

#### `public inline void `[`ClearContinuationToken`](#structFRHAPI__RestrictionHistory_1a6abb9e6975963e0fdfd90a370c442c5e)`()` <a id="structFRHAPI__RestrictionHistory_1a6abb9e6975963e0fdfd90a370c442c5e"></a>

Clears the value of ContinuationToken_Optional and sets ContinuationToken_IsSet to false.

#### `public inline bool `[`IsContinuationTokenSet`](#structFRHAPI__RestrictionHistory_1a8ff1642349b313ef19fe7ae58030cfc8)`() const` <a id="structFRHAPI__RestrictionHistory_1a8ff1642349b313ef19fe7ae58030cfc8"></a>

Checks whether ContinuationToken_Optional has been set.

