# RHAPI_BlockedListV1 <a id="group__RHAPI__BlockedListV1"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_BlockedListV1`](#structFRHAPI__BlockedListV1) | The list of players that is blocked. V1 includes player_id and player_uuid.

## struct `FRHAPI_BlockedListV1` <a id="structFRHAPI__BlockedListV1"></a>

```
struct FRHAPI_BlockedListV1
  : public FRHAPI_Model
```

The list of players that is blocked. V1 includes player_id and player_uuid.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`PlayerId`](#structFRHAPI__BlockedListV1_1ade9caa9b10824edf6926d3b8469100ab) | 
`public FGuid `[`PlayerUuid`](#structFRHAPI__BlockedListV1_1a50c043118db11d7942acdf151465173d) | 
`public TArray< `[`FRHAPI_BlockedPlayerV1`](RHAPI_BlockedPlayerV1.md#structFRHAPI__BlockedPlayerV1)` > `[`Blocked`](#structFRHAPI__BlockedListV1_1aba330a0566290f3fda0222b500989bfd) | 
`public `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` `[`Page`](#structFRHAPI__BlockedListV1_1a521032dec2dcb9ea96651449d37e7bf3) | 
`public virtual bool `[`FromJson`](#structFRHAPI__BlockedListV1_1a61600940704bfb4c08a22183035e4f6c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BlockedListV1_1a0b3d1083d5c552dc6f25e6a65a069e40)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetPlayerId`](#structFRHAPI__BlockedListV1_1a662a4abd8bac8398bfb844267003fab2)`()` | Gets the value of PlayerId.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__BlockedListV1_1aa68da4ac2bfcad2e100c40bc1a292a71)`() const` | Gets the value of PlayerId.
`public inline void `[`SetPlayerId`](#structFRHAPI__BlockedListV1_1aa19790b8dff978cadda8ef95b0cfc185)`(int32 NewValue)` | Sets the value of PlayerId.
`public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__BlockedListV1_1a699d03bcefb6ea6a41be3b97047e0509)`() const` | Returns true if PlayerId matches the default value.
`public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__BlockedListV1_1a64a886e93872c0f49fdb00a326f936cd)`()` | Sets the value of PlayerId to its default
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__BlockedListV1_1a529642356bb09c2b33b03f481126549e)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__BlockedListV1_1a2ec5de2f6da5e7f1fc36d56b61fe4198)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__BlockedListV1_1afdfd5130b1c1b52ec10bea416ed8efdd)`(FGuid NewValue)` | Sets the value of PlayerUuid.
`public inline TArray< `[`FRHAPI_BlockedPlayerV1`](RHAPI_BlockedPlayerV1.md#structFRHAPI__BlockedPlayerV1)` > & `[`GetBlocked`](#structFRHAPI__BlockedListV1_1ae669839d122dd52e3bee6a91da44b1a5)`()` | Gets the value of Blocked.
`public inline const TArray< `[`FRHAPI_BlockedPlayerV1`](RHAPI_BlockedPlayerV1.md#structFRHAPI__BlockedPlayerV1)` > & `[`GetBlocked`](#structFRHAPI__BlockedListV1_1a3ab93256d3c954f84bb1141c09bd0a0e)`() const` | Gets the value of Blocked.
`public inline void `[`SetBlocked`](#structFRHAPI__BlockedListV1_1a32a8b086bc503d702f9136e90609f5d5)`(TArray< `[`FRHAPI_BlockedPlayerV1`](RHAPI_BlockedPlayerV1.md#structFRHAPI__BlockedPlayerV1)` > NewValue)` | Sets the value of Blocked.
`public inline `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__BlockedListV1_1af64951fcb4ca7d17d7b22ef758010b54)`()` | Gets the value of Page.
`public inline const `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__BlockedListV1_1a3b976a1089c4eaf000ccb7b282866322)`() const` | Gets the value of Page.
`public inline void `[`SetPage`](#structFRHAPI__BlockedListV1_1a259100b6a9f9fa2f868fcd41465902f1)`(`[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` NewValue)` | Sets the value of Page.

#### Members

#### `public int32 `[`PlayerId`](#structFRHAPI__BlockedListV1_1ade9caa9b10824edf6926d3b8469100ab) <a id="structFRHAPI__BlockedListV1_1ade9caa9b10824edf6926d3b8469100ab"></a>

<br>
#### `public FGuid `[`PlayerUuid`](#structFRHAPI__BlockedListV1_1a50c043118db11d7942acdf151465173d) <a id="structFRHAPI__BlockedListV1_1a50c043118db11d7942acdf151465173d"></a>

<br>
#### `public TArray< `[`FRHAPI_BlockedPlayerV1`](RHAPI_BlockedPlayerV1.md#structFRHAPI__BlockedPlayerV1)` > `[`Blocked`](#structFRHAPI__BlockedListV1_1aba330a0566290f3fda0222b500989bfd) <a id="structFRHAPI__BlockedListV1_1aba330a0566290f3fda0222b500989bfd"></a>

<br>
#### `public `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` `[`Page`](#structFRHAPI__BlockedListV1_1a521032dec2dcb9ea96651449d37e7bf3) <a id="structFRHAPI__BlockedListV1_1a521032dec2dcb9ea96651449d37e7bf3"></a>

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__BlockedListV1_1a61600940704bfb4c08a22183035e4f6c)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BlockedListV1_1a61600940704bfb4c08a22183035e4f6c"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__BlockedListV1_1a0b3d1083d5c552dc6f25e6a65a069e40)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__BlockedListV1_1a0b3d1083d5c552dc6f25e6a65a069e40"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline int32 & `[`GetPlayerId`](#structFRHAPI__BlockedListV1_1a662a4abd8bac8398bfb844267003fab2)`()` <a id="structFRHAPI__BlockedListV1_1a662a4abd8bac8398bfb844267003fab2"></a>

Gets the value of PlayerId.

<br>
#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__BlockedListV1_1aa68da4ac2bfcad2e100c40bc1a292a71)`() const` <a id="structFRHAPI__BlockedListV1_1aa68da4ac2bfcad2e100c40bc1a292a71"></a>

Gets the value of PlayerId.

<br>
#### `public inline void `[`SetPlayerId`](#structFRHAPI__BlockedListV1_1aa19790b8dff978cadda8ef95b0cfc185)`(int32 NewValue)` <a id="structFRHAPI__BlockedListV1_1aa19790b8dff978cadda8ef95b0cfc185"></a>

Sets the value of PlayerId.

<br>
#### `public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__BlockedListV1_1a699d03bcefb6ea6a41be3b97047e0509)`() const` <a id="structFRHAPI__BlockedListV1_1a699d03bcefb6ea6a41be3b97047e0509"></a>

Returns true if PlayerId matches the default value.

<br>
#### `public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__BlockedListV1_1a64a886e93872c0f49fdb00a326f936cd)`()` <a id="structFRHAPI__BlockedListV1_1a64a886e93872c0f49fdb00a326f936cd"></a>

Sets the value of PlayerId to its default

<br>
#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__BlockedListV1_1a529642356bb09c2b33b03f481126549e)`()` <a id="structFRHAPI__BlockedListV1_1a529642356bb09c2b33b03f481126549e"></a>

Gets the value of PlayerUuid.

<br>
#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__BlockedListV1_1a2ec5de2f6da5e7f1fc36d56b61fe4198)`() const` <a id="structFRHAPI__BlockedListV1_1a2ec5de2f6da5e7f1fc36d56b61fe4198"></a>

Gets the value of PlayerUuid.

<br>
#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__BlockedListV1_1afdfd5130b1c1b52ec10bea416ed8efdd)`(FGuid NewValue)` <a id="structFRHAPI__BlockedListV1_1afdfd5130b1c1b52ec10bea416ed8efdd"></a>

Sets the value of PlayerUuid.

<br>
#### `public inline TArray< `[`FRHAPI_BlockedPlayerV1`](RHAPI_BlockedPlayerV1.md#structFRHAPI__BlockedPlayerV1)` > & `[`GetBlocked`](#structFRHAPI__BlockedListV1_1ae669839d122dd52e3bee6a91da44b1a5)`()` <a id="structFRHAPI__BlockedListV1_1ae669839d122dd52e3bee6a91da44b1a5"></a>

Gets the value of Blocked.

<br>
#### `public inline const TArray< `[`FRHAPI_BlockedPlayerV1`](RHAPI_BlockedPlayerV1.md#structFRHAPI__BlockedPlayerV1)` > & `[`GetBlocked`](#structFRHAPI__BlockedListV1_1a3ab93256d3c954f84bb1141c09bd0a0e)`() const` <a id="structFRHAPI__BlockedListV1_1a3ab93256d3c954f84bb1141c09bd0a0e"></a>

Gets the value of Blocked.

<br>
#### `public inline void `[`SetBlocked`](#structFRHAPI__BlockedListV1_1a32a8b086bc503d702f9136e90609f5d5)`(TArray< `[`FRHAPI_BlockedPlayerV1`](RHAPI_BlockedPlayerV1.md#structFRHAPI__BlockedPlayerV1)` > NewValue)` <a id="structFRHAPI__BlockedListV1_1a32a8b086bc503d702f9136e90609f5d5"></a>

Sets the value of Blocked.

<br>
#### `public inline `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__BlockedListV1_1af64951fcb4ca7d17d7b22ef758010b54)`()` <a id="structFRHAPI__BlockedListV1_1af64951fcb4ca7d17d7b22ef758010b54"></a>

Gets the value of Page.

<br>
#### `public inline const `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__BlockedListV1_1a3b976a1089c4eaf000ccb7b282866322)`() const` <a id="structFRHAPI__BlockedListV1_1a3b976a1089c4eaf000ccb7b282866322"></a>

Gets the value of Page.

<br>
#### `public inline void `[`SetPage`](#structFRHAPI__BlockedListV1_1a259100b6a9f9fa2f868fcd41465902f1)`(`[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` NewValue)` <a id="structFRHAPI__BlockedListV1_1a259100b6a9f9fa2f868fcd41465902f1"></a>

Sets the value of Page.

<br>
