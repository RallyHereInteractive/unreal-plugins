---
title: RHAPI_SessionJoinability
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SessionJoinability`](#structFRHAPI__SessionJoinability) | 

## struct `FRHAPI_SessionJoinability` <a id="structFRHAPI__SessionJoinability"></a>

```
struct FRHAPI_SessionJoinability
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public bool `[`Open_Optional`](#structFRHAPI__SessionJoinability_1a1e453da76b6e515cb3624d711bdd0d7c) | All players can join without an invite. If enabled, it overwrites other permissions.
`public bool `[`Open_IsSet`](#structFRHAPI__SessionJoinability_1ac2d56ab51817c6f34ed6ceb43e522950) | true if Open_Optional has been set to a value
`public bool `[`Friends_Optional`](#structFRHAPI__SessionJoinability_1ad62e2bd224ede22e2a04a46e46cc0b22) | Friends can join this session without an invite.
`public bool `[`Friends_IsSet`](#structFRHAPI__SessionJoinability_1aedb037fb0c1911795a4f1b8999122620) | true if Friends_Optional has been set to a value
`public bool `[`Platform_Optional`](#structFRHAPI__SessionJoinability_1a81d8f29bfb85fdbe837973861626d325) | Players can join through platform sessions.
`public bool `[`Platform_IsSet`](#structFRHAPI__SessionJoinability_1a11a8ecbcf364bc01451d2899733e17b1) | true if Platform_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SessionJoinability_1a2c0ced76c112ebec1169fbf2f17c3d56)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionJoinability_1a76edf91f05e7ecce2feb16926d3f2f73)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE bool & `[`GetOpen`](#structFRHAPI__SessionJoinability_1aef62f7b2e82e3c6a7f5231d091f1fa9c)`()` | Gets the value of Open_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetOpen`](#structFRHAPI__SessionJoinability_1a75257dbbf0cf3238601f664b51132d31)`() const` | Gets the value of Open_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetOpen`](#structFRHAPI__SessionJoinability_1af5900d1546cba1a5626ffa66ee95976f)`(const bool & DefaultValue) const` | Gets the value of Open_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetOpen`](#structFRHAPI__SessionJoinability_1a71a1091123ba5517e49e401207128944)`(bool & OutValue) const` | Fills OutValue with the value of Open_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetOpenOrNull`](#structFRHAPI__SessionJoinability_1ad26e8dec48296f64356e45be786ebd18)`()` | Returns a pointer to Open_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetOpenOrNull`](#structFRHAPI__SessionJoinability_1adda661dd46d4e3fb90c41554549cf708)`() const` | Returns a pointer to Open_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetOpen`](#structFRHAPI__SessionJoinability_1ae48783bf18fdeae38f0137efc3148ee4)`(const bool & NewValue)` | Sets the value of Open_Optional and also sets Open_IsSet to true.
`public inline FORCEINLINE void `[`SetOpen`](#structFRHAPI__SessionJoinability_1afc37bbe4eda63e1f4bdc0cd34fffb819)`(bool && NewValue)` | Sets the value of Open_Optional and also sets Open_IsSet to true using move semantics.
`public inline void `[`ClearOpen`](#structFRHAPI__SessionJoinability_1af712cb75ea81053987e61e844246fa43)`()` | Clears the value of Open_Optional and sets Open_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_Open`](#structFRHAPI__SessionJoinability_1ac0c42092190b1715649ef3258bfbdecd)`()` | Returns the default value of Open.
`public inline FORCEINLINE bool & `[`GetFriends`](#structFRHAPI__SessionJoinability_1a78819ae541af564c9657e76a7d51c2d0)`()` | Gets the value of Friends_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetFriends`](#structFRHAPI__SessionJoinability_1ad6d577ba41c0c176a03706a4f4bf46b8)`() const` | Gets the value of Friends_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetFriends`](#structFRHAPI__SessionJoinability_1ab02241393c20cd34ea8eb5d294274482)`(const bool & DefaultValue) const` | Gets the value of Friends_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetFriends`](#structFRHAPI__SessionJoinability_1aad5c6a808f56fd57ad4886858fd4e919)`(bool & OutValue) const` | Fills OutValue with the value of Friends_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetFriendsOrNull`](#structFRHAPI__SessionJoinability_1a75af7ce9ff709f069120068a5cbf086e)`()` | Returns a pointer to Friends_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetFriendsOrNull`](#structFRHAPI__SessionJoinability_1a2591f733fbfa6f44d7914829afaed93b)`() const` | Returns a pointer to Friends_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetFriends`](#structFRHAPI__SessionJoinability_1addd6b022510d8f36c3e6b53032e22059)`(const bool & NewValue)` | Sets the value of Friends_Optional and also sets Friends_IsSet to true.
`public inline FORCEINLINE void `[`SetFriends`](#structFRHAPI__SessionJoinability_1a591bd9c0633d3a04c1ef46c9dd005577)`(bool && NewValue)` | Sets the value of Friends_Optional and also sets Friends_IsSet to true using move semantics.
`public inline void `[`ClearFriends`](#structFRHAPI__SessionJoinability_1a92ba81389db347b1068ddeeb0c23ce05)`()` | Clears the value of Friends_Optional and sets Friends_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_Friends`](#structFRHAPI__SessionJoinability_1a97c7cd61fd5e0aec9242c182f6ab95ea)`()` | Returns the default value of Friends.
`public inline FORCEINLINE bool & `[`GetPlatform`](#structFRHAPI__SessionJoinability_1ae6a41291f53b53ed3412e1316251a0c3)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetPlatform`](#structFRHAPI__SessionJoinability_1aa39ec5ae3df7c0d96b5f45a4e15b07a9)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetPlatform`](#structFRHAPI__SessionJoinability_1a0eddd6cb610260843f6eaad782a507d8)`(const bool & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatform`](#structFRHAPI__SessionJoinability_1a128ba97dc7d32b24905863d309efc252)`(bool & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetPlatformOrNull`](#structFRHAPI__SessionJoinability_1aacda53c356e8c398cd88d818b0593327)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetPlatformOrNull`](#structFRHAPI__SessionJoinability_1a0229b74467476c74edaa5647f4246ce4)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__SessionJoinability_1a548bdcd3c46cdd825e7c06e09c9a5766)`(const bool & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__SessionJoinability_1aecdad50eb384ad236fa893cca6bb8986)`(bool && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__SessionJoinability_1a5dbd4073a6aa8eaca5b3d6642656277b)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_Platform`](#structFRHAPI__SessionJoinability_1abef205e8ff98f5c9172263b3bf4de78f)`()` | Returns the default value of Platform.

### Members

#### `public bool `[`Open_Optional`](#structFRHAPI__SessionJoinability_1a1e453da76b6e515cb3624d711bdd0d7c) <a id="structFRHAPI__SessionJoinability_1a1e453da76b6e515cb3624d711bdd0d7c"></a>

All players can join without an invite. If enabled, it overwrites other permissions.

#### `public bool `[`Open_IsSet`](#structFRHAPI__SessionJoinability_1ac2d56ab51817c6f34ed6ceb43e522950) <a id="structFRHAPI__SessionJoinability_1ac2d56ab51817c6f34ed6ceb43e522950"></a>

true if Open_Optional has been set to a value

#### `public bool `[`Friends_Optional`](#structFRHAPI__SessionJoinability_1ad62e2bd224ede22e2a04a46e46cc0b22) <a id="structFRHAPI__SessionJoinability_1ad62e2bd224ede22e2a04a46e46cc0b22"></a>

Friends can join this session without an invite.

#### `public bool `[`Friends_IsSet`](#structFRHAPI__SessionJoinability_1aedb037fb0c1911795a4f1b8999122620) <a id="structFRHAPI__SessionJoinability_1aedb037fb0c1911795a4f1b8999122620"></a>

true if Friends_Optional has been set to a value

#### `public bool `[`Platform_Optional`](#structFRHAPI__SessionJoinability_1a81d8f29bfb85fdbe837973861626d325) <a id="structFRHAPI__SessionJoinability_1a81d8f29bfb85fdbe837973861626d325"></a>

Players can join through platform sessions.

#### `public bool `[`Platform_IsSet`](#structFRHAPI__SessionJoinability_1a11a8ecbcf364bc01451d2899733e17b1) <a id="structFRHAPI__SessionJoinability_1a11a8ecbcf364bc01451d2899733e17b1"></a>

true if Platform_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionJoinability_1a2c0ced76c112ebec1169fbf2f17c3d56)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionJoinability_1a2c0ced76c112ebec1169fbf2f17c3d56"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionJoinability_1a76edf91f05e7ecce2feb16926d3f2f73)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__SessionJoinability_1a76edf91f05e7ecce2feb16926d3f2f73"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE bool & `[`GetOpen`](#structFRHAPI__SessionJoinability_1aef62f7b2e82e3c6a7f5231d091f1fa9c)`()` <a id="structFRHAPI__SessionJoinability_1aef62f7b2e82e3c6a7f5231d091f1fa9c"></a>

Gets the value of Open_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetOpen`](#structFRHAPI__SessionJoinability_1a75257dbbf0cf3238601f664b51132d31)`() const` <a id="structFRHAPI__SessionJoinability_1a75257dbbf0cf3238601f664b51132d31"></a>

Gets the value of Open_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetOpen`](#structFRHAPI__SessionJoinability_1af5900d1546cba1a5626ffa66ee95976f)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionJoinability_1af5900d1546cba1a5626ffa66ee95976f"></a>

Gets the value of Open_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetOpen`](#structFRHAPI__SessionJoinability_1a71a1091123ba5517e49e401207128944)`(bool & OutValue) const` <a id="structFRHAPI__SessionJoinability_1a71a1091123ba5517e49e401207128944"></a>

Fills OutValue with the value of Open_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetOpenOrNull`](#structFRHAPI__SessionJoinability_1ad26e8dec48296f64356e45be786ebd18)`()` <a id="structFRHAPI__SessionJoinability_1ad26e8dec48296f64356e45be786ebd18"></a>

Returns a pointer to Open_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetOpenOrNull`](#structFRHAPI__SessionJoinability_1adda661dd46d4e3fb90c41554549cf708)`() const` <a id="structFRHAPI__SessionJoinability_1adda661dd46d4e3fb90c41554549cf708"></a>

Returns a pointer to Open_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetOpen`](#structFRHAPI__SessionJoinability_1ae48783bf18fdeae38f0137efc3148ee4)`(const bool & NewValue)` <a id="structFRHAPI__SessionJoinability_1ae48783bf18fdeae38f0137efc3148ee4"></a>

Sets the value of Open_Optional and also sets Open_IsSet to true.

#### `public inline FORCEINLINE void `[`SetOpen`](#structFRHAPI__SessionJoinability_1afc37bbe4eda63e1f4bdc0cd34fffb819)`(bool && NewValue)` <a id="structFRHAPI__SessionJoinability_1afc37bbe4eda63e1f4bdc0cd34fffb819"></a>

Sets the value of Open_Optional and also sets Open_IsSet to true using move semantics.

#### `public inline void `[`ClearOpen`](#structFRHAPI__SessionJoinability_1af712cb75ea81053987e61e844246fa43)`()` <a id="structFRHAPI__SessionJoinability_1af712cb75ea81053987e61e844246fa43"></a>

Clears the value of Open_Optional and sets Open_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_Open`](#structFRHAPI__SessionJoinability_1ac0c42092190b1715649ef3258bfbdecd)`()` <a id="structFRHAPI__SessionJoinability_1ac0c42092190b1715649ef3258bfbdecd"></a>

Returns the default value of Open.

#### `public inline FORCEINLINE bool & `[`GetFriends`](#structFRHAPI__SessionJoinability_1a78819ae541af564c9657e76a7d51c2d0)`()` <a id="structFRHAPI__SessionJoinability_1a78819ae541af564c9657e76a7d51c2d0"></a>

Gets the value of Friends_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetFriends`](#structFRHAPI__SessionJoinability_1ad6d577ba41c0c176a03706a4f4bf46b8)`() const` <a id="structFRHAPI__SessionJoinability_1ad6d577ba41c0c176a03706a4f4bf46b8"></a>

Gets the value of Friends_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetFriends`](#structFRHAPI__SessionJoinability_1ab02241393c20cd34ea8eb5d294274482)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionJoinability_1ab02241393c20cd34ea8eb5d294274482"></a>

Gets the value of Friends_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetFriends`](#structFRHAPI__SessionJoinability_1aad5c6a808f56fd57ad4886858fd4e919)`(bool & OutValue) const` <a id="structFRHAPI__SessionJoinability_1aad5c6a808f56fd57ad4886858fd4e919"></a>

Fills OutValue with the value of Friends_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetFriendsOrNull`](#structFRHAPI__SessionJoinability_1a75af7ce9ff709f069120068a5cbf086e)`()` <a id="structFRHAPI__SessionJoinability_1a75af7ce9ff709f069120068a5cbf086e"></a>

Returns a pointer to Friends_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetFriendsOrNull`](#structFRHAPI__SessionJoinability_1a2591f733fbfa6f44d7914829afaed93b)`() const` <a id="structFRHAPI__SessionJoinability_1a2591f733fbfa6f44d7914829afaed93b"></a>

Returns a pointer to Friends_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetFriends`](#structFRHAPI__SessionJoinability_1addd6b022510d8f36c3e6b53032e22059)`(const bool & NewValue)` <a id="structFRHAPI__SessionJoinability_1addd6b022510d8f36c3e6b53032e22059"></a>

Sets the value of Friends_Optional and also sets Friends_IsSet to true.

#### `public inline FORCEINLINE void `[`SetFriends`](#structFRHAPI__SessionJoinability_1a591bd9c0633d3a04c1ef46c9dd005577)`(bool && NewValue)` <a id="structFRHAPI__SessionJoinability_1a591bd9c0633d3a04c1ef46c9dd005577"></a>

Sets the value of Friends_Optional and also sets Friends_IsSet to true using move semantics.

#### `public inline void `[`ClearFriends`](#structFRHAPI__SessionJoinability_1a92ba81389db347b1068ddeeb0c23ce05)`()` <a id="structFRHAPI__SessionJoinability_1a92ba81389db347b1068ddeeb0c23ce05"></a>

Clears the value of Friends_Optional and sets Friends_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_Friends`](#structFRHAPI__SessionJoinability_1a97c7cd61fd5e0aec9242c182f6ab95ea)`()` <a id="structFRHAPI__SessionJoinability_1a97c7cd61fd5e0aec9242c182f6ab95ea"></a>

Returns the default value of Friends.

#### `public inline FORCEINLINE bool & `[`GetPlatform`](#structFRHAPI__SessionJoinability_1ae6a41291f53b53ed3412e1316251a0c3)`()` <a id="structFRHAPI__SessionJoinability_1ae6a41291f53b53ed3412e1316251a0c3"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetPlatform`](#structFRHAPI__SessionJoinability_1aa39ec5ae3df7c0d96b5f45a4e15b07a9)`() const` <a id="structFRHAPI__SessionJoinability_1aa39ec5ae3df7c0d96b5f45a4e15b07a9"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetPlatform`](#structFRHAPI__SessionJoinability_1a0eddd6cb610260843f6eaad782a507d8)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionJoinability_1a0eddd6cb610260843f6eaad782a507d8"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatform`](#structFRHAPI__SessionJoinability_1a128ba97dc7d32b24905863d309efc252)`(bool & OutValue) const` <a id="structFRHAPI__SessionJoinability_1a128ba97dc7d32b24905863d309efc252"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetPlatformOrNull`](#structFRHAPI__SessionJoinability_1aacda53c356e8c398cd88d818b0593327)`()` <a id="structFRHAPI__SessionJoinability_1aacda53c356e8c398cd88d818b0593327"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetPlatformOrNull`](#structFRHAPI__SessionJoinability_1a0229b74467476c74edaa5647f4246ce4)`() const` <a id="structFRHAPI__SessionJoinability_1a0229b74467476c74edaa5647f4246ce4"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__SessionJoinability_1a548bdcd3c46cdd825e7c06e09c9a5766)`(const bool & NewValue)` <a id="structFRHAPI__SessionJoinability_1a548bdcd3c46cdd825e7c06e09c9a5766"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__SessionJoinability_1aecdad50eb384ad236fa893cca6bb8986)`(bool && NewValue)` <a id="structFRHAPI__SessionJoinability_1aecdad50eb384ad236fa893cca6bb8986"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__SessionJoinability_1a5dbd4073a6aa8eaca5b3d6642656277b)`()` <a id="structFRHAPI__SessionJoinability_1a5dbd4073a6aa8eaca5b3d6642656277b"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_Platform`](#structFRHAPI__SessionJoinability_1abef205e8ff98f5c9172263b3bf4de78f)`()` <a id="structFRHAPI__SessionJoinability_1abef205e8ff98f5c9172263b3bf4de78f"></a>

Returns the default value of Platform.

