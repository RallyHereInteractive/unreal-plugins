# RHAPI_SessionTeam <a id="group__RHAPI__SessionTeam"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > `[`Players`](#structFRHAPI__SessionTeam_1a5b51da5e82a822358321d315683a5cdd) | Players currently on this team.
`public int32 `[`MaxSize`](#structFRHAPI__SessionTeam_1a577fd2257686ecc6dc4c46a9405511e8) | Maximum number of players allowed on this team.
`public int32 `[`TeamId_Optional`](#structFRHAPI__SessionTeam_1ab5fa3e595f1d211138a8e632dcb0334a) | Which team this is.
`public bool `[`TeamId_IsSet`](#structFRHAPI__SessionTeam_1ae4c4a101fbe2d983f2bf0f949c0ce907) | true if TeamId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SessionTeam_1aabef716c3bdd58b733abaa4c5d57f078)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionTeam_1a3df39da3770789446f398baa65d8e27c)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & `[`GetPlayers`](#structFRHAPI__SessionTeam_1acdfcc94db5681eaf5fa045432c588573)`()` | Gets the value of Players.
`public inline const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & `[`GetPlayers`](#structFRHAPI__SessionTeam_1acb0cd7ba92352cd5b4ae7ca0314f671d)`() const` | Gets the value of Players.
`public inline void `[`SetPlayers`](#structFRHAPI__SessionTeam_1af97c4d69d4fb1bec131b01fc63dd2109)`(TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > NewValue)` | Sets the value of Players.
`public inline int32 & `[`GetMaxSize`](#structFRHAPI__SessionTeam_1a71ff5d7af75e48520e8f47b8aacbe947)`()` | Gets the value of MaxSize.
`public inline const int32 & `[`GetMaxSize`](#structFRHAPI__SessionTeam_1a75da68e7263658fc93a73ac56c2259f3)`() const` | Gets the value of MaxSize.
`public inline void `[`SetMaxSize`](#structFRHAPI__SessionTeam_1afa8d647fe0f4d5aea5bcf0b871183736)`(int32 NewValue)` | Sets the value of MaxSize.
`public inline bool `[`IsMaxSizeDefaultValue`](#structFRHAPI__SessionTeam_1a72083742a8721aff02330441cadd3ffc)`() const` | Returns true if MaxSize matches the default value.
`public inline void `[`SetMaxSizeToDefault`](#structFRHAPI__SessionTeam_1a7f2f5050523291724e4828ee7e2ea124)`()` | Sets the value of MaxSize to its default
`public inline int32 & `[`GetTeamId`](#structFRHAPI__SessionTeam_1a132bf71fafe46213fc1b3db6fd3b48c5)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__SessionTeam_1abfa3e35e16044b51fba75efbcd668b22)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__SessionTeam_1a7cc916b8119b3b14160c09f7433345af)`(const int32 & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTeamId`](#structFRHAPI__SessionTeam_1a1598611301d6e329811a267ca9ee0207)`(int32 & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionTeam_1ad922c55d5071391ab3ce1fabea0cd485)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionTeam_1a7564274f77f03d6cb1a09c64e28ff043)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTeamId`](#structFRHAPI__SessionTeam_1aa050577a2c1ac2e4dd5d3e6be5f96792)`(int32 NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline void `[`ClearTeamId`](#structFRHAPI__SessionTeam_1ad51e3f0df9a45dd7997055829e7d6dc9)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__SessionTeam_1aaa6ae7a43161fbdcbd2e18749910e3f7)`() const` | Returns true if TeamId_Optional is set and matches the default value.
`public inline void `[`SetTeamIdToDefault`](#structFRHAPI__SessionTeam_1a95018efc1589857239b3f7e5f4cb6722)`()` | Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.

#### Members

#### `public TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > `[`Players`](#structFRHAPI__SessionTeam_1a5b51da5e82a822358321d315683a5cdd) <a id="structFRHAPI__SessionTeam_1a5b51da5e82a822358321d315683a5cdd"></a>

Players currently on this team.

<br>
#### `public int32 `[`MaxSize`](#structFRHAPI__SessionTeam_1a577fd2257686ecc6dc4c46a9405511e8) <a id="structFRHAPI__SessionTeam_1a577fd2257686ecc6dc4c46a9405511e8"></a>

Maximum number of players allowed on this team.

<br>
#### `public int32 `[`TeamId_Optional`](#structFRHAPI__SessionTeam_1ab5fa3e595f1d211138a8e632dcb0334a) <a id="structFRHAPI__SessionTeam_1ab5fa3e595f1d211138a8e632dcb0334a"></a>

Which team this is.

<br>
#### `public bool `[`TeamId_IsSet`](#structFRHAPI__SessionTeam_1ae4c4a101fbe2d983f2bf0f949c0ce907) <a id="structFRHAPI__SessionTeam_1ae4c4a101fbe2d983f2bf0f949c0ce907"></a>

true if TeamId_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionTeam_1aabef716c3bdd58b733abaa4c5d57f078)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionTeam_1aabef716c3bdd58b733abaa4c5d57f078"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionTeam_1a3df39da3770789446f398baa65d8e27c)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__SessionTeam_1a3df39da3770789446f398baa65d8e27c"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & `[`GetPlayers`](#structFRHAPI__SessionTeam_1acdfcc94db5681eaf5fa045432c588573)`()` <a id="structFRHAPI__SessionTeam_1acdfcc94db5681eaf5fa045432c588573"></a>

Gets the value of Players.

<br>
#### `public inline const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & `[`GetPlayers`](#structFRHAPI__SessionTeam_1acb0cd7ba92352cd5b4ae7ca0314f671d)`() const` <a id="structFRHAPI__SessionTeam_1acb0cd7ba92352cd5b4ae7ca0314f671d"></a>

Gets the value of Players.

<br>
#### `public inline void `[`SetPlayers`](#structFRHAPI__SessionTeam_1af97c4d69d4fb1bec131b01fc63dd2109)`(TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > NewValue)` <a id="structFRHAPI__SessionTeam_1af97c4d69d4fb1bec131b01fc63dd2109"></a>

Sets the value of Players.

<br>
#### `public inline int32 & `[`GetMaxSize`](#structFRHAPI__SessionTeam_1a71ff5d7af75e48520e8f47b8aacbe947)`()` <a id="structFRHAPI__SessionTeam_1a71ff5d7af75e48520e8f47b8aacbe947"></a>

Gets the value of MaxSize.

<br>
#### `public inline const int32 & `[`GetMaxSize`](#structFRHAPI__SessionTeam_1a75da68e7263658fc93a73ac56c2259f3)`() const` <a id="structFRHAPI__SessionTeam_1a75da68e7263658fc93a73ac56c2259f3"></a>

Gets the value of MaxSize.

<br>
#### `public inline void `[`SetMaxSize`](#structFRHAPI__SessionTeam_1afa8d647fe0f4d5aea5bcf0b871183736)`(int32 NewValue)` <a id="structFRHAPI__SessionTeam_1afa8d647fe0f4d5aea5bcf0b871183736"></a>

Sets the value of MaxSize.

<br>
#### `public inline bool `[`IsMaxSizeDefaultValue`](#structFRHAPI__SessionTeam_1a72083742a8721aff02330441cadd3ffc)`() const` <a id="structFRHAPI__SessionTeam_1a72083742a8721aff02330441cadd3ffc"></a>

Returns true if MaxSize matches the default value.

<br>
#### `public inline void `[`SetMaxSizeToDefault`](#structFRHAPI__SessionTeam_1a7f2f5050523291724e4828ee7e2ea124)`()` <a id="structFRHAPI__SessionTeam_1a7f2f5050523291724e4828ee7e2ea124"></a>

Sets the value of MaxSize to its default

<br>
#### `public inline int32 & `[`GetTeamId`](#structFRHAPI__SessionTeam_1a132bf71fafe46213fc1b3db6fd3b48c5)`()` <a id="structFRHAPI__SessionTeam_1a132bf71fafe46213fc1b3db6fd3b48c5"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__SessionTeam_1abfa3e35e16044b51fba75efbcd668b22)`() const` <a id="structFRHAPI__SessionTeam_1abfa3e35e16044b51fba75efbcd668b22"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__SessionTeam_1a7cc916b8119b3b14160c09f7433345af)`(const int32 & DefaultValue) const` <a id="structFRHAPI__SessionTeam_1a7cc916b8119b3b14160c09f7433345af"></a>

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetTeamId`](#structFRHAPI__SessionTeam_1a1598611301d6e329811a267ca9ee0207)`(int32 & OutValue) const` <a id="structFRHAPI__SessionTeam_1a1598611301d6e329811a267ca9ee0207"></a>

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionTeam_1ad922c55d5071391ab3ce1fabea0cd485)`()` <a id="structFRHAPI__SessionTeam_1ad922c55d5071391ab3ce1fabea0cd485"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionTeam_1a7564274f77f03d6cb1a09c64e28ff043)`() const` <a id="structFRHAPI__SessionTeam_1a7564274f77f03d6cb1a09c64e28ff043"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetTeamId`](#structFRHAPI__SessionTeam_1aa050577a2c1ac2e4dd5d3e6be5f96792)`(int32 NewValue)` <a id="structFRHAPI__SessionTeam_1aa050577a2c1ac2e4dd5d3e6be5f96792"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.

<br>
#### `public inline void `[`ClearTeamId`](#structFRHAPI__SessionTeam_1ad51e3f0df9a45dd7997055829e7d6dc9)`()` <a id="structFRHAPI__SessionTeam_1ad51e3f0df9a45dd7997055829e7d6dc9"></a>

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.

<br>
#### `public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__SessionTeam_1aaa6ae7a43161fbdcbd2e18749910e3f7)`() const` <a id="structFRHAPI__SessionTeam_1aaa6ae7a43161fbdcbd2e18749910e3f7"></a>

Returns true if TeamId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetTeamIdToDefault`](#structFRHAPI__SessionTeam_1a95018efc1589857239b3f7e5f4cb6722)`()` <a id="structFRHAPI__SessionTeam_1a95018efc1589857239b3f7e5f4cb6722"></a>

Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.

<br>
