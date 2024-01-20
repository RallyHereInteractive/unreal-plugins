---
title: FRH_LoginResult Struct
---
Struct for the login results.

## Summary
| Kind | View | Description |
|------|------|-------------|
|[ERHAPI_LoginResult](/unreal-plugins/group__localplayer/#group__LocalPlayer_1ga5586f9656a43fac1030c013575a0f0c0)|[Result](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult_1a9080e046d94049f24ff36862a570ad08)|Login Result.|
|[ERHAPI_LocalPlayerLoginOSS](/unreal-plugins/group__localplayer/#group__LocalPlayer_1ga0aae9d7dd1467ba0ef09be86df25b7a2)|[OSSType](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult_1a8639eb11fe9d1f489df4247f94480ad6)|Login OSS Type.|
|FString|[OSSErrorMessage](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult_1a415022baa86bf765be7ae7c8ce50fa8f)|Login Error Message.|
|FString|[RallyHereErrorCode](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult_1ac43de6491cea17e487ef4fa572f42dfa)|RallyHere API Auth Error Code.|
|TSharedPtr< const FUniqueNetId >|[OSSUniqueId](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult_1a4961ad93a8bf87858fcf3a0b7d41ba26)|Unique Net Id for the player.|
|TSharedPtr< const FUniqueNetId >|[NicknameOSSUniqueId](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult_1a0badf8d64f580c391a152642ed9b2ff8)|Unique Net ID for the player when using Nickname Login.|
|uint32|[PrivilegeResults](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult_1a0348a5f8c7982ea7a648276df7096998)|Privilege Result for the login.|
|bool|[bMustAcceptEULA](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult_1a3b1a5425c4ad3df85754d7828afa429f)|If true, the user needs to accept the EULA.|
|bool|[bMustAcceptTOS](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult_1a662f76700fe5dd56560bb7df514b0b6a)|If true, the user needs to accept the TOS.|
|bool|[bMustAcceptPP](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult_1a0f6674180918672b79770379a8af937c)|If true, the user needs to accept the PP.|
||[FRH_LoginResult](/unreal-plugins/all/structfrh__loginresult/#structFRH__LoginResult_1ae2afa140ce5f64ea98bddda688ebc1b9)()|Default constructor.|
## Public Attributes



### `Result` <a id="structFRH__LoginResult_1a9080e046d94049f24ff36862a570ad08"></a>

`ERHAPI_LoginResult FRH_LoginResult::Result`

Login Result.




### `OSSType` <a id="structFRH__LoginResult_1a8639eb11fe9d1f489df4247f94480ad6"></a>

`ERHAPI_LocalPlayerLoginOSS FRH_LoginResult::OSSType`

Login OSS Type.




### `OSSErrorMessage` <a id="structFRH__LoginResult_1a415022baa86bf765be7ae7c8ce50fa8f"></a>

`FString FRH_LoginResult::OSSErrorMessage`

Login Error Message.




### `RallyHereErrorCode` <a id="structFRH__LoginResult_1ac43de6491cea17e487ef4fa572f42dfa"></a>

`FString FRH_LoginResult::RallyHereErrorCode`

RallyHere API Auth Error Code.




### `OSSUniqueId` <a id="structFRH__LoginResult_1a4961ad93a8bf87858fcf3a0b7d41ba26"></a>

`TSharedPtr<const FUniqueNetId> FRH_LoginResult::OSSUniqueId`

Unique Net Id for the player.




### `NicknameOSSUniqueId` <a id="structFRH__LoginResult_1a0badf8d64f580c391a152642ed9b2ff8"></a>

`TSharedPtr<const FUniqueNetId> FRH_LoginResult::NicknameOSSUniqueId`

Unique Net ID for the player when using Nickname Login.




### `PrivilegeResults` <a id="structFRH__LoginResult_1a0348a5f8c7982ea7a648276df7096998"></a>

`uint32 FRH_LoginResult::PrivilegeResults`

Privilege Result for the login.




### `bMustAcceptEULA` <a id="structFRH__LoginResult_1a3b1a5425c4ad3df85754d7828afa429f"></a>

`bool FRH_LoginResult::bMustAcceptEULA`

If true, the user needs to accept the EULA.




### `bMustAcceptTOS` <a id="structFRH__LoginResult_1a662f76700fe5dd56560bb7df514b0b6a"></a>

`bool FRH_LoginResult::bMustAcceptTOS`

If true, the user needs to accept the TOS.




### `bMustAcceptPP` <a id="structFRH__LoginResult_1a0f6674180918672b79770379a8af937c"></a>

`bool FRH_LoginResult::bMustAcceptPP`

If true, the user needs to accept the PP.





## Public Functions



### `FRH_LoginResult` <a id="structFRH__LoginResult_1ae2afa140ce5f64ea98bddda688ebc1b9"></a>

 FRH_LoginResult()

#### Parameters

| Type | Name |
|------|------|

#### Description

Default constructor.





