---
title: FRH_PlayerPlatformId Struct
---
Common structure for identifying players on any known platform.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[UserId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId_1ab1b096a248e38084753556d23a99ccf3)|Player identifier for the given platform type.|
|ERHAPI_Platform|[PlatformType](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId_1a16ea8acca5079ee72ef5633463f84cab)|Platform type of this identifier.|
|FORCEINLINE bool|[IsValid](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId_1a093b1a390755ba0891d56117e281d51e)()|Returns whether or not this player platform ID has been filled with sensible data.|
|bool|[operator==](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId_1a1632682be2ed79e28b8b29c185377efa)(const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) & Other)|Returns whether or not this player platform ID exactly matches the given player platform ID.|
||[FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId_1a3e5948f39ab1702a82a8804dc458cc41)()|Default constructor that leaves the user ID empty and sets the platform type to "unknown".|
||[FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId_1afa9903b50c919271e478b89f7a3c68dc)(const FString & InUserId, ERHAPI_Platform InPlatformType)|Constructor for specifying user ID and platform type.|
## Public Attributes



### `UserId` <a id="structFRH__PlayerPlatformId_1ab1b096a248e38084753556d23a99ccf3"></a>

`FString FRH_PlayerPlatformId::UserId`

Player identifier for the given platform type.




### `PlatformType` <a id="structFRH__PlayerPlatformId_1a16ea8acca5079ee72ef5633463f84cab"></a>

`ERHAPI_Platform FRH_PlayerPlatformId::PlatformType`

Platform type of this identifier.





## Public Functions



### `IsValid` <a id="structFRH__PlayerPlatformId_1a093b1a390755ba0891d56117e281d51e"></a>

FORCEINLINE bool IsValid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns whether or not this player platform ID has been filled with sensible data.




### `operator==` <a id="structFRH__PlayerPlatformId_1a1632682be2ed79e28b8b29c185377efa"></a>

bool operator==(const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) & Other)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) &|Other|

#### Description

Returns whether or not this player platform ID exactly matches the given player platform ID.




### `FRH_PlayerPlatformId` <a id="structFRH__PlayerPlatformId_1a3e5948f39ab1702a82a8804dc458cc41"></a>

 FRH_PlayerPlatformId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Default constructor that leaves the user ID empty and sets the platform type to "unknown".




### `FRH_PlayerPlatformId` <a id="structFRH__PlayerPlatformId_1afa9903b50c919271e478b89f7a3c68dc"></a>

 FRH_PlayerPlatformId(const FString & InUserId, ERHAPI_Platform InPlatformType)

#### Parameters

| Type | Name |
|------|------|
|const FString &|InUserId|
|ERHAPI_Platform|InPlatformType|

#### Description

Constructor for specifying user ID and platform type.





