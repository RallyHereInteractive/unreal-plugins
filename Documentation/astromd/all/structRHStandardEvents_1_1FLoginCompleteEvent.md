---
title: RHStandardEvents::FLoginCompleteEvent Struct
---
This event is triggered when the login process has completed.This event is meant to capture both successful and failed login attempts.

rh.login_complete 
## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[PlatformUserId](/unreal-plugins/all/structrhstandardevents_1_1flogincompleteevent/#structRHStandardEvents_1_1FLoginCompleteEvent_1a9f82c4ff7a06a6301e5008b9d5e77bef)|Platform UserId of the player.|
|FString|[PlatformId](/unreal-plugins/all/structrhstandardevents_1_1flogincompleteevent/#structRHStandardEvents_1_1FLoginCompleteEvent_1a5bc4a30e83be6aa9efee09ca239ee9c4)|Platform Id of the player.|
|FString|[Status](/unreal-plugins/all/structrhstandardevents_1_1flogincompleteevent/#structRHStandardEvents_1_1FLoginCompleteEvent_1a450d771307789ec844783fc93aa9d43e)|The status of the login attempt.|
|TOptional< FString >|[PlatformDisplayName](/unreal-plugins/all/structrhstandardevents_1_1flogincompleteevent/#structRHStandardEvents_1_1FLoginCompleteEvent_1aa387846cfb5da38f19a8f9fc85f0d1fc)|Platform username / gamertag of the player.|
|TOptional< FString >|[PersonId](/unreal-plugins/all/structrhstandardevents_1_1flogincompleteevent/#structRHStandardEvents_1_1FLoginCompleteEvent_1ac4de5a5a09f1ea049638b5a795c84826)|PersonId of the player.|
|TOptional< FString >|[Reason](/unreal-plugins/all/structrhstandardevents_1_1flogincompleteevent/#structRHStandardEvents_1_1FLoginCompleteEvent_1afbf4607ea9cf02be776462795cb43675)|The reason for the failure to login.|
|TOptional< float >|[DurationSeconds](/unreal-plugins/all/structrhstandardevents_1_1flogincompleteevent/#structRHStandardEvents_1_1FLoginCompleteEvent_1a26ee1029c1a011fb47ec8a15dcf97427)|The duration of the login process.|
|TOptional< FString >|[SubmitTimestamp](/unreal-plugins/all/structrhstandardevents_1_1flogincompleteevent/#structRHStandardEvents_1_1FLoginCompleteEvent_1a9bbb4e039316e0d26cfa351c5bdda9ef)|The timestamp when the login process was submitted to the RH API.|
|TOptional< FString >|[PlatformLoginCompleteTimestamp](/unreal-plugins/all/structrhstandardevents_1_1flogincompleteevent/#structRHStandardEvents_1_1FLoginCompleteEvent_1a0c48e762565c10bf0f8bc212ac817846)|The timestamp when the login process was completed.|
|TOptional< TMap< FString, FString > >|[CustomData](/unreal-plugins/all/structrhstandardevents_1_1flogincompleteevent/#structRHStandardEvents_1_1FLoginCompleteEvent_1a6505fba3d70c9ddf43416360bc48bbbf)|custom data fields (will be auto-prefixed with custom data prefix)|
|FString|[GetEventName](/unreal-plugins/all/structrhstandardevents_1_1flogincompleteevent/#structRHStandardEvents_1_1FLoginCompleteEvent_1afe28bf581191845640308bf32b0a332a)()||
|void|[Emit](/unreal-plugins/all/structrhstandardevents_1_1flogincompleteevent/#structRHStandardEvents_1_1FLoginCompleteEvent_1a3ba7c870d89adc5f348d3f9073d949de)(IAnalyticsProvider * Provider, const FString & InPlatformUserId, const FString & InPlatformId, const FString & InStatus, const TOptional< FString > & InPlatformDisplayName, const TOptional< FString > & InPersonId, const TOptional< FString > & InReason, const TOptional< float > & InDurationSeconds, const TOptional< FString > & InSubmitTimestamp, const TOptional< FString > & InPlatformLoginCompleteTimestamp, const TOptional< TMap< FString, FString >> & InCustomData)||
||[FLoginCompleteEvent](/unreal-plugins/all/structrhstandardevents_1_1flogincompleteevent/#structRHStandardEvents_1_1FLoginCompleteEvent_1a54e374804cb72bc28f8de6152169e08c)()||
|void|[EmitTo](/unreal-plugins/all/structrhstandardevents_1_1flogincompleteevent/#structRHStandardEvents_1_1FLoginCompleteEvent_1a13109823a17b2b5a67125d947661caf7)(IAnalyticsProvider * Provider)||
## Public Attributes



### `PlatformUserId` <a id="structRHStandardEvents_1_1FLoginCompleteEvent_1a9f82c4ff7a06a6301e5008b9d5e77bef"></a>

`FString RHStandardEvents::FLoginCompleteEvent::PlatformUserId`

Platform UserId of the player.




### `PlatformId` <a id="structRHStandardEvents_1_1FLoginCompleteEvent_1a5bc4a30e83be6aa9efee09ca239ee9c4"></a>

`FString RHStandardEvents::FLoginCompleteEvent::PlatformId`

Platform Id of the player.




### `Status` <a id="structRHStandardEvents_1_1FLoginCompleteEvent_1a450d771307789ec844783fc93aa9d43e"></a>

`FString RHStandardEvents::FLoginCompleteEvent::Status`

The status of the login attempt.




### `PlatformDisplayName` <a id="structRHStandardEvents_1_1FLoginCompleteEvent_1aa387846cfb5da38f19a8f9fc85f0d1fc"></a>

`TOptional<FString> RHStandardEvents::FLoginCompleteEvent::PlatformDisplayName`

Platform username / gamertag of the player.




### `PersonId` <a id="structRHStandardEvents_1_1FLoginCompleteEvent_1ac4de5a5a09f1ea049638b5a795c84826"></a>

`TOptional<FString> RHStandardEvents::FLoginCompleteEvent::PersonId`

PersonId of the player.




### `Reason` <a id="structRHStandardEvents_1_1FLoginCompleteEvent_1afbf4607ea9cf02be776462795cb43675"></a>

`TOptional<FString> RHStandardEvents::FLoginCompleteEvent::Reason`

The reason for the failure to login.




### `DurationSeconds` <a id="structRHStandardEvents_1_1FLoginCompleteEvent_1a26ee1029c1a011fb47ec8a15dcf97427"></a>

`TOptional<float> RHStandardEvents::FLoginCompleteEvent::DurationSeconds`

The duration of the login process.




### `SubmitTimestamp` <a id="structRHStandardEvents_1_1FLoginCompleteEvent_1a9bbb4e039316e0d26cfa351c5bdda9ef"></a>

`TOptional<FString> RHStandardEvents::FLoginCompleteEvent::SubmitTimestamp`

The timestamp when the login process was submitted to the RH API.




### `PlatformLoginCompleteTimestamp` <a id="structRHStandardEvents_1_1FLoginCompleteEvent_1a0c48e762565c10bf0f8bc212ac817846"></a>

`TOptional<FString> RHStandardEvents::FLoginCompleteEvent::PlatformLoginCompleteTimestamp`

The timestamp when the login process was completed.




### `CustomData` <a id="structRHStandardEvents_1_1FLoginCompleteEvent_1a6505fba3d70c9ddf43416360bc48bbbf"></a>

`TOptional<TMap<FString, FString> > RHStandardEvents::FLoginCompleteEvent::CustomData`

custom data fields (will be auto-prefixed with custom data prefix)





## Public Static Functions



### `GetEventName` <a id="structRHStandardEvents_1_1FLoginCompleteEvent_1afe28bf581191845640308bf32b0a332a"></a>

FString GetEventName()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `Emit` <a id="structRHStandardEvents_1_1FLoginCompleteEvent_1a3ba7c870d89adc5f348d3f9073d949de"></a>

void Emit(IAnalyticsProvider * Provider, const FString & InPlatformUserId, const FString & InPlatformId, const FString & InStatus, const TOptional< FString > & InPlatformDisplayName, const TOptional< FString > & InPersonId, const TOptional< FString > & InReason, const TOptional< float > & InDurationSeconds, const TOptional< FString > & InSubmitTimestamp, const TOptional< FString > & InPlatformLoginCompleteTimestamp, const TOptional< TMap< FString, FString >> & InCustomData)

#### Parameters

| Type | Name |
|------|------|
|IAnalyticsProvider *|Provider|
|const FString &|InPlatformUserId|
|const FString &|InPlatformId|
|const FString &|InStatus|
|const TOptional< FString > &|InPlatformDisplayName|
|const TOptional< FString > &|InPersonId|
|const TOptional< FString > &|InReason|
|const TOptional< float > &|InDurationSeconds|
|const TOptional< FString > &|InSubmitTimestamp|
|const TOptional< FString > &|InPlatformLoginCompleteTimestamp|
|const TOptional< TMap< FString, FString >> &|InCustomData|

#### Description







## Public Functions



### `FLoginCompleteEvent` <a id="structRHStandardEvents_1_1FLoginCompleteEvent_1a54e374804cb72bc28f8de6152169e08c"></a>

 FLoginCompleteEvent()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `EmitTo` <a id="structRHStandardEvents_1_1FLoginCompleteEvent_1a13109823a17b2b5a67125d947661caf7"></a>

void EmitTo(IAnalyticsProvider * Provider)

#### Parameters

| Type | Name |
|------|------|
|IAnalyticsProvider *|Provider|

#### Description







