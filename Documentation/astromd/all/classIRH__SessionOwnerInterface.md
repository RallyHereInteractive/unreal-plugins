---
title: IRH_SessionOwnerInterface Class
---Session Owner Interface.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FAuthContextPtr|[GetSessionAuthContext](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface_1aa1ed294ad1925cb314ae59c3b9ae7a69)()||
|void|[ImportAPISession](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface_1a47357a19f44fe9006ade44cd3e6961ce)(const [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) & Session)|Imports a session object from the API into the owner (ex: from polling).|
|void|[ImportAPITemplate](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface_1ac81c6da37366c6151656aa2113eeed92)(const [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) & Template)|Imports the template into the owner's template list (ex: from polling).|
|void|[ReconcileAPISessions](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface_1ae7d9a16efdbe4ab846e44371b6700b53)(const TArray< FString > & SessionIds, const TOptional< FString > & ETag)|Updates the list of sessions to only those that are active.|
|void|[ReconcileAPITemplates](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface_1a8c884f478578ba55b83e6d3fb977e1c5)(const TArray< FString > & InTemplates, const TOptional< FString > & ETag)|Updates the list of session templates to those that are active.|
|class [URH_PlayerInfoSubsystem](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem) *|[GetPlayerInfoSubsystem](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface_1abcf3e2921d15c88817b0a82b936b0f35)()|Gets the PlayerInfo Subsystem.|
|IOnlineSubsystem *|[GetOSS](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface_1a3ede591e11069d01484302cbdc7acf25)()|Gets the Online Subsystem to use for OSS calls.|
|FUniqueNetIdWrapper|[GetOSSUniqueId](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface_1ae7d146121a241b23c58cbf22cbb0debf)()|Gets the Online Subsystem Unique Id to use for OSS calls.|
|FGuid|[GetPlayerUuid](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface_1a50d1f47c5c9b99780330b36e6aa496b8)()|Gets the Player UUID to use for player related calls (can be invalid)|
|TOptional< FString >|[GetETagForSession](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface_1a1af5c13f953285114e7e0ba2c7133c1d)(const FString & SessionId)|Gets the Etag for a given Session.|
|TOptional< FString >|[GetETagForAllTemplatesPoll](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface_1aebf9f97e3204d81b31c92e3a5e6ba63d)()|Gets the etag to use for a "Get all Templates" type query.|
|TOptional< FString >|[GetETagForAllSessionsPoll](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface_1a745015623671711254ef390ee9cb7802)()|Gets the etag to use for a "Get all Sessions" type query.|
|TArray< [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * >|[GetAllSessionsForPolling](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface_1a66e998565bf74dbfc85ea6247341b7a4)()|Used to get all sessions, primarily for get all sessions polling where etag matches.|
|[URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) *|[GetSessionById](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface_1a094dc2179856a012677d16d9f6684c82)(const FString & SessionId)|Gets a session by its id.|
|bool|[GetTemplate](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface_1ae474fab73509d0a00372966f39ce216b)(const FString & Type, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) & Template)|Gets a session template by type.|
|[URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) *|[GetPlatformSyncerByRHSessionId](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface_1ade9ca2876030b163a060e8f417889985)(const FString & SessionId)|Gets the platform synchronization object using the rally here session id.|
|[URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) *|[GetPlatformSyncerByPlatformSessionId](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface_1a47d9ac6d2c0326ddc79c563932a6754c)(const FUniqueNetIdRepl & SessionId)|Gets the platform synchronization object using the platform session id.|
## Public Functions



### `GetSessionAuthContext` <a id="classIRH__SessionOwnerInterface_1aa1ed294ad1925cb314ae59c3b9ae7a69"></a>

FAuthContextPtr GetSessionAuthContext()

#### Parameters

| Type | Name |
|------|------|

#### Description



Gets the auth context to use for API calls for the session owner. 



### `ImportAPISession` <a id="classIRH__SessionOwnerInterface_1a47357a19f44fe9006ade44cd3e6961ce"></a>

void ImportAPISession(const [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) & Session)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) &|Session|

#### Description

Imports a session object from the API into the owner (ex: from polling).


#### Parameters

Session
: The Session to import. 



### `ImportAPITemplate` <a id="classIRH__SessionOwnerInterface_1ac81c6da37366c6151656aa2113eeed92"></a>

void ImportAPITemplate(const [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) & Template)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) &|Template|

#### Description

Imports the template into the owner's template list (ex: from polling).


#### Parameters

TemplateWrapper
: The Template to import. 



### `ReconcileAPISessions` <a id="classIRH__SessionOwnerInterface_1ae7d9a16efdbe4ab846e44371b6700b53"></a>

void ReconcileAPISessions(const TArray< FString > & SessionIds, const TOptional< FString > & ETag)

#### Parameters

| Type | Name |
|------|------|
|const TArray< FString > &|SessionIds|
|const TOptional< FString > &|ETag|

