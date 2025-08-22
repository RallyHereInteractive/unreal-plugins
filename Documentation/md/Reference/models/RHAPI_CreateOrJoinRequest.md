---
title: RHAPI_CreateOrJoinRequest
---

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
`public `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` `[`ClientSettings`](#structFRHAPI__CreateOrJoinRequest_1aa76e8adb41fd4462a6f96dff90213d2a) | Which input type the client is using. Platform is now gotten from authorization claims, and will overwrite the platform passed here.
`public `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` `[`CrossplayPreferences_Optional`](#structFRHAPI__CreateOrJoinRequest_1ae1cf8611b7b6391f7ed46d79ceb0c4fa) | Client's desired crossplay settings to determine which other clients it can play with. If not defined, assumed to be as permissive as possible.
`public bool `[`CrossplayPreferences_IsSet`](#structFRHAPI__CreateOrJoinRequest_1ace0dda09c63eff0066ef37fc2fe66f90) | true if CrossplayPreferences_Optional has been set to a value
`public FString `[`SessionType`](#structFRHAPI__CreateOrJoinRequest_1ac2339ba0c03efd01c707b078da845cda) | Type of session client is creating or joining.
`public FString `[`Password_Optional`](#structFRHAPI__CreateOrJoinRequest_1ac8adb725d9c37795d87f836d97c3eea2) | Password to set on a session if a new one is created.
`public bool `[`Password_IsSet`](#structFRHAPI__CreateOrJoinRequest_1ac8887e986b6e32260d06a74c1fb7f2f1) | true if Password_Optional has been set to a value
`public FString `[`RegionId_Optional`](#structFRHAPI__CreateOrJoinRequest_1a15cd29f37ee871cba1be3deb9e16f26f) | Preferred region for the instance and match to take place in.
`public bool `[`RegionId_IsSet`](#structFRHAPI__CreateOrJoinRequest_1a20aa30896105392bd7a1757c27ef4fb6) | true if RegionId_Optional has been set to a value
`public `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` `[`Player_Optional`](#structFRHAPI__CreateOrJoinRequest_1a608e52772ec0d3e177990ac2f34b47bd) | Optional information about player in order to join the new/existing session. V2 version of CreateOrJoin will require this.
`public bool `[`Player_IsSet`](#structFRHAPI__CreateOrJoinRequest_1a9ad67a1403586151831ec6d857acfc5d) | true if Player_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__CreateOrJoinRequest_1a6aca639fd88b3a1b0b40ddc38ebfa6d4)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__CreateOrJoinRequest_1a29a712034027280e86cec2987897fa5d)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetClientVersion`](#structFRHAPI__CreateOrJoinRequest_1a2ead562ccbddda6ddc71ca85c00777b3)`()` | Gets the value of ClientVersion.
`public inline FORCEINLINE const FString & `[`GetClientVersion`](#structFRHAPI__CreateOrJoinRequest_1aef2e010de465eb103361d4e77df79276)`() const` | Gets the value of ClientVersion.
`public inline FORCEINLINE void `[`SetClientVersion`](#structFRHAPI__CreateOrJoinRequest_1a1684287037d1bdd471d76edbcd9b25b3)`(const FString & NewValue)` | Sets the value of ClientVersion.
`public inline FORCEINLINE void `[`SetClientVersion`](#structFRHAPI__CreateOrJoinRequest_1abb8264f98eb2739800479a4727e183f3)`(FString && NewValue)` | Sets the value of ClientVersion using move semantics.
`public inline FORCEINLINE `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateOrJoinRequest_1ae8bca0bc4e9fcc0d7a5e7f8969f2af1a)`()` | Gets the value of ClientSettings.
`public inline FORCEINLINE const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateOrJoinRequest_1a2e052dc3d131342f87c8097f77047c82)`() const` | Gets the value of ClientSettings.
`public inline FORCEINLINE void `[`SetClientSettings`](#structFRHAPI__CreateOrJoinRequest_1adcde54a198e1eabc60d2e7f318e46514)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & NewValue)` | Sets the value of ClientSettings.
`public inline FORCEINLINE void `[`SetClientSettings`](#structFRHAPI__CreateOrJoinRequest_1a20fd4628cea11a6f8aeca386d68c036a)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` && NewValue)` | Sets the value of ClientSettings using move semantics.
`public inline FORCEINLINE `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1af9324ad404cc8358e1ebf4bbf990cafe)`()` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1aeaeddf9bed652f6eaab1dcb96781862d)`() const` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1ae994219f1be00e98c14a88b08f80b2eb)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` | Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1a68fc3e948f4a1d2f1fb29d08a36f8e5f)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` | Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CreateOrJoinRequest_1adf235d4cabe9490ed72eaa76a1932f14)`()` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CreateOrJoinRequest_1a74576d062f1b4a1153ecb9bf32b1da10)`() const` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1a3247953d3c0cd3ae3baf2af8bad2cfda)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & NewValue)` | Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.
`public inline FORCEINLINE void `[`SetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1ad0ca4b457f4df11c6ffb53603a7f1a48)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` && NewValue)` | Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true using move semantics.
`public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1a70fc9ee692df502c55225790ebc0e170)`()` | Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.
`public inline FORCEINLINE FString & `[`GetSessionType`](#structFRHAPI__CreateOrJoinRequest_1a4394edb69b10b7069542809dafe1dc86)`()` | Gets the value of SessionType.
`public inline FORCEINLINE const FString & `[`GetSessionType`](#structFRHAPI__CreateOrJoinRequest_1a96569c2783747a714bda2b9edd17f734)`() const` | Gets the value of SessionType.
`public inline FORCEINLINE void `[`SetSessionType`](#structFRHAPI__CreateOrJoinRequest_1ad76cfd98a60b890f79d6a3adda8afe3e)`(const FString & NewValue)` | Sets the value of SessionType.
`public inline FORCEINLINE void `[`SetSessionType`](#structFRHAPI__CreateOrJoinRequest_1a78661f7e551f2af8d086cf74a468c63c)`(FString && NewValue)` | Sets the value of SessionType using move semantics.
`public inline FORCEINLINE FString & `[`GetPassword`](#structFRHAPI__CreateOrJoinRequest_1a3ef6028657b6437e23a22fa4973cc2fa)`()` | Gets the value of Password_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPassword`](#structFRHAPI__CreateOrJoinRequest_1aa690a650556f93d43cf3cb084e8942af)`() const` | Gets the value of Password_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPassword`](#structFRHAPI__CreateOrJoinRequest_1ae2b46ed38c6591f102d2e7ebbf90970b)`(const FString & DefaultValue) const` | Gets the value of Password_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPassword`](#structFRHAPI__CreateOrJoinRequest_1a2210766b11c4362cd2f188393671d804)`(FString & OutValue) const` | Fills OutValue with the value of Password_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPasswordOrNull`](#structFRHAPI__CreateOrJoinRequest_1ac236927b928f5f00b27defabfb43922f)`()` | Returns a pointer to Password_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPasswordOrNull`](#structFRHAPI__CreateOrJoinRequest_1a039afcb20e377814e1d5cae4c5625cdc)`() const` | Returns a pointer to Password_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPassword`](#structFRHAPI__CreateOrJoinRequest_1ad7262c6668b157f46b2ec83bb7158517)`(const FString & NewValue)` | Sets the value of Password_Optional and also sets Password_IsSet to true.
`public inline FORCEINLINE void `[`SetPassword`](#structFRHAPI__CreateOrJoinRequest_1a426894ad09015d12d1519885dd28a90d)`(FString && NewValue)` | Sets the value of Password_Optional and also sets Password_IsSet to true using move semantics.
`public inline void `[`ClearPassword`](#structFRHAPI__CreateOrJoinRequest_1ab87df60fb7763494f1b70d4e6d8bc94b)`()` | Clears the value of Password_Optional and sets Password_IsSet to false.
`public inline FORCEINLINE FString & `[`GetRegionId`](#structFRHAPI__CreateOrJoinRequest_1a006d00b99444ee8dc8e22254bae22519)`()` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__CreateOrJoinRequest_1a1b48312ae681bd657a5746d4e1a9c2e9)`() const` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__CreateOrJoinRequest_1a5d140921cd9d946f79a765197316b440)`(const FString & DefaultValue) const` | Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRegionId`](#structFRHAPI__CreateOrJoinRequest_1ad7603633d5a1568307fe26d3da5e6852)`(FString & OutValue) const` | Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRegionIdOrNull`](#structFRHAPI__CreateOrJoinRequest_1a594872ec5f29101f5dabd8cd6dce4989)`()` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRegionIdOrNull`](#structFRHAPI__CreateOrJoinRequest_1ad5f6141558a475b8a727358bcdc803ac)`() const` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__CreateOrJoinRequest_1aaded22ed9bd0d2b722b6f6cf124d4e8c)`(const FString & NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.
`public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__CreateOrJoinRequest_1a4ef374fe19bc3aa155b1bf7e864c791d)`(FString && NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.
`public inline void `[`ClearRegionId`](#structFRHAPI__CreateOrJoinRequest_1a24ad2ef9681bc5fd6c0deef62ba7f281)`()` | Clears the value of RegionId_Optional and sets RegionId_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & `[`GetPlayer`](#structFRHAPI__CreateOrJoinRequest_1a0cc1d9cdad34d7cd4936ff20117b64c6)`()` | Gets the value of Player_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & `[`GetPlayer`](#structFRHAPI__CreateOrJoinRequest_1a56515d135f30d81b45383ae357450916)`() const` | Gets the value of Player_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & `[`GetPlayer`](#structFRHAPI__CreateOrJoinRequest_1a09e3e475f923a51fe675734d1d3327d8)`(const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & DefaultValue) const` | Gets the value of Player_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayer`](#structFRHAPI__CreateOrJoinRequest_1acc54eacf1d400401733e67d57368e903)`(`[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & OutValue) const` | Fills OutValue with the value of Player_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` * `[`GetPlayerOrNull`](#structFRHAPI__CreateOrJoinRequest_1a492d34d54681411770d9191d23b5470a)`()` | Returns a pointer to Player_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` * `[`GetPlayerOrNull`](#structFRHAPI__CreateOrJoinRequest_1a9978aa476f3f066988124618d35f1d7c)`() const` | Returns a pointer to Player_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayer`](#structFRHAPI__CreateOrJoinRequest_1a42aa78ef535d68e548e9f8331e97d252)`(const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & NewValue)` | Sets the value of Player_Optional and also sets Player_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayer`](#structFRHAPI__CreateOrJoinRequest_1af15a7a2917032416a5f68c4e9b1b4ec0)`(`[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` && NewValue)` | Sets the value of Player_Optional and also sets Player_IsSet to true using move semantics.
`public inline void `[`ClearPlayer`](#structFRHAPI__CreateOrJoinRequest_1a3714ab0adfecec9485860c63165f7977)`()` | Clears the value of Player_Optional and sets Player_IsSet to false.

### Members

#### `public FString `[`ClientVersion`](#structFRHAPI__CreateOrJoinRequest_1a9fe6d696d707ca8e0e5c2713e9a59ee5) <a id="structFRHAPI__CreateOrJoinRequest_1a9fe6d696d707ca8e0e5c2713e9a59ee5"></a>

String representation of semver for client.

#### `public `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` `[`ClientSettings`](#structFRHAPI__CreateOrJoinRequest_1aa76e8adb41fd4462a6f96dff90213d2a) <a id="structFRHAPI__CreateOrJoinRequest_1aa76e8adb41fd4462a6f96dff90213d2a"></a>

Which input type the client is using. Platform is now gotten from authorization claims, and will overwrite the platform passed here.

#### `public `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` `[`CrossplayPreferences_Optional`](#structFRHAPI__CreateOrJoinRequest_1ae1cf8611b7b6391f7ed46d79ceb0c4fa) <a id="structFRHAPI__CreateOrJoinRequest_1ae1cf8611b7b6391f7ed46d79ceb0c4fa"></a>

Client's desired crossplay settings to determine which other clients it can play with. If not defined, assumed to be as permissive as possible.

#### `public bool `[`CrossplayPreferences_IsSet`](#structFRHAPI__CreateOrJoinRequest_1ace0dda09c63eff0066ef37fc2fe66f90) <a id="structFRHAPI__CreateOrJoinRequest_1ace0dda09c63eff0066ef37fc2fe66f90"></a>

true if CrossplayPreferences_Optional has been set to a value

#### `public FString `[`SessionType`](#structFRHAPI__CreateOrJoinRequest_1ac2339ba0c03efd01c707b078da845cda) <a id="structFRHAPI__CreateOrJoinRequest_1ac2339ba0c03efd01c707b078da845cda"></a>

Type of session client is creating or joining.

#### `public FString `[`Password_Optional`](#structFRHAPI__CreateOrJoinRequest_1ac8adb725d9c37795d87f836d97c3eea2) <a id="structFRHAPI__CreateOrJoinRequest_1ac8adb725d9c37795d87f836d97c3eea2"></a>

Password to set on a session if a new one is created.

#### `public bool `[`Password_IsSet`](#structFRHAPI__CreateOrJoinRequest_1ac8887e986b6e32260d06a74c1fb7f2f1) <a id="structFRHAPI__CreateOrJoinRequest_1ac8887e986b6e32260d06a74c1fb7f2f1"></a>

true if Password_Optional has been set to a value

#### `public FString `[`RegionId_Optional`](#structFRHAPI__CreateOrJoinRequest_1a15cd29f37ee871cba1be3deb9e16f26f) <a id="structFRHAPI__CreateOrJoinRequest_1a15cd29f37ee871cba1be3deb9e16f26f"></a>

Preferred region for the instance and match to take place in.

#### `public bool `[`RegionId_IsSet`](#structFRHAPI__CreateOrJoinRequest_1a20aa30896105392bd7a1757c27ef4fb6) <a id="structFRHAPI__CreateOrJoinRequest_1a20aa30896105392bd7a1757c27ef4fb6"></a>

true if RegionId_Optional has been set to a value

#### `public `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` `[`Player_Optional`](#structFRHAPI__CreateOrJoinRequest_1a608e52772ec0d3e177990ac2f34b47bd) <a id="structFRHAPI__CreateOrJoinRequest_1a608e52772ec0d3e177990ac2f34b47bd"></a>

Optional information about player in order to join the new/existing session. V2 version of CreateOrJoin will require this.

#### `public bool `[`Player_IsSet`](#structFRHAPI__CreateOrJoinRequest_1a9ad67a1403586151831ec6d857acfc5d) <a id="structFRHAPI__CreateOrJoinRequest_1a9ad67a1403586151831ec6d857acfc5d"></a>

true if Player_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__CreateOrJoinRequest_1a6aca639fd88b3a1b0b40ddc38ebfa6d4)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__CreateOrJoinRequest_1a6aca639fd88b3a1b0b40ddc38ebfa6d4"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__CreateOrJoinRequest_1a29a712034027280e86cec2987897fa5d)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__CreateOrJoinRequest_1a29a712034027280e86cec2987897fa5d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetClientVersion`](#structFRHAPI__CreateOrJoinRequest_1a2ead562ccbddda6ddc71ca85c00777b3)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a2ead562ccbddda6ddc71ca85c00777b3"></a>

Gets the value of ClientVersion.

#### `public inline FORCEINLINE const FString & `[`GetClientVersion`](#structFRHAPI__CreateOrJoinRequest_1aef2e010de465eb103361d4e77df79276)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1aef2e010de465eb103361d4e77df79276"></a>

Gets the value of ClientVersion.

#### `public inline FORCEINLINE void `[`SetClientVersion`](#structFRHAPI__CreateOrJoinRequest_1a1684287037d1bdd471d76edbcd9b25b3)`(const FString & NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1a1684287037d1bdd471d76edbcd9b25b3"></a>

Sets the value of ClientVersion.

#### `public inline FORCEINLINE void `[`SetClientVersion`](#structFRHAPI__CreateOrJoinRequest_1abb8264f98eb2739800479a4727e183f3)`(FString && NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1abb8264f98eb2739800479a4727e183f3"></a>

Sets the value of ClientVersion using move semantics.

#### `public inline FORCEINLINE `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateOrJoinRequest_1ae8bca0bc4e9fcc0d7a5e7f8969f2af1a)`()` <a id="structFRHAPI__CreateOrJoinRequest_1ae8bca0bc4e9fcc0d7a5e7f8969f2af1a"></a>

Gets the value of ClientSettings.

#### `public inline FORCEINLINE const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateOrJoinRequest_1a2e052dc3d131342f87c8097f77047c82)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1a2e052dc3d131342f87c8097f77047c82"></a>

Gets the value of ClientSettings.

#### `public inline FORCEINLINE void `[`SetClientSettings`](#structFRHAPI__CreateOrJoinRequest_1adcde54a198e1eabc60d2e7f318e46514)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1adcde54a198e1eabc60d2e7f318e46514"></a>

Sets the value of ClientSettings.

#### `public inline FORCEINLINE void `[`SetClientSettings`](#structFRHAPI__CreateOrJoinRequest_1a20fd4628cea11a6f8aeca386d68c036a)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` && NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1a20fd4628cea11a6f8aeca386d68c036a"></a>

Sets the value of ClientSettings using move semantics.

#### `public inline FORCEINLINE `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1af9324ad404cc8358e1ebf4bbf990cafe)`()` <a id="structFRHAPI__CreateOrJoinRequest_1af9324ad404cc8358e1ebf4bbf990cafe"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1aeaeddf9bed652f6eaab1dcb96781862d)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1aeaeddf9bed652f6eaab1dcb96781862d"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1ae994219f1be00e98c14a88b08f80b2eb)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` <a id="structFRHAPI__CreateOrJoinRequest_1ae994219f1be00e98c14a88b08f80b2eb"></a>

Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1a68fc3e948f4a1d2f1fb29d08a36f8e5f)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` <a id="structFRHAPI__CreateOrJoinRequest_1a68fc3e948f4a1d2f1fb29d08a36f8e5f"></a>

Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CreateOrJoinRequest_1adf235d4cabe9490ed72eaa76a1932f14)`()` <a id="structFRHAPI__CreateOrJoinRequest_1adf235d4cabe9490ed72eaa76a1932f14"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CreateOrJoinRequest_1a74576d062f1b4a1153ecb9bf32b1da10)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1a74576d062f1b4a1153ecb9bf32b1da10"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1a3247953d3c0cd3ae3baf2af8bad2cfda)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1a3247953d3c0cd3ae3baf2af8bad2cfda"></a>

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1ad0ca4b457f4df11c6ffb53603a7f1a48)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` && NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1ad0ca4b457f4df11c6ffb53603a7f1a48"></a>

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true using move semantics.

#### `public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1a70fc9ee692df502c55225790ebc0e170)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a70fc9ee692df502c55225790ebc0e170"></a>

Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetSessionType`](#structFRHAPI__CreateOrJoinRequest_1a4394edb69b10b7069542809dafe1dc86)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a4394edb69b10b7069542809dafe1dc86"></a>

Gets the value of SessionType.

#### `public inline FORCEINLINE const FString & `[`GetSessionType`](#structFRHAPI__CreateOrJoinRequest_1a96569c2783747a714bda2b9edd17f734)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1a96569c2783747a714bda2b9edd17f734"></a>

Gets the value of SessionType.

#### `public inline FORCEINLINE void `[`SetSessionType`](#structFRHAPI__CreateOrJoinRequest_1ad76cfd98a60b890f79d6a3adda8afe3e)`(const FString & NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1ad76cfd98a60b890f79d6a3adda8afe3e"></a>

Sets the value of SessionType.

#### `public inline FORCEINLINE void `[`SetSessionType`](#structFRHAPI__CreateOrJoinRequest_1a78661f7e551f2af8d086cf74a468c63c)`(FString && NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1a78661f7e551f2af8d086cf74a468c63c"></a>

Sets the value of SessionType using move semantics.

#### `public inline FORCEINLINE FString & `[`GetPassword`](#structFRHAPI__CreateOrJoinRequest_1a3ef6028657b6437e23a22fa4973cc2fa)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a3ef6028657b6437e23a22fa4973cc2fa"></a>

Gets the value of Password_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPassword`](#structFRHAPI__CreateOrJoinRequest_1aa690a650556f93d43cf3cb084e8942af)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1aa690a650556f93d43cf3cb084e8942af"></a>

Gets the value of Password_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPassword`](#structFRHAPI__CreateOrJoinRequest_1ae2b46ed38c6591f102d2e7ebbf90970b)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateOrJoinRequest_1ae2b46ed38c6591f102d2e7ebbf90970b"></a>

Gets the value of Password_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPassword`](#structFRHAPI__CreateOrJoinRequest_1a2210766b11c4362cd2f188393671d804)`(FString & OutValue) const` <a id="structFRHAPI__CreateOrJoinRequest_1a2210766b11c4362cd2f188393671d804"></a>

Fills OutValue with the value of Password_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPasswordOrNull`](#structFRHAPI__CreateOrJoinRequest_1ac236927b928f5f00b27defabfb43922f)`()` <a id="structFRHAPI__CreateOrJoinRequest_1ac236927b928f5f00b27defabfb43922f"></a>

Returns a pointer to Password_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPasswordOrNull`](#structFRHAPI__CreateOrJoinRequest_1a039afcb20e377814e1d5cae4c5625cdc)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1a039afcb20e377814e1d5cae4c5625cdc"></a>

Returns a pointer to Password_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPassword`](#structFRHAPI__CreateOrJoinRequest_1ad7262c6668b157f46b2ec83bb7158517)`(const FString & NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1ad7262c6668b157f46b2ec83bb7158517"></a>

Sets the value of Password_Optional and also sets Password_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPassword`](#structFRHAPI__CreateOrJoinRequest_1a426894ad09015d12d1519885dd28a90d)`(FString && NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1a426894ad09015d12d1519885dd28a90d"></a>

Sets the value of Password_Optional and also sets Password_IsSet to true using move semantics.

#### `public inline void `[`ClearPassword`](#structFRHAPI__CreateOrJoinRequest_1ab87df60fb7763494f1b70d4e6d8bc94b)`()` <a id="structFRHAPI__CreateOrJoinRequest_1ab87df60fb7763494f1b70d4e6d8bc94b"></a>

Clears the value of Password_Optional and sets Password_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetRegionId`](#structFRHAPI__CreateOrJoinRequest_1a006d00b99444ee8dc8e22254bae22519)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a006d00b99444ee8dc8e22254bae22519"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__CreateOrJoinRequest_1a1b48312ae681bd657a5746d4e1a9c2e9)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1a1b48312ae681bd657a5746d4e1a9c2e9"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__CreateOrJoinRequest_1a5d140921cd9d946f79a765197316b440)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateOrJoinRequest_1a5d140921cd9d946f79a765197316b440"></a>

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRegionId`](#structFRHAPI__CreateOrJoinRequest_1ad7603633d5a1568307fe26d3da5e6852)`(FString & OutValue) const` <a id="structFRHAPI__CreateOrJoinRequest_1ad7603633d5a1568307fe26d3da5e6852"></a>

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRegionIdOrNull`](#structFRHAPI__CreateOrJoinRequest_1a594872ec5f29101f5dabd8cd6dce4989)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a594872ec5f29101f5dabd8cd6dce4989"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRegionIdOrNull`](#structFRHAPI__CreateOrJoinRequest_1ad5f6141558a475b8a727358bcdc803ac)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1ad5f6141558a475b8a727358bcdc803ac"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__CreateOrJoinRequest_1aaded22ed9bd0d2b722b6f6cf124d4e8c)`(const FString & NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1aaded22ed9bd0d2b722b6f6cf124d4e8c"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__CreateOrJoinRequest_1a4ef374fe19bc3aa155b1bf7e864c791d)`(FString && NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1a4ef374fe19bc3aa155b1bf7e864c791d"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.

#### `public inline void `[`ClearRegionId`](#structFRHAPI__CreateOrJoinRequest_1a24ad2ef9681bc5fd6c0deef62ba7f281)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a24ad2ef9681bc5fd6c0deef62ba7f281"></a>

Clears the value of RegionId_Optional and sets RegionId_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & `[`GetPlayer`](#structFRHAPI__CreateOrJoinRequest_1a0cc1d9cdad34d7cd4936ff20117b64c6)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a0cc1d9cdad34d7cd4936ff20117b64c6"></a>

Gets the value of Player_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & `[`GetPlayer`](#structFRHAPI__CreateOrJoinRequest_1a56515d135f30d81b45383ae357450916)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1a56515d135f30d81b45383ae357450916"></a>

Gets the value of Player_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & `[`GetPlayer`](#structFRHAPI__CreateOrJoinRequest_1a09e3e475f923a51fe675734d1d3327d8)`(const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & DefaultValue) const` <a id="structFRHAPI__CreateOrJoinRequest_1a09e3e475f923a51fe675734d1d3327d8"></a>

Gets the value of Player_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayer`](#structFRHAPI__CreateOrJoinRequest_1acc54eacf1d400401733e67d57368e903)`(`[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & OutValue) const` <a id="structFRHAPI__CreateOrJoinRequest_1acc54eacf1d400401733e67d57368e903"></a>

Fills OutValue with the value of Player_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` * `[`GetPlayerOrNull`](#structFRHAPI__CreateOrJoinRequest_1a492d34d54681411770d9191d23b5470a)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a492d34d54681411770d9191d23b5470a"></a>

Returns a pointer to Player_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` * `[`GetPlayerOrNull`](#structFRHAPI__CreateOrJoinRequest_1a9978aa476f3f066988124618d35f1d7c)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1a9978aa476f3f066988124618d35f1d7c"></a>

Returns a pointer to Player_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayer`](#structFRHAPI__CreateOrJoinRequest_1a42aa78ef535d68e548e9f8331e97d252)`(const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1a42aa78ef535d68e548e9f8331e97d252"></a>

Sets the value of Player_Optional and also sets Player_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayer`](#structFRHAPI__CreateOrJoinRequest_1af15a7a2917032416a5f68c4e9b1b4ec0)`(`[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` && NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1af15a7a2917032416a5f68c4e9b1b4ec0"></a>

Sets the value of Player_Optional and also sets Player_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayer`](#structFRHAPI__CreateOrJoinRequest_1a3714ab0adfecec9485860c63165f7977)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a3714ab0adfecec9485860c63165f7977"></a>

Clears the value of Player_Optional and sets Player_IsSet to false.

