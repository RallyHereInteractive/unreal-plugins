---
title: RH_Common.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|class|[FRH_AsyncTaskHelper](/unreal-plugins/all/classfrh__asynctaskhelper/#classFRH__AsyncTaskHelper)||
|struct|[FRH_DelegateBlock](/unreal-plugins/all/structfrh__delegateblock/#structFRH__DelegateBlock)||
|struct|[FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo)||
|class|[FRH_SimpleQueryHelper](/unreal-plugins/all/classfrh__simplequeryhelper/#classFRH__SimpleQueryHelper)||
|struct|[FRH_CustomEndpointRequestWrapper](/unreal-plugins/all/structfrh__customendpointrequestwrapper/#structFRH__CustomEndpointRequestWrapper)||
|struct|[FRH_CustomEndpointResponseWrapper](/unreal-plugins/all/structfrh__customendpointresponsewrapper/#structFRH__CustomEndpointResponseWrapper)||
|struct|[FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId)||
|define|[WITH_HIREZ_ENGINE](/unreal-plugins/all/rh__common_8h/#RH__Common_8h_1a61fe43c8f6429cb93c9c448ed8bfcbfd)||
|define|[RH_BELOW_ENGINE_VERSION](/unreal-plugins/all/rh__common_8h/#RH__Common_8h_1a33419659d32017c0c7b2548f32864562)||
|define|[RH_FROM_ENGINE_VERSION](/unreal-plugins/all/rh__common_8h/#RH__Common_8h_1a5289e41749e5a2c685a815bf26a9e247)||
|define|[RH_GETENUMSTRING](/unreal-plugins/all/rh__common_8h/#RH__Common_8h_1a510b01488eec1728b01c0980c8f3b611)||
|define|[RH_GETENUMFROMSTRING](/unreal-plugins/all/rh__common_8h/#RH__Common_8h_1a4cf1ba83dc74b36debf88e9def5e53ca)||
|define|[DECLARE_RH_DELEGATE_BLOCK](/unreal-plugins/all/rh__common_8h/#group__Common_1ga125475056bb12c20ac1044a4d6ce1cdd)|Helper for declaring FRH_DelegateBlock types.|
|enum|[ERHAPI_PlatformTypes_DEPRECATED](/unreal-plugins/all/rh__common_8h/#group__Common_1ga8d2aa1d87e398a5548531751e8cea759)|Generic blueprint and native delegate used to report success or failure.|
|typedef|[FAuthContextPtr](/unreal-plugins/all/rh__common_8h/#RH__Common_8h_1aec1eb9194dc0cc883e5c6b6c02345094)||
|FString|[GRallyHereIntegrationIni](/unreal-plugins/all/rh__common_8h/#RH__Common_8h_1ab8ec897a261422f8ecc76e34dd4a3ca2)||
|RALLYHEREINTEGRATION_API|[DECLARE_LOG_CATEGORY_EXTERN](/unreal-plugins/all/rh__common_8h/#RH__Common_8h_1a858992a55452097ca0d4f274e4495646)(LogRallyHereIntegration , Log , All )||
|FORCEINLINE TWeakInterfacePtr< InterfaceType >|[MakeWeakInterfaceFromPtr](/unreal-plugins/all/rh__common_8h/#RH__Common_8h_1a5b2290e302e95dc6d780677eaafae8b2)(InterfaceType * Interface)||
|FORCEINLINE TWeakInterfacePtr< InterfaceType >|[MakeWeakInterface](/unreal-plugins/all/rh__common_8h/#RH__Common_8h_1a7dc280edaab04f30e58a5da214efe9ac)(TScriptInterface< InterfaceType > Interface)||
|FORCEINLINE OptionalType *|[GetPtrOrNull](/unreal-plugins/all/rh__common_8h/#RH__Common_8h_1aa25b36aefbf7dad27834a5a16fa8ef07)(TOptional< OptionalType > & Opt)||
|FORCEINLINE const OptionalType *|[GetPtrOrNull](/unreal-plugins/all/rh__common_8h/#RH__Common_8h_1ab06517bebf1b677b50eef5e3632eea8b)(const TOptional< OptionalType > & Opt)||
|bool RALLYHEREINTEGRATION_API|[RH_GetPlayerIdFromLocalPlayer](/unreal-plugins/all/rh__common_8h/#RH__Common_8h_1abba550893aede5929ef84aa9eb1716b2)(const class ULocalPlayer * pLocalPlayer, FGuid * outUuid)||
|TOptional< ERHAPI_Platform > RALLYHEREINTEGRATION_API|[RH_GetPlatformFromOSSName](/unreal-plugins/all/rh__common_8h/#RH__Common_8h_1ac623033323b0a215803037c880d9bc26)(FName OSSName)||
|ERHAPI_ClientType RALLYHEREINTEGRATION_API|[RH_GetClientTypeFromOSSName](/unreal-plugins/all/rh__common_8h/#RH__Common_8h_1a695bb47eb82d430774341a2a193ab5c7)(FName OSSName)||
|TOptional< ERHAPI_GrantType > RALLYHEREINTEGRATION_API|[RH_GetGrantTypeFromOSSName](/unreal-plugins/all/rh__common_8h/#RH__Common_8h_1a33037bd28b874ff281bc62a656689228)(FName OSSName)||
|bool RALLYHEREINTEGRATION_API|[RH_UseGetAuthTokenFallbackFromOSSName](/unreal-plugins/all/rh__common_8h/#RH__Common_8h_1abda71fde8b0194b576497cb03130c9df)(FName OSSName)||
|bool RALLYHEREINTEGRATION_API|[RH_PlatformSessionsTypeIsCaseInsensitive](/unreal-plugins/all/rh__common_8h/#RH__Common_8h_1a7c1ebdd095830d3219e0bfd749d56c9e)(FName SessionType)||
|bool RALLYHEREINTEGRATION_API|[RH_UseRecentPlayersFromOSSName](/unreal-plugins/all/rh__common_8h/#RH__Common_8h_1a60d758a1f2fd82ecaf35dd30b8cab20a)(FName OSSName)||
|ERHAPI_InventoryBucket RALLYHEREINTEGRATION_API|[RH_GetInventoryBucketFromInventoryPortal](/unreal-plugins/all/rh__common_8h/#RH__Common_8h_1a2e13e7dc7989896379e88cc2c4901e98)(ERHAPI_InventoryPortal InventoryPlatform)||
|ERHAPI_InventoryBucket RALLYHEREINTEGRATION_API|[RH_GetInventoryBucketFromPlatform](/unreal-plugins/all/rh__common_8h/#RH__Common_8h_1abd6c72d335aa560fe4d99695174c7b10)(ERHAPI_Platform PlatformType)||
||[DECLARE_DYNAMIC_DELEGATE_OneParam](/unreal-plugins/all/rh__common_8h/#group__Common_1gaf762e5da533f56e4052da1ceead76038)(FRH_GenericSuccessDynamicDelegate , bool , bSuccess )|Generic blueprint friendly delegate used to report success or failure.|
||[DECLARE_DELEGATE_OneParam](/unreal-plugins/all/rh__common_8h/#group__Common_1ga4f9a9dad692ff89dfce417fb9d5be258)(FRH_GenericSuccessDelegate , bool )|Generic native-only delegate used to report success or failure.|
||[DECLARE_DYNAMIC_DELEGATE_TwoParams](/unreal-plugins/all/rh__common_8h/#group__Common_1gac075c01ed93280f69479e554a3d9871b)(FRH_GenericSuccessWithErrorDynamicDelegate , bool , bSuccess , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & , ErrorInfo )|Generic blueprint friendly delegate used to report success or failure with error info.|
||[DECLARE_DELEGATE_TwoParams](/unreal-plugins/all/rh__common_8h/#group__Common_1ga00a137fb95acdc4001c1f7ce8151a2b9)(FRH_GenericSuccessWithErrorDelegate , bool , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )|Generic native-only delegate used to report success or failure.|
|FORCEINLINE FRH_GenericSuccessWithErrorBlock|[RH_ConvertGenericSucessDelegateBlock](/unreal-plugins/all/rh__common_8h/#group__Common_1ga1334d6dc0c562398f47369cb2dda495d)(const FRH_GenericSuccessBlock & InDelegate)|Generic blueprint and native delegate used to report success or failure.|
||[DECLARE_DYNAMIC_DELEGATE_OneParam](/unreal-plugins/all/rh__common_8h/#group__Common_1ga66c37330911c8fe234a7074cef68dd80)(FRH_CustomEndpointDynamicDelegate , const [FRH_CustomEndpointResponseWrapper](/unreal-plugins/all/structfrh__customendpointresponsewrapper/#structFRH__CustomEndpointResponseWrapper) & , CustomResponseWrapper )|Dynamic delegate used for custom endpoint calls.|
||[DECLARE_DELEGATE_OneParam](/unreal-plugins/all/rh__common_8h/#group__Common_1ga5bba8beab7e3653c4bfa887eaec48a87)(FRH_CustomEndpointDelegate , const [FRH_CustomEndpointResponseWrapper](/unreal-plugins/all/structfrh__customendpointresponsewrapper/#structFRH__CustomEndpointResponseWrapper) & )|Native delegate used for custom endpoint calls.|
|FORCEINLINE uint32|[GetTypeHash](/unreal-plugins/all/rh__common_8h/#group__Common_1ga51b3d76527de2fccacb53501f14c7991)(const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) & PlatformId)|Helper function to convert an FRH_PlayerPlatformId into a hash value.|
|bool|[RH_BreakApartURL](/unreal-plugins/all/rh__common_8h/#group__Common_1ga98aea8d69558cf3580e89e65d73256dd)(const FString & URL, const FString & BaseURL, FString & APIName, TArray< FString > & APIParams)|Helper function to break a fully qualified URL into a base URL, API name, and an array of API parameters.|
## Defines



### `WITH_HIREZ_ENGINE` <a id="RH__Common_8h_1a61fe43c8f6429cb93c9c448ed8bfcbfd"></a>


#define WITH_HIREZ_ENGINE 0






### `RH_BELOW_ENGINE_VERSION` <a id="RH__Common_8h_1a33419659d32017c0c7b2548f32864562"></a>


#define RH_BELOW_ENGINE_VERSION (ENGINE_MAJOR_VERSION < (Major) || (ENGINE_MAJOR_VERSION == (Major) && ENGINE_MINOR_VERSION < (Minor)))






### `RH_FROM_ENGINE_VERSION` <a id="RH__Common_8h_1a5289e41749e5a2c685a815bf26a9e247"></a>


#define RH_FROM_ENGINE_VERSION !RH_BELOW_ENGINE_VERSION(Major, Minor)






### `RH_GETENUMSTRING` <a id="RH__Common_8h_1a510b01488eec1728b01c0980c8f3b611"></a>


#define RH_GETENUMSTRING ( (FindObject<UEnum>(ANY_PACKAGE, TEXT(etype), true) != nullptr) ? FindObject<UEnum>(ANY_PACKAGE, TEXT(etype), true)->GetNameStringByValue((int32)evalue) : FString(TEXT("Invalid - are you sure enum uses UENUM() macro?")) )






### `RH_GETENUMFROMSTRING` <a id="RH__Common_8h_1a4cf1ba83dc74b36debf88e9def5e53ca"></a>


#define RH_GETENUMFROMSTRING ( (FindObject<UEnum>(ANY_PACKAGE, TEXT(etype), true) != nullptr) ? FindObject<UEnum>(ANY_PACKAGE, TEXT(etype), true)->GetValueByNameString(evalue) : INDEX_NONE )






### `DECLARE_RH_DELEGATE_BLOCK` <a id="group__Common_1ga125475056bb12c20ac1044a4d6ce1cdd"></a>


#define DECLARE_RH_DELEGATE_BLOCK typedef 

Helper for declaring FRH_DelegateBlock types.





## Enums




### `ERHAPI_PlatformTypes_DEPRECATED` <a id="group__Common_1ga8d2aa1d87e398a5548531751e8cea759"></a>
Generic blueprint and native delegate used to report success or failure.

All known platforms (some no longer supported), deprecated 


| Enumerator | Initializer|
|------------|------------|
|`PT_UNKNOWN`|`= 0`|
|`PT_UNUSED_1`|`= 1`|
|`PT_ANON`|`= 2`|
|`PT_UNUSED_3`|`= 3`|
|`PT_AMAZON`|`= 4`|
|`PT_STEAM`|`= 5`|
|`PT_UNUSED_6`|`= 6`|
|`PT_UNUSED_7`|`= 7`|
|`PT_UNUSED_8`|`= 8`|
|`PT_PSN`|`= 9`|
|`PT_XBOX_LIVE`|`= 10`|
|`PT_BASIC`|`= 11`|
|`PT_FACEBOOK`|`= 12`|
|`PT_GOOGLE`|`= 13`|
|`PT_UNUSED_14`|`= 14`|
|`PT_UNUSED_15`|`= 15`|
|`PT_TWITCH`|`= 16`|
|`PT_UNUSED_17`|`= 17`|
|`PT_UNUSED_18`|`= 18`|
|`PT_UNUSED_19`|`= 19`|
|`PT_UNUSED_20`|`= 20`|
|`PT_UNUSED_21`|`= 21`|
|`PT_NINTENDO_SWITCH`|`= 22`|
|`PT_UNUSED_23`|`= 23`|
|`PT_APPLE`|`= 24`|
|`PT_DISCORD`|`= 25`|
|`PT_NINTENDO`|`= 26`|
|`PT_UNUSED_27`|`= 27`|
|`PT_EPIC`|`= 28`|
|`PT_UNUSED_29`|`= 29`|
|`PT_SIMULMEDIA`|`= 30`|
|`PT_UNUSED_31`|`= 31`|
|`PT_GOOGLE_PLAY`|`= 32`|
|`PT_NINTENDO_PPID`|`= 33`|
|`PT_MAX_COUNT`|``|



## Typedefs



### `FAuthContextPtr` <a id="RH__Common_8h_1aec1eb9194dc0cc883e5c6b6c02345094"></a>

typedef TSharedPtr< RallyHereAPI::FAuthContext > FAuthContextPtr





## Variables



### `GRallyHereIntegrationIni` <a id="RH__Common_8h_1ab8ec897a261422f8ecc76e34dd4a3ca2"></a>

`FString GRallyHereIntegrationIni`







## Functions



### `DECLARE_LOG_CATEGORY_EXTERN` <a id="RH__Common_8h_1a858992a55452097ca0d4f274e4495646"></a>

RALLYHEREINTEGRATION_API DECLARE_LOG_CATEGORY_EXTERN(LogRallyHereIntegration , Log , All )

#### Parameters

| Type | Name |
|------|------|
|LogRallyHereIntegration||
|Log||
|All||

#### Description






### `MakeWeakInterfaceFromPtr` <a id="RH__Common_8h_1a5b2290e302e95dc6d780677eaafae8b2"></a>

FORCEINLINE TWeakInterfacePtr< InterfaceType > MakeWeakInterfaceFromPtr(InterfaceType * Interface)

#### Parameters

| Type | Name |
|------|------|
|InterfaceType *|Interface|

#### Description






### `MakeWeakInterface` <a id="RH__Common_8h_1a7dc280edaab04f30e58a5da214efe9ac"></a>

FORCEINLINE TWeakInterfacePtr< InterfaceType > MakeWeakInterface(TScriptInterface< InterfaceType > Interface)

#### Parameters

| Type | Name |
|------|------|
|TScriptInterface< InterfaceType >|Interface|

#### Description






### `GetPtrOrNull` <a id="RH__Common_8h_1aa25b36aefbf7dad27834a5a16fa8ef07"></a>

FORCEINLINE OptionalType * GetPtrOrNull(TOptional< OptionalType > & Opt)

#### Parameters

| Type | Name |
|------|------|
|TOptional< OptionalType > &|Opt|

#### Description






### `GetPtrOrNull` <a id="RH__Common_8h_1ab06517bebf1b677b50eef5e3632eea8b"></a>

FORCEINLINE const OptionalType * GetPtrOrNull(const TOptional< OptionalType > & Opt)

#### Parameters

| Type | Name |
|------|------|
|const TOptional< OptionalType > &|Opt|

#### Description






### `RH_GetPlayerIdFromLocalPlayer` <a id="RH__Common_8h_1abba550893aede5929ef84aa9eb1716b2"></a>

bool RALLYHEREINTEGRATION_API RH_GetPlayerIdFromLocalPlayer(const class ULocalPlayer * pLocalPlayer, FGuid * outUuid)

#### Parameters

| Type | Name |
|------|------|
|const class ULocalPlayer *|pLocalPlayer|
|FGuid *|outUuid|

#### Description






### `RH_GetPlatformFromOSSName` <a id="RH__Common_8h_1ac623033323b0a215803037c880d9bc26"></a>

TOptional< ERHAPI_Platform > RALLYHEREINTEGRATION_API RH_GetPlatformFromOSSName(FName OSSName)

#### Parameters

| Type | Name |
|------|------|
|FName|OSSName|

#### Description






### `RH_GetClientTypeFromOSSName` <a id="RH__Common_8h_1a695bb47eb82d430774341a2a193ab5c7"></a>

ERHAPI_ClientType RALLYHEREINTEGRATION_API RH_GetClientTypeFromOSSName(FName OSSName)

#### Parameters

| Type | Name |
|------|------|
|FName|OSSName|

#### Description






### `RH_GetGrantTypeFromOSSName` <a id="RH__Common_8h_1a33037bd28b874ff281bc62a656689228"></a>

TOptional< ERHAPI_GrantType > RALLYHEREINTEGRATION_API RH_GetGrantTypeFromOSSName(FName OSSName)

#### Parameters

| Type | Name |
|------|------|
|FName|OSSName|

#### Description






### `RH_UseGetAuthTokenFallbackFromOSSName` <a id="RH__Common_8h_1abda71fde8b0194b576497cb03130c9df"></a>

bool RALLYHEREINTEGRATION_API RH_UseGetAuthTokenFallbackFromOSSName(FName OSSName)

#### Parameters

| Type | Name |
|------|------|
|FName|OSSName|

#### Description






### `RH_PlatformSessionsTypeIsCaseInsensitive` <a id="RH__Common_8h_1a7c1ebdd095830d3219e0bfd749d56c9e"></a>

bool RALLYHEREINTEGRATION_API RH_PlatformSessionsTypeIsCaseInsensitive(FName SessionType)

#### Parameters

| Type | Name |
|------|------|
|FName|SessionType|

#### Description






### `RH_UseRecentPlayersFromOSSName` <a id="RH__Common_8h_1a60d758a1f2fd82ecaf35dd30b8cab20a"></a>

bool RALLYHEREINTEGRATION_API RH_UseRecentPlayersFromOSSName(FName OSSName)

#### Parameters

| Type | Name |
|------|------|
|FName|OSSName|

#### Description






### `RH_GetInventoryBucketFromInventoryPortal` <a id="RH__Common_8h_1a2e13e7dc7989896379e88cc2c4901e98"></a>

ERHAPI_InventoryBucket RALLYHEREINTEGRATION_API RH_GetInventoryBucketFromInventoryPortal(ERHAPI_InventoryPortal InventoryPlatform)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventoryPortal|InventoryPlatform|

#### Description






### `RH_GetInventoryBucketFromPlatform` <a id="RH__Common_8h_1abd6c72d335aa560fe4d99695174c7b10"></a>

ERHAPI_InventoryBucket RALLYHEREINTEGRATION_API RH_GetInventoryBucketFromPlatform(ERHAPI_Platform PlatformType)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Platform|PlatformType|

#### Description






### `DECLARE_DYNAMIC_DELEGATE_OneParam` <a id="group__Common_1gaf762e5da533f56e4052da1ceead76038"></a>

 DECLARE_DYNAMIC_DELEGATE_OneParam(FRH_GenericSuccessDynamicDelegate , bool , bSuccess )

#### Parameters

| Type | Name |
|------|------|
|FRH_GenericSuccessDynamicDelegate||
|bool||
|bSuccess||

#### Description

Generic blueprint friendly delegate used to report success or failure.




### `DECLARE_DELEGATE_OneParam` <a id="group__Common_1ga4f9a9dad692ff89dfce417fb9d5be258"></a>

 DECLARE_DELEGATE_OneParam(FRH_GenericSuccessDelegate , bool )

#### Parameters

| Type | Name |
|------|------|
|FRH_GenericSuccessDelegate||
|bool||

#### Description

Generic native-only delegate used to report success or failure.




### `DECLARE_DYNAMIC_DELEGATE_TwoParams` <a id="group__Common_1gac075c01ed93280f69479e554a3d9871b"></a>

 DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_GenericSuccessWithErrorDynamicDelegate , bool , bSuccess , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & , ErrorInfo )

#### Parameters

| Type | Name |
|------|------|
|FRH_GenericSuccessWithErrorDynamicDelegate||
|bool||
|bSuccess||
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &||
|ErrorInfo||

#### Description

Generic blueprint friendly delegate used to report success or failure with error info.




### `DECLARE_DELEGATE_TwoParams` <a id="group__Common_1ga00a137fb95acdc4001c1f7ce8151a2b9"></a>

 DECLARE_DELEGATE_TwoParams(FRH_GenericSuccessWithErrorDelegate , bool , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_GenericSuccessWithErrorDelegate||
|bool||
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &||

#### Description

Generic native-only delegate used to report success or failure.




### `RH_ConvertGenericSucessDelegateBlock` <a id="group__Common_1ga1334d6dc0c562398f47369cb2dda495d"></a>

FORCEINLINE FRH_GenericSuccessWithErrorBlock RH_ConvertGenericSucessDelegateBlock(const FRH_GenericSuccessBlock & InDelegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_GenericSuccessBlock &|InDelegate|

#### Description

Generic blueprint and native delegate used to report success or failure.




### `DECLARE_DYNAMIC_DELEGATE_OneParam` <a id="group__Common_1ga66c37330911c8fe234a7074cef68dd80"></a>

 DECLARE_DYNAMIC_DELEGATE_OneParam(FRH_CustomEndpointDynamicDelegate , const [FRH_CustomEndpointResponseWrapper](/unreal-plugins/all/structfrh__customendpointresponsewrapper/#structFRH__CustomEndpointResponseWrapper) & , CustomResponseWrapper )

#### Parameters

| Type | Name |
|------|------|
|FRH_CustomEndpointDynamicDelegate||
|const [FRH_CustomEndpointResponseWrapper](/unreal-plugins/all/structfrh__customendpointresponsewrapper/#structFRH__CustomEndpointResponseWrapper) &||
|CustomResponseWrapper||

#### Description

Dynamic delegate used for custom endpoint calls.




### `DECLARE_DELEGATE_OneParam` <a id="group__Common_1ga5bba8beab7e3653c4bfa887eaec48a87"></a>

 DECLARE_DELEGATE_OneParam(FRH_CustomEndpointDelegate , const [FRH_CustomEndpointResponseWrapper](/unreal-plugins/all/structfrh__customendpointresponsewrapper/#structFRH__CustomEndpointResponseWrapper) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_CustomEndpointDelegate||
|const [FRH_CustomEndpointResponseWrapper](/unreal-plugins/all/structfrh__customendpointresponsewrapper/#structFRH__CustomEndpointResponseWrapper) &||

#### Description

Native delegate used for custom endpoint calls.




### `GetTypeHash` <a id="group__Common_1ga51b3d76527de2fccacb53501f14c7991"></a>

FORCEINLINE uint32 GetTypeHash(const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) & PlatformId)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) &|PlatformId|

#### Description

Helper function to convert an FRH_PlayerPlatformId into a hash value.


#### Parameters

PlatformId
: The platform id to generate a hash for 

#### Returns
Semi-unique hash value for the given platform id 



### `RH_BreakApartURL` <a id="group__Common_1ga98aea8d69558cf3580e89e65d73256dd"></a>

bool RH_BreakApartURL(const FString & URL, const FString & BaseURL, FString & APIName, TArray< FString > & APIParams)

#### Parameters

| Type | Name |
|------|------|
|const FString &|URL|
|const FString &|BaseURL|
|FString &|APIName|
|TArray< FString > &|APIParams|

#### Description

Helper function to break a fully qualified URL into a base URL, API name, and an array of API parameters.


#### Parameters

URL
: The fully qualified URL that we want to break apart 
BaseURL
: The base URL of the specified fully qualified URL 
APIName
: The name of the API the URL is hitting 
APIParams
: The array of API parameters from the URL 

#### Returns
Semi-unique hash value for the given platform id 




