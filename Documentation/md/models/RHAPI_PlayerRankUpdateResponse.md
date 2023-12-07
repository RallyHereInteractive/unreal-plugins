# RHAPI_PlayerRankUpdateResponse <a id="group__RHAPI__PlayerRankUpdateResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerRankUpdateResponse`](#structFRHAPI__PlayerRankUpdateResponse) | DEPRECATED Response to successfully updating players&#39; ranks.

## struct `FRHAPI_PlayerRankUpdateResponse` <a id="structFRHAPI__PlayerRankUpdateResponse"></a>

```
struct FRHAPI_PlayerRankUpdateResponse
  : public FRHAPI_Model
```

DEPRECATED Response to successfully updating players&#39; ranks.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > `[`UpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponse_1a7f6d7817320d4a24ba83cdbdb5f5acaf) | List of players and their updated ranks.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankUpdateResponse_1a8c70e27184c2ed95c1687f0070de3a41)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankUpdateResponse_1a47da0774dd217832f7b5ab5f20e70803)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & `[`GetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponse_1ac7213500ce83733148a448a808771080)`()` | Gets the value of UpdatedPlayers.
`public inline const TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & `[`GetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponse_1a67c1363557897ce067efec035674b8c5)`() const` | Gets the value of UpdatedPlayers.
`public inline void `[`SetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponse_1a5199179dc905b15110e2e2ae0cda32a2)`(TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > NewValue)` | Sets the value of UpdatedPlayers.

#### Members

#### `public TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > `[`UpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponse_1a7f6d7817320d4a24ba83cdbdb5f5acaf) <a id="structFRHAPI__PlayerRankUpdateResponse_1a7f6d7817320d4a24ba83cdbdb5f5acaf"></a>

List of players and their updated ranks.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankUpdateResponse_1a8c70e27184c2ed95c1687f0070de3a41)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerRankUpdateResponse_1a8c70e27184c2ed95c1687f0070de3a41"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankUpdateResponse_1a47da0774dd217832f7b5ab5f20e70803)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerRankUpdateResponse_1a47da0774dd217832f7b5ab5f20e70803"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & `[`GetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponse_1ac7213500ce83733148a448a808771080)`()` <a id="structFRHAPI__PlayerRankUpdateResponse_1ac7213500ce83733148a448a808771080"></a>

Gets the value of UpdatedPlayers.

<br>
#### `public inline const TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & `[`GetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponse_1a67c1363557897ce067efec035674b8c5)`() const` <a id="structFRHAPI__PlayerRankUpdateResponse_1a67c1363557897ce067efec035674b8c5"></a>

Gets the value of UpdatedPlayers.

<br>
#### `public inline void `[`SetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponse_1a5199179dc905b15110e2e2ae0cda32a2)`(TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > NewValue)` <a id="structFRHAPI__PlayerRankUpdateResponse_1a5199179dc905b15110e2e2ae0cda32a2"></a>

Sets the value of UpdatedPlayers.

<br>
