---
title: URH_AdSubsystem Class
---Inherits from [URH_LocalPlayerSubsystemPlugin](/unreal-plugins/all/classurh__localplayersubsystemplugin/#classURH__LocalPlayerSubsystemPlugin)

Ad Subsystem used for serving and responging to ad operrtunities for players.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_AdOpportunity](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity) >|[Opportunities](/unreal-plugins/all/classurh__adsubsystem/#classURH__AdSubsystem_1ab5b3a448252fa2e2f75eecc2aa365579)|Cached Ad Oppertunities.|
|FString|[XHzAdApiToken](/unreal-plugins/all/classurh__adsubsystem/#classURH__AdSubsystem_1a103b700c07d6184030fcbf664e551c30)|Ad API token used by the subsystem to make ad calls.|
|void|[Initialize](/unreal-plugins/all/classurh__adsubsystem/#classURH__AdSubsystem_1a6bba9b21c9089c0f1cc0e9af2e9b6ee3)()|Initialize the subsystem.|
|void|[Deinitialize](/unreal-plugins/all/classurh__adsubsystem/#classURH__AdSubsystem_1a341eaf87c25d6d1e29e6547361845bb5)()|Safely tears down the subsystem.|
|FHttpRequestPtr|[BeginNewSession](/unreal-plugins/all/classurh__adsubsystem/#classURH__AdSubsystem_1a70438a957e66082d80591fa070e3a391)(RallyHereAPI::FRequest_BeginNewSession Request, const RallyHereAPI::FDelegate_BeginNewSession & Delegate)|Starts a session for serving ad oppertunities.|
|FHttpRequestPtr|[FindOpportunities](/unreal-plugins/all/classurh__adsubsystem/#classURH__AdSubsystem_1a5f36e3c9cfa910812b2867e2c78e1eeb)(RallyHereAPI::FRequest_FindOpportunities Request, const RallyHereAPI::FDelegate_FindOpportunities & Delegate)|Attempts to find new ad oppertunities to present to the user.|
|FHttpRequestPtr|[UpdateOpportunityById](/unreal-plugins/all/classurh__adsubsystem/#classURH__AdSubsystem_1a6737a0085bcf9d8bf07418f12f2eaca9)(RallyHereAPI::FRequest_UpdateOpportunityById Request, const RallyHereAPI::FDelegate_UpdateOpportunityById & Delegate)|Updates the status of an ad oppertunity.|
|FString|[GetAdApiToken](/unreal-plugins/all/classurh__adsubsystem/#classURH__AdSubsystem_1aa84c842cb38bb70ea8dcef42dda4f1b0)()|Gets the API token used to make quick ad oppertunity attempts for the same user.|
|const TArray< [FRHAPI_AdOpportunity](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity) > &|[GetOpportunities](/unreal-plugins/all/classurh__adsubsystem/#classURH__AdSubsystem_1ad31daa92d579d443b48a8269492f5478)()|Gets all ad oppertunities that have been been found during the session.|
|bool|[GetCodesFromLocale](/unreal-plugins/all/classurh__adsubsystem/#classURH__AdSubsystem_1a268def82e6aef6369c9b68f17b155836)(FString & OutLangCode, FString & OutCountryCode)|Gets country and language codes based on the clients localization settings.|
|void|[OnUserChanged](/unreal-plugins/all/classurh__adsubsystem/#classURH__AdSubsystem_1a0f08945f65d5a03be1a52f6660f49d86)()|Callback that occurs whenever the local player this subsystem is associated with changes.|
|void|[OnBeginNewSession](/unreal-plugins/all/classurh__adsubsystem/#classURH__AdSubsystem_1aacd12640d1fa381ace8263a8ccd2d680)(const RallyHereAPI::FResponse_BeginNewSession & Resp, const RallyHereAPI::FDelegate_BeginNewSession Delegate)|Handles the response to a Begin New Ad Session call.|
|void|[OnFindOpportunities](/unreal-plugins/all/classurh__adsubsystem/#classURH__AdSubsystem_1a7316e20d30a52695a728f73103f0d7f9)(const RallyHereAPI::FResponse_FindOpportunities & Resp, const RallyHereAPI::FDelegate_FindOpportunities Delegate)|Handles the response to a Find Ad Oppertunities call.|
|void|[OnUpdateOpportunityById](/unreal-plugins/all/classurh__adsubsystem/#classURH__AdSubsystem_1a46dbf8e114f6f7a5f166811fbd05a064)(const RallyHereAPI::FResponse_UpdateOpportunityById & Resp, const RallyHereAPI::FDelegate_UpdateOpportunityById Delegate)|Handles the response to a Update Ad Oppertunities call.|
## Protected Attributes



### `Opportunities` <a id="classURH__AdSubsystem_1ab5b3a448252fa2e2f75eecc2aa365579"></a>

`TArray<FRHAPI_AdOpportunity> URH_AdSubsystem::Opportunities`

Cached Ad Oppertunities.




### `XHzAdApiToken` <a id="classURH__AdSubsystem_1a103b700c07d6184030fcbf664e551c30"></a>

`FString URH_AdSubsystem::XHzAdApiToken`

Ad API token used by the subsystem to make ad calls.





## Public Functions



### `Initialize` <a id="classURH__AdSubsystem_1a6bba9b21c9089c0f1cc0e9af2e9b6ee3"></a>

void Initialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Initialize the subsystem.




### `Deinitialize` <a id="classURH__AdSubsystem_1a341eaf87c25d6d1e29e6547361845bb5"></a>

void Deinitialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Safely tears down the subsystem.




### `BeginNewSession` <a id="classURH__AdSubsystem_1a70438a957e66082d80591fa070e3a391"></a>

FHttpRequestPtr BeginNewSession(RallyHereAPI::FRequest_BeginNewSession Request, const RallyHereAPI::FDelegate_BeginNewSession & Delegate)

#### Parameters

| Type | Name |
|------|------|
|RallyHereAPI::FRequest_BeginNewSession|Request|
|const RallyHereAPI::FDelegate_BeginNewSession &|Delegate|

#### Description

Starts a session for serving ad oppertunities.


#### Parameters

Request
: Request information for obtaining a new session. 
Delegate
: Callback Delegate for when session creation is complete. 

#### Returns
Http Request for the session creation. 



### `FindOpportunities` <a id="classURH__AdSubsystem_1a5f36e3c9cfa910812b2867e2c78e1eeb"></a>

FHttpRequestPtr FindOpportunities(RallyHereAPI::FRequest_FindOpportunities Request, const RallyHereAPI::FDelegate_FindOpportunities & Delegate)

#### Parameters

| Type | Name |
|------|------|
|RallyHereAPI::FRequest_FindOpportunities|Request|
|const RallyHereAPI::FDelegate_FindOpportunities &|Delegate|

#### Description

Attempts to find new ad oppertunities to present to the user.


#### Parameters

Request
: Request information for requesting new ads. 
Delegate
: Callback Delegate for when finding oppertunities is complete. 

#### Returns
Http Request for the find oppertunities request. 



### `UpdateOpportunityById` <a id="classURH__AdSubsystem_1a6737a0085bcf9d8bf07418f12f2eaca9"></a>

FHttpRequestPtr UpdateOpportunityById(RallyHereAPI::FRequest_UpdateOpportunityById Request, const RallyHereAPI::FDelegate_UpdateOpportunityById & Delegate)

#### Parameters

| Type | Name |
|------|------|
|RallyHereAPI::FRequest_UpdateOpportunityById|Request|
|const RallyHereAPI::FDelegate_UpdateOpportunityById &|Delegate|

#### Description

Updates the status of an ad oppertunity.


#### Parameters

Request
: Request information for current ad oppertunities. 
Delegate
: Callback Delegate for when updating oppertunities is complete. 

#### Returns
Http Request for the update oppertunities request. 



### `GetAdApiToken` <a id="classURH__AdSubsystem_1aa84c842cb38bb70ea8dcef42dda4f1b0"></a>

FString GetAdApiToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the API token used to make quick ad oppertunity attempts for the same user.



#### Returns
The API Token. 



### `GetOpportunities` <a id="classURH__AdSubsystem_1ad31daa92d579d443b48a8269492f5478"></a>

const TArray< [FRHAPI_AdOpportunity](/unreal-plugins/all/structfrhapi__adopportunity/#structFRHAPI__AdOpportunity) > & GetOpportunities()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets all ad oppertunities that have been been found during the session.



#### Returns
All ad oppertunities. 




## Public Static Functions



### `GetCodesFromLocale` <a id="classURH__AdSubsystem_1a268def82e6aef6369c9b68f17b155836"></a>

bool GetCodesFromLocale(FString & OutLangCode, FString & OutCountryCode)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutLangCode|
|FString &|OutCountryCode|

#### Description

Gets country and language codes based on the clients localization settings.


#### Parameters

OutLangCode
: The language code. 
OutCountryCode
: The country code. 

#### Returns
If true, language and country codes were successfully set. 




## Protected Functions



### `OnUserChanged` <a id="classURH__AdSubsystem_1a0f08945f65d5a03be1a52f6660f49d86"></a>

void OnUserChanged()

#### Parameters

| Type | Name |
|------|------|

#### Description

Callback that occurs whenever the local player this subsystem is associated with changes.




### `OnBeginNewSession` <a id="classURH__AdSubsystem_1aacd12640d1fa381ace8263a8ccd2d680"></a>

void OnBeginNewSession(const RallyHereAPI::FResponse_BeginNewSession & Resp, const RallyHereAPI::FDelegate_BeginNewSession Delegate)

#### Parameters

| Type | Name |
|------|------|
|const RallyHereAPI::FResponse_BeginNewSession &|Resp|
|const RallyHereAPI::FDelegate_BeginNewSession|Delegate|

#### Description

Handles the response to a Begin New Ad Session call.


#### Parameters

Resp
: Response given for the call. 
Delegate
: Delegate passed in for original call to respond to when call completes. 



### `OnFindOpportunities` <a id="classURH__AdSubsystem_1a7316e20d30a52695a728f73103f0d7f9"></a>

void OnFindOpportunities(const RallyHereAPI::FResponse_FindOpportunities & Resp, const RallyHereAPI::FDelegate_FindOpportunities Delegate)

#### Parameters

| Type | Name |
|------|------|
|const RallyHereAPI::FResponse_FindOpportunities &|Resp|
|const RallyHereAPI::FDelegate_FindOpportunities|Delegate|

#### Description

Handles the response to a Find Ad Oppertunities call.


#### Parameters

Resp
: Response given for the call. 
Delegate
: Delegate passed in for original call to respond to when call completes. 



### `OnUpdateOpportunityById` <a id="classURH__AdSubsystem_1a46dbf8e114f6f7a5f166811fbd05a064"></a>

void OnUpdateOpportunityById(const RallyHereAPI::FResponse_UpdateOpportunityById & Resp, const RallyHereAPI::FDelegate_UpdateOpportunityById Delegate)

#### Parameters

| Type | Name |
|------|------|
|const RallyHereAPI::FResponse_UpdateOpportunityById &|Resp|
|const RallyHereAPI::FDelegate_UpdateOpportunityById|Delegate|

#### Description

Handles the response to a Update Ad Oppertunities call.


#### Parameters

Resp
: Response given for the call. 
Delegate
: Delegate passed in for original call to respond to when call completes. 