#### Description

Updates the list of sessions to only those that are active.


#### Parameters

SessionIds
: The list of sessions that we are reconciling against. 
ETag
: The ETag to use for the update. 



### `ReconcileAPITemplates` <a id="classIRH__SessionOwnerInterface_1a8c884f478578ba55b83e6d3fb977e1c5"></a>

void ReconcileAPITemplates(const TArray< FString > & InTemplates, const TOptional< FString > & ETag)

#### Parameters

| Type | Name |
|------|------|
|const TArray< FString > &|InTemplates|
|const TOptional< FString > &|ETag|

#### Description

Updates the list of session templates to those that are active.


#### Parameters

InTemplates
: The list of templates that we are reconciling against. 
ETag
: The ETag to use for the update. 



### `GetPlayerInfoSubsystem` <a id="classIRH__SessionOwnerInterface_1abcf3e2921d15c88817b0a82b936b0f35"></a>

class [URH_PlayerInfoSubsystem](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem) * GetPlayerInfoSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the PlayerInfo Subsystem.




### `GetOSS` <a id="classIRH__SessionOwnerInterface_1a3ede591e11069d01484302cbdc7acf25"></a>

IOnlineSubsystem * GetOSS()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Online Subsystem to use for OSS calls.




### `GetOSSUniqueId` <a id="classIRH__SessionOwnerInterface_1ae7d146121a241b23c58cbf22cbb0debf"></a>

FUniqueNetIdWrapper GetOSSUniqueId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Online Subsystem Unique Id to use for OSS calls.




### `GetPlayerUuid` <a id="classIRH__SessionOwnerInterface_1a50d1f47c5c9b99780330b36e6aa496b8"></a>

FGuid GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Player UUID to use for player related calls (can be invalid)




### `GetETagForSession` <a id="classIRH__SessionOwnerInterface_1a1af5c13f953285114e7e0ba2c7133c1d"></a>

TOptional< FString > GetETagForSession(const FString & SessionId)

#### Parameters

| Type | Name |
|------|------|
|const FString &|SessionId|

#### Description

Gets the Etag for a given Session.


#### Parameters

SessionId
: The Session Id to get the ETag for. 

#### Returns
The ETag for the session. 



### `GetETagForAllTemplatesPoll` <a id="classIRH__SessionOwnerInterface_1aebf9f97e3204d81b31c92e3a5e6ba63d"></a>

TOptional< FString > GetETagForAllTemplatesPoll()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the etag to use for a "Get all Templates" type query.




### `GetETagForAllSessionsPoll` <a id="classIRH__SessionOwnerInterface_1a745015623671711254ef390ee9cb7802"></a>

TOptional< FString > GetETagForAllSessionsPoll()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the etag to use for a "Get all Sessions" type query.




### `GetAllSessionsForPolling` <a id="classIRH__SessionOwnerInterface_1a66e998565bf74dbfc85ea6247341b7a4"></a>

TArray< [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * > GetAllSessionsForPolling()

#### Parameters

| Type | Name |
|------|------|

#### Description

Used to get all sessions, primarily for get all sessions polling where etag matches.




### `GetSessionById` <a id="classIRH__SessionOwnerInterface_1a094dc2179856a012677d16d9f6684c82"></a>

[URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * GetSessionById(const FString & SessionId)

#### Parameters

| Type | Name |
|------|------|
|const FString &|SessionId|

#### Description

Gets a session by its id.


#### Parameters

SessionId
: The Session Id to get. 

#### Returns
The Session with the given Id. 



### `GetTemplate` <a id="classIRH__SessionOwnerInterface_1ae474fab73509d0a00372966f39ce216b"></a>

bool GetTemplate(const FString & Type, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) & Template)

#### Parameters

| Type | Name |
|------|------|
|const FString &|Type|
|[FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) &|Template|

#### Description

Gets a session template by type.


#### Parameters

Type
: the Type of template to get. 
Template
: The session template being retrieved. 

#### Returns
If true, the template was found. 



### `GetPlatformSyncerByRHSessionId` <a id="classIRH__SessionOwnerInterface_1ade9ca2876030b163a060e8f417889985"></a>

[URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) * GetPlatformSyncerByRHSessionId(const FString & SessionId)

#### Parameters

| Type | Name |
|------|------|
|const FString &|SessionId|

#### Description

Gets the platform synchronization object using the rally here session id.




### `GetPlatformSyncerByPlatformSessionId` <a id="classIRH__SessionOwnerInterface_1a47d9ac6d2c0326ddc79c563932a6754c"></a>

[URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) * GetPlatformSyncerByPlatformSessionId(const FUniqueNetIdRepl & SessionId)

#### Parameters

| Type | Name |
|------|------|
|const FUniqueNetIdRepl &|SessionId|

#### Description

Gets the platform synchronization object using the platform session id.





