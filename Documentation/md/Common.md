---
title: Common
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FORCEINLINE uint32 `[`GetTypeHash`](#group__Common_1ga51b3d76527de2fccacb53501f14c7991)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlatformId)`            | Helper function to convert an [FRH_PlayerPlatformId](Common.md#structFRH__PlayerPlatformId) into a hash value.
`public FORCEINLINE uint32 `[`GetTypeHash`](#group__Common_1ga1f0dd0b6ea1d38b6a21ee6e7e87e9947)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory)`            | Helper function to convert an [FRH_RemoteFileApiDirectory](Common.md#structFRH__RemoteFileApiDirectory) into a hash value.
`struct `[`FRH_PlayerPlatformId`](#structFRH__PlayerPlatformId) | Common structure for identifying players on any known platform.
`struct `[`FRH_RemoteFileApiDirectory`](#structFRH__RemoteFileApiDirectory) | A tuple specifying the directory of a file in the remote file storage.

## Members

#### `public FORCEINLINE uint32 `[`GetTypeHash`](#group__Common_1ga51b3d76527de2fccacb53501f14c7991)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlatformId)` <a id="group__Common_1ga51b3d76527de2fccacb53501f14c7991"></a>

Helper function to convert an [FRH_PlayerPlatformId](Common.md#structFRH__PlayerPlatformId) into a hash value.

#### Parameters
* `PlatformId` The platform id to generate a hash for 

#### Returns
Semi-unique hash value for the given platform id

#### `public FORCEINLINE uint32 `[`GetTypeHash`](#group__Common_1ga1f0dd0b6ea1d38b6a21ee6e7e87e9947)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory)` <a id="group__Common_1ga1f0dd0b6ea1d38b6a21ee6e7e87e9947"></a>

Helper function to convert an [FRH_RemoteFileApiDirectory](Common.md#structFRH__RemoteFileApiDirectory) into a hash value.

#### Parameters
* `Directory` The directory to generate a hash for 

#### Returns
Semi-unique hash value for the given directory

## struct `FRH_PlayerPlatformId` <a id="structFRH__PlayerPlatformId"></a>

Common structure for identifying players on any known platform.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`UserId`](#structFRH__PlayerPlatformId_1ab1b096a248e38084753556d23a99ccf3) | Player identifier for the given platform type.
`public ERHAPI_Platform `[`PlatformType`](#structFRH__PlayerPlatformId_1a16ea8acca5079ee72ef5633463f84cab) | Platform type of this identifier.
`public inline FORCEINLINE bool `[`IsValid`](#structFRH__PlayerPlatformId_1a093b1a390755ba0891d56117e281d51e)`() const` | Returns whether or not this player platform ID has been filled with sensible data.
`public inline bool `[`operator==`](#structFRH__PlayerPlatformId_1a1632682be2ed79e28b8b29c185377efa)`(const `[`FRH_PlayerPlatformId`](#structFRH__PlayerPlatformId)` & Other) const` | Returns whether or not this player platform ID exactly matches the given player platform ID.
`public inline  `[`FRH_PlayerPlatformId`](#structFRH__PlayerPlatformId_1a3e5948f39ab1702a82a8804dc458cc41)`()` | Default constructor that leaves the user ID empty and sets the platform type to "unknown".
`public inline  `[`FRH_PlayerPlatformId`](#structFRH__PlayerPlatformId_1afa9903b50c919271e478b89f7a3c68dc)`(const FString & InUserId,ERHAPI_Platform InPlatformType)` | Constructor for specifying user ID and platform type.

### Members

#### `public FString `[`UserId`](#structFRH__PlayerPlatformId_1ab1b096a248e38084753556d23a99ccf3) <a id="structFRH__PlayerPlatformId_1ab1b096a248e38084753556d23a99ccf3"></a>

Player identifier for the given platform type.

#### `public ERHAPI_Platform `[`PlatformType`](#structFRH__PlayerPlatformId_1a16ea8acca5079ee72ef5633463f84cab) <a id="structFRH__PlayerPlatformId_1a16ea8acca5079ee72ef5633463f84cab"></a>

Platform type of this identifier.

#### `public inline FORCEINLINE bool `[`IsValid`](#structFRH__PlayerPlatformId_1a093b1a390755ba0891d56117e281d51e)`() const` <a id="structFRH__PlayerPlatformId_1a093b1a390755ba0891d56117e281d51e"></a>

Returns whether or not this player platform ID has been filled with sensible data.

#### `public inline bool `[`operator==`](#structFRH__PlayerPlatformId_1a1632682be2ed79e28b8b29c185377efa)`(const `[`FRH_PlayerPlatformId`](#structFRH__PlayerPlatformId)` & Other) const` <a id="structFRH__PlayerPlatformId_1a1632682be2ed79e28b8b29c185377efa"></a>

Returns whether or not this player platform ID exactly matches the given player platform ID.

#### `public inline  `[`FRH_PlayerPlatformId`](#structFRH__PlayerPlatformId_1a3e5948f39ab1702a82a8804dc458cc41)`()` <a id="structFRH__PlayerPlatformId_1a3e5948f39ab1702a82a8804dc458cc41"></a>

Default constructor that leaves the user ID empty and sets the platform type to "unknown".

#### `public inline  `[`FRH_PlayerPlatformId`](#structFRH__PlayerPlatformId_1afa9903b50c919271e478b89f7a3c68dc)`(const FString & InUserId,ERHAPI_Platform InPlatformType)` <a id="structFRH__PlayerPlatformId_1afa9903b50c919271e478b89f7a3c68dc"></a>

Constructor for specifying user ID and platform type.

## struct `FRH_RemoteFileApiDirectory` <a id="structFRH__RemoteFileApiDirectory"></a>

A tuple specifying the directory of a file in the remote file storage.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_FileType `[`FileType`](#structFRH__RemoteFileApiDirectory_1a1986a05bf105acf8d7cb3ccb245c4b67) | The type of file to upload/download
`public ERHAPI_EntityType `[`EntityType`](#structFRH__RemoteFileApiDirectory_1ac1fbbf236dd5683c0189b58ace4c546b) | The type of entity the file is associated with
`public FString `[`EntityId`](#structFRH__RemoteFileApiDirectory_1a4065838f5ba174048afd65330a29409d) | The id of the entity the file is associated with
`public  `[`GENERATED_USTRUCT_BODY`](#structFRH__RemoteFileApiDirectory_1acd97265b9b2a315fbe5eb2aa63c5e67d)`()` | 
`public inline  `[`FRH_RemoteFileApiDirectory`](#structFRH__RemoteFileApiDirectory_1a56911df486ef89c7096aed2c11cbf837)`()` | 
`public inline  `[`FRH_RemoteFileApiDirectory`](#structFRH__RemoteFileApiDirectory_1a2098f9e4b8b8b88060886f87d8e394d2)`(ERHAPI_FileType InFileType,ERHAPI_EntityType InEntityType,const FString & InEntityId)` | 
`public inline bool `[`operator==`](#structFRH__RemoteFileApiDirectory_1a96fe3372945cbf4ffef30c1519bd1432)`(const `[`FRH_RemoteFileApiDirectory`](#structFRH__RemoteFileApiDirectory)` & Other) const` | Comparison operator.
`public inline bool `[`IsValid`](#structFRH__RemoteFileApiDirectory_1aaae4e108ecd39fb74c4ce279e20304a3)`() const` | 
`public inline FString `[`ToDescriptionString`](#structFRH__RemoteFileApiDirectory_1a2b39ae30546135d8802a1663893948bc)`() const` | Get a string representation of the directory.

### Members

#### `public ERHAPI_FileType `[`FileType`](#structFRH__RemoteFileApiDirectory_1a1986a05bf105acf8d7cb3ccb245c4b67) <a id="structFRH__RemoteFileApiDirectory_1a1986a05bf105acf8d7cb3ccb245c4b67"></a>

The type of file to upload/download

#### `public ERHAPI_EntityType `[`EntityType`](#structFRH__RemoteFileApiDirectory_1ac1fbbf236dd5683c0189b58ace4c546b) <a id="structFRH__RemoteFileApiDirectory_1ac1fbbf236dd5683c0189b58ace4c546b"></a>

The type of entity the file is associated with

#### `public FString `[`EntityId`](#structFRH__RemoteFileApiDirectory_1a4065838f5ba174048afd65330a29409d) <a id="structFRH__RemoteFileApiDirectory_1a4065838f5ba174048afd65330a29409d"></a>

The id of the entity the file is associated with

#### `public  `[`GENERATED_USTRUCT_BODY`](#structFRH__RemoteFileApiDirectory_1acd97265b9b2a315fbe5eb2aa63c5e67d)`()` <a id="structFRH__RemoteFileApiDirectory_1acd97265b9b2a315fbe5eb2aa63c5e67d"></a>

#### `public inline  `[`FRH_RemoteFileApiDirectory`](#structFRH__RemoteFileApiDirectory_1a56911df486ef89c7096aed2c11cbf837)`()` <a id="structFRH__RemoteFileApiDirectory_1a56911df486ef89c7096aed2c11cbf837"></a>

#### `public inline  `[`FRH_RemoteFileApiDirectory`](#structFRH__RemoteFileApiDirectory_1a2098f9e4b8b8b88060886f87d8e394d2)`(ERHAPI_FileType InFileType,ERHAPI_EntityType InEntityType,const FString & InEntityId)` <a id="structFRH__RemoteFileApiDirectory_1a2098f9e4b8b8b88060886f87d8e394d2"></a>

#### `public inline bool `[`operator==`](#structFRH__RemoteFileApiDirectory_1a96fe3372945cbf4ffef30c1519bd1432)`(const `[`FRH_RemoteFileApiDirectory`](#structFRH__RemoteFileApiDirectory)` & Other) const` <a id="structFRH__RemoteFileApiDirectory_1a96fe3372945cbf4ffef30c1519bd1432"></a>

Comparison operator.

#### `public inline bool `[`IsValid`](#structFRH__RemoteFileApiDirectory_1aaae4e108ecd39fb74c4ce279e20304a3)`() const` <a id="structFRH__RemoteFileApiDirectory_1aaae4e108ecd39fb74c4ce279e20304a3"></a>

#### `public inline FString `[`ToDescriptionString`](#structFRH__RemoteFileApiDirectory_1a2b39ae30546135d8802a1663893948bc)`() const` <a id="structFRH__RemoteFileApiDirectory_1a2b39ae30546135d8802a1663893948bc"></a>

Get a string representation of the directory.

#### Returns
A string representation of the directory

