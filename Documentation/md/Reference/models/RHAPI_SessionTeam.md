---
title: RHAPI_SessionTeam
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SessionTeam`](#structFRHAPI__SessionTeam) | A team of SessionPlayers in a session.

## struct `FRHAPI_SessionTeam` <a id="structFRHAPI__SessionTeam"></a>

```
struct FRHAPI_SessionTeam
  : public FRHAPI_Model
```

A team of SessionPlayers in a session.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > `[`Players`](#structFRHAPI__SessionTeam_1a5b51da5e82a822358321d315683a5cdd) | Players currently on this team.
`public int32 `[`MaxSize`](#structFRHAPI__SessionTeam_1a577fd2257686ecc6dc4c46a9405511e8) | Maximum number of players allowed on this team.
`public int32 `[`TeamId_Optional`](#structFRHAPI__SessionTeam_1ab5fa3e595f1d211138a8e632dcb0334a) | Which team this is.
`public bool `[`TeamId_IsSet`](#structFRHAPI__SessionTeam_1ae4c4a101fbe2d983f2bf0f949c0ce907) | true if TeamId_Optional has been set to a value
`public TArray< FString > `[`TicketIds_Optional`](#structFRHAPI__SessionTeam_1af28f1dccc642bb42d4216d0521a8fe8b) | Matchmaking tickets that were assigned to this team.
`public bool `[`TicketIds_IsSet`](#structFRHAPI__SessionTeam_1ab7e2a7febb7b3a6252cfb2569448497a) | true if TicketIds_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionTeam_1ab19beed3e9a527b86c042706abd4e078) | Custom data about this team.
`public bool `[`CustomData_IsSet`](#structFRHAPI__SessionTeam_1a4090a0cef93f77f1fe669dd03eefcf6c) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SessionTeam_1ae763390c0630a69603d3677d121da057)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionTeam_1a4dccdb1fdcefaa7f34a76b3de75d7c26)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & `[`GetPlayers`](#structFRHAPI__SessionTeam_1a8fe653697b05b2fee8199175d3e501de)`()` | Gets the value of Players.
`public inline FORCEINLINE const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & `[`GetPlayers`](#structFRHAPI__SessionTeam_1ad3eef5dfb7f3fd40ae26aa618bf22307)`() const` | Gets the value of Players.
`public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__SessionTeam_1a2eb47b9a5a5b0b633ea0c446afee411c)`(const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & NewValue)` | Sets the value of Players.
`public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__SessionTeam_1a537c1b5b32edd936431d0a14b5b86fe0)`(TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > && NewValue)` | Sets the value of Players using move semantics.
`public inline FORCEINLINE int32 & `[`GetMaxSize`](#structFRHAPI__SessionTeam_1ae2417c2aab06920cedd21febe47c7917)`()` | Gets the value of MaxSize.
`public inline FORCEINLINE const int32 & `[`GetMaxSize`](#structFRHAPI__SessionTeam_1a76152842ab80ddd3c2cef3be7b43de16)`() const` | Gets the value of MaxSize.
`public inline FORCEINLINE void `[`SetMaxSize`](#structFRHAPI__SessionTeam_1a4324faf37a5ee4958735787e333a3bae)`(const int32 & NewValue)` | Sets the value of MaxSize.
`public inline FORCEINLINE void `[`SetMaxSize`](#structFRHAPI__SessionTeam_1ab666ba68b5dad401ea20cc294670f437)`(int32 && NewValue)` | Sets the value of MaxSize using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_MaxSize`](#structFRHAPI__SessionTeam_1a899fad6ca8ea022d2b474666bfdc93ce)`()` | Returns the default value of MaxSize.
`public inline FORCEINLINE int32 & `[`GetTeamId`](#structFRHAPI__SessionTeam_1ac4bac4e1512c503987873e5d89bb9893)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__SessionTeam_1a303428bf08dda3cf978cef73bb1d5c0b)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__SessionTeam_1a6f265faa573dff6dbbca1e290170637b)`(const int32 & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTeamId`](#structFRHAPI__SessionTeam_1a4a15750a066db2ef34f6f6511f39f804)`(int32 & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionTeam_1aea0f4f9a80ee427fc8b337bcac5312e7)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionTeam_1aad0dbe29026a0ed3b8dc424062087139)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__SessionTeam_1a36a70a4ca2cc70a9bcbc058e3fe1bf60)`(const int32 & NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__SessionTeam_1a56d2bf0d697c3b99faa32d93f45e38a3)`(int32 && NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.
`public inline void `[`ClearTeamId`](#structFRHAPI__SessionTeam_1ad51e3f0df9a45dd7997055829e7d6dc9)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_TeamId`](#structFRHAPI__SessionTeam_1a67cd49194ad6c6d1fbf65e11c38b7017)`()` | Returns the default value of TeamId.
`public inline FORCEINLINE TArray< FString > & `[`GetTicketIds`](#structFRHAPI__SessionTeam_1abcd7a16f47bc04b7f167825946d2d809)`()` | Gets the value of TicketIds_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__SessionTeam_1afaa86f63dcf186a0cf6051fb0b9defde)`() const` | Gets the value of TicketIds_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__SessionTeam_1a34e22ce4c2966ef5c944972192a929e1)`(const TArray< FString > & DefaultValue) const` | Gets the value of TicketIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTicketIds`](#structFRHAPI__SessionTeam_1a82ca87ab2358aced8e9736a2f6588449)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of TicketIds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__SessionTeam_1ac9e31ea81e567de4846008be5153c96c)`()` | Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__SessionTeam_1a5b9a04fbb85b75e7c8a2c91c8b532d6b)`() const` | Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTicketIds`](#structFRHAPI__SessionTeam_1a2f7b722f533308474ed86aabbaab0fde)`(const TArray< FString > & NewValue)` | Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true.
`public inline FORCEINLINE void `[`SetTicketIds`](#structFRHAPI__SessionTeam_1a232e4544472ef7219d87faf2449ae75a)`(TArray< FString > && NewValue)` | Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true using move semantics.
`public inline void `[`ClearTicketIds`](#structFRHAPI__SessionTeam_1a9cf26123ef9afeb98d1b6a7f326f01d5)`()` | Clears the value of TicketIds_Optional and sets TicketIds_IsSet to false.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTeam_1a06bdf69902415291baf27dca0a77af86)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTeam_1aff2f703d877c449fa791f0e6d2f2330e)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTeam_1a2ee1960f256f30c9eb588b2060e71e89)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__SessionTeam_1a0fd8c848cc8af677710122d6194cc691)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionTeam_1a3a41cdc2c2ceed4511818d9180bb9a17)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionTeam_1a829ddc82e0ce57873d193b446387c780)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SessionTeam_1a69691385d24961ae6f5791f50ca91681)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SessionTeam_1a6929d979ef000060dd3f5e1be97d484d)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__SessionTeam_1ad4c82562cd5a395efe7b2e54d8f97f6d)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

### Members

#### `public TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > `[`Players`](#structFRHAPI__SessionTeam_1a5b51da5e82a822358321d315683a5cdd) <a id="structFRHAPI__SessionTeam_1a5b51da5e82a822358321d315683a5cdd"></a>

Players currently on this team.

#### `public int32 `[`MaxSize`](#structFRHAPI__SessionTeam_1a577fd2257686ecc6dc4c46a9405511e8) <a id="structFRHAPI__SessionTeam_1a577fd2257686ecc6dc4c46a9405511e8"></a>

Maximum number of players allowed on this team.

#### `public int32 `[`TeamId_Optional`](#structFRHAPI__SessionTeam_1ab5fa3e595f1d211138a8e632dcb0334a) <a id="structFRHAPI__SessionTeam_1ab5fa3e595f1d211138a8e632dcb0334a"></a>

Which team this is.

#### `public bool `[`TeamId_IsSet`](#structFRHAPI__SessionTeam_1ae4c4a101fbe2d983f2bf0f949c0ce907) <a id="structFRHAPI__SessionTeam_1ae4c4a101fbe2d983f2bf0f949c0ce907"></a>

true if TeamId_Optional has been set to a value

#### `public TArray< FString > `[`TicketIds_Optional`](#structFRHAPI__SessionTeam_1af28f1dccc642bb42d4216d0521a8fe8b) <a id="structFRHAPI__SessionTeam_1af28f1dccc642bb42d4216d0521a8fe8b"></a>

Matchmaking tickets that were assigned to this team.

#### `public bool `[`TicketIds_IsSet`](#structFRHAPI__SessionTeam_1ab7e2a7febb7b3a6252cfb2569448497a) <a id="structFRHAPI__SessionTeam_1ab7e2a7febb7b3a6252cfb2569448497a"></a>

true if TicketIds_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionTeam_1ab19beed3e9a527b86c042706abd4e078) <a id="structFRHAPI__SessionTeam_1ab19beed3e9a527b86c042706abd4e078"></a>

Custom data about this team.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__SessionTeam_1a4090a0cef93f77f1fe669dd03eefcf6c) <a id="structFRHAPI__SessionTeam_1a4090a0cef93f77f1fe669dd03eefcf6c"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionTeam_1ae763390c0630a69603d3677d121da057)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionTeam_1ae763390c0630a69603d3677d121da057"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionTeam_1a4dccdb1fdcefaa7f34a76b3de75d7c26)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__SessionTeam_1a4dccdb1fdcefaa7f34a76b3de75d7c26"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & `[`GetPlayers`](#structFRHAPI__SessionTeam_1a8fe653697b05b2fee8199175d3e501de)`()` <a id="structFRHAPI__SessionTeam_1a8fe653697b05b2fee8199175d3e501de"></a>

Gets the value of Players.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & `[`GetPlayers`](#structFRHAPI__SessionTeam_1ad3eef5dfb7f3fd40ae26aa618bf22307)`() const` <a id="structFRHAPI__SessionTeam_1ad3eef5dfb7f3fd40ae26aa618bf22307"></a>

Gets the value of Players.

#### `public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__SessionTeam_1a2eb47b9a5a5b0b633ea0c446afee411c)`(const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & NewValue)` <a id="structFRHAPI__SessionTeam_1a2eb47b9a5a5b0b633ea0c446afee411c"></a>

Sets the value of Players.

#### `public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__SessionTeam_1a537c1b5b32edd936431d0a14b5b86fe0)`(TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > && NewValue)` <a id="structFRHAPI__SessionTeam_1a537c1b5b32edd936431d0a14b5b86fe0"></a>

Sets the value of Players using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetMaxSize`](#structFRHAPI__SessionTeam_1ae2417c2aab06920cedd21febe47c7917)`()` <a id="structFRHAPI__SessionTeam_1ae2417c2aab06920cedd21febe47c7917"></a>

Gets the value of MaxSize.

#### `public inline FORCEINLINE const int32 & `[`GetMaxSize`](#structFRHAPI__SessionTeam_1a76152842ab80ddd3c2cef3be7b43de16)`() const` <a id="structFRHAPI__SessionTeam_1a76152842ab80ddd3c2cef3be7b43de16"></a>

Gets the value of MaxSize.

#### `public inline FORCEINLINE void `[`SetMaxSize`](#structFRHAPI__SessionTeam_1a4324faf37a5ee4958735787e333a3bae)`(const int32 & NewValue)` <a id="structFRHAPI__SessionTeam_1a4324faf37a5ee4958735787e333a3bae"></a>

Sets the value of MaxSize.

#### `public inline FORCEINLINE void `[`SetMaxSize`](#structFRHAPI__SessionTeam_1ab666ba68b5dad401ea20cc294670f437)`(int32 && NewValue)` <a id="structFRHAPI__SessionTeam_1ab666ba68b5dad401ea20cc294670f437"></a>

Sets the value of MaxSize using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_MaxSize`](#structFRHAPI__SessionTeam_1a899fad6ca8ea022d2b474666bfdc93ce)`()` <a id="structFRHAPI__SessionTeam_1a899fad6ca8ea022d2b474666bfdc93ce"></a>

Returns the default value of MaxSize.

#### `public inline FORCEINLINE int32 & `[`GetTeamId`](#structFRHAPI__SessionTeam_1ac4bac4e1512c503987873e5d89bb9893)`()` <a id="structFRHAPI__SessionTeam_1ac4bac4e1512c503987873e5d89bb9893"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__SessionTeam_1a303428bf08dda3cf978cef73bb1d5c0b)`() const` <a id="structFRHAPI__SessionTeam_1a303428bf08dda3cf978cef73bb1d5c0b"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__SessionTeam_1a6f265faa573dff6dbbca1e290170637b)`(const int32 & DefaultValue) const` <a id="structFRHAPI__SessionTeam_1a6f265faa573dff6dbbca1e290170637b"></a>

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTeamId`](#structFRHAPI__SessionTeam_1a4a15750a066db2ef34f6f6511f39f804)`(int32 & OutValue) const` <a id="structFRHAPI__SessionTeam_1a4a15750a066db2ef34f6f6511f39f804"></a>

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionTeam_1aea0f4f9a80ee427fc8b337bcac5312e7)`()` <a id="structFRHAPI__SessionTeam_1aea0f4f9a80ee427fc8b337bcac5312e7"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionTeam_1aad0dbe29026a0ed3b8dc424062087139)`() const` <a id="structFRHAPI__SessionTeam_1aad0dbe29026a0ed3b8dc424062087139"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__SessionTeam_1a36a70a4ca2cc70a9bcbc058e3fe1bf60)`(const int32 & NewValue)` <a id="structFRHAPI__SessionTeam_1a36a70a4ca2cc70a9bcbc058e3fe1bf60"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__SessionTeam_1a56d2bf0d697c3b99faa32d93f45e38a3)`(int32 && NewValue)` <a id="structFRHAPI__SessionTeam_1a56d2bf0d697c3b99faa32d93f45e38a3"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.

#### `public inline void `[`ClearTeamId`](#structFRHAPI__SessionTeam_1ad51e3f0df9a45dd7997055829e7d6dc9)`()` <a id="structFRHAPI__SessionTeam_1ad51e3f0df9a45dd7997055829e7d6dc9"></a>

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_TeamId`](#structFRHAPI__SessionTeam_1a67cd49194ad6c6d1fbf65e11c38b7017)`()` <a id="structFRHAPI__SessionTeam_1a67cd49194ad6c6d1fbf65e11c38b7017"></a>

Returns the default value of TeamId.

#### `public inline FORCEINLINE TArray< FString > & `[`GetTicketIds`](#structFRHAPI__SessionTeam_1abcd7a16f47bc04b7f167825946d2d809)`()` <a id="structFRHAPI__SessionTeam_1abcd7a16f47bc04b7f167825946d2d809"></a>

Gets the value of TicketIds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__SessionTeam_1afaa86f63dcf186a0cf6051fb0b9defde)`() const` <a id="structFRHAPI__SessionTeam_1afaa86f63dcf186a0cf6051fb0b9defde"></a>

Gets the value of TicketIds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__SessionTeam_1a34e22ce4c2966ef5c944972192a929e1)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__SessionTeam_1a34e22ce4c2966ef5c944972192a929e1"></a>

Gets the value of TicketIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTicketIds`](#structFRHAPI__SessionTeam_1a82ca87ab2358aced8e9736a2f6588449)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__SessionTeam_1a82ca87ab2358aced8e9736a2f6588449"></a>

Fills OutValue with the value of TicketIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__SessionTeam_1ac9e31ea81e567de4846008be5153c96c)`()` <a id="structFRHAPI__SessionTeam_1ac9e31ea81e567de4846008be5153c96c"></a>

Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__SessionTeam_1a5b9a04fbb85b75e7c8a2c91c8b532d6b)`() const` <a id="structFRHAPI__SessionTeam_1a5b9a04fbb85b75e7c8a2c91c8b532d6b"></a>

Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTicketIds`](#structFRHAPI__SessionTeam_1a2f7b722f533308474ed86aabbaab0fde)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__SessionTeam_1a2f7b722f533308474ed86aabbaab0fde"></a>

Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTicketIds`](#structFRHAPI__SessionTeam_1a232e4544472ef7219d87faf2449ae75a)`(TArray< FString > && NewValue)` <a id="structFRHAPI__SessionTeam_1a232e4544472ef7219d87faf2449ae75a"></a>

Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true using move semantics.

#### `public inline void `[`ClearTicketIds`](#structFRHAPI__SessionTeam_1a9cf26123ef9afeb98d1b6a7f326f01d5)`()` <a id="structFRHAPI__SessionTeam_1a9cf26123ef9afeb98d1b6a7f326f01d5"></a>

Clears the value of TicketIds_Optional and sets TicketIds_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTeam_1a06bdf69902415291baf27dca0a77af86)`()` <a id="structFRHAPI__SessionTeam_1a06bdf69902415291baf27dca0a77af86"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTeam_1aff2f703d877c449fa791f0e6d2f2330e)`() const` <a id="structFRHAPI__SessionTeam_1aff2f703d877c449fa791f0e6d2f2330e"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTeam_1a2ee1960f256f30c9eb588b2060e71e89)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SessionTeam_1a2ee1960f256f30c9eb588b2060e71e89"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__SessionTeam_1a0fd8c848cc8af677710122d6194cc691)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SessionTeam_1a0fd8c848cc8af677710122d6194cc691"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionTeam_1a3a41cdc2c2ceed4511818d9180bb9a17)`()` <a id="structFRHAPI__SessionTeam_1a3a41cdc2c2ceed4511818d9180bb9a17"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionTeam_1a829ddc82e0ce57873d193b446387c780)`() const` <a id="structFRHAPI__SessionTeam_1a829ddc82e0ce57873d193b446387c780"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SessionTeam_1a69691385d24961ae6f5791f50ca91681)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__SessionTeam_1a69691385d24961ae6f5791f50ca91681"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SessionTeam_1a6929d979ef000060dd3f5e1be97d484d)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__SessionTeam_1a6929d979ef000060dd3f5e1be97d484d"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__SessionTeam_1ad4c82562cd5a395efe7b2e54d8f97f6d)`()` <a id="structFRHAPI__SessionTeam_1ad4c82562cd5a395efe7b2e54d8f97f6d"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

