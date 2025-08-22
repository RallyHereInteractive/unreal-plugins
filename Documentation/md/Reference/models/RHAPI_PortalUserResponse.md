---
title: RHAPI_PortalUserResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PortalUserResponse`](#structFRHAPI__PortalUserResponse) | 

## struct `FRHAPI_PortalUserResponse` <a id="structFRHAPI__PortalUserResponse"></a>

```
struct FRHAPI_PortalUserResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`PortalUserId_Optional`](#structFRHAPI__PortalUserResponse_1aa4044be39cec42ef3d95b808606ca2ae) | Portal user ID.
`public bool `[`PortalUserId_IsSet`](#structFRHAPI__PortalUserResponse_1ac7b290f0f2bbe598c77e652c134bdade) | true if PortalUserId_Optional has been set to a value
`public int32 `[`PortalId`](#structFRHAPI__PortalUserResponse_1a1e7b5c3a59e3c42f4818ea2597b99eb0) | Portal ID *DEPRECATED* use `platform` instead.
`public ERHAPI_Platform `[`Platform`](#structFRHAPI__PortalUserResponse_1abc32c735669c374aca93d5acd7085d3f) | Platform.
`public FString `[`DisplayName_Optional`](#structFRHAPI__PortalUserResponse_1a77bbe891aceb9ccd53b8c053a9d57466) | Display name.
`public bool `[`DisplayName_IsSet`](#structFRHAPI__PortalUserResponse_1a758e573c69f5c1d4ad97895109cdcee0) | true if DisplayName_Optional has been set to a value
`public int32 `[`PlayerId`](#structFRHAPI__PortalUserResponse_1a2d6b6d603819120e125c82b880776263) | Player ID *DEPRECATED* use `player_uuid` instead.
`public FGuid `[`PlayerUuid`](#structFRHAPI__PortalUserResponse_1a66933b04170b4adc512d07ccf09d0ddf) | Player UUID.
`public virtual bool `[`FromJson`](#structFRHAPI__PortalUserResponse_1afaef0cb3b0e9eb074dfd1989b82567f8)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PortalUserResponse_1a6cf2cea2759638d67b5352bdce4fba20)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserResponse_1a20c606736a1abc1278cb3ac46c0d768f)`()` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserResponse_1ab5bcea492254988a681a528d525fb295)`() const` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserResponse_1ab9e7a24ea030b7f37f2b0995b2543b05)`(const FString & DefaultValue) const` | Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPortalUserId`](#structFRHAPI__PortalUserResponse_1a9e700e11a237dc5f122b4440515ff0b0)`(FString & OutValue) const` | Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PortalUserResponse_1ae3229ba0d37d11776a38fa63fad16c22)`()` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PortalUserResponse_1a55b57649e0baa6e835a69a9fe895baa8)`() const` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__PortalUserResponse_1a5fa94e9f4bb492727fd5185097b5c250)`(const FString & NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.
`public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__PortalUserResponse_1a39a8c3262a13a473c9a3d8f3177e1ac1)`(FString && NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.
`public inline void `[`ClearPortalUserId`](#structFRHAPI__PortalUserResponse_1aad55dab5c2f1d56b26e86181c1d70db8)`()` | Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetPortalId`](#structFRHAPI__PortalUserResponse_1a29d611fb0d76cf8f498d9b88fea4fa46)`()` | Gets the value of PortalId.
`public inline FORCEINLINE const int32 & `[`GetPortalId`](#structFRHAPI__PortalUserResponse_1a2c7aaf914bcbca5be54adde5c8168499)`() const` | Gets the value of PortalId.
`public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__PortalUserResponse_1a60394aaf751e5aae0e2de9a4bfd042e5)`(const int32 & NewValue)` | Sets the value of PortalId.
`public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__PortalUserResponse_1a989d930491fec670fd3a37b039a9f5de)`(int32 && NewValue)` | Sets the value of PortalId using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PortalId`](#structFRHAPI__PortalUserResponse_1ae237fd4287e41b138a39e8d837f8c188)`()` | Returns the default value of PortalId.
`public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserResponse_1adf27be8f25af723ce88ceaeb71ed7b2a)`()` | Gets the value of Platform.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserResponse_1ad606bc744cb613222c9c58ed380dd40b)`() const` | Gets the value of Platform.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PortalUserResponse_1a8b7f34d4db3da21deec5838319c54f89)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PortalUserResponse_1a39e1140f4238ed70d03c40af480cec26)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform using move semantics.
`public inline FORCEINLINE FString & `[`GetDisplayName`](#structFRHAPI__PortalUserResponse_1af0a1890796f9dbc15fdc4cf6e2473883)`()` | Gets the value of DisplayName_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDisplayName`](#structFRHAPI__PortalUserResponse_1a8bbad692cb4cc449eb09b2ea41d9d45a)`() const` | Gets the value of DisplayName_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDisplayName`](#structFRHAPI__PortalUserResponse_1aa76f8a73904c65ff86c87bfcff2d8d2c)`(const FString & DefaultValue) const` | Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDisplayName`](#structFRHAPI__PortalUserResponse_1ad6abffd2f8781b37bfcc600ad8e316c4)`(FString & OutValue) const` | Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PortalUserResponse_1a429ab50a5e485ec5c1a32f610c7f351e)`()` | Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PortalUserResponse_1aa426ad7c5da02ae1d7fd212c43177bde)`() const` | Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__PortalUserResponse_1a53fad6742eed713fb4458b8a76b97215)`(const FString & NewValue)` | Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.
`public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__PortalUserResponse_1a48b46ec33a229c32a820758b215a0b6f)`(FString && NewValue)` | Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true using move semantics.
`public inline void `[`ClearDisplayName`](#structFRHAPI__PortalUserResponse_1af3483949dd8f34604018d03fe5d13d06)`()` | Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetPlayerId`](#structFRHAPI__PortalUserResponse_1a94155aa9f2aa014a2c724ba0c1b0d906)`()` | Gets the value of PlayerId.
`public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__PortalUserResponse_1af7fe0c81147d63e9ab7c438ca697ca8d)`() const` | Gets the value of PlayerId.
`public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PortalUserResponse_1a7a945a064716130f8dc37cc1cd1e8adb)`(const int32 & NewValue)` | Sets the value of PlayerId.
`public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PortalUserResponse_1a71d3e6d0fb14b8333618570de9dc2ec3)`(int32 && NewValue)` | Sets the value of PlayerId using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerId`](#structFRHAPI__PortalUserResponse_1a78f0781f939a8ff25c57338125a17a80)`()` | Returns the default value of PlayerId.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PortalUserResponse_1aac40243b2ba1cf89c1aeafcb4d388e27)`()` | Gets the value of PlayerUuid.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PortalUserResponse_1a10caf8ae95f9ac845c582d12c107b852)`() const` | Gets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PortalUserResponse_1a614661d502b7f253f1d77052e4c0d4a9)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PortalUserResponse_1ae133b67500274058899f468764a6b49b)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.

### Members

#### `public FString `[`PortalUserId_Optional`](#structFRHAPI__PortalUserResponse_1aa4044be39cec42ef3d95b808606ca2ae) <a id="structFRHAPI__PortalUserResponse_1aa4044be39cec42ef3d95b808606ca2ae"></a>

Portal user ID.

#### `public bool `[`PortalUserId_IsSet`](#structFRHAPI__PortalUserResponse_1ac7b290f0f2bbe598c77e652c134bdade) <a id="structFRHAPI__PortalUserResponse_1ac7b290f0f2bbe598c77e652c134bdade"></a>

true if PortalUserId_Optional has been set to a value

#### `public int32 `[`PortalId`](#structFRHAPI__PortalUserResponse_1a1e7b5c3a59e3c42f4818ea2597b99eb0) <a id="structFRHAPI__PortalUserResponse_1a1e7b5c3a59e3c42f4818ea2597b99eb0"></a>

Portal ID *DEPRECATED* use `platform` instead.

#### `public ERHAPI_Platform `[`Platform`](#structFRHAPI__PortalUserResponse_1abc32c735669c374aca93d5acd7085d3f) <a id="structFRHAPI__PortalUserResponse_1abc32c735669c374aca93d5acd7085d3f"></a>

Platform.

#### `public FString `[`DisplayName_Optional`](#structFRHAPI__PortalUserResponse_1a77bbe891aceb9ccd53b8c053a9d57466) <a id="structFRHAPI__PortalUserResponse_1a77bbe891aceb9ccd53b8c053a9d57466"></a>

Display name.

#### `public bool `[`DisplayName_IsSet`](#structFRHAPI__PortalUserResponse_1a758e573c69f5c1d4ad97895109cdcee0) <a id="structFRHAPI__PortalUserResponse_1a758e573c69f5c1d4ad97895109cdcee0"></a>

true if DisplayName_Optional has been set to a value

#### `public int32 `[`PlayerId`](#structFRHAPI__PortalUserResponse_1a2d6b6d603819120e125c82b880776263) <a id="structFRHAPI__PortalUserResponse_1a2d6b6d603819120e125c82b880776263"></a>

Player ID *DEPRECATED* use `player_uuid` instead.

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__PortalUserResponse_1a66933b04170b4adc512d07ccf09d0ddf) <a id="structFRHAPI__PortalUserResponse_1a66933b04170b4adc512d07ccf09d0ddf"></a>

Player UUID.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PortalUserResponse_1afaef0cb3b0e9eb074dfd1989b82567f8)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PortalUserResponse_1afaef0cb3b0e9eb074dfd1989b82567f8"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PortalUserResponse_1a6cf2cea2759638d67b5352bdce4fba20)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PortalUserResponse_1a6cf2cea2759638d67b5352bdce4fba20"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserResponse_1a20c606736a1abc1278cb3ac46c0d768f)`()` <a id="structFRHAPI__PortalUserResponse_1a20c606736a1abc1278cb3ac46c0d768f"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserResponse_1ab5bcea492254988a681a528d525fb295)`() const` <a id="structFRHAPI__PortalUserResponse_1ab5bcea492254988a681a528d525fb295"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserResponse_1ab9e7a24ea030b7f37f2b0995b2543b05)`(const FString & DefaultValue) const` <a id="structFRHAPI__PortalUserResponse_1ab9e7a24ea030b7f37f2b0995b2543b05"></a>

Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPortalUserId`](#structFRHAPI__PortalUserResponse_1a9e700e11a237dc5f122b4440515ff0b0)`(FString & OutValue) const` <a id="structFRHAPI__PortalUserResponse_1a9e700e11a237dc5f122b4440515ff0b0"></a>

Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PortalUserResponse_1ae3229ba0d37d11776a38fa63fad16c22)`()` <a id="structFRHAPI__PortalUserResponse_1ae3229ba0d37d11776a38fa63fad16c22"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PortalUserResponse_1a55b57649e0baa6e835a69a9fe895baa8)`() const` <a id="structFRHAPI__PortalUserResponse_1a55b57649e0baa6e835a69a9fe895baa8"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__PortalUserResponse_1a5fa94e9f4bb492727fd5185097b5c250)`(const FString & NewValue)` <a id="structFRHAPI__PortalUserResponse_1a5fa94e9f4bb492727fd5185097b5c250"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__PortalUserResponse_1a39a8c3262a13a473c9a3d8f3177e1ac1)`(FString && NewValue)` <a id="structFRHAPI__PortalUserResponse_1a39a8c3262a13a473c9a3d8f3177e1ac1"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalUserId`](#structFRHAPI__PortalUserResponse_1aad55dab5c2f1d56b26e86181c1d70db8)`()` <a id="structFRHAPI__PortalUserResponse_1aad55dab5c2f1d56b26e86181c1d70db8"></a>

Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetPortalId`](#structFRHAPI__PortalUserResponse_1a29d611fb0d76cf8f498d9b88fea4fa46)`()` <a id="structFRHAPI__PortalUserResponse_1a29d611fb0d76cf8f498d9b88fea4fa46"></a>

Gets the value of PortalId.

#### `public inline FORCEINLINE const int32 & `[`GetPortalId`](#structFRHAPI__PortalUserResponse_1a2c7aaf914bcbca5be54adde5c8168499)`() const` <a id="structFRHAPI__PortalUserResponse_1a2c7aaf914bcbca5be54adde5c8168499"></a>

Gets the value of PortalId.

#### `public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__PortalUserResponse_1a60394aaf751e5aae0e2de9a4bfd042e5)`(const int32 & NewValue)` <a id="structFRHAPI__PortalUserResponse_1a60394aaf751e5aae0e2de9a4bfd042e5"></a>

Sets the value of PortalId.

#### `public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__PortalUserResponse_1a989d930491fec670fd3a37b039a9f5de)`(int32 && NewValue)` <a id="structFRHAPI__PortalUserResponse_1a989d930491fec670fd3a37b039a9f5de"></a>

Sets the value of PortalId using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PortalId`](#structFRHAPI__PortalUserResponse_1ae237fd4287e41b138a39e8d837f8c188)`()` <a id="structFRHAPI__PortalUserResponse_1ae237fd4287e41b138a39e8d837f8c188"></a>

Returns the default value of PortalId.

#### `public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserResponse_1adf27be8f25af723ce88ceaeb71ed7b2a)`()` <a id="structFRHAPI__PortalUserResponse_1adf27be8f25af723ce88ceaeb71ed7b2a"></a>

