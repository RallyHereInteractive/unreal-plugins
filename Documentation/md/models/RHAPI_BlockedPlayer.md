# group `RHAPI_BlockedPlayer` <a id="group__RHAPI__BlockedPlayer"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_BlockedPlayer`](#structFRHAPI__BlockedPlayer) | The player that is being blocked.

## struct `FRHAPI_BlockedPlayer` <a id="structFRHAPI__BlockedPlayer"></a>

```
struct FRHAPI_BlockedPlayer
  : public FRHAPI_Model
```

The player that is being blocked.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`BlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1a25926c09c253b77621025b03a36ddaa3) | 
`public FDateTime `[`LastModifiedOn`](#structFRHAPI__BlockedPlayer_1aae4cca6fd2693a52cd56e666dd06e6f0) | 
`public virtual bool `[`FromJson`](#structFRHAPI__BlockedPlayer_1a3b5c3b7a054ba579ce4e085a4fb4545b)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BlockedPlayer_1a1037583cdcc3c272106e0488926ee1d4)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1a9548784ebf50d0e6718d8bdaa05bdc01)`()` | Gets the value of BlockedPlayerUuid.
`public inline const FGuid & `[`GetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1ad843e12c6107e58a99f84ed0f5362bcf)`() const` | Gets the value of BlockedPlayerUuid.
`public inline void `[`SetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1a299f215923b86d31db71fc18f61fb4c9)`(FGuid NewValue)` | Sets the value of BlockedPlayerUuid.
`public inline FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__BlockedPlayer_1a711a83c7742b9e7314aa164e49f6d455)`()` | Gets the value of LastModifiedOn.
`public inline const FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__BlockedPlayer_1a1fde10dd3b7b0c4a4900aedebff87713)`() const` | Gets the value of LastModifiedOn.
`public inline void `[`SetLastModifiedOn`](#structFRHAPI__BlockedPlayer_1ac53ba9d483ec1f43c39fcc34203b9bc7)`(FDateTime NewValue)` | Sets the value of LastModifiedOn.

### Members

#### `public FGuid `[`BlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1a25926c09c253b77621025b03a36ddaa3) <a id="structFRHAPI__BlockedPlayer_1a25926c09c253b77621025b03a36ddaa3"></a>

#### `public FDateTime `[`LastModifiedOn`](#structFRHAPI__BlockedPlayer_1aae4cca6fd2693a52cd56e666dd06e6f0) <a id="structFRHAPI__BlockedPlayer_1aae4cca6fd2693a52cd56e666dd06e6f0"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__BlockedPlayer_1a3b5c3b7a054ba579ce4e085a4fb4545b)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BlockedPlayer_1a3b5c3b7a054ba579ce4e085a4fb4545b"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__BlockedPlayer_1a1037583cdcc3c272106e0488926ee1d4)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__BlockedPlayer_1a1037583cdcc3c272106e0488926ee1d4"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1a9548784ebf50d0e6718d8bdaa05bdc01)`()` <a id="structFRHAPI__BlockedPlayer_1a9548784ebf50d0e6718d8bdaa05bdc01"></a>

Gets the value of BlockedPlayerUuid.

#### `public inline const FGuid & `[`GetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1ad843e12c6107e58a99f84ed0f5362bcf)`() const` <a id="structFRHAPI__BlockedPlayer_1ad843e12c6107e58a99f84ed0f5362bcf"></a>

Gets the value of BlockedPlayerUuid.

#### `public inline void `[`SetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1a299f215923b86d31db71fc18f61fb4c9)`(FGuid NewValue)` <a id="structFRHAPI__BlockedPlayer_1a299f215923b86d31db71fc18f61fb4c9"></a>

Sets the value of BlockedPlayerUuid.

#### `public inline FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__BlockedPlayer_1a711a83c7742b9e7314aa164e49f6d455)`()` <a id="structFRHAPI__BlockedPlayer_1a711a83c7742b9e7314aa164e49f6d455"></a>

Gets the value of LastModifiedOn.

#### `public inline const FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__BlockedPlayer_1a1fde10dd3b7b0c4a4900aedebff87713)`() const` <a id="structFRHAPI__BlockedPlayer_1a1fde10dd3b7b0c4a4900aedebff87713"></a>

Gets the value of LastModifiedOn.

#### `public inline void `[`SetLastModifiedOn`](#structFRHAPI__BlockedPlayer_1ac53ba9d483ec1f43c39fcc34203b9bc7)`(FDateTime NewValue)` <a id="structFRHAPI__BlockedPlayer_1ac53ba9d483ec1f43c39fcc34203b9bc7"></a>

Sets the value of LastModifiedOn.

