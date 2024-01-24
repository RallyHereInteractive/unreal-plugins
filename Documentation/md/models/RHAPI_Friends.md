# RHAPI_Friends <a id="group__RHAPI__Friends"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Friends`](#structFRHAPI__Friends) | List of player_uuids to operate on.

## struct `FRHAPI_Friends` <a id="structFRHAPI__Friends"></a>

```
struct FRHAPI_Friends
  : public FRHAPI_Model
```

List of player_uuids to operate on.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< FGuid > `[`Friends`](#structFRHAPI__Friends_1ac8e4a2e4be8a82c1c69c0e756eb0b874) | 
`public virtual bool `[`FromJson`](#structFRHAPI__Friends_1a2152501b5c331a83faa6ec4568bb4e6e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Friends_1af95449c0a783a3f9f4df4427ce0e2795)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< FGuid > & `[`GetFriends`](#structFRHAPI__Friends_1a90e54fe391000709ed7ca117cb038450)`()` | Gets the value of Friends.
`public inline const TArray< FGuid > & `[`GetFriends`](#structFRHAPI__Friends_1ac3c7f96b76e832180c243bc2ea2827d8)`() const` | Gets the value of Friends.
`public inline void `[`SetFriends`](#structFRHAPI__Friends_1a861988577c02b9cc1249c56736dab122)`(TArray< FGuid > NewValue)` | Sets the value of Friends.

#### Members

#### `public TArray< FGuid > `[`Friends`](#structFRHAPI__Friends_1ac8e4a2e4be8a82c1c69c0e756eb0b874) <a id="structFRHAPI__Friends_1ac8e4a2e4be8a82c1c69c0e756eb0b874"></a>

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__Friends_1a2152501b5c331a83faa6ec4568bb4e6e)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Friends_1a2152501b5c331a83faa6ec4568bb4e6e"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__Friends_1af95449c0a783a3f9f4df4427ce0e2795)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Friends_1af95449c0a783a3f9f4df4427ce0e2795"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TArray< FGuid > & `[`GetFriends`](#structFRHAPI__Friends_1a90e54fe391000709ed7ca117cb038450)`()` <a id="structFRHAPI__Friends_1a90e54fe391000709ed7ca117cb038450"></a>

Gets the value of Friends.

<br>
#### `public inline const TArray< FGuid > & `[`GetFriends`](#structFRHAPI__Friends_1ac3c7f96b76e832180c243bc2ea2827d8)`() const` <a id="structFRHAPI__Friends_1ac3c7f96b76e832180c243bc2ea2827d8"></a>

Gets the value of Friends.

<br>
#### `public inline void `[`SetFriends`](#structFRHAPI__Friends_1a861988577c02b9cc1249c56736dab122)`(TArray< FGuid > NewValue)` <a id="structFRHAPI__Friends_1a861988577c02b9cc1249c56736dab122"></a>

Sets the value of Friends.

<br>