Gets the value of Platform.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserResponse_1ad606bc744cb613222c9c58ed380dd40b)`() const` <a id="structFRHAPI__PortalUserResponse_1ad606bc744cb613222c9c58ed380dd40b"></a>

Gets the value of Platform.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PortalUserResponse_1a8b7f34d4db3da21deec5838319c54f89)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PortalUserResponse_1a8b7f34d4db3da21deec5838319c54f89"></a>

Sets the value of Platform.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PortalUserResponse_1a39e1140f4238ed70d03c40af480cec26)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PortalUserResponse_1a39e1140f4238ed70d03c40af480cec26"></a>

Sets the value of Platform using move semantics.

#### `public inline FORCEINLINE FString & `[`GetDisplayName`](#structFRHAPI__PortalUserResponse_1af0a1890796f9dbc15fdc4cf6e2473883)`()` <a id="structFRHAPI__PortalUserResponse_1af0a1890796f9dbc15fdc4cf6e2473883"></a>

Gets the value of DisplayName_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDisplayName`](#structFRHAPI__PortalUserResponse_1a8bbad692cb4cc449eb09b2ea41d9d45a)`() const` <a id="structFRHAPI__PortalUserResponse_1a8bbad692cb4cc449eb09b2ea41d9d45a"></a>

Gets the value of DisplayName_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDisplayName`](#structFRHAPI__PortalUserResponse_1aa76f8a73904c65ff86c87bfcff2d8d2c)`(const FString & DefaultValue) const` <a id="structFRHAPI__PortalUserResponse_1aa76f8a73904c65ff86c87bfcff2d8d2c"></a>

Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDisplayName`](#structFRHAPI__PortalUserResponse_1ad6abffd2f8781b37bfcc600ad8e316c4)`(FString & OutValue) const` <a id="structFRHAPI__PortalUserResponse_1ad6abffd2f8781b37bfcc600ad8e316c4"></a>

Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PortalUserResponse_1a429ab50a5e485ec5c1a32f610c7f351e)`()` <a id="structFRHAPI__PortalUserResponse_1a429ab50a5e485ec5c1a32f610c7f351e"></a>

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PortalUserResponse_1aa426ad7c5da02ae1d7fd212c43177bde)`() const` <a id="structFRHAPI__PortalUserResponse_1aa426ad7c5da02ae1d7fd212c43177bde"></a>

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__PortalUserResponse_1a53fad6742eed713fb4458b8a76b97215)`(const FString & NewValue)` <a id="structFRHAPI__PortalUserResponse_1a53fad6742eed713fb4458b8a76b97215"></a>

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__PortalUserResponse_1a48b46ec33a229c32a820758b215a0b6f)`(FString && NewValue)` <a id="structFRHAPI__PortalUserResponse_1a48b46ec33a229c32a820758b215a0b6f"></a>

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true using move semantics.

#### `public inline void `[`ClearDisplayName`](#structFRHAPI__PortalUserResponse_1af3483949dd8f34604018d03fe5d13d06)`()` <a id="structFRHAPI__PortalUserResponse_1af3483949dd8f34604018d03fe5d13d06"></a>

Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetPlayerId`](#structFRHAPI__PortalUserResponse_1a94155aa9f2aa014a2c724ba0c1b0d906)`()` <a id="structFRHAPI__PortalUserResponse_1a94155aa9f2aa014a2c724ba0c1b0d906"></a>

Gets the value of PlayerId.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__PortalUserResponse_1af7fe0c81147d63e9ab7c438ca697ca8d)`() const` <a id="structFRHAPI__PortalUserResponse_1af7fe0c81147d63e9ab7c438ca697ca8d"></a>

