# group `RHAPI_SessionTeam` <a id="group__RHAPI__SessionTeam"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SessionTeam`](#structFRHAPI__SessionTeam) | A team of SessionPlayers in a session.

---
title: FRHAPI_SessionTeam
---

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
`public virtual void `[`WriteJson`](#structFRHAPI__SessionTeam_1a05c63b8d20012c14d460dd5f320782dc)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & `[`GetPlayers`](#structFRHAPI__SessionTeam_1acdfcc94db5681eaf5fa045432c588573)`()` | Gets the value of Players.
`public inline const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & `[`GetPlayers`](#structFRHAPI__SessionTeam_1acb0cd7ba92352cd5b4ae7ca0314f671d)`() const` | Gets the value of Players.
`public inline void `[`SetPlayers`](#structFRHAPI__SessionTeam_1ae75c90071014f737afd0e9044bc22ae0)`(const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & NewValue)` | Sets the value of Players.
`public inline void `[`SetPlayers`](#structFRHAPI__SessionTeam_1a131a3d16221c74c3239f312bb2e83ecf)`(TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > && NewValue)` | Sets the value of Players using move semantics.
`public inline int32 & `[`GetMaxSize`](#structFRHAPI__SessionTeam_1a71ff5d7af75e48520e8f47b8aacbe947)`()` | Gets the value of MaxSize.
`public inline const int32 & `[`GetMaxSize`](#structFRHAPI__SessionTeam_1a75da68e7263658fc93a73ac56c2259f3)`() const` | Gets the value of MaxSize.
`public inline void `[`SetMaxSize`](#structFRHAPI__SessionTeam_1a4432c4e95637ef5994f113620449210e)`(const int32 & NewValue)` | Sets the value of MaxSize.
`public inline void `[`SetMaxSize`](#structFRHAPI__SessionTeam_1a6716f6291dc06ad50b54cd2f53a45722)`(int32 && NewValue)` | Sets the value of MaxSize using move semantics.
`public inline bool `[`IsMaxSizeDefaultValue`](#structFRHAPI__SessionTeam_1a72083742a8721aff02330441cadd3ffc)`() const` | Returns true if MaxSize matches the default value.
`public inline void `[`SetMaxSizeToDefault`](#structFRHAPI__SessionTeam_1a7f2f5050523291724e4828ee7e2ea124)`()` | Sets the value of MaxSize to its default
`public inline int32 & `[`GetTeamId`](#structFRHAPI__SessionTeam_1a132bf71fafe46213fc1b3db6fd3b48c5)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__SessionTeam_1abfa3e35e16044b51fba75efbcd668b22)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__SessionTeam_1a7cc916b8119b3b14160c09f7433345af)`(const int32 & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTeamId`](#structFRHAPI__SessionTeam_1a1598611301d6e329811a267ca9ee0207)`(int32 & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionTeam_1ad922c55d5071391ab3ce1fabea0cd485)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionTeam_1a7564274f77f03d6cb1a09c64e28ff043)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTeamId`](#structFRHAPI__SessionTeam_1a326e92326dcbca27b460a38a49272399)`(const int32 & NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline void `[`SetTeamId`](#structFRHAPI__SessionTeam_1a0c57c270ffbf47575c2f0458d19bd295)`(int32 && NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.
`public inline void `[`ClearTeamId`](#structFRHAPI__SessionTeam_1ad51e3f0df9a45dd7997055829e7d6dc9)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline bool `[`IsTeamIdSet`](#structFRHAPI__SessionTeam_1a8cc1362b6e784ecbd314a028d320cab5)`() const` | Checks whether TeamId_Optional has been set.
`public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__SessionTeam_1aaa6ae7a43161fbdcbd2e18749910e3f7)`() const` | Returns true if TeamId_Optional is set and matches the default value.
`public inline void `[`SetTeamIdToDefault`](#structFRHAPI__SessionTeam_1a95018efc1589857239b3f7e5f4cb6722)`()` | Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.
`public inline TArray< FString > & `[`GetTicketIds`](#structFRHAPI__SessionTeam_1aa1df255d3ed2b426a7c3f52970394ae7)`()` | Gets the value of TicketIds_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__SessionTeam_1a8505932f9600ebd91da55cbb21cbd7ca)`() const` | Gets the value of TicketIds_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__SessionTeam_1af27348b7a267679440962603b54e556f)`(const TArray< FString > & DefaultValue) const` | Gets the value of TicketIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTicketIds`](#structFRHAPI__SessionTeam_1a2dd997b1048d613049db695242b4b3e0)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of TicketIds_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__SessionTeam_1aecb09a7916cb14b41f35d1708510a55b)`()` | Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__SessionTeam_1a7c8adca74f3231a7f6d329d07b06d160)`() const` | Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTicketIds`](#structFRHAPI__SessionTeam_1a63c427ef92e15db544ca7abb26d7b711)`(const TArray< FString > & NewValue)` | Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true.
`public inline void `[`SetTicketIds`](#structFRHAPI__SessionTeam_1a833d996b772586bfddd38d44fcbb30bd)`(TArray< FString > && NewValue)` | Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true using move semantics.
`public inline void `[`ClearTicketIds`](#structFRHAPI__SessionTeam_1a9cf26123ef9afeb98d1b6a7f326f01d5)`()` | Clears the value of TicketIds_Optional and sets TicketIds_IsSet to false.
`public inline bool `[`IsTicketIdsSet`](#structFRHAPI__SessionTeam_1a3ab441c303bbf23618ec5edb7fd7aa39)`() const` | Checks whether TicketIds_Optional has been set.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTeam_1ac64022271b2695624c6c7f085078ff4a)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTeam_1a7af0cf1bbe364e616f13b9cb1c18213e)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTeam_1a185fa20622601050d402661305ee29a9)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__SessionTeam_1aa01bbe405c02811ed587f7b305fde3ec)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionTeam_1a8c4d06e8074bfc8127823f518a9c1882)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionTeam_1aab019ec9d9c99c1ed156f3a7944773df)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__SessionTeam_1a1bb7a76c8fc67ffecc307683014784f3)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__SessionTeam_1a8051a1733d1567784c9b2bd4e31181dc)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__SessionTeam_1ad4c82562cd5a395efe7b2e54d8f97f6d)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__SessionTeam_1ad34d6eda45f054d128f7d6edc8dbb061)`() const` | Checks whether CustomData_Optional has been set.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionTeam_1a05c63b8d20012c14d460dd5f320782dc)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__SessionTeam_1a05c63b8d20012c14d460dd5f320782dc"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & `[`GetPlayers`](#structFRHAPI__SessionTeam_1acdfcc94db5681eaf5fa045432c588573)`()` <a id="structFRHAPI__SessionTeam_1acdfcc94db5681eaf5fa045432c588573"></a>

Gets the value of Players.

#### `public inline const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & `[`GetPlayers`](#structFRHAPI__SessionTeam_1acb0cd7ba92352cd5b4ae7ca0314f671d)`() const` <a id="structFRHAPI__SessionTeam_1acb0cd7ba92352cd5b4ae7ca0314f671d"></a>

Gets the value of Players.

#### `public inline void `[`SetPlayers`](#structFRHAPI__SessionTeam_1ae75c90071014f737afd0e9044bc22ae0)`(const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & NewValue)` <a id="structFRHAPI__SessionTeam_1ae75c90071014f737afd0e9044bc22ae0"></a>

Sets the value of Players.

#### `public inline void `[`SetPlayers`](#structFRHAPI__SessionTeam_1a131a3d16221c74c3239f312bb2e83ecf)`(TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > && NewValue)` <a id="structFRHAPI__SessionTeam_1a131a3d16221c74c3239f312bb2e83ecf"></a>

Sets the value of Players using move semantics.

#### `public inline int32 & `[`GetMaxSize`](#structFRHAPI__SessionTeam_1a71ff5d7af75e48520e8f47b8aacbe947)`()` <a id="structFRHAPI__SessionTeam_1a71ff5d7af75e48520e8f47b8aacbe947"></a>

Gets the value of MaxSize.

#### `public inline const int32 & `[`GetMaxSize`](#structFRHAPI__SessionTeam_1a75da68e7263658fc93a73ac56c2259f3)`() const` <a id="structFRHAPI__SessionTeam_1a75da68e7263658fc93a73ac56c2259f3"></a>

Gets the value of MaxSize.

#### `public inline void `[`SetMaxSize`](#structFRHAPI__SessionTeam_1a4432c4e95637ef5994f113620449210e)`(const int32 & NewValue)` <a id="structFRHAPI__SessionTeam_1a4432c4e95637ef5994f113620449210e"></a>

Sets the value of MaxSize.

#### `public inline void `[`SetMaxSize`](#structFRHAPI__SessionTeam_1a6716f6291dc06ad50b54cd2f53a45722)`(int32 && NewValue)` <a id="structFRHAPI__SessionTeam_1a6716f6291dc06ad50b54cd2f53a45722"></a>

Sets the value of MaxSize using move semantics.

#### `public inline bool `[`IsMaxSizeDefaultValue`](#structFRHAPI__SessionTeam_1a72083742a8721aff02330441cadd3ffc)`() const` <a id="structFRHAPI__SessionTeam_1a72083742a8721aff02330441cadd3ffc"></a>

Returns true if MaxSize matches the default value.

#### `public inline void `[`SetMaxSizeToDefault`](#structFRHAPI__SessionTeam_1a7f2f5050523291724e4828ee7e2ea124)`()` <a id="structFRHAPI__SessionTeam_1a7f2f5050523291724e4828ee7e2ea124"></a>

Sets the value of MaxSize to its default

#### `public inline int32 & `[`GetTeamId`](#structFRHAPI__SessionTeam_1a132bf71fafe46213fc1b3db6fd3b48c5)`()` <a id="structFRHAPI__SessionTeam_1a132bf71fafe46213fc1b3db6fd3b48c5"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__SessionTeam_1abfa3e35e16044b51fba75efbcd668b22)`() const` <a id="structFRHAPI__SessionTeam_1abfa3e35e16044b51fba75efbcd668b22"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__SessionTeam_1a7cc916b8119b3b14160c09f7433345af)`(const int32 & DefaultValue) const` <a id="structFRHAPI__SessionTeam_1a7cc916b8119b3b14160c09f7433345af"></a>

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTeamId`](#structFRHAPI__SessionTeam_1a1598611301d6e329811a267ca9ee0207)`(int32 & OutValue) const` <a id="structFRHAPI__SessionTeam_1a1598611301d6e329811a267ca9ee0207"></a>

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionTeam_1ad922c55d5071391ab3ce1fabea0cd485)`()` <a id="structFRHAPI__SessionTeam_1ad922c55d5071391ab3ce1fabea0cd485"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionTeam_1a7564274f77f03d6cb1a09c64e28ff043)`() const` <a id="structFRHAPI__SessionTeam_1a7564274f77f03d6cb1a09c64e28ff043"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTeamId`](#structFRHAPI__SessionTeam_1a326e92326dcbca27b460a38a49272399)`(const int32 & NewValue)` <a id="structFRHAPI__SessionTeam_1a326e92326dcbca27b460a38a49272399"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.

#### `public inline void `[`SetTeamId`](#structFRHAPI__SessionTeam_1a0c57c270ffbf47575c2f0458d19bd295)`(int32 && NewValue)` <a id="structFRHAPI__SessionTeam_1a0c57c270ffbf47575c2f0458d19bd295"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.

#### `public inline void `[`ClearTeamId`](#structFRHAPI__SessionTeam_1ad51e3f0df9a45dd7997055829e7d6dc9)`()` <a id="structFRHAPI__SessionTeam_1ad51e3f0df9a45dd7997055829e7d6dc9"></a>

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.

#### `public inline bool `[`IsTeamIdSet`](#structFRHAPI__SessionTeam_1a8cc1362b6e784ecbd314a028d320cab5)`() const` <a id="structFRHAPI__SessionTeam_1a8cc1362b6e784ecbd314a028d320cab5"></a>

Checks whether TeamId_Optional has been set.

#### `public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__SessionTeam_1aaa6ae7a43161fbdcbd2e18749910e3f7)`() const` <a id="structFRHAPI__SessionTeam_1aaa6ae7a43161fbdcbd2e18749910e3f7"></a>

Returns true if TeamId_Optional is set and matches the default value.

#### `public inline void `[`SetTeamIdToDefault`](#structFRHAPI__SessionTeam_1a95018efc1589857239b3f7e5f4cb6722)`()` <a id="structFRHAPI__SessionTeam_1a95018efc1589857239b3f7e5f4cb6722"></a>

Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.

#### `public inline TArray< FString > & `[`GetTicketIds`](#structFRHAPI__SessionTeam_1aa1df255d3ed2b426a7c3f52970394ae7)`()` <a id="structFRHAPI__SessionTeam_1aa1df255d3ed2b426a7c3f52970394ae7"></a>

Gets the value of TicketIds_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__SessionTeam_1a8505932f9600ebd91da55cbb21cbd7ca)`() const` <a id="structFRHAPI__SessionTeam_1a8505932f9600ebd91da55cbb21cbd7ca"></a>

Gets the value of TicketIds_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__SessionTeam_1af27348b7a267679440962603b54e556f)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__SessionTeam_1af27348b7a267679440962603b54e556f"></a>

Gets the value of TicketIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTicketIds`](#structFRHAPI__SessionTeam_1a2dd997b1048d613049db695242b4b3e0)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__SessionTeam_1a2dd997b1048d613049db695242b4b3e0"></a>

Fills OutValue with the value of TicketIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__SessionTeam_1aecb09a7916cb14b41f35d1708510a55b)`()` <a id="structFRHAPI__SessionTeam_1aecb09a7916cb14b41f35d1708510a55b"></a>

Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__SessionTeam_1a7c8adca74f3231a7f6d329d07b06d160)`() const` <a id="structFRHAPI__SessionTeam_1a7c8adca74f3231a7f6d329d07b06d160"></a>

Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTicketIds`](#structFRHAPI__SessionTeam_1a63c427ef92e15db544ca7abb26d7b711)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__SessionTeam_1a63c427ef92e15db544ca7abb26d7b711"></a>

Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true.

#### `public inline void `[`SetTicketIds`](#structFRHAPI__SessionTeam_1a833d996b772586bfddd38d44fcbb30bd)`(TArray< FString > && NewValue)` <a id="structFRHAPI__SessionTeam_1a833d996b772586bfddd38d44fcbb30bd"></a>

Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true using move semantics.

#### `public inline void `[`ClearTicketIds`](#structFRHAPI__SessionTeam_1a9cf26123ef9afeb98d1b6a7f326f01d5)`()` <a id="structFRHAPI__SessionTeam_1a9cf26123ef9afeb98d1b6a7f326f01d5"></a>

Clears the value of TicketIds_Optional and sets TicketIds_IsSet to false.

#### `public inline bool `[`IsTicketIdsSet`](#structFRHAPI__SessionTeam_1a3ab441c303bbf23618ec5edb7fd7aa39)`() const` <a id="structFRHAPI__SessionTeam_1a3ab441c303bbf23618ec5edb7fd7aa39"></a>

Checks whether TicketIds_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTeam_1ac64022271b2695624c6c7f085078ff4a)`()` <a id="structFRHAPI__SessionTeam_1ac64022271b2695624c6c7f085078ff4a"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTeam_1a7af0cf1bbe364e616f13b9cb1c18213e)`() const` <a id="structFRHAPI__SessionTeam_1a7af0cf1bbe364e616f13b9cb1c18213e"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTeam_1a185fa20622601050d402661305ee29a9)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SessionTeam_1a185fa20622601050d402661305ee29a9"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__SessionTeam_1aa01bbe405c02811ed587f7b305fde3ec)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SessionTeam_1aa01bbe405c02811ed587f7b305fde3ec"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionTeam_1a8c4d06e8074bfc8127823f518a9c1882)`()` <a id="structFRHAPI__SessionTeam_1a8c4d06e8074bfc8127823f518a9c1882"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionTeam_1aab019ec9d9c99c1ed156f3a7944773df)`() const` <a id="structFRHAPI__SessionTeam_1aab019ec9d9c99c1ed156f3a7944773df"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__SessionTeam_1a1bb7a76c8fc67ffecc307683014784f3)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__SessionTeam_1a1bb7a76c8fc67ffecc307683014784f3"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__SessionTeam_1a8051a1733d1567784c9b2bd4e31181dc)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__SessionTeam_1a8051a1733d1567784c9b2bd4e31181dc"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__SessionTeam_1ad4c82562cd5a395efe7b2e54d8f97f6d)`()` <a id="structFRHAPI__SessionTeam_1ad4c82562cd5a395efe7b2e54d8f97f6d"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__SessionTeam_1ad34d6eda45f054d128f7d6edc8dbb061)`() const` <a id="structFRHAPI__SessionTeam_1ad34d6eda45f054d128f7d6edc8dbb061"></a>

Checks whether CustomData_Optional has been set.

