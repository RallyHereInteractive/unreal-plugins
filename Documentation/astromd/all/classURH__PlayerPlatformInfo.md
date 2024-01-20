---
title: URH_PlayerPlatformInfo Class
---Inherits from UObject

Stores information a specific platform the player has linked to their account.

## Summary
| Kind | View | Description |
|------|------|-------------|
|[FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId)|[PlayerPlatformId](/unreal-plugins/all/classurh__playerplatforminfo/#classURH__PlayerPlatformInfo_1ac0ef7725316040314b2488260850eabb)|Players Platform ID struct.|
|FString|[DisplayName](/unreal-plugins/all/classurh__playerplatforminfo/#classURH__PlayerPlatformInfo_1a056f2023dd209b4807ac14a699cd594e)|Last seen display name for the player on the platform.|
|FORCEINLINE [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId)|[GetPlayerPlatformId](/unreal-plugins/all/classurh__playerplatforminfo/#classURH__PlayerPlatformInfo_1a01087e75b35b862c18d8579f9d84a7ba)()|Gets the Platform Id struct for the player.|
|FORCEINLINE FString|[GetPlatformUserId](/unreal-plugins/all/classurh__playerplatforminfo/#classURH__PlayerPlatformInfo_1abf743e9775a21e9526ec50775f9491c1)()|Gets the Platform Id for the player.|
|FORCEINLINE ERHAPI_Platform|[GetPlatform](/unreal-plugins/all/classurh__playerplatforminfo/#classURH__PlayerPlatformInfo_1a3dd011d8a3919bc528adc47cad307cf0)()|Gets the Platform Type for the player.|
|FORCEINLINE FString|[GetLastKnownDisplayName](/unreal-plugins/all/classurh__playerplatforminfo/#classURH__PlayerPlatformInfo_1ab91b2f7ba0378669bc1a2b756c2ba940)()|Gets the display name stored the last time this player logged in to the Rally Here server.|
## Public Attributes



### `PlayerPlatformId` <a id="classURH__PlayerPlatformInfo_1ac0ef7725316040314b2488260850eabb"></a>

`FRH_PlayerPlatformId URH_PlayerPlatformInfo::PlayerPlatformId`

Players Platform ID struct.




### `DisplayName` <a id="classURH__PlayerPlatformInfo_1a056f2023dd209b4807ac14a699cd594e"></a>

`FString URH_PlayerPlatformInfo::DisplayName`

Last seen display name for the player on the platform.





## Public Functions



### `GetPlayerPlatformId` <a id="classURH__PlayerPlatformInfo_1a01087e75b35b862c18d8579f9d84a7ba"></a>

FORCEINLINE [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) GetPlayerPlatformId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Platform Id struct for the player.



#### Returns
The players Platform Id struct. 



### `GetPlatformUserId` <a id="classURH__PlayerPlatformInfo_1abf743e9775a21e9526ec50775f9491c1"></a>

FORCEINLINE FString GetPlatformUserId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Platform Id for the player.



#### Returns
The players Platform Unique Id. 



### `GetPlatform` <a id="classURH__PlayerPlatformInfo_1a3dd011d8a3919bc528adc47cad307cf0"></a>

FORCEINLINE ERHAPI_Platform GetPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Platform Type for the player.



#### Returns
The players Platform Type. 



### `GetLastKnownDisplayName` <a id="classURH__PlayerPlatformInfo_1ab91b2f7ba0378669bc1a2b756c2ba940"></a>

FORCEINLINE FString GetLastKnownDisplayName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the display name stored the last time this player logged in to the Rally Here server.



#### Returns
The players display name for the platform. 




