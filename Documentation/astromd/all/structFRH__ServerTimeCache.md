---
title: FRH_ServerTimeCache Struct
---
An object that caches information about server time and differences.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FDateTime|[LastReceivedServerDateTime](/unreal-plugins/all/structfrh__servertimecache/#structFRH__ServerTimeCache_1a63f0350b41f3722399766db10f11366e)|The timestamp received during the most recent update from the server.|
|FDateTime|[LastReceivedServerAtTime](/unreal-plugins/all/structfrh__servertimecache/#structFRH__ServerTimeCache_1af3fc128d16c059cb4420ca5841a91d20)|The time we received the most recent update from the server.|
||[FRH_ServerTimeCache](/unreal-plugins/all/structfrh__servertimecache/#structFRH__ServerTimeCache_1a4b895cff8968b4e82df5e794376b8168)()|Constructor.|
|bool|[GetServerTime](/unreal-plugins/all/structfrh__servertimecache/#structFRH__ServerTimeCache_1aaa54f6ae4bddd94bc4665ae40f69dae6)(FDateTime & Time)|Gets the approximate server time, if we have received one.|
|bool|[GetServerTimeDrift](/unreal-plugins/all/structfrh__servertimecache/#structFRH__ServerTimeCache_1a777a359d346cb75f394b622844fa6f68)(FTimespan & Timespan)|Gets the approximate server time, if we have received one.|
|void|[ImportAPITime](/unreal-plugins/all/structfrh__servertimecache/#structFRH__ServerTimeCache_1a5b805808b827d56da61fe16ecd38cf20)(const RallyHereAPI::FResponse_GetUtcTime & Time)|Imports data from the server response.|
|FDateTime|[GetLocalTime](/unreal-plugins/all/structfrh__servertimecache/#structFRH__ServerTimeCache_1a30b6567a044f10e2a894d020974ca501)()|Gets the current local time.|
## Public Attributes



### `LastReceivedServerDateTime` <a id="structFRH__ServerTimeCache_1a63f0350b41f3722399766db10f11366e"></a>

`FDateTime FRH_ServerTimeCache::LastReceivedServerDateTime`

The timestamp received during the most recent update from the server.




### `LastReceivedServerAtTime` <a id="structFRH__ServerTimeCache_1af3fc128d16c059cb4420ca5841a91d20"></a>

`FDateTime FRH_ServerTimeCache::LastReceivedServerAtTime`

The time we received the most recent update from the server.





## Public Functions



### `FRH_ServerTimeCache` <a id="structFRH__ServerTimeCache_1a4b895cff8968b4e82df5e794376b8168"></a>

 FRH_ServerTimeCache()

#### Parameters

| Type | Name |
|------|------|

#### Description

Constructor.




### `GetServerTime` <a id="structFRH__ServerTimeCache_1aaa54f6ae4bddd94bc4665ae40f69dae6"></a>

bool GetServerTime(FDateTime & Time)

#### Parameters

| Type | Name |
|------|------|
|FDateTime &|Time|

#### Description

Gets the approximate server time, if we have received one.


#### Parameters

Time
: The approximate server time. 

#### Returns
True if we have received a server time, false otherwise. 



### `GetServerTimeDrift` <a id="structFRH__ServerTimeCache_1a777a359d346cb75f394b622844fa6f68"></a>

bool GetServerTimeDrift(FTimespan & Timespan)

#### Parameters

| Type | Name |
|------|------|
|FTimespan &|Timespan|

#### Description

Gets the approximate server time, if we have received one.


#### Parameters

Timespan
: The approximate server time drift 

#### Returns
True if we have received a server time, false otherwise. 



### `ImportAPITime` <a id="structFRH__ServerTimeCache_1a5b805808b827d56da61fe16ecd38cf20"></a>

void ImportAPITime(const RallyHereAPI::FResponse_GetUtcTime & Time)

#### Parameters

| Type | Name |
|------|------|
|const RallyHereAPI::FResponse_GetUtcTime &|Time|

#### Description

Imports data from the server response.


#### Parameters

Time
: the time data to import 




## Public Static Functions



### `GetLocalTime` <a id="structFRH__ServerTimeCache_1a30b6567a044f10e2a894d020974ca501"></a>

FDateTime GetLocalTime()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the current local time.





