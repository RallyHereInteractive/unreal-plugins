# RHAPI_MatchSession <a id="group__RHAPI__MatchSession"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchSession`](#structFRHAPI__MatchSession) | 

## struct `FRHAPI_MatchSession` <a id="structFRHAPI__MatchSession"></a>

```
struct FRHAPI_MatchSession
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`SessionId`](#structFRHAPI__MatchSession_1a8b77d2997c9e8510dba7a59c146d84d0) | Session ID.
`public FString `[`MatchmakingProfileId_Optional`](#structFRHAPI__MatchSession_1ab7e89caa19dfe366a75e457dcce9df84) | 
`public bool `[`MatchmakingProfileId_IsSet`](#structFRHAPI__MatchSession_1aa41ad74778848a5236bae0c24c1bffc5) | true if MatchmakingProfileId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchSession_1a6a3b9a38f31bd1136e932684b590af10)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchSession_1a61e05e90bad5f3222c0821e2011fc5dc)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetSessionId`](#structFRHAPI__MatchSession_1ac8973b2343878c9fceb6d310ed416da4)`()` | Gets the value of SessionId.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__MatchSession_1ab792f83bd80f35cc28398b868b32981a)`() const` | Gets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__MatchSession_1a06ccbc1f963cc16610784876e401cc88)`(FString NewValue)` | Sets the value of SessionId.
`public inline FString & `[`GetMatchmakingProfileId`](#structFRHAPI__MatchSession_1a3898eb17198f2c6681b86988bffda047)`()` | Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchmakingProfileId`](#structFRHAPI__MatchSession_1a47feecaa9659cf650d96005b32b5d6d1)`() const` | Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchmakingProfileId`](#structFRHAPI__MatchSession_1a82856ac725a2d578ba99d314eb9401d4)`(const FString & DefaultValue) const` | Gets the value of MatchmakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchmakingProfileId`](#structFRHAPI__MatchSession_1ab554234d68fe02cccdfa012dae45c096)`(FString & OutValue) const` | Fills OutValue with the value of MatchmakingProfileId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchmakingProfileIdOrNull`](#structFRHAPI__MatchSession_1a5898021c34e711e1660ff68be84d3e95)`()` | Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchmakingProfileIdOrNull`](#structFRHAPI__MatchSession_1a78d9e35734195d65b78e589161d0f885)`() const` | Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchmakingProfileId`](#structFRHAPI__MatchSession_1a1b504817d4aba4032009f4fd5088d5c5)`(FString NewValue)` | Sets the value of MatchmakingProfileId_Optional and also sets MatchmakingProfileId_IsSet to true.
`public inline void `[`ClearMatchmakingProfileId`](#structFRHAPI__MatchSession_1a619a8b5b4a2c7348fd5a26f7c4b10caf)`()` | Clears the value of MatchmakingProfileId_Optional and sets MatchmakingProfileId_IsSet to false.

#### Members

#### `public FString `[`SessionId`](#structFRHAPI__MatchSession_1a8b77d2997c9e8510dba7a59c146d84d0) <a id="structFRHAPI__MatchSession_1a8b77d2997c9e8510dba7a59c146d84d0"></a>

Session ID.

#### `public FString `[`MatchmakingProfileId_Optional`](#structFRHAPI__MatchSession_1ab7e89caa19dfe366a75e457dcce9df84) <a id="structFRHAPI__MatchSession_1ab7e89caa19dfe366a75e457dcce9df84"></a>

#### `public bool `[`MatchmakingProfileId_IsSet`](#structFRHAPI__MatchSession_1aa41ad74778848a5236bae0c24c1bffc5) <a id="structFRHAPI__MatchSession_1aa41ad74778848a5236bae0c24c1bffc5"></a>

true if MatchmakingProfileId_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchSession_1a6a3b9a38f31bd1136e932684b590af10)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchSession_1a6a3b9a38f31bd1136e932684b590af10"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchSession_1a61e05e90bad5f3222c0821e2011fc5dc)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchSession_1a61e05e90bad5f3222c0821e2011fc5dc"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetSessionId`](#structFRHAPI__MatchSession_1ac8973b2343878c9fceb6d310ed416da4)`()` <a id="structFRHAPI__MatchSession_1ac8973b2343878c9fceb6d310ed416da4"></a>

Gets the value of SessionId.

#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__MatchSession_1ab792f83bd80f35cc28398b868b32981a)`() const` <a id="structFRHAPI__MatchSession_1ab792f83bd80f35cc28398b868b32981a"></a>

Gets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__MatchSession_1a06ccbc1f963cc16610784876e401cc88)`(FString NewValue)` <a id="structFRHAPI__MatchSession_1a06ccbc1f963cc16610784876e401cc88"></a>

Sets the value of SessionId.

#### `public inline FString & `[`GetMatchmakingProfileId`](#structFRHAPI__MatchSession_1a3898eb17198f2c6681b86988bffda047)`()` <a id="structFRHAPI__MatchSession_1a3898eb17198f2c6681b86988bffda047"></a>

Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchmakingProfileId`](#structFRHAPI__MatchSession_1a47feecaa9659cf650d96005b32b5d6d1)`() const` <a id="structFRHAPI__MatchSession_1a47feecaa9659cf650d96005b32b5d6d1"></a>

Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchmakingProfileId`](#structFRHAPI__MatchSession_1a82856ac725a2d578ba99d314eb9401d4)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchSession_1a82856ac725a2d578ba99d314eb9401d4"></a>

Gets the value of MatchmakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchmakingProfileId`](#structFRHAPI__MatchSession_1ab554234d68fe02cccdfa012dae45c096)`(FString & OutValue) const` <a id="structFRHAPI__MatchSession_1ab554234d68fe02cccdfa012dae45c096"></a>

Fills OutValue with the value of MatchmakingProfileId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchmakingProfileIdOrNull`](#structFRHAPI__MatchSession_1a5898021c34e711e1660ff68be84d3e95)`()` <a id="structFRHAPI__MatchSession_1a5898021c34e711e1660ff68be84d3e95"></a>

Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchmakingProfileIdOrNull`](#structFRHAPI__MatchSession_1a78d9e35734195d65b78e589161d0f885)`() const` <a id="structFRHAPI__MatchSession_1a78d9e35734195d65b78e589161d0f885"></a>

Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchmakingProfileId`](#structFRHAPI__MatchSession_1a1b504817d4aba4032009f4fd5088d5c5)`(FString NewValue)` <a id="structFRHAPI__MatchSession_1a1b504817d4aba4032009f4fd5088d5c5"></a>

Sets the value of MatchmakingProfileId_Optional and also sets MatchmakingProfileId_IsSet to true.

#### `public inline void `[`ClearMatchmakingProfileId`](#structFRHAPI__MatchSession_1a619a8b5b4a2c7348fd5a26f7c4b10caf)`()` <a id="structFRHAPI__MatchSession_1a619a8b5b4a2c7348fd5a26f7c4b10caf"></a>

Clears the value of MatchmakingProfileId_Optional and sets MatchmakingProfileId_IsSet to false.