Gets the value of PlayerId.

#### `public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PortalUserResponse_1a7a945a064716130f8dc37cc1cd1e8adb)`(const int32 & NewValue)` <a id="structFRHAPI__PortalUserResponse_1a7a945a064716130f8dc37cc1cd1e8adb"></a>

Sets the value of PlayerId.

#### `public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PortalUserResponse_1a71d3e6d0fb14b8333618570de9dc2ec3)`(int32 && NewValue)` <a id="structFRHAPI__PortalUserResponse_1a71d3e6d0fb14b8333618570de9dc2ec3"></a>

Sets the value of PlayerId using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerId`](#structFRHAPI__PortalUserResponse_1a78f0781f939a8ff25c57338125a17a80)`()` <a id="structFRHAPI__PortalUserResponse_1a78f0781f939a8ff25c57338125a17a80"></a>

Returns the default value of PlayerId.

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PortalUserResponse_1aac40243b2ba1cf89c1aeafcb4d388e27)`()` <a id="structFRHAPI__PortalUserResponse_1aac40243b2ba1cf89c1aeafcb4d388e27"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PortalUserResponse_1a10caf8ae95f9ac845c582d12c107b852)`() const` <a id="structFRHAPI__PortalUserResponse_1a10caf8ae95f9ac845c582d12c107b852"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PortalUserResponse_1a614661d502b7f253f1d77052e4c0d4a9)`(const FGuid & NewValue)` <a id="structFRHAPI__PortalUserResponse_1a614661d502b7f253f1d77052e4c0d4a9"></a>

Sets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PortalUserResponse_1ae133b67500274058899f468764a6b49b)`(FGuid && NewValue)` <a id="structFRHAPI__PortalUserResponse_1ae133b67500274058899f468764a6b49b"></a>

Sets the value of PlayerUuid using move semantics.

