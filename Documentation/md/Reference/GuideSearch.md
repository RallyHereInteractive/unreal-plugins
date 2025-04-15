---
title: GuideSearch
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`URH_GuideSearch`](#classURH__GuideSearch) | Container for a Search request and its results.
`struct `[`FRH_GuideSearchRequest`](#structFRH__GuideSearchRequest) | Input to generate a RH_GuideSearch object from the RH_GuideSubsystem.

## class `URH_GuideSearch` <a id="classURH__GuideSearch"></a>

```
class URH_GuideSearch
  : public UObject
```

Container for a Search request and its results.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual void `[`Initialize`](#classURH__GuideSearch_1a0e55a83b7a60a49d5d5af38d12856f76)`(const `[`FRH_GuideSearchRequest`](GuideSearch.md#structFRH__GuideSearchRequest)` & InRequest,TSharedPtr< RallyHereAPI::FAuthContext > InAuthContext)` | 
`public virtual bool `[`RequestNextPage`](#classURH__GuideSearch_1a6ac8d6de8487a887704e7eedf251f9d4)`(const FRH_GenericSuccessWithErrorBlock & Delegate)` | Request the next page of results for a search guide.
`public bool `[`HasMorePages`](#classURH__GuideSearch_1a182e1382af53be741a9bf9d353906095)`() const` | Are there more pages to request for this search? If false, requesting additional pages will always fail.
`public inline const TArray< `[`FRHAPI_SearchGuideResponse`](RHAPI_SearchGuideResponse.md#structFRHAPI__SearchGuideResponse)` > & `[`GetResultPages`](#classURH__GuideSearch_1a55a9b6e979c93146bbd7795f5c0b597d)`() const` | Paged search results.
`public inline const `[`FRH_GuideSearchRequest`](GuideSearch.md#structFRH__GuideSearchRequest)` & `[`GetInputRequest`](#classURH__GuideSearch_1af733ea0468ca5b3d2313ac990217f0ac)`() const` | Input that was used to generate these results.
`public inline bool `[`GetRequestInProgress`](#classURH__GuideSearch_1a28107714d4a31350653da53fe8b6d77e)`() const` | Is there a request in progress? If so, attempting to request a new page will fail.
`protected TArray< `[`FRHAPI_SearchGuideResponse`](RHAPI_SearchGuideResponse.md#structFRHAPI__SearchGuideResponse)` > `[`ResultPages`](#classURH__GuideSearch_1ae33f8cc62eb9b2cb7afa734b9e589622) | Paged search results.
`protected `[`FRH_GuideSearchRequest`](GuideSearch.md#structFRH__GuideSearchRequest)` `[`InputRequest`](#classURH__GuideSearch_1a048ed0a66c2a22d4235dae9bd8ad5312) | Input that was used to generate these results.
`protected bool `[`bRequestInProgress`](#classURH__GuideSearch_1a3a734bfff92c0d0e1cab17e71c9928d3) | Is there a request in progress? If so, attempting to request a new page will fail.
`protected TSearchGuides::Request `[`SearchRequest`](#classURH__GuideSearch_1ad47067809f6b88ffd24e2faf8734dec5) | Cached request object that will be used for API calls.
`protected virtual FString * `[`GetNextPageCursor`](#classURH__GuideSearch_1a938fe3ed6cbc1ff9d1a88de47b786602)`() const` | 
`typedef `[`TSearchGuides`](#classURH__GuideSearch_1a5114a536c22669ff9cfdcabb7c8c745c) | 

### Members

#### `public virtual void `[`Initialize`](#classURH__GuideSearch_1a0e55a83b7a60a49d5d5af38d12856f76)`(const `[`FRH_GuideSearchRequest`](GuideSearch.md#structFRH__GuideSearchRequest)` & InRequest,TSharedPtr< RallyHereAPI::FAuthContext > InAuthContext)` <a id="classURH__GuideSearch_1a0e55a83b7a60a49d5d5af38d12856f76"></a>

#### `public virtual bool `[`RequestNextPage`](#classURH__GuideSearch_1a6ac8d6de8487a887704e7eedf251f9d4)`(const FRH_GenericSuccessWithErrorBlock & Delegate)` <a id="classURH__GuideSearch_1a6ac8d6de8487a887704e7eedf251f9d4"></a>

Request the next page of results for a search guide.

#### Parameters
* `Delegate` Callback when the API call is complete. 

#### Returns
True if the request was attempted, false if a request is already in progress or the search is complete.

#### `public bool `[`HasMorePages`](#classURH__GuideSearch_1a182e1382af53be741a9bf9d353906095)`() const` <a id="classURH__GuideSearch_1a182e1382af53be741a9bf9d353906095"></a>

Are there more pages to request for this search? If false, requesting additional pages will always fail.

#### Returns
True if the search has more pages to return, false if the last page has been received

#### `public inline const TArray< `[`FRHAPI_SearchGuideResponse`](RHAPI_SearchGuideResponse.md#structFRHAPI__SearchGuideResponse)` > & `[`GetResultPages`](#classURH__GuideSearch_1a55a9b6e979c93146bbd7795f5c0b597d)`() const` <a id="classURH__GuideSearch_1a55a9b6e979c93146bbd7795f5c0b597d"></a>

Paged search results.

#### Returns
Array of search result pages

#### `public inline const `[`FRH_GuideSearchRequest`](GuideSearch.md#structFRH__GuideSearchRequest)` & `[`GetInputRequest`](#classURH__GuideSearch_1af733ea0468ca5b3d2313ac990217f0ac)`() const` <a id="classURH__GuideSearch_1af733ea0468ca5b3d2313ac990217f0ac"></a>

Input that was used to generate these results.

#### Returns
Input request object

#### `public inline bool `[`GetRequestInProgress`](#classURH__GuideSearch_1a28107714d4a31350653da53fe8b6d77e)`() const` <a id="classURH__GuideSearch_1a28107714d4a31350653da53fe8b6d77e"></a>

Is there a request in progress? If so, attempting to request a new page will fail.

#### Returns
True if a request is in progress, false otherwise.

#### `protected TArray< `[`FRHAPI_SearchGuideResponse`](RHAPI_SearchGuideResponse.md#structFRHAPI__SearchGuideResponse)` > `[`ResultPages`](#classURH__GuideSearch_1ae33f8cc62eb9b2cb7afa734b9e589622) <a id="classURH__GuideSearch_1ae33f8cc62eb9b2cb7afa734b9e589622"></a>

Paged search results.

#### `protected `[`FRH_GuideSearchRequest`](GuideSearch.md#structFRH__GuideSearchRequest)` `[`InputRequest`](#classURH__GuideSearch_1a048ed0a66c2a22d4235dae9bd8ad5312) <a id="classURH__GuideSearch_1a048ed0a66c2a22d4235dae9bd8ad5312"></a>

Input that was used to generate these results.

#### `protected bool `[`bRequestInProgress`](#classURH__GuideSearch_1a3a734bfff92c0d0e1cab17e71c9928d3) <a id="classURH__GuideSearch_1a3a734bfff92c0d0e1cab17e71c9928d3"></a>

Is there a request in progress? If so, attempting to request a new page will fail.

#### `protected TSearchGuides::Request `[`SearchRequest`](#classURH__GuideSearch_1ad47067809f6b88ffd24e2faf8734dec5) <a id="classURH__GuideSearch_1ad47067809f6b88ffd24e2faf8734dec5"></a>

Cached request object that will be used for API calls.

#### `protected virtual FString * `[`GetNextPageCursor`](#classURH__GuideSearch_1a938fe3ed6cbc1ff9d1a88de47b786602)`() const` <a id="classURH__GuideSearch_1a938fe3ed6cbc1ff9d1a88de47b786602"></a>

#### `typedef `[`TSearchGuides`](#classURH__GuideSearch_1a5114a536c22669ff9cfdcabb7c8c745c) <a id="classURH__GuideSearch_1a5114a536c22669ff9cfdcabb7c8c745c"></a>

## struct `FRH_GuideSearchRequest` <a id="structFRH__GuideSearchRequest"></a>

Input to generate a RH_GuideSearch object from the RH_GuideSubsystem.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< ERHAPI_SearchGuideSort > `[`SortBy`](#structFRH__GuideSearchRequest_1a929f9288637ec209ea22429b26398be5) | Field to sort the results by.
`public TArray< ERHAPI_SortDirection > `[`Sort`](#structFRH__GuideSearchRequest_1afa6e5b02919302e7bc448f628cc5350d) | Direction to sort the results.
`public int32 `[`PageSize`](#structFRH__GuideSearchRequest_1aa11345b4b6ac52820fca98380517e5b7) | Page Size of the request - 0 will use the default.
`public bool `[`bDoOwnerSearch`](#structFRH__GuideSearchRequest_1a1f52bf3978c60127c3323d99b3699375) | Should the owner be checked when searching?
`public ERHAPI_GuideEntityType `[`OwnerEntityType`](#structFRH__GuideSearchRequest_1af75e3b399e0944765b067afa06695ac6) | Type of the entity that owns the guide.
`public FString `[`OwnerEntityId`](#structFRH__GuideSearchRequest_1a642272082563e0b6296f00f1b46ad33c) | Unique ID of the entity that owns the guide (e.g. Player UUID)
`public FString `[`Language`](#structFRH__GuideSearchRequest_1a129330009f1bc053d4974398d42b7874) | Language code for the guide (should be 3 characters)
`public FString `[`GuideType`](#structFRH__GuideSearchRequest_1ad67a1c13de9a9cb53113700cf2185800) | Game-specific type of the guide.
`public FString `[`GameVersion`](#structFRH__GuideSearchRequest_1a92e1fd7379cab7dd12be996c12d1ad2a) | Game version the guide was created/modified for.
`public FString `[`Name`](#structFRH__GuideSearchRequest_1aeb3fa8d2c5d733186ced2c176ac7bd09) | Display name for the guide.
`public FString `[`Ref1`](#structFRH__GuideSearchRequest_1a48936273c384f1e6591a4fb5f0d81436) | Game-specific reference id.
`public FString `[`Ref2`](#structFRH__GuideSearchRequest_1ad3ed7e97653155de0a0602a7bd4a72ce) | Game-specific reference id.
`public FString `[`Ref3`](#structFRH__GuideSearchRequest_1a3906eac167d368959d5109b06a5962e2) | Game-specific reference id.
`public FString `[`Ref4`](#structFRH__GuideSearchRequest_1a4e53605b4741134b0d3b77695900a008) | Game-specific reference id.
`public FString `[`Ref5`](#structFRH__GuideSearchRequest_1ab3cb456453653d77a27f698090ae29d4) | Game-specific reference id.
`public FString `[`Ref6`](#structFRH__GuideSearchRequest_1a517fc3548bd615c207e69a93a799b4f3) | Game-specific reference id.
`public FString `[`Ref7`](#structFRH__GuideSearchRequest_1a3e94646b43284e5535864ff8a64a941c) | Game-specific reference id.
`public FString `[`Ref8`](#structFRH__GuideSearchRequest_1a0673c8bdbbb56849811f7d9d1f1d59b3) | Game-specific reference id.
`public FString `[`Ref9`](#structFRH__GuideSearchRequest_1afafbc1e5c121f4869c7b5107efcf6f44) | Game-specific reference id.
`public FString `[`Ref10`](#structFRH__GuideSearchRequest_1a0bfd1481e8ef3de0560c2fb73308b68b) | Game-specific reference id.
`public FString `[`Ref11`](#structFRH__GuideSearchRequest_1aee5080cf040699dadacc01203a6ba8cd) | Game-specific reference id.
`public FString `[`Ref12`](#structFRH__GuideSearchRequest_1a38ddb8d71e764dd9218ba6dab1144084) | Game-specific reference id.
`public FString `[`Ref13`](#structFRH__GuideSearchRequest_1a4ebc9bf3b1ef69a3ce8ce727b611a9a3) | Game-specific reference id.
`public FString `[`Ref14`](#structFRH__GuideSearchRequest_1a56a4c6010d1b18a45d1abfb9cec128c4) | Game-specific reference id.
`public FString `[`Ref15`](#structFRH__GuideSearchRequest_1a9c094ba4810c09b577e3b2ad5ebef60f) | Game-specific reference id.
`public FString `[`Ref16`](#structFRH__GuideSearchRequest_1a608e541aeb67b4b7fe0c242d046fdf05) | Game-specific reference id.
`public FString `[`Ref17`](#structFRH__GuideSearchRequest_1af6a4840d8d0af343a3a6d9763c87dcb9) | Game-specific reference id.
`public FString `[`Ref18`](#structFRH__GuideSearchRequest_1aaeb955b2caac7372fa8950630a630230) | Game-specific reference id.
`public FString `[`Ref19`](#structFRH__GuideSearchRequest_1aeac86eb5a9ed118f7e8f5b18cb6c6cce) | Game-specific reference id.
`public FString `[`Ref20`](#structFRH__GuideSearchRequest_1a78fcecc785ec9d670dc4cedf1e756ac0) | Game-specific reference id.
`public FString `[`Ref21`](#structFRH__GuideSearchRequest_1af7c7bafa5b767514036f15298a28e0f3) | Game-specific reference id.
`public FString `[`Ref22`](#structFRH__GuideSearchRequest_1aab377f727545ae1ae26598b0a2c4fbc4) | Game-specific reference id.
`public FString `[`Ref23`](#structFRH__GuideSearchRequest_1a7eb4eadf221a26a0f5e69a2ccb8a2758) | Game-specific reference id.
`public FString `[`Ref24`](#structFRH__GuideSearchRequest_1a36dc0b354da9cd4b7d867c1374b9de27) | Game-specific reference id.
`public FString `[`Ref25`](#structFRH__GuideSearchRequest_1a421d5912b96eb2231b52ae29bf0e2733) | Game-specific reference id.
`public FString `[`Ref26`](#structFRH__GuideSearchRequest_1a102e8eace961aaed4572242e75b9e081) | Game-specific reference id.
`public FString `[`Ref27`](#structFRH__GuideSearchRequest_1a6454eb88a97c9598c563a9ae27485c8c) | Game-specific reference id.
`public FString `[`Ref28`](#structFRH__GuideSearchRequest_1abe13819b126eaf7ab87b328d8a823c61) | Game-specific reference id.
`public FString `[`Ref29`](#structFRH__GuideSearchRequest_1a71bc32ba8d3e7449cdc30e0edd6e6fb5) | Game-specific reference id.
`public FString `[`Ref30`](#structFRH__GuideSearchRequest_1a188485dec2d9c6eaa08d7cc6f6a73485) | Game-specific reference id.
`public FString `[`Ref31`](#structFRH__GuideSearchRequest_1a04d3bc9e760c05b558062bcf9b1dab9a) | Game-specific reference id.
`public FString `[`Ref32`](#structFRH__GuideSearchRequest_1a3ecc32eacfa66d90d85a5a9c292757a7) | Game-specific reference id.
`public inline  `[`FRH_GuideSearchRequest`](#structFRH__GuideSearchRequest_1a1d8b70ee1bdcea40c9ebb9053584ba09)`()` | 

### Members

#### `public TArray< ERHAPI_SearchGuideSort > `[`SortBy`](#structFRH__GuideSearchRequest_1a929f9288637ec209ea22429b26398be5) <a id="structFRH__GuideSearchRequest_1a929f9288637ec209ea22429b26398be5"></a>

Field to sort the results by.

#### `public TArray< ERHAPI_SortDirection > `[`Sort`](#structFRH__GuideSearchRequest_1afa6e5b02919302e7bc448f628cc5350d) <a id="structFRH__GuideSearchRequest_1afa6e5b02919302e7bc448f628cc5350d"></a>

Direction to sort the results.

#### `public int32 `[`PageSize`](#structFRH__GuideSearchRequest_1aa11345b4b6ac52820fca98380517e5b7) <a id="structFRH__GuideSearchRequest_1aa11345b4b6ac52820fca98380517e5b7"></a>

Page Size of the request - 0 will use the default.

#### `public bool `[`bDoOwnerSearch`](#structFRH__GuideSearchRequest_1a1f52bf3978c60127c3323d99b3699375) <a id="structFRH__GuideSearchRequest_1a1f52bf3978c60127c3323d99b3699375"></a>

Should the owner be checked when searching?

#### `public ERHAPI_GuideEntityType `[`OwnerEntityType`](#structFRH__GuideSearchRequest_1af75e3b399e0944765b067afa06695ac6) <a id="structFRH__GuideSearchRequest_1af75e3b399e0944765b067afa06695ac6"></a>

Type of the entity that owns the guide.

#### `public FString `[`OwnerEntityId`](#structFRH__GuideSearchRequest_1a642272082563e0b6296f00f1b46ad33c) <a id="structFRH__GuideSearchRequest_1a642272082563e0b6296f00f1b46ad33c"></a>

Unique ID of the entity that owns the guide (e.g. Player UUID)

#### `public FString `[`Language`](#structFRH__GuideSearchRequest_1a129330009f1bc053d4974398d42b7874) <a id="structFRH__GuideSearchRequest_1a129330009f1bc053d4974398d42b7874"></a>

Language code for the guide (should be 3 characters)

#### `public FString `[`GuideType`](#structFRH__GuideSearchRequest_1ad67a1c13de9a9cb53113700cf2185800) <a id="structFRH__GuideSearchRequest_1ad67a1c13de9a9cb53113700cf2185800"></a>

Game-specific type of the guide.

#### `public FString `[`GameVersion`](#structFRH__GuideSearchRequest_1a92e1fd7379cab7dd12be996c12d1ad2a) <a id="structFRH__GuideSearchRequest_1a92e1fd7379cab7dd12be996c12d1ad2a"></a>

Game version the guide was created/modified for.

#### `public FString `[`Name`](#structFRH__GuideSearchRequest_1aeb3fa8d2c5d733186ced2c176ac7bd09) <a id="structFRH__GuideSearchRequest_1aeb3fa8d2c5d733186ced2c176ac7bd09"></a>

Display name for the guide.

#### `public FString `[`Ref1`](#structFRH__GuideSearchRequest_1a48936273c384f1e6591a4fb5f0d81436) <a id="structFRH__GuideSearchRequest_1a48936273c384f1e6591a4fb5f0d81436"></a>

Game-specific reference id.

#### `public FString `[`Ref2`](#structFRH__GuideSearchRequest_1ad3ed7e97653155de0a0602a7bd4a72ce) <a id="structFRH__GuideSearchRequest_1ad3ed7e97653155de0a0602a7bd4a72ce"></a>

Game-specific reference id.

#### `public FString `[`Ref3`](#structFRH__GuideSearchRequest_1a3906eac167d368959d5109b06a5962e2) <a id="structFRH__GuideSearchRequest_1a3906eac167d368959d5109b06a5962e2"></a>

Game-specific reference id.

#### `public FString `[`Ref4`](#structFRH__GuideSearchRequest_1a4e53605b4741134b0d3b77695900a008) <a id="structFRH__GuideSearchRequest_1a4e53605b4741134b0d3b77695900a008"></a>

Game-specific reference id.

#### `public FString `[`Ref5`](#structFRH__GuideSearchRequest_1ab3cb456453653d77a27f698090ae29d4) <a id="structFRH__GuideSearchRequest_1ab3cb456453653d77a27f698090ae29d4"></a>

Game-specific reference id.

#### `public FString `[`Ref6`](#structFRH__GuideSearchRequest_1a517fc3548bd615c207e69a93a799b4f3) <a id="structFRH__GuideSearchRequest_1a517fc3548bd615c207e69a93a799b4f3"></a>

Game-specific reference id.

#### `public FString `[`Ref7`](#structFRH__GuideSearchRequest_1a3e94646b43284e5535864ff8a64a941c) <a id="structFRH__GuideSearchRequest_1a3e94646b43284e5535864ff8a64a941c"></a>

Game-specific reference id.

#### `public FString `[`Ref8`](#structFRH__GuideSearchRequest_1a0673c8bdbbb56849811f7d9d1f1d59b3) <a id="structFRH__GuideSearchRequest_1a0673c8bdbbb56849811f7d9d1f1d59b3"></a>

Game-specific reference id.

#### `public FString `[`Ref9`](#structFRH__GuideSearchRequest_1afafbc1e5c121f4869c7b5107efcf6f44) <a id="structFRH__GuideSearchRequest_1afafbc1e5c121f4869c7b5107efcf6f44"></a>

Game-specific reference id.

#### `public FString `[`Ref10`](#structFRH__GuideSearchRequest_1a0bfd1481e8ef3de0560c2fb73308b68b) <a id="structFRH__GuideSearchRequest_1a0bfd1481e8ef3de0560c2fb73308b68b"></a>

Game-specific reference id.

#### `public FString `[`Ref11`](#structFRH__GuideSearchRequest_1aee5080cf040699dadacc01203a6ba8cd) <a id="structFRH__GuideSearchRequest_1aee5080cf040699dadacc01203a6ba8cd"></a>

Game-specific reference id.

#### `public FString `[`Ref12`](#structFRH__GuideSearchRequest_1a38ddb8d71e764dd9218ba6dab1144084) <a id="structFRH__GuideSearchRequest_1a38ddb8d71e764dd9218ba6dab1144084"></a>

Game-specific reference id.

#### `public FString `[`Ref13`](#structFRH__GuideSearchRequest_1a4ebc9bf3b1ef69a3ce8ce727b611a9a3) <a id="structFRH__GuideSearchRequest_1a4ebc9bf3b1ef69a3ce8ce727b611a9a3"></a>

Game-specific reference id.

#### `public FString `[`Ref14`](#structFRH__GuideSearchRequest_1a56a4c6010d1b18a45d1abfb9cec128c4) <a id="structFRH__GuideSearchRequest_1a56a4c6010d1b18a45d1abfb9cec128c4"></a>

Game-specific reference id.

#### `public FString `[`Ref15`](#structFRH__GuideSearchRequest_1a9c094ba4810c09b577e3b2ad5ebef60f) <a id="structFRH__GuideSearchRequest_1a9c094ba4810c09b577e3b2ad5ebef60f"></a>

Game-specific reference id.

#### `public FString `[`Ref16`](#structFRH__GuideSearchRequest_1a608e541aeb67b4b7fe0c242d046fdf05) <a id="structFRH__GuideSearchRequest_1a608e541aeb67b4b7fe0c242d046fdf05"></a>

Game-specific reference id.

#### `public FString `[`Ref17`](#structFRH__GuideSearchRequest_1af6a4840d8d0af343a3a6d9763c87dcb9) <a id="structFRH__GuideSearchRequest_1af6a4840d8d0af343a3a6d9763c87dcb9"></a>

Game-specific reference id.

#### `public FString `[`Ref18`](#structFRH__GuideSearchRequest_1aaeb955b2caac7372fa8950630a630230) <a id="structFRH__GuideSearchRequest_1aaeb955b2caac7372fa8950630a630230"></a>

Game-specific reference id.

#### `public FString `[`Ref19`](#structFRH__GuideSearchRequest_1aeac86eb5a9ed118f7e8f5b18cb6c6cce) <a id="structFRH__GuideSearchRequest_1aeac86eb5a9ed118f7e8f5b18cb6c6cce"></a>

Game-specific reference id.

#### `public FString `[`Ref20`](#structFRH__GuideSearchRequest_1a78fcecc785ec9d670dc4cedf1e756ac0) <a id="structFRH__GuideSearchRequest_1a78fcecc785ec9d670dc4cedf1e756ac0"></a>

Game-specific reference id.

#### `public FString `[`Ref21`](#structFRH__GuideSearchRequest_1af7c7bafa5b767514036f15298a28e0f3) <a id="structFRH__GuideSearchRequest_1af7c7bafa5b767514036f15298a28e0f3"></a>

Game-specific reference id.

#### `public FString `[`Ref22`](#structFRH__GuideSearchRequest_1aab377f727545ae1ae26598b0a2c4fbc4) <a id="structFRH__GuideSearchRequest_1aab377f727545ae1ae26598b0a2c4fbc4"></a>

Game-specific reference id.

#### `public FString `[`Ref23`](#structFRH__GuideSearchRequest_1a7eb4eadf221a26a0f5e69a2ccb8a2758) <a id="structFRH__GuideSearchRequest_1a7eb4eadf221a26a0f5e69a2ccb8a2758"></a>

Game-specific reference id.

#### `public FString `[`Ref24`](#structFRH__GuideSearchRequest_1a36dc0b354da9cd4b7d867c1374b9de27) <a id="structFRH__GuideSearchRequest_1a36dc0b354da9cd4b7d867c1374b9de27"></a>

Game-specific reference id.

#### `public FString `[`Ref25`](#structFRH__GuideSearchRequest_1a421d5912b96eb2231b52ae29bf0e2733) <a id="structFRH__GuideSearchRequest_1a421d5912b96eb2231b52ae29bf0e2733"></a>

Game-specific reference id.

#### `public FString `[`Ref26`](#structFRH__GuideSearchRequest_1a102e8eace961aaed4572242e75b9e081) <a id="structFRH__GuideSearchRequest_1a102e8eace961aaed4572242e75b9e081"></a>

Game-specific reference id.

#### `public FString `[`Ref27`](#structFRH__GuideSearchRequest_1a6454eb88a97c9598c563a9ae27485c8c) <a id="structFRH__GuideSearchRequest_1a6454eb88a97c9598c563a9ae27485c8c"></a>

Game-specific reference id.

#### `public FString `[`Ref28`](#structFRH__GuideSearchRequest_1abe13819b126eaf7ab87b328d8a823c61) <a id="structFRH__GuideSearchRequest_1abe13819b126eaf7ab87b328d8a823c61"></a>

Game-specific reference id.

#### `public FString `[`Ref29`](#structFRH__GuideSearchRequest_1a71bc32ba8d3e7449cdc30e0edd6e6fb5) <a id="structFRH__GuideSearchRequest_1a71bc32ba8d3e7449cdc30e0edd6e6fb5"></a>

Game-specific reference id.

#### `public FString `[`Ref30`](#structFRH__GuideSearchRequest_1a188485dec2d9c6eaa08d7cc6f6a73485) <a id="structFRH__GuideSearchRequest_1a188485dec2d9c6eaa08d7cc6f6a73485"></a>

Game-specific reference id.

#### `public FString `[`Ref31`](#structFRH__GuideSearchRequest_1a04d3bc9e760c05b558062bcf9b1dab9a) <a id="structFRH__GuideSearchRequest_1a04d3bc9e760c05b558062bcf9b1dab9a"></a>

Game-specific reference id.

#### `public FString `[`Ref32`](#structFRH__GuideSearchRequest_1a3ecc32eacfa66d90d85a5a9c292757a7) <a id="structFRH__GuideSearchRequest_1a3ecc32eacfa66d90d85a5a9c292757a7"></a>

Game-specific reference id.

#### `public inline  `[`FRH_GuideSearchRequest`](#structFRH__GuideSearchRequest_1a1d8b70ee1bdcea40c9ebb9053584ba09)`()` <a id="structFRH__GuideSearchRequest_1a1d8b70ee1bdcea40c9ebb9053584ba09"></a>

