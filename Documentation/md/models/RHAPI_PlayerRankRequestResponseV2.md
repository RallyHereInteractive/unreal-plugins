# RHAPI_PlayerRankRequestResponseV2 <a id="group__RHAPI__PlayerRankRequestResponseV2"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerRankRequestResponseV2`](#structFRHAPI__PlayerRankRequestResponseV2) | Response to successfully requesting all of a player&#39;s ranks.

## struct `FRHAPI_PlayerRankRequestResponseV2` <a id="structFRHAPI__PlayerRankRequestResponseV2"></a>

```
struct FRHAPI_PlayerRankRequestResponseV2
  : public FRHAPI_Model
```

Response to successfully requesting all of a player&#39;s ranks.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > `[`PlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1a44950e643e4498db070573af06af91d3) | List of player's ranks.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankRequestResponseV2_1a03712dedf7488733a2162a4b4cedc7d7)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankRequestResponseV2_1a038b46467170246424f5a188361d7cf1)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > & `[`GetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1a4b0f64f6adb6b32e30d012eea8623b54)`()` | Gets the value of PlayerRanks.
`public inline const TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > & `[`GetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1ab5ce87761c241ccefaf1c5fe1ac0db82)`() const` | Gets the value of PlayerRanks.
`public inline void `[`SetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1acdf16df8acc6e2f1341971ea6d2c2fa5)`(TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > NewValue)` | Sets the value of PlayerRanks.

#### Members

#### `public TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > `[`PlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1a44950e643e4498db070573af06af91d3) <a id="structFRHAPI__PlayerRankRequestResponseV2_1a44950e643e4498db070573af06af91d3"></a>

List of player's ranks.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankRequestResponseV2_1a03712dedf7488733a2162a4b4cedc7d7)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerRankRequestResponseV2_1a03712dedf7488733a2162a4b4cedc7d7"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankRequestResponseV2_1a038b46467170246424f5a188361d7cf1)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerRankRequestResponseV2_1a038b46467170246424f5a188361d7cf1"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > & `[`GetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1a4b0f64f6adb6b32e30d012eea8623b54)`()` <a id="structFRHAPI__PlayerRankRequestResponseV2_1a4b0f64f6adb6b32e30d012eea8623b54"></a>

Gets the value of PlayerRanks.

#### `public inline const TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > & `[`GetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1ab5ce87761c241ccefaf1c5fe1ac0db82)`() const` <a id="structFRHAPI__PlayerRankRequestResponseV2_1ab5ce87761c241ccefaf1c5fe1ac0db82"></a>

Gets the value of PlayerRanks.

#### `public inline void `[`SetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1acdf16df8acc6e2f1341971ea6d2c2fa5)`(TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > NewValue)` <a id="structFRHAPI__PlayerRankRequestResponseV2_1acdf16df8acc6e2f1341971ea6d2c2fa5"></a>

Sets the value of PlayerRanks.

