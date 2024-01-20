---
title: URH_SessionBrowserCache Class
---Inherits from [URH_SandboxedSubsystemPlugin](/unreal-plugins/all/classurh__sandboxedsubsystemplugin/#classURH__SandboxedSubsystemPlugin)

Inherits from [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface)

Simple container class to hold session view data, does not have its own auth context, relies upon getting it from elsewhere during calls, so that it can be used to cache across multiple players.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TMap< FString, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) >|[Templates](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache_1a856f2281fe70290adebb1c6ddb31f2d1)||
|TOptional< FString >|[AllTemplatesETag](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache_1a454339a778d5246bafc4b79a80182d76)|ETag of last QueryAllSessionTemplates call response.|
|TMap< FString, [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * >|[Sessions](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache_1a5d9a44e2086c2ab93fb7fa89075a8a26)||
||[URH_SessionBrowserCache](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache_1a62c14a0d2d7a4319ffdb92ad829e6ba0)()|Default constructor.|
|void|[Search](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache_1a7c3c586c5d3de3fb1511be825c8840c9)(const [FRH_SessionBrowserSearchParams](/unreal-plugins/all/structfrh__sessionbrowsersearchparams/#structFRH__SessionBrowserSearchParams) & params, const FRH_OnSessionSearchCompleteDelegateBlock & Delegate)|Makes a call to search for session browsers.|
|void|[BLUEPRINT_Search](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache_1aef57a504c6238f35f6040a3c8b0f2b13)(const [FRH_SessionBrowserSearchParams](/unreal-plugins/all/structfrh__sessionbrowsersearchparams/#structFRH__SessionBrowserSearchParams) & params, FRH_OnSessionSearchCompleteDynamicDelegate Delegate)||
|void|[ClearCache](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache_1ab6fc51bbfa94876b68dc96846fe3c920)(bool bClearTemplates)|Clears the cached sessions, and optionally the cached templates.|
|FAuthContextPtr|[GetSessionAuthContext](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache_1a097ea9b50702c214574c512697427337)()||
|void|[ImportAPISession](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache_1ad7879d7762f0c548483d4b0f04558b97)(const [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) & Session)|Adds a session into the session cache.|
|void|[ImportAPITemplate](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache_1a59bae44be9047e2b2e107c27644eb6b0)(const [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) & Template)|Adds a new session template type to the templates.|
|void|[ReconcileAPISessions](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache_1aec55593cc0c5248cb9a2eacab2c5e484)(const TArray< FString > & SessionIds, const TOptional< FString > & ETag)|Updates the list of sessions to only those that are active.|
|void|[ReconcileAPITemplates](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache_1a599273fe6e4ea36ab930c56f077eff91)(const TArray< FString > & InTemplates, const TOptional< FString > & ETag)|Updates the list of session templates to those that are active.|
|class [URH_PlayerInfoSubsystem](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem) *|[GetPlayerInfoSubsystem](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache_1ac59f177acf3996badf4dd9907c0e66e8)()|Gets the PlayerInfo Subsystem.|
|IOnlineSubsystem *|[GetOSS](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache_1a83aee966f46fa0846e717d03fd9d9963)()|Gets the Online Subsystem to use for OSS calls.|
|FUniqueNetIdWrapper|[GetOSSUniqueId](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache_1a65fc8b708ead7613eccfff0845f4c131)()|Gets the Online Subsystem Unique Id to use for OSS calls.|
|TOptional< FString >|[GetETagForAllTemplatesPoll](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache_1aa76b9eb09fb687bff5252effe7da2b0e)()|Gets the etag to use for a "Get all Templates" type query.|
|TOptional< FString >|[GetETagForAllSessionsPoll](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache_1af673c57a58cd96f48687778033b0c9e4)()|Gets the etag to use for a "Get all Sessions" type query.|
|TArray< [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * >|[GetAllSessionsForPolling](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache_1aa05dd036c2dacc629cbf2d55b90efcdf)()|Used to get all sessions, primarily for get all sessions polling where etag matches.|
|[URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) *|[GetSessionById](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache_1aa64b3bc0c50822dfc08403fa30416907)(const FString & SessionId)|Gets a session by its id.|
|bool|[GetTemplate](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache_1aa529f70a678eb8569e794a9366d8e4fd)(const FString & Type, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) & Template)|Gets a session template by type.|
|[URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) *|[GetPlatformSyncerByRHSessionId](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache_1a7315ff647e9507c03a8e4b4b22657fed)(const FString & SessionId)|Gets the platform synchronization object using the rally here session id.|
|[URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) *|[GetPlatformSyncerByPlatformSessionId](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache_1a363341b102359f9b6d90bfd1f3f73b3b)(const FUniqueNetIdRepl & PlatformSessionId)|Gets the platform synchronization object using the platform session id.|
## Private Attributes



### `Templates` <a id="classURH__SessionBrowserCache_1a856f2281fe70290adebb1c6ddb31f2d1"></a>

`TMap<FString, FRHAPI_SessionTemplate> URH_SessionBrowserCache::Templates`






### `AllTemplatesETag` <a id="classURH__SessionBrowserCache_1a454339a778d5246bafc4b79a80182d76"></a>

`TOptional<FString> URH_SessionBrowserCache::AllTemplatesETag`

ETag of last QueryAllSessionTemplates call response.




### `Sessions` <a id="classURH__SessionBrowserCache_1a5d9a44e2086c2ab93fb7fa89075a8a26"></a>

`TMap<FString, URH_SessionView*> URH_SessionBrowserCache::Sessions`







## Public Functions



### `URH_SessionBrowserCache` <a id="classURH__SessionBrowserCache_1a62c14a0d2d7a4319ffdb92ad829e6ba0"></a>

 URH_SessionBrowserCache()

#### Parameters

| Type | Name |
|------|------|

#### Description

Default constructor.




### `Search` <a id="classURH__SessionBrowserCache_1a7c3c586c5d3de3fb1511be825c8840c9"></a>

void Search(const [FRH_SessionBrowserSearchParams](/unreal-plugins/all/structfrh__sessionbrowsersearchparams/#structFRH__SessionBrowserSearchParams) & params, const FRH_OnSessionSearchCompleteDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_SessionBrowserSearchParams](/unreal-plugins/all/structfrh__sessionbrowsersearchparams/#structFRH__SessionBrowserSearchParams) &|params|
|const FRH_OnSessionSearchCompleteDelegateBlock &|Delegate|

#### Description

Makes a call to search for session browsers.


#### Parameters

params
: The search paramaters to use. 
Delegate
: Callback delegate for when the search is completed. 



### `BLUEPRINT_Search` <a id="classURH__SessionBrowserCache_1aef57a504c6238f35f6040a3c8b0f2b13"></a>

void BLUEPRINT_Search(const [FRH_SessionBrowserSearchParams](/unreal-plugins/all/structfrh__sessionbrowsersearchparams/#structFRH__SessionBrowserSearchParams) & params, FRH_OnSessionSearchCompleteDynamicDelegate Delegate)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_SessionBrowserSearchParams](/unreal-plugins/all/structfrh__sessionbrowsersearchparams/#structFRH__SessionBrowserSearchParams) &|params|
|FRH_OnSessionSearchCompleteDynamicDelegate|Delegate|

#### Description






### `ClearCache` <a id="classURH__SessionBrowserCache_1ab6fc51bbfa94876b68dc96846fe3c920"></a>

void ClearCache(bool bClearTemplates)

#### Parameters

| Type | Name |
|------|------|
|bool|bClearTemplates|

#### Description

Clears the cached sessions, and optionally the cached templates.


#### Parameters

bClearTemplates
: If true, clear the templates as well. 



### `GetSessionAuthContext` <a id="classURH__SessionBrowserCache_1a097ea9b50702c214574c512697427337"></a>

FAuthContextPtr GetSessionAuthContext()

#### Parameters

| Type | Name |
|------|------|

#### Description



Gets the auth context to use for API calls for the session owner. 



### `ImportAPISession` <a id="classURH__SessionBrowserCache_1ad7879d7762f0c548483d4b0f04558b97"></a>

void ImportAPISession(const [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) & Session)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) &|Session|

#### Description

Adds a session into the session cache.


#### Parameters

Session
: The session to add. 



### `ImportAPITemplate` <a id="classURH__SessionBrowserCache_1a59bae44be9047e2b2e107c27644eb6b0"></a>

void ImportAPITemplate(const [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) & Template)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) &|Template|

#### Description

Adds a new session template type to the templates.


#### Parameters

Template
: The template ot add. 



### `ReconcileAPISessions` <a id="classURH__SessionBrowserCache_1aec55593cc0c5248cb9a2eacab2c5e484"></a>

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



### `ReconcileAPITemplates` <a id="classURH__SessionBrowserCache_1a599273fe6e4ea36ab930c56f077eff91"></a>

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



### `GetPlayerInfoSubsystem` <a id="classURH__SessionBrowserCache_1ac59f177acf3996badf4dd9907c0e66e8"></a>

class [URH_PlayerInfoSubsystem](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem) * GetPlayerInfoSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the PlayerInfo Subsystem.




### `GetOSS` <a id="classURH__SessionBrowserCache_1a83aee966f46fa0846e717d03fd9d9963"></a>

IOnlineSubsystem * GetOSS()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Online Subsystem to use for OSS calls.




### `GetOSSUniqueId` <a id="classURH__SessionBrowserCache_1a65fc8b708ead7613eccfff0845f4c131"></a>

FUniqueNetIdWrapper GetOSSUniqueId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Online Subsystem Unique Id to use for OSS calls.




### `GetETagForAllTemplatesPoll` <a id="classURH__SessionBrowserCache_1aa76b9eb09fb687bff5252effe7da2b0e"></a>

TOptional< FString > GetETagForAllTemplatesPoll()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the etag to use for a "Get all Templates" type query.




### `GetETagForAllSessionsPoll` <a id="classURH__SessionBrowserCache_1af673c57a58cd96f48687778033b0c9e4"></a>

TOptional< FString > GetETagForAllSessionsPoll()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the etag to use for a "Get all Sessions" type query.




### `GetAllSessionsForPolling` <a id="classURH__SessionBrowserCache_1aa05dd036c2dacc629cbf2d55b90efcdf"></a>

TArray< [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * > GetAllSessionsForPolling()

#### Parameters

| Type | Name |
|------|------|

#### Description

Used to get all sessions, primarily for get all sessions polling where etag matches.




### `GetSessionById` <a id="classURH__SessionBrowserCache_1aa64b3bc0c50822dfc08403fa30416907"></a>

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



### `GetTemplate` <a id="classURH__SessionBrowserCache_1aa529f70a678eb8569e794a9366d8e4fd"></a>

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



### `GetPlatformSyncerByRHSessionId` <a id="classURH__SessionBrowserCache_1a7315ff647e9507c03a8e4b4b22657fed"></a>

[URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) * GetPlatformSyncerByRHSessionId(const FString & SessionId)

#### Parameters

| Type | Name |
|------|------|
|const FString &|SessionId|

#### Description

Gets the platform synchronization object using the rally here session id.




### `GetPlatformSyncerByPlatformSessionId` <a id="classURH__SessionBrowserCache_1a363341b102359f9b6d90bfd1f3f73b3b"></a>

[URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) * GetPlatformSyncerByPlatformSessionId(const FUniqueNetIdRepl & PlatformSessionId)

#### Parameters

| Type | Name |
|------|------|
|const FUniqueNetIdRepl &|PlatformSessionId|

#### Description

Gets the platform synchronization object using the platform session id.





