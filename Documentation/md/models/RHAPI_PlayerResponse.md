# RHAPI_PlayerResponse <a id="group__RHAPI__PlayerResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerResponse`](#structFRHAPI__PlayerResponse) | Response for getting a player&#39;s info.

## struct `FRHAPI_PlayerResponse` <a id="structFRHAPI__PlayerResponse"></a>

```
struct FRHAPI_PlayerResponse
  : public FRHAPI_Model
```

Response for getting a player&#39;s info.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`PlayerId`](#structFRHAPI__PlayerResponse_1ad310dc7254bc7601cb78f946655b4896) | Player ID *DEPRECATED* use `player_uuid` instead.
`public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerResponse_1adc688a62eabd80c3cfde9688e61bd030) | Player UUID.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerResponse_1ad95f65d26ed9beae939f37a4cd5bc765)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerResponse_1af73853ee9ac143469af094d5046b6845)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetPlayerId`](#structFRHAPI__PlayerResponse_1a57e3b6edbaf4c9725ed93ee10d9c1871)`()` | Gets the value of PlayerId.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerResponse_1a8f31b3dd5619b099307535499154f461)`() const` | Gets the value of PlayerId.
`public inline void `[`SetPlayerId`](#structFRHAPI__PlayerResponse_1a9b452954dbf91a860e01f9ed8e0dbc32)`(int32 NewValue)` | Sets the value of PlayerId.
`public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PlayerResponse_1a1e4e3035c00a0707189ce52e4c1f1649)`() const` | Returns true if PlayerId matches the default value.
`public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PlayerResponse_1ae3de40c04341be8f81a980d77123ae55)`()` | Sets the value of PlayerId to its default
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerResponse_1a5aa6031765ed727ee1d7d9416a17157e)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerResponse_1a75fb0b696a3523f43cc84316c727f559)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerResponse_1a9a02552a86853550af3ed132f5392167)`(FGuid NewValue)` | Sets the value of PlayerUuid.

#### Members

#### `public int32 `[`PlayerId`](#structFRHAPI__PlayerResponse_1ad310dc7254bc7601cb78f946655b4896) <a id="structFRHAPI__PlayerResponse_1ad310dc7254bc7601cb78f946655b4896"></a>

Player ID *DEPRECATED* use `player_uuid` instead.

<br>
#### `public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerResponse_1adc688a62eabd80c3cfde9688e61bd030) <a id="structFRHAPI__PlayerResponse_1adc688a62eabd80c3cfde9688e61bd030"></a>

Player UUID.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerResponse_1ad95f65d26ed9beae939f37a4cd5bc765)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerResponse_1ad95f65d26ed9beae939f37a4cd5bc765"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerResponse_1af73853ee9ac143469af094d5046b6845)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerResponse_1af73853ee9ac143469af094d5046b6845"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline int32 & `[`GetPlayerId`](#structFRHAPI__PlayerResponse_1a57e3b6edbaf4c9725ed93ee10d9c1871)`()` <a id="structFRHAPI__PlayerResponse_1a57e3b6edbaf4c9725ed93ee10d9c1871"></a>

Gets the value of PlayerId.

<br>
#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerResponse_1a8f31b3dd5619b099307535499154f461)`() const` <a id="structFRHAPI__PlayerResponse_1a8f31b3dd5619b099307535499154f461"></a>

Gets the value of PlayerId.

<br>
#### `public inline void `[`SetPlayerId`](#structFRHAPI__PlayerResponse_1a9b452954dbf91a860e01f9ed8e0dbc32)`(int32 NewValue)` <a id="structFRHAPI__PlayerResponse_1a9b452954dbf91a860e01f9ed8e0dbc32"></a>

Sets the value of PlayerId.

<br>
#### `public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PlayerResponse_1a1e4e3035c00a0707189ce52e4c1f1649)`() const` <a id="structFRHAPI__PlayerResponse_1a1e4e3035c00a0707189ce52e4c1f1649"></a>

Returns true if PlayerId matches the default value.

<br>
#### `public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PlayerResponse_1ae3de40c04341be8f81a980d77123ae55)`()` <a id="structFRHAPI__PlayerResponse_1ae3de40c04341be8f81a980d77123ae55"></a>

Sets the value of PlayerId to its default

<br>
#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerResponse_1a5aa6031765ed727ee1d7d9416a17157e)`()` <a id="structFRHAPI__PlayerResponse_1a5aa6031765ed727ee1d7d9416a17157e"></a>

Gets the value of PlayerUuid.

<br>
#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerResponse_1a75fb0b696a3523f43cc84316c727f559)`() const` <a id="structFRHAPI__PlayerResponse_1a75fb0b696a3523f43cc84316c727f559"></a>

Gets the value of PlayerUuid.

<br>
#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerResponse_1a9a02552a86853550af3ed132f5392167)`(FGuid NewValue)` <a id="structFRHAPI__PlayerResponse_1a9a02552a86853550af3ed132f5392167"></a>

Sets the value of PlayerUuid.

<br>
