---
title: RHAPI_MatchSession
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchSession`](#structFRHAPI__MatchSession) | 

## struct `FRHAPI_MatchSession` <a id="structFRHAPI__MatchSession"></a>

```
struct FRHAPI_MatchSession
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`SessionId`](#structFRHAPI__MatchSession_1a8b77d2997c9e8510dba7a59c146d84d0) | Session ID.
`public FString `[`MatchmakingProfileId_Optional`](#structFRHAPI__MatchSession_1ab7e89caa19dfe366a75e457dcce9df84) | 
`public bool `[`MatchmakingProfileId_IsSet`](#structFRHAPI__MatchSession_1aa41ad74778848a5236bae0c24c1bffc5) | true if MatchmakingProfileId_Optional has been set to a value
`public bool `[`MatchmakingProfileId_IsNull`](#structFRHAPI__MatchSession_1a11772773df94890a47bca6a1c5a03b28) | true if MatchmakingProfileId_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__MatchSession_1a0ca3b9c6415fec3618b589c8a2790b5a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchSession_1aad5283f4065d243c0ee80b0540e968b4)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetSessionId`](#structFRHAPI__MatchSession_1a2e01af7028e299bb27a2ef787fe17491)`()` | Gets the value of SessionId.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__MatchSession_1a4b7cc575c5b605edfcb4cbd7e4d0a600)`() const` | Gets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__MatchSession_1a0de515a8e818ddb0fd9c47361a84e320)`(const FString & NewValue)` | Sets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__MatchSession_1ad3c518b309d93fd0f9cd88749c8eec2f)`(FString && NewValue)` | Sets the value of SessionId using move semantics.
`public inline FString & `[`GetMatchmakingProfileId`](#structFRHAPI__MatchSession_1a13f1095bb605e7623d9224f91197f726)`()` | Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchmakingProfileId`](#structFRHAPI__MatchSession_1ab90b1ffe33a088b0cffdb673d05f89ab)`() const` | Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchmakingProfileId`](#structFRHAPI__MatchSession_1a147607ca525561c37e7302f9c7e1945e)`(const FString & DefaultValue) const` | Gets the value of MatchmakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchmakingProfileId`](#structFRHAPI__MatchSession_1ab554234d68fe02cccdfa012dae45c096)`(FString & OutValue) const` | Fills OutValue with the value of MatchmakingProfileId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchmakingProfileIdOrNull`](#structFRHAPI__MatchSession_1a5bbadb32bfcd8e3a838c932d3c526405)`()` | Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchmakingProfileIdOrNull`](#structFRHAPI__MatchSession_1a7df7da63e7923821ef81aec8c79f6cda)`() const` | Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchmakingProfileId`](#structFRHAPI__MatchSession_1a160b1b1d01e0b332e92dfde4d43a3725)`(const FString & NewValue)` | Sets the value of MatchmakingProfileId_Optional and also sets MatchmakingProfileId_IsSet to true.
`public inline void `[`SetMatchmakingProfileId`](#structFRHAPI__MatchSession_1a80d3bdc3aa38fd0c8bcaac499eb26c38)`(FString && NewValue)` | Sets the value of MatchmakingProfileId_Optional and also sets MatchmakingProfileId_IsSet to true using move semantics.
`public inline void `[`ClearMatchmakingProfileId`](#structFRHAPI__MatchSession_1a619a8b5b4a2c7348fd5a26f7c4b10caf)`()` | Clears the value of MatchmakingProfileId_Optional and sets MatchmakingProfileId_IsSet to false.
`public inline bool `[`IsMatchmakingProfileIdSet`](#structFRHAPI__MatchSession_1a52b5e1c26a9078d4e341e74aec7b9f18)`() const` | Checks whether MatchmakingProfileId_Optional has been set.
`public inline void `[`SetMatchmakingProfileIdToNull`](#structFRHAPI__MatchSession_1a0896d1f5e2b7e033ad847563c776bef2)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsMatchmakingProfileIdNull`](#structFRHAPI__MatchSession_1a41a832d6f035be1573b5be34d18c5dc9)`() const` | Checks whether MatchmakingProfileId_Optional is set to null.

### Members

#### `public FString `[`SessionId`](#structFRHAPI__MatchSession_1a8b77d2997c9e8510dba7a59c146d84d0) <a id="structFRHAPI__MatchSession_1a8b77d2997c9e8510dba7a59c146d84d0"></a>

Session ID.

#### `public FString `[`MatchmakingProfileId_Optional`](#structFRHAPI__MatchSession_1ab7e89caa19dfe366a75e457dcce9df84) <a id="structFRHAPI__MatchSession_1ab7e89caa19dfe366a75e457dcce9df84"></a>

#### `public bool `[`MatchmakingProfileId_IsSet`](#structFRHAPI__MatchSession_1aa41ad74778848a5236bae0c24c1bffc5) <a id="structFRHAPI__MatchSession_1aa41ad74778848a5236bae0c24c1bffc5"></a>

true if MatchmakingProfileId_Optional has been set to a value

#### `public bool `[`MatchmakingProfileId_IsNull`](#structFRHAPI__MatchSession_1a11772773df94890a47bca6a1c5a03b28) <a id="structFRHAPI__MatchSession_1a11772773df94890a47bca6a1c5a03b28"></a>

true if MatchmakingProfileId_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchSession_1a0ca3b9c6415fec3618b589c8a2790b5a)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchSession_1a0ca3b9c6415fec3618b589c8a2790b5a"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchSession_1aad5283f4065d243c0ee80b0540e968b4)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchSession_1aad5283f4065d243c0ee80b0540e968b4"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetSessionId`](#structFRHAPI__MatchSession_1a2e01af7028e299bb27a2ef787fe17491)`()` <a id="structFRHAPI__MatchSession_1a2e01af7028e299bb27a2ef787fe17491"></a>

Gets the value of SessionId.

#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__MatchSession_1a4b7cc575c5b605edfcb4cbd7e4d0a600)`() const` <a id="structFRHAPI__MatchSession_1a4b7cc575c5b605edfcb4cbd7e4d0a600"></a>

Gets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__MatchSession_1a0de515a8e818ddb0fd9c47361a84e320)`(const FString & NewValue)` <a id="structFRHAPI__MatchSession_1a0de515a8e818ddb0fd9c47361a84e320"></a>

Sets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__MatchSession_1ad3c518b309d93fd0f9cd88749c8eec2f)`(FString && NewValue)` <a id="structFRHAPI__MatchSession_1ad3c518b309d93fd0f9cd88749c8eec2f"></a>

Sets the value of SessionId using move semantics.

#### `public inline FString & `[`GetMatchmakingProfileId`](#structFRHAPI__MatchSession_1a13f1095bb605e7623d9224f91197f726)`()` <a id="structFRHAPI__MatchSession_1a13f1095bb605e7623d9224f91197f726"></a>

Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchmakingProfileId`](#structFRHAPI__MatchSession_1ab90b1ffe33a088b0cffdb673d05f89ab)`() const` <a id="structFRHAPI__MatchSession_1ab90b1ffe33a088b0cffdb673d05f89ab"></a>

Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchmakingProfileId`](#structFRHAPI__MatchSession_1a147607ca525561c37e7302f9c7e1945e)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchSession_1a147607ca525561c37e7302f9c7e1945e"></a>

Gets the value of MatchmakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchmakingProfileId`](#structFRHAPI__MatchSession_1ab554234d68fe02cccdfa012dae45c096)`(FString & OutValue) const` <a id="structFRHAPI__MatchSession_1ab554234d68fe02cccdfa012dae45c096"></a>

Fills OutValue with the value of MatchmakingProfileId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchmakingProfileIdOrNull`](#structFRHAPI__MatchSession_1a5bbadb32bfcd8e3a838c932d3c526405)`()` <a id="structFRHAPI__MatchSession_1a5bbadb32bfcd8e3a838c932d3c526405"></a>

Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchmakingProfileIdOrNull`](#structFRHAPI__MatchSession_1a7df7da63e7923821ef81aec8c79f6cda)`() const` <a id="structFRHAPI__MatchSession_1a7df7da63e7923821ef81aec8c79f6cda"></a>

Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchmakingProfileId`](#structFRHAPI__MatchSession_1a160b1b1d01e0b332e92dfde4d43a3725)`(const FString & NewValue)` <a id="structFRHAPI__MatchSession_1a160b1b1d01e0b332e92dfde4d43a3725"></a>

Sets the value of MatchmakingProfileId_Optional and also sets MatchmakingProfileId_IsSet to true.

#### `public inline void `[`SetMatchmakingProfileId`](#structFRHAPI__MatchSession_1a80d3bdc3aa38fd0c8bcaac499eb26c38)`(FString && NewValue)` <a id="structFRHAPI__MatchSession_1a80d3bdc3aa38fd0c8bcaac499eb26c38"></a>

Sets the value of MatchmakingProfileId_Optional and also sets MatchmakingProfileId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchmakingProfileId`](#structFRHAPI__MatchSession_1a619a8b5b4a2c7348fd5a26f7c4b10caf)`()` <a id="structFRHAPI__MatchSession_1a619a8b5b4a2c7348fd5a26f7c4b10caf"></a>

Clears the value of MatchmakingProfileId_Optional and sets MatchmakingProfileId_IsSet to false.

#### `public inline bool `[`IsMatchmakingProfileIdSet`](#structFRHAPI__MatchSession_1a52b5e1c26a9078d4e341e74aec7b9f18)`() const` <a id="structFRHAPI__MatchSession_1a52b5e1c26a9078d4e341e74aec7b9f18"></a>

Checks whether MatchmakingProfileId_Optional has been set.

#### `public inline void `[`SetMatchmakingProfileIdToNull`](#structFRHAPI__MatchSession_1a0896d1f5e2b7e033ad847563c776bef2)`()` <a id="structFRHAPI__MatchSession_1a0896d1f5e2b7e033ad847563c776bef2"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsMatchmakingProfileIdNull`](#structFRHAPI__MatchSession_1a41a832d6f035be1573b5be34d18c5dc9)`() const` <a id="structFRHAPI__MatchSession_1a41a832d6f035be1573b5be34d18c5dc9"></a>

Checks whether MatchmakingProfileId_Optional is set to null.

