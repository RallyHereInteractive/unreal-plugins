---
title: RHAPI_BlockedPlayer
---

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
`public virtual bool `[`FromJson`](#structFRHAPI__BlockedPlayer_1ae9476290a0e78b218e37aa5d70e521a8)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BlockedPlayer_1a86d20e3591f56b68ac936d502227dbdd)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1a9548784ebf50d0e6718d8bdaa05bdc01)`()` | Gets the value of BlockedPlayerUuid.
`public inline const FGuid & `[`GetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1ad843e12c6107e58a99f84ed0f5362bcf)`() const` | Gets the value of BlockedPlayerUuid.
`public inline void `[`SetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1a3ebe1681cb5f93d5d63d7d83626be423)`(const FGuid & NewValue)` | Sets the value of BlockedPlayerUuid.
`public inline void `[`SetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1a40ffafd3414218f0032b4816e69f0404)`(FGuid && NewValue)` | Sets the value of BlockedPlayerUuid using move semantics.
`public inline FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__BlockedPlayer_1a711a83c7742b9e7314aa164e49f6d455)`()` | Gets the value of LastModifiedOn.
`public inline const FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__BlockedPlayer_1a1fde10dd3b7b0c4a4900aedebff87713)`() const` | Gets the value of LastModifiedOn.
`public inline void `[`SetLastModifiedOn`](#structFRHAPI__BlockedPlayer_1a615e0e0c81ad600e7069c63b267a5839)`(const FDateTime & NewValue)` | Sets the value of LastModifiedOn.
`public inline void `[`SetLastModifiedOn`](#structFRHAPI__BlockedPlayer_1acc5a064ea357ca845b82a68b0c382f4f)`(FDateTime && NewValue)` | Sets the value of LastModifiedOn using move semantics.

### Members

#### `public FGuid `[`BlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1a25926c09c253b77621025b03a36ddaa3) <a id="structFRHAPI__BlockedPlayer_1a25926c09c253b77621025b03a36ddaa3"></a>

#### `public FDateTime `[`LastModifiedOn`](#structFRHAPI__BlockedPlayer_1aae4cca6fd2693a52cd56e666dd06e6f0) <a id="structFRHAPI__BlockedPlayer_1aae4cca6fd2693a52cd56e666dd06e6f0"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__BlockedPlayer_1ae9476290a0e78b218e37aa5d70e521a8)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BlockedPlayer_1ae9476290a0e78b218e37aa5d70e521a8"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__BlockedPlayer_1a86d20e3591f56b68ac936d502227dbdd)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__BlockedPlayer_1a86d20e3591f56b68ac936d502227dbdd"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1a9548784ebf50d0e6718d8bdaa05bdc01)`()` <a id="structFRHAPI__BlockedPlayer_1a9548784ebf50d0e6718d8bdaa05bdc01"></a>

Gets the value of BlockedPlayerUuid.

#### `public inline const FGuid & `[`GetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1ad843e12c6107e58a99f84ed0f5362bcf)`() const` <a id="structFRHAPI__BlockedPlayer_1ad843e12c6107e58a99f84ed0f5362bcf"></a>

Gets the value of BlockedPlayerUuid.

#### `public inline void `[`SetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1a3ebe1681cb5f93d5d63d7d83626be423)`(const FGuid & NewValue)` <a id="structFRHAPI__BlockedPlayer_1a3ebe1681cb5f93d5d63d7d83626be423"></a>

Sets the value of BlockedPlayerUuid.

#### `public inline void `[`SetBlockedPlayerUuid`](#structFRHAPI__BlockedPlayer_1a40ffafd3414218f0032b4816e69f0404)`(FGuid && NewValue)` <a id="structFRHAPI__BlockedPlayer_1a40ffafd3414218f0032b4816e69f0404"></a>

Sets the value of BlockedPlayerUuid using move semantics.

#### `public inline FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__BlockedPlayer_1a711a83c7742b9e7314aa164e49f6d455)`()` <a id="structFRHAPI__BlockedPlayer_1a711a83c7742b9e7314aa164e49f6d455"></a>

Gets the value of LastModifiedOn.

#### `public inline const FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__BlockedPlayer_1a1fde10dd3b7b0c4a4900aedebff87713)`() const` <a id="structFRHAPI__BlockedPlayer_1a1fde10dd3b7b0c4a4900aedebff87713"></a>

Gets the value of LastModifiedOn.

#### `public inline void `[`SetLastModifiedOn`](#structFRHAPI__BlockedPlayer_1a615e0e0c81ad600e7069c63b267a5839)`(const FDateTime & NewValue)` <a id="structFRHAPI__BlockedPlayer_1a615e0e0c81ad600e7069c63b267a5839"></a>

Sets the value of LastModifiedOn.

#### `public inline void `[`SetLastModifiedOn`](#structFRHAPI__BlockedPlayer_1acc5a064ea357ca845b82a68b0c382f4f)`(FDateTime && NewValue)` <a id="structFRHAPI__BlockedPlayer_1acc5a064ea357ca845b82a68b0c382f4f"></a>

Sets the value of LastModifiedOn using move semantics.

