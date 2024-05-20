# group `RHAPI_PlayerUuidFromId` <a id="group__RHAPI__PlayerUuidFromId"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerUuidFromId`](#structFRHAPI__PlayerUuidFromId) | Model for getting a player UUID from a player ID.

## struct `FRHAPI_PlayerUuidFromId` <a id="structFRHAPI__PlayerUuidFromId"></a>

```
struct FRHAPI_PlayerUuidFromId
  : public FRHAPI_Model
```

Model for getting a player UUID from a player ID.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`Uuid`](#structFRHAPI__PlayerUuidFromId_1af3d1c98234ec394e36c4ac3ba7873ebc) | Player UUID.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerUuidFromId_1a923cb73cadda24da3b8fd227f14d6060)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerUuidFromId_1a6e18ad078934048aa08c3b68ffc43706)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetUuid`](#structFRHAPI__PlayerUuidFromId_1a47a1e049d978c28ee4e97a26da4d49be)`()` | Gets the value of Uuid.
`public inline const FGuid & `[`GetUuid`](#structFRHAPI__PlayerUuidFromId_1ab17b92b34de1090d5a2b392882100ae1)`() const` | Gets the value of Uuid.
`public inline void `[`SetUuid`](#structFRHAPI__PlayerUuidFromId_1af7a1334489be24d8295ab4bebfab0029)`(FGuid NewValue)` | Sets the value of Uuid.

### Members

#### `public FGuid `[`Uuid`](#structFRHAPI__PlayerUuidFromId_1af3d1c98234ec394e36c4ac3ba7873ebc) <a id="structFRHAPI__PlayerUuidFromId_1af3d1c98234ec394e36c4ac3ba7873ebc"></a>

Player UUID.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerUuidFromId_1a923cb73cadda24da3b8fd227f14d6060)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerUuidFromId_1a923cb73cadda24da3b8fd227f14d6060"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerUuidFromId_1a6e18ad078934048aa08c3b68ffc43706)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerUuidFromId_1a6e18ad078934048aa08c3b68ffc43706"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetUuid`](#structFRHAPI__PlayerUuidFromId_1a47a1e049d978c28ee4e97a26da4d49be)`()` <a id="structFRHAPI__PlayerUuidFromId_1a47a1e049d978c28ee4e97a26da4d49be"></a>

Gets the value of Uuid.

#### `public inline const FGuid & `[`GetUuid`](#structFRHAPI__PlayerUuidFromId_1ab17b92b34de1090d5a2b392882100ae1)`() const` <a id="structFRHAPI__PlayerUuidFromId_1ab17b92b34de1090d5a2b392882100ae1"></a>

Gets the value of Uuid.

#### `public inline void `[`SetUuid`](#structFRHAPI__PlayerUuidFromId_1af7a1334489be24d8295ab4bebfab0029)`(FGuid NewValue)` <a id="structFRHAPI__PlayerUuidFromId_1af7a1334489be24d8295ab4bebfab0029"></a>

Sets the value of Uuid.

