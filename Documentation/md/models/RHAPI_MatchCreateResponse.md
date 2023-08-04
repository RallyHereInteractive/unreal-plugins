# RHAPI_MatchCreateResponse <a id="group__RHAPI__MatchCreateResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchCreateResponse`](#structFRHAPI__MatchCreateResponse) | 

## struct `FRHAPI_MatchCreateResponse` <a id="structFRHAPI__MatchCreateResponse"></a>

```
struct FRHAPI_MatchCreateResponse
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`MatchId`](#structFRHAPI__MatchCreateResponse_1a574a16604b3d7814e47e299a916f33e4) | Unique ID.
`public virtual bool `[`FromJson`](#structFRHAPI__MatchCreateResponse_1ae2b77604ffbe30ae093ca33bb0b7e1c5)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchCreateResponse_1a2ed093741fe10635b28bc6f7ee4ed9a8)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetMatchId`](#structFRHAPI__MatchCreateResponse_1afe4221f38cae3d60c512bb18c1c2982c)`()` | Gets the value of MatchId.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchCreateResponse_1a8e1a23a5b76c00843a12607ba3fd3c18)`() const` | Gets the value of MatchId.
`public inline void `[`SetMatchId`](#structFRHAPI__MatchCreateResponse_1a9b0280579b71fa38a137a46f80585d8d)`(FString NewValue)` | Sets the value of MatchId.

#### Members

#### `public FString `[`MatchId`](#structFRHAPI__MatchCreateResponse_1a574a16604b3d7814e47e299a916f33e4) <a id="structFRHAPI__MatchCreateResponse_1a574a16604b3d7814e47e299a916f33e4"></a>

Unique ID.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchCreateResponse_1ae2b77604ffbe30ae093ca33bb0b7e1c5)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchCreateResponse_1ae2b77604ffbe30ae093ca33bb0b7e1c5"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchCreateResponse_1a2ed093741fe10635b28bc6f7ee4ed9a8)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchCreateResponse_1a2ed093741fe10635b28bc6f7ee4ed9a8"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetMatchId`](#structFRHAPI__MatchCreateResponse_1afe4221f38cae3d60c512bb18c1c2982c)`()` <a id="structFRHAPI__MatchCreateResponse_1afe4221f38cae3d60c512bb18c1c2982c"></a>

Gets the value of MatchId.

<br>
#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchCreateResponse_1a8e1a23a5b76c00843a12607ba3fd3c18)`() const` <a id="structFRHAPI__MatchCreateResponse_1a8e1a23a5b76c00843a12607ba3fd3c18"></a>

Gets the value of MatchId.

<br>
#### `public inline void `[`SetMatchId`](#structFRHAPI__MatchCreateResponse_1a9b0280579b71fa38a137a46f80585d8d)`(FString NewValue)` <a id="structFRHAPI__MatchCreateResponse_1a9b0280579b71fa38a137a46f80585d8d"></a>

Sets the value of MatchId.

<br>
