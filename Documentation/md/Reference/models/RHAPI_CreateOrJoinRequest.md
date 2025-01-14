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
`public inline FString & `[`GetClientVersion`](#structFRHAPI__CreateOrJoinRequest_1a71e50de72f13b8b6e3cd8ba21aeea460)`()` | Gets the value of ClientVersion.
`public inline const FString & `[`GetClientVersion`](#structFRHAPI__CreateOrJoinRequest_1a31e5e583f6887ff7597c4e70fd72c531)`() const` | Gets the value of ClientVersion.
`public inline void `[`SetClientVersion`](#structFRHAPI__CreateOrJoinRequest_1a00935398599a07b9a1a9033230fd0628)`(const FString & NewValue)` | Sets the value of ClientVersion.
`public inline void `[`SetClientVersion`](#structFRHAPI__CreateOrJoinRequest_1a9ec859875f5151f770ad734ca64603f7)`(FString && NewValue)` | Sets the value of ClientVersion using move semantics.
`public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateOrJoinRequest_1a61c87b35ab5f765bc71e4d1bd838224a)`()` | Gets the value of ClientSettings.
`public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateOrJoinRequest_1a36ec1c9d98be9a299d5905b9fa30e045)`() const` | Gets the value of ClientSettings.
`public inline void `[`SetClientSettings`](#structFRHAPI__CreateOrJoinRequest_1ad36fc0c580b823d059a3de83da245588)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & NewValue)` | Sets the value of ClientSettings.
`public inline void `[`SetClientSettings`](#structFRHAPI__CreateOrJoinRequest_1a74ce34e9834f6ec9cb66f5f099b93be8)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` && NewValue)` | Sets the value of ClientSettings using move semantics.
`public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1aa985210e9ead7545346ff801c3072736)`()` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1a411b3a926d1b9b6fe9abf5d16d75307a)`() const` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1a18ec5c85615820946cad5c2624c0bd6c)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` | Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1a7b571632c5380077f063e86e12b99e04)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` | Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CreateOrJoinRequest_1a55650565a7ca6c5e17fccb54c64e6aa4)`()` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CreateOrJoinRequest_1a4e0efef60bb27b0a810aba9f93da6651)`() const` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1ac955a55bef4ddfd77f835ea5ff11ec89)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & NewValue)` | Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.
`public inline void `[`SetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1acdf25d4ae8d78b5b20e5c25d3c8e5b17)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` && NewValue)` | Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true using move semantics.
`public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1a70fc9ee692df502c55225790ebc0e170)`()` | Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.
`public inline bool `[`IsCrossplayPreferencesSet`](#structFRHAPI__CreateOrJoinRequest_1abb78a92166b44807dc32b58ce8fd07ea)`() const` | Checks whether CrossplayPreferences_Optional has been set.
`public inline FString & `[`GetSessionType`](#structFRHAPI__CreateOrJoinRequest_1ad91143ad81cefdc0e66e8b4dbb2b9d10)`()` | Gets the value of SessionType.
`public inline const FString & `[`GetSessionType`](#structFRHAPI__CreateOrJoinRequest_1a6a85b331acf15fd94439f0fcefb49abe)`() const` | Gets the value of SessionType.
`public inline void `[`SetSessionType`](#structFRHAPI__CreateOrJoinRequest_1a25f6994aab8c5c553e41e2e0c0e0b2ac)`(const FString & NewValue)` | Sets the value of SessionType.
`public inline void `[`SetSessionType`](#structFRHAPI__CreateOrJoinRequest_1a574819f050aa6412fc2769a2daee0bb6)`(FString && NewValue)` | Sets the value of SessionType using move semantics.
`public inline FString & `[`GetPassword`](#structFRHAPI__CreateOrJoinRequest_1abc8f5339b8385f8dfd6fd00156c0183b)`()` | Gets the value of Password_Optional, regardless of it having been set.
`public inline const FString & `[`GetPassword`](#structFRHAPI__CreateOrJoinRequest_1a255baf8c21a17fa2bba104a323a39c54)`() const` | Gets the value of Password_Optional, regardless of it having been set.
`public inline const FString & `[`GetPassword`](#structFRHAPI__CreateOrJoinRequest_1a16a52a8b894ead8e2a74f6323b012a74)`(const FString & DefaultValue) const` | Gets the value of Password_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPassword`](#structFRHAPI__CreateOrJoinRequest_1ae1381921ba5564cb1d8acbe2cf00f4ba)`(FString & OutValue) const` | Fills OutValue with the value of Password_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPasswordOrNull`](#structFRHAPI__CreateOrJoinRequest_1ae6dee7d9b9cb885249b69dbd2ee6f343)`()` | Returns a pointer to Password_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPasswordOrNull`](#structFRHAPI__CreateOrJoinRequest_1a0e482ec31341acfd73ee9bc03adbb44f)`() const` | Returns a pointer to Password_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPassword`](#structFRHAPI__CreateOrJoinRequest_1aa2acc86b14881f576474862ebeaca1a3)`(const FString & NewValue)` | Sets the value of Password_Optional and also sets Password_IsSet to true.
`public inline void `[`SetPassword`](#structFRHAPI__CreateOrJoinRequest_1abbdf7d247805cda06df35932aba23152)`(FString && NewValue)` | Sets the value of Password_Optional and also sets Password_IsSet to true using move semantics.
`public inline void `[`ClearPassword`](#structFRHAPI__CreateOrJoinRequest_1ab87df60fb7763494f1b70d4e6d8bc94b)`()` | Clears the value of Password_Optional and sets Password_IsSet to false.
`public inline bool `[`IsPasswordSet`](#structFRHAPI__CreateOrJoinRequest_1a5aa1735eb1bc4c73d62348763eeecc61)`() const` | Checks whether Password_Optional has been set.
`public inline FString & `[`GetRegionId`](#structFRHAPI__CreateOrJoinRequest_1a3bbe59f9ee288f016765343b4dd390a2)`()` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__CreateOrJoinRequest_1ae8c3bde03ecd7094ad1aa3408998b3a2)`() const` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__CreateOrJoinRequest_1a6bf36fbf35f42d44fbca2412411c0f18)`(const FString & DefaultValue) const` | Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRegionId`](#structFRHAPI__CreateOrJoinRequest_1acee32c331957deb3f83530fd545bf1fd)`(FString & OutValue) const` | Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__CreateOrJoinRequest_1aa66ed15dfae5802c70a9a7c34f8a6282)`()` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__CreateOrJoinRequest_1a549b7b11b6de1be3c20316ca55b2fd3a)`() const` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRegionId`](#structFRHAPI__CreateOrJoinRequest_1a700edbfb249cd81573cf88e3027d0725)`(const FString & NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.
`public inline void `[`SetRegionId`](#structFRHAPI__CreateOrJoinRequest_1a9afe638538af227a0a88ee3b10948a60)`(FString && NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.
`public inline void `[`ClearRegionId`](#structFRHAPI__CreateOrJoinRequest_1a24ad2ef9681bc5fd6c0deef62ba7f281)`()` | Clears the value of RegionId_Optional and sets RegionId_IsSet to false.
`public inline bool `[`IsRegionIdSet`](#structFRHAPI__CreateOrJoinRequest_1a7584e4932858dc49107485385bfd8366)`() const` | Checks whether RegionId_Optional has been set.
`public inline `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & `[`GetPlayer`](#structFRHAPI__CreateOrJoinRequest_1a90a6f3726ca7ad66440bc2e1ff7c55f5)`()` | Gets the value of Player_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & `[`GetPlayer`](#structFRHAPI__CreateOrJoinRequest_1a07bfde8769120cf6c30dc62555895eb3)`() const` | Gets the value of Player_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & `[`GetPlayer`](#structFRHAPI__CreateOrJoinRequest_1a2384745075d1194ba0eeff76383d1c02)`(const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & DefaultValue) const` | Gets the value of Player_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayer`](#structFRHAPI__CreateOrJoinRequest_1a4db162a6eefff961e430395c9fbbee21)`(`[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & OutValue) const` | Fills OutValue with the value of Player_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` * `[`GetPlayerOrNull`](#structFRHAPI__CreateOrJoinRequest_1a19f02b001ec436f7eb94855d8a493bd3)`()` | Returns a pointer to Player_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` * `[`GetPlayerOrNull`](#structFRHAPI__CreateOrJoinRequest_1af35cbd46374baf777fd0054b1afe7d85)`() const` | Returns a pointer to Player_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayer`](#structFRHAPI__CreateOrJoinRequest_1afe4b1682129f5285b53883ac312e6c67)`(const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & NewValue)` | Sets the value of Player_Optional and also sets Player_IsSet to true.
`public inline void `[`SetPlayer`](#structFRHAPI__CreateOrJoinRequest_1a7e6f036ef4266f6d30fe16db0d2bd0e1)`(`[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` && NewValue)` | Sets the value of Player_Optional and also sets Player_IsSet to true using move semantics.
`public inline void `[`ClearPlayer`](#structFRHAPI__CreateOrJoinRequest_1a3714ab0adfecec9485860c63165f7977)`()` | Clears the value of Player_Optional and sets Player_IsSet to false.
`public inline bool `[`IsPlayerSet`](#structFRHAPI__CreateOrJoinRequest_1a1dea5202151d987433cfea927440fedb)`() const` | Checks whether Player_Optional has been set.

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

#### `public inline FString & `[`GetClientVersion`](#structFRHAPI__CreateOrJoinRequest_1a71e50de72f13b8b6e3cd8ba21aeea460)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a71e50de72f13b8b6e3cd8ba21aeea460"></a>

Gets the value of ClientVersion.

#### `public inline const FString & `[`GetClientVersion`](#structFRHAPI__CreateOrJoinRequest_1a31e5e583f6887ff7597c4e70fd72c531)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1a31e5e583f6887ff7597c4e70fd72c531"></a>

Gets the value of ClientVersion.

#### `public inline void `[`SetClientVersion`](#structFRHAPI__CreateOrJoinRequest_1a00935398599a07b9a1a9033230fd0628)`(const FString & NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1a00935398599a07b9a1a9033230fd0628"></a>

Sets the value of ClientVersion.

#### `public inline void `[`SetClientVersion`](#structFRHAPI__CreateOrJoinRequest_1a9ec859875f5151f770ad734ca64603f7)`(FString && NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1a9ec859875f5151f770ad734ca64603f7"></a>

Sets the value of ClientVersion using move semantics.

#### `public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateOrJoinRequest_1a61c87b35ab5f765bc71e4d1bd838224a)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a61c87b35ab5f765bc71e4d1bd838224a"></a>

Gets the value of ClientSettings.

#### `public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateOrJoinRequest_1a36ec1c9d98be9a299d5905b9fa30e045)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1a36ec1c9d98be9a299d5905b9fa30e045"></a>

Gets the value of ClientSettings.

#### `public inline void `[`SetClientSettings`](#structFRHAPI__CreateOrJoinRequest_1ad36fc0c580b823d059a3de83da245588)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1ad36fc0c580b823d059a3de83da245588"></a>

Sets the value of ClientSettings.

#### `public inline void `[`SetClientSettings`](#structFRHAPI__CreateOrJoinRequest_1a74ce34e9834f6ec9cb66f5f099b93be8)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` && NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1a74ce34e9834f6ec9cb66f5f099b93be8"></a>

Sets the value of ClientSettings using move semantics.

#### `public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1aa985210e9ead7545346ff801c3072736)`()` <a id="structFRHAPI__CreateOrJoinRequest_1aa985210e9ead7545346ff801c3072736"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1a411b3a926d1b9b6fe9abf5d16d75307a)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1a411b3a926d1b9b6fe9abf5d16d75307a"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1a18ec5c85615820946cad5c2624c0bd6c)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` <a id="structFRHAPI__CreateOrJoinRequest_1a18ec5c85615820946cad5c2624c0bd6c"></a>

Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1a7b571632c5380077f063e86e12b99e04)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` <a id="structFRHAPI__CreateOrJoinRequest_1a7b571632c5380077f063e86e12b99e04"></a>

Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CreateOrJoinRequest_1a55650565a7ca6c5e17fccb54c64e6aa4)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a55650565a7ca6c5e17fccb54c64e6aa4"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CreateOrJoinRequest_1a4e0efef60bb27b0a810aba9f93da6651)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1a4e0efef60bb27b0a810aba9f93da6651"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1ac955a55bef4ddfd77f835ea5ff11ec89)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1ac955a55bef4ddfd77f835ea5ff11ec89"></a>

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.

#### `public inline void `[`SetCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1acdf25d4ae8d78b5b20e5c25d3c8e5b17)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` && NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1acdf25d4ae8d78b5b20e5c25d3c8e5b17"></a>

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true using move semantics.

#### `public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__CreateOrJoinRequest_1a70fc9ee692df502c55225790ebc0e170)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a70fc9ee692df502c55225790ebc0e170"></a>

Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.

#### `public inline bool `[`IsCrossplayPreferencesSet`](#structFRHAPI__CreateOrJoinRequest_1abb78a92166b44807dc32b58ce8fd07ea)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1abb78a92166b44807dc32b58ce8fd07ea"></a>

Checks whether CrossplayPreferences_Optional has been set.

#### `public inline FString & `[`GetSessionType`](#structFRHAPI__CreateOrJoinRequest_1ad91143ad81cefdc0e66e8b4dbb2b9d10)`()` <a id="structFRHAPI__CreateOrJoinRequest_1ad91143ad81cefdc0e66e8b4dbb2b9d10"></a>

Gets the value of SessionType.

#### `public inline const FString & `[`GetSessionType`](#structFRHAPI__CreateOrJoinRequest_1a6a85b331acf15fd94439f0fcefb49abe)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1a6a85b331acf15fd94439f0fcefb49abe"></a>

Gets the value of SessionType.

#### `public inline void `[`SetSessionType`](#structFRHAPI__CreateOrJoinRequest_1a25f6994aab8c5c553e41e2e0c0e0b2ac)`(const FString & NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1a25f6994aab8c5c553e41e2e0c0e0b2ac"></a>

Sets the value of SessionType.

#### `public inline void `[`SetSessionType`](#structFRHAPI__CreateOrJoinRequest_1a574819f050aa6412fc2769a2daee0bb6)`(FString && NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1a574819f050aa6412fc2769a2daee0bb6"></a>

Sets the value of SessionType using move semantics.

#### `public inline FString & `[`GetPassword`](#structFRHAPI__CreateOrJoinRequest_1abc8f5339b8385f8dfd6fd00156c0183b)`()` <a id="structFRHAPI__CreateOrJoinRequest_1abc8f5339b8385f8dfd6fd00156c0183b"></a>

Gets the value of Password_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPassword`](#structFRHAPI__CreateOrJoinRequest_1a255baf8c21a17fa2bba104a323a39c54)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1a255baf8c21a17fa2bba104a323a39c54"></a>

Gets the value of Password_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPassword`](#structFRHAPI__CreateOrJoinRequest_1a16a52a8b894ead8e2a74f6323b012a74)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateOrJoinRequest_1a16a52a8b894ead8e2a74f6323b012a74"></a>

Gets the value of Password_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPassword`](#structFRHAPI__CreateOrJoinRequest_1ae1381921ba5564cb1d8acbe2cf00f4ba)`(FString & OutValue) const` <a id="structFRHAPI__CreateOrJoinRequest_1ae1381921ba5564cb1d8acbe2cf00f4ba"></a>

Fills OutValue with the value of Password_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPasswordOrNull`](#structFRHAPI__CreateOrJoinRequest_1ae6dee7d9b9cb885249b69dbd2ee6f343)`()` <a id="structFRHAPI__CreateOrJoinRequest_1ae6dee7d9b9cb885249b69dbd2ee6f343"></a>

Returns a pointer to Password_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPasswordOrNull`](#structFRHAPI__CreateOrJoinRequest_1a0e482ec31341acfd73ee9bc03adbb44f)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1a0e482ec31341acfd73ee9bc03adbb44f"></a>

Returns a pointer to Password_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPassword`](#structFRHAPI__CreateOrJoinRequest_1aa2acc86b14881f576474862ebeaca1a3)`(const FString & NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1aa2acc86b14881f576474862ebeaca1a3"></a>

Sets the value of Password_Optional and also sets Password_IsSet to true.

#### `public inline void `[`SetPassword`](#structFRHAPI__CreateOrJoinRequest_1abbdf7d247805cda06df35932aba23152)`(FString && NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1abbdf7d247805cda06df35932aba23152"></a>

Sets the value of Password_Optional and also sets Password_IsSet to true using move semantics.

#### `public inline void `[`ClearPassword`](#structFRHAPI__CreateOrJoinRequest_1ab87df60fb7763494f1b70d4e6d8bc94b)`()` <a id="structFRHAPI__CreateOrJoinRequest_1ab87df60fb7763494f1b70d4e6d8bc94b"></a>

Clears the value of Password_Optional and sets Password_IsSet to false.

#### `public inline bool `[`IsPasswordSet`](#structFRHAPI__CreateOrJoinRequest_1a5aa1735eb1bc4c73d62348763eeecc61)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1a5aa1735eb1bc4c73d62348763eeecc61"></a>

Checks whether Password_Optional has been set.

#### `public inline FString & `[`GetRegionId`](#structFRHAPI__CreateOrJoinRequest_1a3bbe59f9ee288f016765343b4dd390a2)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a3bbe59f9ee288f016765343b4dd390a2"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__CreateOrJoinRequest_1ae8c3bde03ecd7094ad1aa3408998b3a2)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1ae8c3bde03ecd7094ad1aa3408998b3a2"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__CreateOrJoinRequest_1a6bf36fbf35f42d44fbca2412411c0f18)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateOrJoinRequest_1a6bf36fbf35f42d44fbca2412411c0f18"></a>

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRegionId`](#structFRHAPI__CreateOrJoinRequest_1acee32c331957deb3f83530fd545bf1fd)`(FString & OutValue) const` <a id="structFRHAPI__CreateOrJoinRequest_1acee32c331957deb3f83530fd545bf1fd"></a>

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__CreateOrJoinRequest_1aa66ed15dfae5802c70a9a7c34f8a6282)`()` <a id="structFRHAPI__CreateOrJoinRequest_1aa66ed15dfae5802c70a9a7c34f8a6282"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__CreateOrJoinRequest_1a549b7b11b6de1be3c20316ca55b2fd3a)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1a549b7b11b6de1be3c20316ca55b2fd3a"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRegionId`](#structFRHAPI__CreateOrJoinRequest_1a700edbfb249cd81573cf88e3027d0725)`(const FString & NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1a700edbfb249cd81573cf88e3027d0725"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.

#### `public inline void `[`SetRegionId`](#structFRHAPI__CreateOrJoinRequest_1a9afe638538af227a0a88ee3b10948a60)`(FString && NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1a9afe638538af227a0a88ee3b10948a60"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.

#### `public inline void `[`ClearRegionId`](#structFRHAPI__CreateOrJoinRequest_1a24ad2ef9681bc5fd6c0deef62ba7f281)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a24ad2ef9681bc5fd6c0deef62ba7f281"></a>

Clears the value of RegionId_Optional and sets RegionId_IsSet to false.

#### `public inline bool `[`IsRegionIdSet`](#structFRHAPI__CreateOrJoinRequest_1a7584e4932858dc49107485385bfd8366)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1a7584e4932858dc49107485385bfd8366"></a>

Checks whether RegionId_Optional has been set.

#### `public inline `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & `[`GetPlayer`](#structFRHAPI__CreateOrJoinRequest_1a90a6f3726ca7ad66440bc2e1ff7c55f5)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a90a6f3726ca7ad66440bc2e1ff7c55f5"></a>

Gets the value of Player_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & `[`GetPlayer`](#structFRHAPI__CreateOrJoinRequest_1a07bfde8769120cf6c30dc62555895eb3)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1a07bfde8769120cf6c30dc62555895eb3"></a>

Gets the value of Player_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & `[`GetPlayer`](#structFRHAPI__CreateOrJoinRequest_1a2384745075d1194ba0eeff76383d1c02)`(const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & DefaultValue) const` <a id="structFRHAPI__CreateOrJoinRequest_1a2384745075d1194ba0eeff76383d1c02"></a>

Gets the value of Player_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayer`](#structFRHAPI__CreateOrJoinRequest_1a4db162a6eefff961e430395c9fbbee21)`(`[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & OutValue) const` <a id="structFRHAPI__CreateOrJoinRequest_1a4db162a6eefff961e430395c9fbbee21"></a>

Fills OutValue with the value of Player_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` * `[`GetPlayerOrNull`](#structFRHAPI__CreateOrJoinRequest_1a19f02b001ec436f7eb94855d8a493bd3)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a19f02b001ec436f7eb94855d8a493bd3"></a>

Returns a pointer to Player_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` * `[`GetPlayerOrNull`](#structFRHAPI__CreateOrJoinRequest_1af35cbd46374baf777fd0054b1afe7d85)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1af35cbd46374baf777fd0054b1afe7d85"></a>

Returns a pointer to Player_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayer`](#structFRHAPI__CreateOrJoinRequest_1afe4b1682129f5285b53883ac312e6c67)`(const `[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` & NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1afe4b1682129f5285b53883ac312e6c67"></a>

Sets the value of Player_Optional and also sets Player_IsSet to true.

#### `public inline void `[`SetPlayer`](#structFRHAPI__CreateOrJoinRequest_1a7e6f036ef4266f6d30fe16db0d2bd0e1)`(`[`FRHAPI_SelfSessionPlayerUpdateRequest`](RHAPI_SelfSessionPlayerUpdateRequest.md#structFRHAPI__SelfSessionPlayerUpdateRequest)` && NewValue)` <a id="structFRHAPI__CreateOrJoinRequest_1a7e6f036ef4266f6d30fe16db0d2bd0e1"></a>

Sets the value of Player_Optional and also sets Player_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayer`](#structFRHAPI__CreateOrJoinRequest_1a3714ab0adfecec9485860c63165f7977)`()` <a id="structFRHAPI__CreateOrJoinRequest_1a3714ab0adfecec9485860c63165f7977"></a>

Clears the value of Player_Optional and sets Player_IsSet to false.

#### `public inline bool `[`IsPlayerSet`](#structFRHAPI__CreateOrJoinRequest_1a1dea5202151d987433cfea927440fedb)`() const` <a id="structFRHAPI__CreateOrJoinRequest_1a1dea5202151d987433cfea927440fedb"></a>

Checks whether Player_Optional has been set.

