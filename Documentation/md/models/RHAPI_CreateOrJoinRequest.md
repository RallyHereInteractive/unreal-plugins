# group `RHAPI_CreateOrJoinRequest` <a id="group__RHAPI__CreateOrJoinRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_CreateOrJoinRequest`](#structFRHAPI__CreateOrJoinRequest) | A request body for a player to join a session.

## struct `FRHAPI_CreateOrJoinRequest` <a id="structFRHAPI__CreateOrJoinRequest"></a>

```
struct FRHAPI_CreateOrJoinRequest
  : public FRHAPI_Model
```

A request body for a player to join a session.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`ClientVersion`](#structFRHAPI__CreateOrJoinRequest_1a9fe6d696d707ca8e0e5c2713e9a59ee5) | String representation of semver for client.
`public `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` `[`ClientSettings`](#structFRHAPI__CreateOrJoinRequest_1aa76e8adb41fd4462a6f96dff90213d2a) | Which input type and platform the client is using.
`public `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` `[`CrossplayPreferences_Optional`](#structFRHAPI__CreateOrJoinRequest_1ae1cf8611b7b6391f7ed46d79ceb0c4fa) | Client's desired crossplay settings to determine which other clients it can play with. If not defined, assumed to be as permissive as possible.
`public bool `[`CrossplayPreferences_IsSet`](#structFRHAPI__CreateOrJoinRequest_1ace0dda09c63eff0066ef37fc2fe66f90) | true if CrossplayPreferences_Optional has been set to a value
`public FString `[`SessionType`](#structFRHAPI__CreateOrJoinRequest_1ac2339ba0c03efd01c707b078da845cda) | Type of session client is creating or joining.
`public FString `[`RegionId_Optional`](#structFRHAPI__CreateOrJoinRequest_1a15cd29f37ee871cba1be3deb9e16f26f) | Preferred region for the instance and match to take place in.
`public bool `[`RegionId_IsSet`](#structFRHAPI__CreateOrJoinRequest_1a20aa30896105392bd7a1757c27ef4fb6) | true if RegionId_Optional has been set to a value
`public `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` `[`Player_Optional`](#structFRHAPI__CreateOrJoinRequest_1a608e52772ec0d3e177990ac2f34b47bd) | Optional information about player in order to join the new/existing session. V2 version of CreateOrJoin will require this.
`public bool `[`Player_IsSet`](#structFRHAPI__CreateOrJoinRequest_1a9ad67a1403586151831ec6d857acfc5d) | true if Player_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__CreateOrJoinRequest_1a71fde8d392c4f0af6bacef801552c09a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__CreateOrJoinRequest_1aca697c6ab0cf51cd69a5fb4b99dd0a93)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetClientVersion`](#structFRHAPI__CreateOrJoinRequest_1a2a0bfde7e47b8be26a9cc2ae4efd4e12)`()` | Gets the value of ClientVersion.
`public inline const FString & `[`GetClientVersion`](#structFRHAPI__CreateOrJoinRequest_1a20cc88e65f0c61d0f1add0ff14fbf68f)`() const` | Gets the value of ClientVersion.
`public inline void `[`SetClientVersion`](#structFRHAPI__CreateOrJoinRequest_1ada71e3fc5493ee1e5769fb35373111bb)`(FString NewValue)` | Sets the value of ClientVersion.
`public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateOrJoinRequest_1a049d06430b3b160c1fe1c12bdb022115)`()` | Gets the value of ClientSettings.
`public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateOrJoinRequest_1ad61b06a93f6519bc8daf0e962271aaaf)`() const` | Gets the value of ClientSettings.
`public inline void `[`SetClientSettings`](#structFRHAPI__CreateOrJoinRequest_1a6239a857df63ea661fdc2bf0fc9be7c1)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` NewValue)` | Sets the value of ClientSettings.
`public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1a5270de1fe88069255f35d642b3c24fb5)`()` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1afc75ac3be997c1ddd20daedb38373880)`() const` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1abc2d76686aeabd65ac7fa83b31265b14)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` | Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1a7b571632c5380077f063e86e12b99e04)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` | Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CreateOrJoinRequest_1a0bbc1ad71150e6e9cb70d6b571ee8572)`()` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CreateOrJoinRequest_1ac8d701cbc79a40d731193d549c9422a8)`() const` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1aa8fd891f5746724da9336dfb33ee1d37)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` NewValue)` | Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.
`public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1a70fc9ee692df502c55225790ebc0e170)`()` | Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.
`public inline FString & `[`GetSessionType`](#structFRHAPI__CreateOrJoinRequest_1a3d1fcb8709ecab86dbefb5bc15e0d765)`()` | Gets the value of SessionType.
`public inline const FString & `[`GetSessionType`](#structFRHAPI__CreateOrJoinRequest_1aea1b3469d84d803ca5d0f2b6a53cf934)`() const` | Gets the value of SessionType.
`public inline void `[`SetSessionType`](#structFRHAPI__CreateOrJoinRequest_1a736ae2b7956fa6524b7ef520599986b2)`(FString NewValue)` | Sets the value of SessionType.
`public inline FString & `[`GetRegionId`](#structFRHAPI__CreateOrJoinRequest_1a4020780ff301c28968911639d01ce274)`()` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__CreateOrJoinRequest_1af448083d16ef762dbbd6947e19bfe359)`() const` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__CreateOrJoinRequest_1a9b95a11bb3a078317bccb2a1ab409829)`(const FString & DefaultValue) const` | Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRegionId`](#structFRHAPI__CreateOrJoinRequest_1acee32c331957deb3f83530fd545bf1fd)`(FString & OutValue) const` | Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__CreateOrJoinRequest_1a2e801541333c59f985192a1b47adb556)`()` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__CreateOrJoinRequest_1a938b82f90787dc74a4c9edaaea80ac86)`() const` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRegionId`](#structFRHAPI__CreateOrJoinRequest_1a2d94aadec0efdf5a0085839c34a22790)`(FString NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.
`public inline void `[`ClearRegionId`](#structFRHAPI__CreateOrJoinRequest_1a24ad2ef9681bc5fd6c0deef62ba7f281)`()` | Clears the value of RegionId_Optional and sets RegionId_IsSet to false.
`public inline `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & `[`GetPlayer`](#structFRHAPI__CreateOrJoinRequest_1a2bd467f40eb269bf40ce4c49cc902879)`()` | Gets the value of Player_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & `[`GetPlayer`](#structFRHAPI__CreateOrJoinRequest_1af5e533dafd22d712d8ee3cd5e8954768)`() const` | Gets the value of Player_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & `[`GetPlayer`](#structFRHAPI__CreateOrJoinRequest_1a62699c1b92d15d0a9bfbc8b803aad99b)`(const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & DefaultValue) const` | Gets the value of Player_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayer`](#structFRHAPI__CreateOrJoinRequest_1a4db162a6eefff961e430395c9fbbee21)`(`[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & OutValue) const` | Fills OutValue with the value of Player_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` * `[`GetPlayerOrNull`](#structFRHAPI__CreateOrJoinRequest_1ad905c068915da3cf833297f131c23485)`()` | Returns a pointer to Player_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` * `[`GetPlayerOrNull`](#structFRHAPI__CreateOrJoinRequest_1af1329c668db4e4ad390a92f49b854b8f)`() const` | Returns a pointer to Player_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayer`](#structFRHAPI__CreateOrJoinRequest_1aea6bf2b7e381cc0e2d0df3e4ab3ecca5)`(`[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` NewValue)` | Sets the value of Player_Optional and also sets Player_IsSet to true.
`public inline void `[`ClearPlayer`](#structFRHAPI__CreateOrJoinRequest_1a3714ab0adfecec9485860c63165f7977)`()` | Clears the value of Player_Optional and sets Player_IsSet to false.

### Members

#### `public FString `[`ClientVersion`](#structFRHAPI__CreateOrJoinRequest_1a9fe6d696d707ca8e0e5c2713e9a59ee5) <a id="structFRHAPI__CreateOrJoinRequest_1a9fe6d696d707ca8e0e5c2713e9a59ee5"></a>

String representation of semver for client.

#### `public `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` `[`ClientSettings`](#structFRHAPI__CreateOrJoinRequest_1aa76e8adb41fd4462a6f96dff90213d2a) <a id="structFRHAPI__CreateOrJoinRequest_1aa76e8adb41fd4462a6f96dff90213d2a"></a>

Which input type and platform the client is using.

#### `public `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` `[`CrossplayPreferences_Optional`](#structFRHAPI__CreateOrJoinRequest_1ae1cf8611b7b6391f7ed46d79ceb0c4fa) <a id="structFRHAPI__CreateOrJoinRequest_1ae1cf8611b7b6391f7ed46d79ceb0c4fa"></a>

Client's desired crossplay settings to determine which other clients it can play with. If not defined, assumed to be as permissive as possible.

#### `public bool `[`CrossplayPreferences_IsSet`](#structFRHAPI__CreateOrJoinRequest_1ace0dda09c63eff0066ef37fc2fe66f90) <a id="structFRHAPI__CreateOrJoinRequest_1ace0dda09c63eff0066ef37fc2fe66f90"></a>

true if CrossplayPreferences_Optional has been set to a value

#### `public FString `[`SessionType`](#structFRHAPI__CreateOrJoinRequest_1ac2339ba0c03efd01c707b078da845cda) <a id="structFRHAPI__CreateOrJoinRequest_1ac2339ba0c03efd01c707b078da845cda"></a>

Type of session client is creating or joining.

#### `public FString `[`RegionId_Optional`](#structFRHAPI__CreateOrJoinRequest_1a15cd29f37ee871cba1be3deb9e16f26f) <a id="structFRHAPI__CreateOrJoinRequest_1a15cd29f37ee871cba1be3deb9e16f26f"></a>

Preferred region for the instance and match to take place in.

#### `public bool `[`RegionId_IsSet`](#structFRHAPI__CreateOrJoinRequest_1a20aa30896105392bd7a1757c27ef4fb6) <a id="structFRHAPI__CreateOrJoinRequest_1a20aa30896105392bd7a1757c27ef4fb6"></a>

true if RegionId_Optional has been set to a value

#### `public `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` `[`Player_Optional`](#structFRHAPI__CreateOrJoinRequest_1a608e52772ec0d3e177990ac2f34b47bd) <a id="structFRHAPI__CreateOrJoinRequest_1a608e52772ec0d3e177990ac2f34b47bd"></a>

Optional information about player in order to join the new/existing session. V2 version of CreateOrJoin will require this.

#### `public bool `[`Player_IsSet`](#structFRHAPI__CreateOrJoinRequest_1a9ad67a1403586151831ec6d857acfc5d) <a id="structFRHAPI__CreateOrJoinRequest_1a9ad67a1403586151831ec6d857acfc5d"></a>

true if Player_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__CreateOrJoinRequest_1a71fde8d392c4f0af6bacef801552c09a)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__CreateOrJoinRequest_1a71fde8d392c4f0af6bacef801552c09a"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__CreateOrJoinRequest_1aca697c6ab0cf51cd69a5fb4b99dd0a93)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__CreateOrJoinRequest_1aca697c6ab0cf51cd69a5fb4b99dd0a93"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetClientVersion`](#structFRHAPI__CreateOrJoinRequest_1a2a0bfde7e47b8be26a9cc2ae4efd4e12)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a2a0bfde7e47b8be26a9cc2ae4efd4e12"></a>

Gets the value of ClientVersion.

#### `public inline const FString & `[`GetClientVersion`](#structFRHAPI__CreateOrJoinRequest_1a20cc88e65f0c61d0f1add0ff14fbf68f)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1a20cc88e65f0c61d0f1add0ff14fbf68f"></a>

Gets the value of ClientVersion.

#### `public inline void `[`SetClientVersion`](#structFRHAPI__CreateOrJoinRequest_1ada71e3fc5493ee1e5769fb35373111bb)`(FString NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1ada71e3fc5493ee1e5769fb35373111bb"></a>

Sets the value of ClientVersion.

#### `public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateOrJoinRequest_1a049d06430b3b160c1fe1c12bdb022115)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a049d06430b3b160c1fe1c12bdb022115"></a>

Gets the value of ClientSettings.

#### `public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateOrJoinRequest_1ad61b06a93f6519bc8daf0e962271aaaf)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1ad61b06a93f6519bc8daf0e962271aaaf"></a>

Gets the value of ClientSettings.

#### `public inline void `[`SetClientSettings`](#structFRHAPI__CreateOrJoinRequest_1a6239a857df63ea661fdc2bf0fc9be7c1)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1a6239a857df63ea661fdc2bf0fc9be7c1"></a>

Sets the value of ClientSettings.

#### `public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1a5270de1fe88069255f35d642b3c24fb5)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a5270de1fe88069255f35d642b3c24fb5"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1afc75ac3be997c1ddd20daedb38373880)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1afc75ac3be997c1ddd20daedb38373880"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1abc2d76686aeabd65ac7fa83b31265b14)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` <a id="structFRHAPI__CreateOrJoinRequest_1abc2d76686aeabd65ac7fa83b31265b14"></a>

Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1a7b571632c5380077f063e86e12b99e04)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` <a id="structFRHAPI__CreateOrJoinRequest_1a7b571632c5380077f063e86e12b99e04"></a>

Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CreateOrJoinRequest_1a0bbc1ad71150e6e9cb70d6b571ee8572)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a0bbc1ad71150e6e9cb70d6b571ee8572"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CreateOrJoinRequest_1ac8d701cbc79a40d731193d549c9422a8)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1ac8d701cbc79a40d731193d549c9422a8"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1aa8fd891f5746724da9336dfb33ee1d37)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1aa8fd891f5746724da9336dfb33ee1d37"></a>

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.

#### `public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1a70fc9ee692df502c55225790ebc0e170)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a70fc9ee692df502c55225790ebc0e170"></a>

Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.

#### `public inline FString & `[`GetSessionType`](#structFRHAPI__CreateOrJoinRequest_1a3d1fcb8709ecab86dbefb5bc15e0d765)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a3d1fcb8709ecab86dbefb5bc15e0d765"></a>

Gets the value of SessionType.

#### `public inline const FString & `[`GetSessionType`](#structFRHAPI__CreateOrJoinRequest_1aea1b3469d84d803ca5d0f2b6a53cf934)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1aea1b3469d84d803ca5d0f2b6a53cf934"></a>

Gets the value of SessionType.

#### `public inline void `[`SetSessionType`](#structFRHAPI__CreateOrJoinRequest_1a736ae2b7956fa6524b7ef520599986b2)`(FString NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1a736ae2b7956fa6524b7ef520599986b2"></a>

Sets the value of SessionType.

#### `public inline FString & `[`GetRegionId`](#structFRHAPI__CreateOrJoinRequest_1a4020780ff301c28968911639d01ce274)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a4020780ff301c28968911639d01ce274"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__CreateOrJoinRequest_1af448083d16ef762dbbd6947e19bfe359)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1af448083d16ef762dbbd6947e19bfe359"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__CreateOrJoinRequest_1a9b95a11bb3a078317bccb2a1ab409829)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateOrJoinRequest_1a9b95a11bb3a078317bccb2a1ab409829"></a>

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRegionId`](#structFRHAPI__CreateOrJoinRequest_1acee32c331957deb3f83530fd545bf1fd)`(FString & OutValue) const` <a id="structFRHAPI__CreateOrJoinRequest_1acee32c331957deb3f83530fd545bf1fd"></a>

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__CreateOrJoinRequest_1a2e801541333c59f985192a1b47adb556)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a2e801541333c59f985192a1b47adb556"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__CreateOrJoinRequest_1a938b82f90787dc74a4c9edaaea80ac86)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1a938b82f90787dc74a4c9edaaea80ac86"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRegionId`](#structFRHAPI__CreateOrJoinRequest_1a2d94aadec0efdf5a0085839c34a22790)`(FString NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1a2d94aadec0efdf5a0085839c34a22790"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.

#### `public inline void `[`ClearRegionId`](#structFRHAPI__CreateOrJoinRequest_1a24ad2ef9681bc5fd6c0deef62ba7f281)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a24ad2ef9681bc5fd6c0deef62ba7f281"></a>

Clears the value of RegionId_Optional and sets RegionId_IsSet to false.

#### `public inline `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & `[`GetPlayer`](#structFRHAPI__CreateOrJoinRequest_1a2bd467f40eb269bf40ce4c49cc902879)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a2bd467f40eb269bf40ce4c49cc902879"></a>

Gets the value of Player_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & `[`GetPlayer`](#structFRHAPI__CreateOrJoinRequest_1af5e533dafd22d712d8ee3cd5e8954768)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1af5e533dafd22d712d8ee3cd5e8954768"></a>

Gets the value of Player_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & `[`GetPlayer`](#structFRHAPI__CreateOrJoinRequest_1a62699c1b92d15d0a9bfbc8b803aad99b)`(const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & DefaultValue) const` <a id="structFRHAPI__CreateOrJoinRequest_1a62699c1b92d15d0a9bfbc8b803aad99b"></a>

Gets the value of Player_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayer`](#structFRHAPI__CreateOrJoinRequest_1a4db162a6eefff961e430395c9fbbee21)`(`[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & OutValue) const` <a id="structFRHAPI__CreateOrJoinRequest_1a4db162a6eefff961e430395c9fbbee21"></a>

Fills OutValue with the value of Player_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` * `[`GetPlayerOrNull`](#structFRHAPI__CreateOrJoinRequest_1ad905c068915da3cf833297f131c23485)`()` <a id="structFRHAPI__CreateOrJoinRequest_1ad905c068915da3cf833297f131c23485"></a>

Returns a pointer to Player_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` * `[`GetPlayerOrNull`](#structFRHAPI__CreateOrJoinRequest_1af1329c668db4e4ad390a92f49b854b8f)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1af1329c668db4e4ad390a92f49b854b8f"></a>

Returns a pointer to Player_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayer`](#structFRHAPI__CreateOrJoinRequest_1aea6bf2b7e381cc0e2d0df3e4ab3ecca5)`(`[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1aea6bf2b7e381cc0e2d0df3e4ab3ecca5"></a>

Sets the value of Player_Optional and also sets Player_IsSet to true.

#### `public inline void `[`ClearPlayer`](#structFRHAPI__CreateOrJoinRequest_1a3714ab0adfecec9485860c63165f7977)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a3714ab0adfecec9485860c63165f7977"></a>

Clears the value of Player_Optional and sets Player_IsSet to false.

