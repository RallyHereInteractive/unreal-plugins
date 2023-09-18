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

#### Members

#### `public TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > `[`Players`](#structFRHAPI__SessionTeam_1a5b51da5e82a822358321d315683a5cdd) <a id="structFRHAPI__SessionTeam_1a5b51da5e82a822358321d315683a5cdd"></a>

Players currently on this team.

<br>
#### `public int32 `[`MaxSize`](#structFRHAPI__SessionTeam_1a577fd2257686ecc6dc4c46a9405511e8) <a id="structFRHAPI__SessionTeam_1a577fd2257686ecc6dc4c46a9405511e8"></a>

Maximum number of players allowed on this team.

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
