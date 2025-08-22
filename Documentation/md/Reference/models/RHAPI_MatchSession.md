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
`public inline FORCEINLINE FString & `[`GetSessionId`](#structFRHAPI__MatchSession_1a65723b6ce607886613f88ef74c538329)`()` | Gets the value of SessionId.
`public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__MatchSession_1a6a3bb58b45fc9b6663dd4320be3c76ff)`() const` | Gets the value of SessionId.
`public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__MatchSession_1af5fcf44259a886d5566a94635e15f1d6)`(const FString & NewValue)` | Sets the value of SessionId.
`public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__MatchSession_1ad48f9127b0a99e0c92a5e52e3f50a480)`(FString && NewValue)` | Sets the value of SessionId using move semantics.
`public inline FORCEINLINE FString & `[`GetMatchmakingProfileId`](#structFRHAPI__MatchSession_1a1c4012d18d3eb4bb73230eba3a5fb40c)`()` | Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchmakingProfileId`](#structFRHAPI__MatchSession_1a8b9d16f99de655aee3276f3db1c95164)`() const` | Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchmakingProfileId`](#structFRHAPI__MatchSession_1a003b4bafeb7770f1ff4b1d8a3ad457d4)`(const FString & DefaultValue) const` | Gets the value of MatchmakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatchmakingProfileId`](#structFRHAPI__MatchSession_1a5ae9bf6e4465a94253966b97309d8e28)`(FString & OutValue) const` | Fills OutValue with the value of MatchmakingProfileId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMatchmakingProfileIdOrNull`](#structFRHAPI__MatchSession_1a11e3091952130044017aefa9ac4f9ff1)`()` | Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMatchmakingProfileIdOrNull`](#structFRHAPI__MatchSession_1a59edfc3caaa3a1cfe575cfd9b815084d)`() const` | Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatchmakingProfileId`](#structFRHAPI__MatchSession_1adda057bdddde8fd6272ded4f4ab9c143)`(const FString & NewValue)` | Sets the value of MatchmakingProfileId_Optional and also sets MatchmakingProfileId_IsSet to true.
`public inline FORCEINLINE void `[`SetMatchmakingProfileId`](#structFRHAPI__MatchSession_1afdd3aaa872181bd2821a2debb58f06eb)`(FString && NewValue)` | Sets the value of MatchmakingProfileId_Optional and also sets MatchmakingProfileId_IsSet to true using move semantics.
`public inline void `[`ClearMatchmakingProfileId`](#structFRHAPI__MatchSession_1a619a8b5b4a2c7348fd5a26f7c4b10caf)`()` | Clears the value of MatchmakingProfileId_Optional and sets MatchmakingProfileId_IsSet to false.
`public inline FORCEINLINE void `[`SetMatchmakingProfileIdToNull`](#structFRHAPI__MatchSession_1aa2a6cddea80894bc902a3f3a755da52d)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMatchmakingProfileIdNull`](#structFRHAPI__MatchSession_1afc4cda5ef41847a0e341c57611727620)`() const` | Checks whether MatchmakingProfileId_Optional is set to null.

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

#### `public inline FORCEINLINE FString & `[`GetSessionId`](#structFRHAPI__MatchSession_1a65723b6ce607886613f88ef74c538329)`()` <a id="structFRHAPI__MatchSession_1a65723b6ce607886613f88ef74c538329"></a>

Gets the value of SessionId.

#### `public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__MatchSession_1a6a3bb58b45fc9b6663dd4320be3c76ff)`() const` <a id="structFRHAPI__MatchSession_1a6a3bb58b45fc9b6663dd4320be3c76ff"></a>

Gets the value of SessionId.

#### `public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__MatchSession_1af5fcf44259a886d5566a94635e15f1d6)`(const FString & NewValue)` <a id="structFRHAPI__MatchSession_1af5fcf44259a886d5566a94635e15f1d6"></a>

Sets the value of SessionId.

#### `public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__MatchSession_1ad48f9127b0a99e0c92a5e52e3f50a480)`(FString && NewValue)` <a id="structFRHAPI__MatchSession_1ad48f9127b0a99e0c92a5e52e3f50a480"></a>

Sets the value of SessionId using move semantics.

#### `public inline FORCEINLINE FString & `[`GetMatchmakingProfileId`](#structFRHAPI__MatchSession_1a1c4012d18d3eb4bb73230eba3a5fb40c)`()` <a id="structFRHAPI__MatchSession_1a1c4012d18d3eb4bb73230eba3a5fb40c"></a>

Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchmakingProfileId`](#structFRHAPI__MatchSession_1a8b9d16f99de655aee3276f3db1c95164)`() const` <a id="structFRHAPI__MatchSession_1a8b9d16f99de655aee3276f3db1c95164"></a>

Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchmakingProfileId`](#structFRHAPI__MatchSession_1a003b4bafeb7770f1ff4b1d8a3ad457d4)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchSession_1a003b4bafeb7770f1ff4b1d8a3ad457d4"></a>

Gets the value of MatchmakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatchmakingProfileId`](#structFRHAPI__MatchSession_1a5ae9bf6e4465a94253966b97309d8e28)`(FString & OutValue) const` <a id="structFRHAPI__MatchSession_1a5ae9bf6e4465a94253966b97309d8e28"></a>

Fills OutValue with the value of MatchmakingProfileId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMatchmakingProfileIdOrNull`](#structFRHAPI__MatchSession_1a11e3091952130044017aefa9ac4f9ff1)`()` <a id="structFRHAPI__MatchSession_1a11e3091952130044017aefa9ac4f9ff1"></a>

Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMatchmakingProfileIdOrNull`](#structFRHAPI__MatchSession_1a59edfc3caaa3a1cfe575cfd9b815084d)`() const` <a id="structFRHAPI__MatchSession_1a59edfc3caaa3a1cfe575cfd9b815084d"></a>

Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatchmakingProfileId`](#structFRHAPI__MatchSession_1adda057bdddde8fd6272ded4f4ab9c143)`(const FString & NewValue)` <a id="structFRHAPI__MatchSession_1adda057bdddde8fd6272ded4f4ab9c143"></a>

Sets the value of MatchmakingProfileId_Optional and also sets MatchmakingProfileId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatchmakingProfileId`](#structFRHAPI__MatchSession_1afdd3aaa872181bd2821a2debb58f06eb)`(FString && NewValue)` <a id="structFRHAPI__MatchSession_1afdd3aaa872181bd2821a2debb58f06eb"></a>

Sets the value of MatchmakingProfileId_Optional and also sets MatchmakingProfileId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchmakingProfileId`](#structFRHAPI__MatchSession_1a619a8b5b4a2c7348fd5a26f7c4b10caf)`()` <a id="structFRHAPI__MatchSession_1a619a8b5b4a2c7348fd5a26f7c4b10caf"></a>

Clears the value of MatchmakingProfileId_Optional and sets MatchmakingProfileId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMatchmakingProfileIdToNull`](#structFRHAPI__MatchSession_1aa2a6cddea80894bc902a3f3a755da52d)`()` <a id="structFRHAPI__MatchSession_1aa2a6cddea80894bc902a3f3a755da52d"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMatchmakingProfileIdNull`](#structFRHAPI__MatchSession_1afc4cda5ef41847a0e341c57611727620)`() const` <a id="structFRHAPI__MatchSession_1afc4cda5ef41847a0e341c57611727620"></a>

Checks whether MatchmakingProfileId_Optional is set to null.

