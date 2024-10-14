---
title: PlayerExperience
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`define `[`PEX_ADD_INDEXED_STAT_TO_REPORT`](#group__PlayerExperience_1gaa850fc9aac069e2fa6756c926e1e7e3a)            | 
`define `[`PEX_ADD_INDEXED_COUNTER_TO_REPORT`](#group__PlayerExperience_1ga0945dc33a2d3710be70f7820c41eb5ef)            | 
`enum `[`ERH_PEXValueType`](#group__PlayerExperience_1ga4aa4d68c147f6cf7a965526bf6942234)            | Enum representing what value should be recorded when only a single value is requested for display or logging.
`class `[`URH_PEXCollectorConfig`](#classURH__PEXCollectorConfig) | 
`class `[`URH_PEXCollectorConfig_Client`](#classURH__PEXCollectorConfig__Client) | 
`class `[`URH_PEXCollectorConfig_Host`](#classURH__PEXCollectorConfig__Host) | 
`class `[`URH_PEXCollectorConfig_DedicatedServer`](#classURH__PEXCollectorConfig__DedicatedServer) | 
`class `[`URH_PEXOwnerInterface`](#classURH__PEXOwnerInterface) | PlayerExperience Owner Interface class.
`class `[`IRH_PEXOwnerInterface`](#classIRH__PEXOwnerInterface) | PlayerExperience Owner Interface.
`class `[`URH_PEXStatGroup`](#classURH__PEXStatGroup) | Base class for a group of stats.
`class `[`URH_PEXStatGroupsTopLevel`](#classURH__PEXStatGroupsTopLevel) | Stat group that contains all other stat groups, configurable via INI.
`class `[`URH_PEXCollector`](#classURH__PEXCollector) | PlayerExperience Collector class, responsible for collecting and tracking PEX data via PEX Stat Groups.
`class `[`URH_PEXPrimaryStats`](#classURH__PEXPrimaryStats) | Stat group for capturing primary stats.
`class `[`URH_PEXNetworkStats_Base`](#classURH__PEXNetworkStats__Base) | Stat group for capturing whole-state network stats.
`class `[`URH_PEXNetworkStats_Global`](#classURH__PEXNetworkStats__Global) | Stat group for capturing global network stats.
`class `[`URH_PEXNetworkStats_Connection`](#classURH__PEXNetworkStats__Connection) | Stat group for capturing per-player network stats.
`class `[`URH_PEXNetworkStats_Host`](#classURH__PEXNetworkStats__Host) | Stat group for capturing a group of player network stats.
`class `[`URH_PEXNetworkStats_Client`](#classURH__PEXNetworkStats__Client) | Stat group for capturing a group of client's connection to server's network stats.
`class `[`URH_PEXNetworkStats`](#classURH__PEXNetworkStats) | Stat group for capturing local whole-state network stats, plus per-player stats.
`class `[`URH_PEXGameStats`](#classURH__PEXGameStats) | Stat group for capturing game stats.
`class `[`URH_PEXBlueprintableStats`](#classURH__PEXBlueprintableStats) | Blueprintable stat group for capturing stats.
`class `[`URH_PEXCollectorConfig_Test`](#classURH__PEXCollectorConfig__Test) | 
`class `[`URH_TestPEXOwner`](#classURH__TestPEXOwner) | 
`struct `[`FRH_PEXStatState`](#structFRH__PEXStatState) | State of the accumulated stat.
`struct `[`FRH_StatAccumulator`](#structFRH__StatAccumulator) | Simple accumulator that represents a captured statistic. Tracks min, max, average, and other values internally without having to store all values.
`struct `[`FRH_StatCounter`](#structFRH__StatCounter) | Simple counter that represents a captured statistic. Tracks current value, and tracks summary data.

## Members

#### `define `[`PEX_ADD_INDEXED_STAT_TO_REPORT`](#group__PlayerExperience_1gaa850fc9aac069e2fa6756c926e1e7e3a) <a id="group__PlayerExperience_1gaa850fc9aac069e2fa6756c926e1e7e3a"></a>

#### `define `[`PEX_ADD_INDEXED_COUNTER_TO_REPORT`](#group__PlayerExperience_1ga0945dc33a2d3710be70f7820c41eb5ef) <a id="group__PlayerExperience_1ga0945dc33a2d3710be70f7820c41eb5ef"></a>

#### `enum `[`ERH_PEXValueType`](#group__PlayerExperience_1ga4aa4d68c147f6cf7a965526bf6942234) <a id="group__PlayerExperience_1ga4aa4d68c147f6cf7a965526bf6942234"></a>

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
Current            | 
Min            | 
Max            | 
Avg            | 
Sum            | 
Count            | 

Enum representing what value should be recorded when only a single value is requested for display or logging.

## class `URH_PEXCollectorConfig` <a id="classURH__PEXCollectorConfig"></a>

```
class URH_PEXCollectorConfig
  : public UObject
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public bool `[`bEnabled`](#classURH__PEXCollectorConfig_1a5509217cac229da0fd9d86e54ae6aa93) | Enable tracking of PEX data
`public bool `[`bWriteSummaryFile`](#classURH__PEXCollectorConfig_1a3a5023e24b59c18dcce022930c7bef1f) | Whether to write summary data to file
`public bool `[`bUploadSummaryToPEXAPI`](#classURH__PEXCollectorConfig_1a66b1136a290b46e1db259f8a868655c9) | Whether to send summary data to the PEX API
`public bool `[`bUploadSummaryToFileAPI`](#classURH__PEXCollectorConfig_1a8087500e751be26f67327ccbf365f083) | Whether to send summary data to the File API (Requires bWriteSummaryFile)
`public bool `[`bWriteTimelineFile`](#classURH__PEXCollectorConfig_1a15127545a8061de7e387e3f85d51c9e7) | Whether to write timeline data to file
`public bool `[`bUploadTimelineToFileAPI`](#classURH__PEXCollectorConfig_1a59f36ca17e694d1c182dfc63b401f0da) | Whether to send timeline data to the File API (Requires bWriteTimelineFile)
`public int32 `[`StatInterval`](#classURH__PEXCollectorConfig_1a432154cb90daa7882de271e53bc816ff) | Interval of updating summary and writing timeline, in seconds
`public int32 `[`NumIntervalsToIgnoreAfterMapLoadForSummary`](#classURH__PEXCollectorConfig_1af497e32a21b7588e5eaa38fba7c9674e) | How many intervals to ignore for summary after a map load (to allow things like streaming to stablize)
`public FString `[`TimelineFilePrefix`](#classURH__PEXCollectorConfig_1a85e4c4eb8c381adbf8e02b2f00911a1d) | Prefix for timeline file name
`public FString `[`SummaryFilePrefix`](#classURH__PEXCollectorConfig_1aa5ad5eaa1723126934fb7335f20890bb) | Prefix for summary file name
`public TSet< TSubclassOf< `[`URH_PEXStatGroup`](PlayerExperience.md#classURH__PEXStatGroup)` > > `[`StatGroupsToCapture`](#classURH__PEXCollectorConfig_1a15bb5fe15307798368d32729ef73bfb1) | Array of StatGroups to capture
`public  `[`URH_PEXCollectorConfig`](#classURH__PEXCollectorConfig_1a6b5675c95f49d2fc131b6405d545202c)`()` | 
`public inline bool `[`WantsEnabled`](#classURH__PEXCollectorConfig_1a2657e9f57c51db32120cf7f752e240aa)`() const` | Helper function for whether tracking should be enabled
`public inline bool `[`WantsSummary`](#classURH__PEXCollectorConfig_1a2c3b5e0fac4ecd2155d0df9b9023c45c)`() const` | Helper function for whether summary data should be tracked
`public inline bool `[`WantsTimeline`](#classURH__PEXCollectorConfig_1afcb2743c4816b00129754a9bc9c33b24)`() const` | Helper function for whether timeline data should be tracked

### Members

#### `public bool `[`bEnabled`](#classURH__PEXCollectorConfig_1a5509217cac229da0fd9d86e54ae6aa93) <a id="classURH__PEXCollectorConfig_1a5509217cac229da0fd9d86e54ae6aa93"></a>

Enable tracking of PEX data

#### `public bool `[`bWriteSummaryFile`](#classURH__PEXCollectorConfig_1a3a5023e24b59c18dcce022930c7bef1f) <a id="classURH__PEXCollectorConfig_1a3a5023e24b59c18dcce022930c7bef1f"></a>

Whether to write summary data to file

#### `public bool `[`bUploadSummaryToPEXAPI`](#classURH__PEXCollectorConfig_1a66b1136a290b46e1db259f8a868655c9) <a id="classURH__PEXCollectorConfig_1a66b1136a290b46e1db259f8a868655c9"></a>

Whether to send summary data to the PEX API

#### `public bool `[`bUploadSummaryToFileAPI`](#classURH__PEXCollectorConfig_1a8087500e751be26f67327ccbf365f083) <a id="classURH__PEXCollectorConfig_1a8087500e751be26f67327ccbf365f083"></a>

Whether to send summary data to the File API (Requires bWriteSummaryFile)

#### `public bool `[`bWriteTimelineFile`](#classURH__PEXCollectorConfig_1a15127545a8061de7e387e3f85d51c9e7) <a id="classURH__PEXCollectorConfig_1a15127545a8061de7e387e3f85d51c9e7"></a>

Whether to write timeline data to file

#### `public bool `[`bUploadTimelineToFileAPI`](#classURH__PEXCollectorConfig_1a59f36ca17e694d1c182dfc63b401f0da) <a id="classURH__PEXCollectorConfig_1a59f36ca17e694d1c182dfc63b401f0da"></a>

Whether to send timeline data to the File API (Requires bWriteTimelineFile)

#### `public int32 `[`StatInterval`](#classURH__PEXCollectorConfig_1a432154cb90daa7882de271e53bc816ff) <a id="classURH__PEXCollectorConfig_1a432154cb90daa7882de271e53bc816ff"></a>

Interval of updating summary and writing timeline, in seconds

#### `public int32 `[`NumIntervalsToIgnoreAfterMapLoadForSummary`](#classURH__PEXCollectorConfig_1af497e32a21b7588e5eaa38fba7c9674e) <a id="classURH__PEXCollectorConfig_1af497e32a21b7588e5eaa38fba7c9674e"></a>

How many intervals to ignore for summary after a map load (to allow things like streaming to stablize)

#### `public FString `[`TimelineFilePrefix`](#classURH__PEXCollectorConfig_1a85e4c4eb8c381adbf8e02b2f00911a1d) <a id="classURH__PEXCollectorConfig_1a85e4c4eb8c381adbf8e02b2f00911a1d"></a>

Prefix for timeline file name

#### `public FString `[`SummaryFilePrefix`](#classURH__PEXCollectorConfig_1aa5ad5eaa1723126934fb7335f20890bb) <a id="classURH__PEXCollectorConfig_1aa5ad5eaa1723126934fb7335f20890bb"></a>

Prefix for summary file name

#### `public TSet< TSubclassOf< `[`URH_PEXStatGroup`](PlayerExperience.md#classURH__PEXStatGroup)` > > `[`StatGroupsToCapture`](#classURH__PEXCollectorConfig_1a15bb5fe15307798368d32729ef73bfb1) <a id="classURH__PEXCollectorConfig_1a15bb5fe15307798368d32729ef73bfb1"></a>

Array of StatGroups to capture

#### `public  `[`URH_PEXCollectorConfig`](#classURH__PEXCollectorConfig_1a6b5675c95f49d2fc131b6405d545202c)`()` <a id="classURH__PEXCollectorConfig_1a6b5675c95f49d2fc131b6405d545202c"></a>

#### `public inline bool `[`WantsEnabled`](#classURH__PEXCollectorConfig_1a2657e9f57c51db32120cf7f752e240aa)`() const` <a id="classURH__PEXCollectorConfig_1a2657e9f57c51db32120cf7f752e240aa"></a>

Helper function for whether tracking should be enabled

#### `public inline bool `[`WantsSummary`](#classURH__PEXCollectorConfig_1a2c3b5e0fac4ecd2155d0df9b9023c45c)`() const` <a id="classURH__PEXCollectorConfig_1a2c3b5e0fac4ecd2155d0df9b9023c45c"></a>

Helper function for whether summary data should be tracked

#### `public inline bool `[`WantsTimeline`](#classURH__PEXCollectorConfig_1afcb2743c4816b00129754a9bc9c33b24)`() const` <a id="classURH__PEXCollectorConfig_1afcb2743c4816b00129754a9bc9c33b24"></a>

Helper function for whether timeline data should be tracked

## class `URH_PEXCollectorConfig_Client` <a id="classURH__PEXCollectorConfig__Client"></a>

```
class URH_PEXCollectorConfig_Client
  : public URH_PEXCollectorConfig
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`URH_PEXCollectorConfig_Client`](#classURH__PEXCollectorConfig__Client_1a030af3cf768404af72fcc80342001e1a)`()` | 

### Members

#### `public inline  `[`URH_PEXCollectorConfig_Client`](#classURH__PEXCollectorConfig__Client_1a030af3cf768404af72fcc80342001e1a)`()` <a id="classURH__PEXCollectorConfig__Client_1a030af3cf768404af72fcc80342001e1a"></a>

## class `URH_PEXCollectorConfig_Host` <a id="classURH__PEXCollectorConfig__Host"></a>

```
class URH_PEXCollectorConfig_Host
  : public URH_PEXCollectorConfig
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`URH_PEXCollectorConfig_Host`](#classURH__PEXCollectorConfig__Host_1aefc16da54956d0f7b7bdbe6b7f866c91)`()` | 

### Members

#### `public inline  `[`URH_PEXCollectorConfig_Host`](#classURH__PEXCollectorConfig__Host_1aefc16da54956d0f7b7bdbe6b7f866c91)`()` <a id="classURH__PEXCollectorConfig__Host_1aefc16da54956d0f7b7bdbe6b7f866c91"></a>

## class `URH_PEXCollectorConfig_DedicatedServer` <a id="classURH__PEXCollectorConfig__DedicatedServer"></a>

```
class URH_PEXCollectorConfig_DedicatedServer
  : public URH_PEXCollectorConfig_Host
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`URH_PEXCollectorConfig_DedicatedServer`](#classURH__PEXCollectorConfig__DedicatedServer_1a58f302d1fcb1c071021174aa219c566c)`()` | 

### Members

#### `public inline  `[`URH_PEXCollectorConfig_DedicatedServer`](#classURH__PEXCollectorConfig__DedicatedServer_1a58f302d1fcb1c071021174aa219c566c)`()` <a id="classURH__PEXCollectorConfig__DedicatedServer_1a58f302d1fcb1c071021174aa219c566c"></a>

## class `URH_PEXOwnerInterface` <a id="classURH__PEXOwnerInterface"></a>

```
class URH_PEXOwnerInterface
  : public UInterface
```

PlayerExperience Owner Interface class.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------

### Members

## class `IRH_PEXOwnerInterface` <a id="classIRH__PEXOwnerInterface"></a>

PlayerExperience Owner Interface.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------

### Members

## class `URH_PEXStatGroup` <a id="classURH__PEXStatGroup"></a>

```
class URH_PEXStatGroup
  : public UObject
```

Base class for a group of stats.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FName `[`GroupName`](#classURH__PEXStatGroup_1a28b3a8f1e44476338694da43b94f238f) | Name of the stat group.
`public TArray< `[`FRH_StatAccumulator`](PlayerExperience.md#structFRH__StatAccumulator)` > `[`Stats`](#classURH__PEXStatGroup_1a4a8c32a928070ec22a33dbc32731e04a) | Array of stats to track.
`public TArray< `[`FRH_StatCounter`](PlayerExperience.md#structFRH__StatCounter)` > `[`Counters`](#classURH__PEXStatGroup_1a1466c761d088c0416063a57882779886) | Array of stats to track.
`public TArray< `[`URH_PEXStatGroup`](#classURH__PEXStatGroup)` * > `[`Children`](#classURH__PEXStatGroup_1a73c6872977b277664724c21de7fd4d4c) | Array of children stat groups to track.
`public bool `[`bDynamic`](#classURH__PEXStatGroup_1ae66434300cfd58af7ca5edb58ea97307) | Whether this group was dynamically created. Dynamic groups do not get written to the timeline since it has a rigid structure.
`public bool `[`bNotForTimeline`](#classURH__PEXStatGroup_1aac0480f1cecd38d69130dc4841430972) | Whether this group should be excluded from the timline. Some groups do not get written to the timeline since it has a rigid structure.
`public inline  `[`URH_PEXStatGroup`](#classURH__PEXStatGroup_1a5935a0459d67462bc3707f216fe92dce)`()` | 
`public inline virtual void `[`Init`](#classURH__PEXStatGroup_1adfa458dad52b4a9b5838c6ea83352426)`(const `[`URH_PEXCollectorConfig`](PlayerExperience.md#classURH__PEXCollectorConfig)` * InConfig,const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Initialize the stat group and any children. May add non-dynamic groups and init them as well.
`public inline virtual void `[`CapturePerFrameStats`](#classURH__PEXStatGroup_1a145b13d64996000080270ce925e4add8)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-frame stats.
`public inline virtual void `[`CapturePerSecondStats`](#classURH__PEXStatGroup_1a0bff8db8481845141a4ec1468e06aab4)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-second stats.
`public inline virtual void `[`CapturePerIntervalStats`](#classURH__PEXStatGroup_1af7f087010ec44a299a743c1cdf61898e)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-interval stats.
`public inline virtual void `[`ResetCapture`](#classURH__PEXStatGroup_1a18d8409b89eaf9dd83865a4ad571b2b4)`()` | Reset the capture state of all stats.
`public inline virtual void `[`ResetSummary`](#classURH__PEXStatGroup_1ae199225c1db4048af75dd484422a6e43)`()` | Reset the summary state of all stats.
`public inline virtual void `[`ResetStats`](#classURH__PEXStatGroup_1ae11affb79d4639e291882f456a6c9240)`()` | Reset both the capture and summary states of all stats.
`public inline virtual void `[`UpdateSummary`](#classURH__PEXStatGroup_1aa07350eed1abc2a96b6f06dfbabffec8)`()` | Update the summary state of all stats.
`public inline virtual TSharedRef< FJsonObject > `[`GetSummary`](#classURH__PEXStatGroup_1a8ae61abd63243754f7c40827fa51bc2f)`() const` | Write the summary data to a JSON object.
`public inline virtual FString `[`GetTimelineCSVHeader`](#classURH__PEXStatGroup_1a42e88b291697e54f60ab5456c32c6495)`() const` | Write the timeline data header to a CSV file for all stats.
`public inline virtual FString `[`GetTimelineCSVValues`](#classURH__PEXStatGroup_1ac01e22d6cfb9def52b82ba36365d6589)`() const` | Write the timeline data values to a CSV file for all stats.
`public inline virtual void `[`GetPEXHostSummary`](#classURH__PEXStatGroup_1a5f4775578ec0a4871098c5b0cfe295e1)`(`[`FRHAPI_PexHostRequest`](models/RHAPI_PexHostRequest.md#structFRHAPI__PexHostRequest)` & Report) const` | Fill in a API PEX host summary report with the summary data.
`public inline virtual void `[`GetPEXClientSummary`](#classURH__PEXStatGroup_1a310a8d8a8afffb1eb5c3cdef87c7fe31)`(`[`FRHAPI_PexClientRequest`](models/RHAPI_PexClientRequest.md#structFRHAPI__PexClientRequest)` & Report) const` | Fill in a API PEX client summary report with the summary data.

### Members

#### `public FName `[`GroupName`](#classURH__PEXStatGroup_1a28b3a8f1e44476338694da43b94f238f) <a id="classURH__PEXStatGroup_1a28b3a8f1e44476338694da43b94f238f"></a>

Name of the stat group.

#### `public TArray< `[`FRH_StatAccumulator`](PlayerExperience.md#structFRH__StatAccumulator)` > `[`Stats`](#classURH__PEXStatGroup_1a4a8c32a928070ec22a33dbc32731e04a) <a id="classURH__PEXStatGroup_1a4a8c32a928070ec22a33dbc32731e04a"></a>

Array of stats to track.

#### `public TArray< `[`FRH_StatCounter`](PlayerExperience.md#structFRH__StatCounter)` > `[`Counters`](#classURH__PEXStatGroup_1a1466c761d088c0416063a57882779886) <a id="classURH__PEXStatGroup_1a1466c761d088c0416063a57882779886"></a>

Array of stats to track.

#### `public TArray< `[`URH_PEXStatGroup`](#classURH__PEXStatGroup)` * > `[`Children`](#classURH__PEXStatGroup_1a73c6872977b277664724c21de7fd4d4c) <a id="classURH__PEXStatGroup_1a73c6872977b277664724c21de7fd4d4c"></a>

Array of children stat groups to track.

#### `public bool `[`bDynamic`](#classURH__PEXStatGroup_1ae66434300cfd58af7ca5edb58ea97307) <a id="classURH__PEXStatGroup_1ae66434300cfd58af7ca5edb58ea97307"></a>

Whether this group was dynamically created. Dynamic groups do not get written to the timeline since it has a rigid structure.

#### `public bool `[`bNotForTimeline`](#classURH__PEXStatGroup_1aac0480f1cecd38d69130dc4841430972) <a id="classURH__PEXStatGroup_1aac0480f1cecd38d69130dc4841430972"></a>

Whether this group should be excluded from the timline. Some groups do not get written to the timeline since it has a rigid structure.

#### `public inline  `[`URH_PEXStatGroup`](#classURH__PEXStatGroup_1a5935a0459d67462bc3707f216fe92dce)`()` <a id="classURH__PEXStatGroup_1a5935a0459d67462bc3707f216fe92dce"></a>

#### `public inline virtual void `[`Init`](#classURH__PEXStatGroup_1adfa458dad52b4a9b5838c6ea83352426)`(const `[`URH_PEXCollectorConfig`](PlayerExperience.md#classURH__PEXCollectorConfig)` * InConfig,const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXStatGroup_1adfa458dad52b4a9b5838c6ea83352426"></a>

Initialize the stat group and any children. May add non-dynamic groups and init them as well.

#### `public inline virtual void `[`CapturePerFrameStats`](#classURH__PEXStatGroup_1a145b13d64996000080270ce925e4add8)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXStatGroup_1a145b13d64996000080270ce925e4add8"></a>

Capture once-per-frame stats.

#### `public inline virtual void `[`CapturePerSecondStats`](#classURH__PEXStatGroup_1a0bff8db8481845141a4ec1468e06aab4)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXStatGroup_1a0bff8db8481845141a4ec1468e06aab4"></a>

Capture once-per-second stats.

#### `public inline virtual void `[`CapturePerIntervalStats`](#classURH__PEXStatGroup_1af7f087010ec44a299a743c1cdf61898e)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXStatGroup_1af7f087010ec44a299a743c1cdf61898e"></a>

Capture once-per-interval stats.

#### `public inline virtual void `[`ResetCapture`](#classURH__PEXStatGroup_1a18d8409b89eaf9dd83865a4ad571b2b4)`()` <a id="classURH__PEXStatGroup_1a18d8409b89eaf9dd83865a4ad571b2b4"></a>

Reset the capture state of all stats.

#### `public inline virtual void `[`ResetSummary`](#classURH__PEXStatGroup_1ae199225c1db4048af75dd484422a6e43)`()` <a id="classURH__PEXStatGroup_1ae199225c1db4048af75dd484422a6e43"></a>

Reset the summary state of all stats.

#### `public inline virtual void `[`ResetStats`](#classURH__PEXStatGroup_1ae11affb79d4639e291882f456a6c9240)`()` <a id="classURH__PEXStatGroup_1ae11affb79d4639e291882f456a6c9240"></a>

Reset both the capture and summary states of all stats.

#### `public inline virtual void `[`UpdateSummary`](#classURH__PEXStatGroup_1aa07350eed1abc2a96b6f06dfbabffec8)`()` <a id="classURH__PEXStatGroup_1aa07350eed1abc2a96b6f06dfbabffec8"></a>

Update the summary state of all stats.

#### `public inline virtual TSharedRef< FJsonObject > `[`GetSummary`](#classURH__PEXStatGroup_1a8ae61abd63243754f7c40827fa51bc2f)`() const` <a id="classURH__PEXStatGroup_1a8ae61abd63243754f7c40827fa51bc2f"></a>

Write the summary data to a JSON object.

#### Returns
The JSON object containing the summary data

#### `public inline virtual FString `[`GetTimelineCSVHeader`](#classURH__PEXStatGroup_1a42e88b291697e54f60ab5456c32c6495)`() const` <a id="classURH__PEXStatGroup_1a42e88b291697e54f60ab5456c32c6495"></a>

Write the timeline data header to a CSV file for all stats.

#### `public inline virtual FString `[`GetTimelineCSVValues`](#classURH__PEXStatGroup_1ac01e22d6cfb9def52b82ba36365d6589)`() const` <a id="classURH__PEXStatGroup_1ac01e22d6cfb9def52b82ba36365d6589"></a>

Write the timeline data values to a CSV file for all stats.

#### `public inline virtual void `[`GetPEXHostSummary`](#classURH__PEXStatGroup_1a5f4775578ec0a4871098c5b0cfe295e1)`(`[`FRHAPI_PexHostRequest`](models/RHAPI_PexHostRequest.md#structFRHAPI__PexHostRequest)` & Report) const` <a id="classURH__PEXStatGroup_1a5f4775578ec0a4871098c5b0cfe295e1"></a>

Fill in a API PEX host summary report with the summary data.

#### `public inline virtual void `[`GetPEXClientSummary`](#classURH__PEXStatGroup_1a310a8d8a8afffb1eb5c3cdef87c7fe31)`(`[`FRHAPI_PexClientRequest`](models/RHAPI_PexClientRequest.md#structFRHAPI__PexClientRequest)` & Report) const` <a id="classURH__PEXStatGroup_1a310a8d8a8afffb1eb5c3cdef87c7fe31"></a>

Fill in a API PEX client summary report with the summary data.

## class `URH_PEXStatGroupsTopLevel` <a id="classURH__PEXStatGroupsTopLevel"></a>

```
class URH_PEXStatGroupsTopLevel
  : public URH_PEXStatGroup
```

Stat group that contains all other stat groups, configurable via INI.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FDateTime `[`LastCaptureTime`](#classURH__PEXStatGroupsTopLevel_1af75bead023233edc30ca5df6c9c94b4e) | The timetamp for the last capture.
`public  `[`URH_PEXStatGroupsTopLevel`](#classURH__PEXStatGroupsTopLevel_1aa7d896aa9729e8a1713e3b6ddea727a9)`()` | 
`public virtual void `[`Init`](#classURH__PEXStatGroupsTopLevel_1a4e163959dd7e14e2c10651357d79350d)`(const `[`URH_PEXCollectorConfig`](PlayerExperience.md#classURH__PEXCollectorConfig)` * InConfig,const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Initialize the stat group and any children. May add non-dynamic groups and init them as well.
`public inline FORCEINLINE `[`FRH_StatCounter`](PlayerExperience.md#structFRH__StatCounter)` & `[`GetCaptureCounter`](#classURH__PEXStatGroupsTopLevel_1a43c0b9794591da756345653fe44b9d2b)`(ECaptureCounter Counter)` | 
`public inline FORCEINLINE const `[`FRH_StatCounter`](PlayerExperience.md#structFRH__StatCounter)` & `[`GetCaptureCounter`](#classURH__PEXStatGroupsTopLevel_1a90aba152a845d15df9da36a9b6808e68)`(ECaptureCounter Counter) const` | 
`public inline virtual void `[`SetIgnoredForSummary`](#classURH__PEXStatGroupsTopLevel_1a076bcbfbba58bb150463578714aa20a4)`()` | 
`public inline virtual void `[`CapturePerIntervalStats`](#classURH__PEXStatGroupsTopLevel_1a42fc0af27e5fff4a13061d6dbf776eaa)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-interval stats.
`public inline virtual void `[`ResetCapture`](#classURH__PEXStatGroupsTopLevel_1a4072d49d37d9b87d7bde26d19b36b276)`()` | Reset the capture state of all stats.
`public inline virtual FString `[`GetTimelineCSVHeader`](#classURH__PEXStatGroupsTopLevel_1aff97962998e21beb4c9ebfd3c44cd1f9)`() const` | Write the timeline data header to a CSV file for all stats.
`public inline virtual FString `[`GetTimelineCSVValues`](#classURH__PEXStatGroupsTopLevel_1ad841dbcb251e50e7f97396c7383aedec)`() const` | Write the timeline data values to a CSV file for all stats.
`enum `[`ECaptureCounter`](#classURH__PEXStatGroupsTopLevel_1a2f67624e0820ceaf33c5c65694059372) | 

### Members

#### `public FDateTime `[`LastCaptureTime`](#classURH__PEXStatGroupsTopLevel_1af75bead023233edc30ca5df6c9c94b4e) <a id="classURH__PEXStatGroupsTopLevel_1af75bead023233edc30ca5df6c9c94b4e"></a>

The timetamp for the last capture.

#### `public  `[`URH_PEXStatGroupsTopLevel`](#classURH__PEXStatGroupsTopLevel_1aa7d896aa9729e8a1713e3b6ddea727a9)`()` <a id="classURH__PEXStatGroupsTopLevel_1aa7d896aa9729e8a1713e3b6ddea727a9"></a>

#### `public virtual void `[`Init`](#classURH__PEXStatGroupsTopLevel_1a4e163959dd7e14e2c10651357d79350d)`(const `[`URH_PEXCollectorConfig`](PlayerExperience.md#classURH__PEXCollectorConfig)` * InConfig,const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXStatGroupsTopLevel_1a4e163959dd7e14e2c10651357d79350d"></a>

Initialize the stat group and any children. May add non-dynamic groups and init them as well.

#### `public inline FORCEINLINE `[`FRH_StatCounter`](PlayerExperience.md#structFRH__StatCounter)` & `[`GetCaptureCounter`](#classURH__PEXStatGroupsTopLevel_1a43c0b9794591da756345653fe44b9d2b)`(ECaptureCounter Counter)` <a id="classURH__PEXStatGroupsTopLevel_1a43c0b9794591da756345653fe44b9d2b"></a>

#### `public inline FORCEINLINE const `[`FRH_StatCounter`](PlayerExperience.md#structFRH__StatCounter)` & `[`GetCaptureCounter`](#classURH__PEXStatGroupsTopLevel_1a90aba152a845d15df9da36a9b6808e68)`(ECaptureCounter Counter) const` <a id="classURH__PEXStatGroupsTopLevel_1a90aba152a845d15df9da36a9b6808e68"></a>

#### `public inline virtual void `[`SetIgnoredForSummary`](#classURH__PEXStatGroupsTopLevel_1a076bcbfbba58bb150463578714aa20a4)`()` <a id="classURH__PEXStatGroupsTopLevel_1a076bcbfbba58bb150463578714aa20a4"></a>

#### `public inline virtual void `[`CapturePerIntervalStats`](#classURH__PEXStatGroupsTopLevel_1a42fc0af27e5fff4a13061d6dbf776eaa)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXStatGroupsTopLevel_1a42fc0af27e5fff4a13061d6dbf776eaa"></a>

Capture once-per-interval stats.

#### `public inline virtual void `[`ResetCapture`](#classURH__PEXStatGroupsTopLevel_1a4072d49d37d9b87d7bde26d19b36b276)`()` <a id="classURH__PEXStatGroupsTopLevel_1a4072d49d37d9b87d7bde26d19b36b276"></a>

Reset the capture state of all stats.

#### `public inline virtual FString `[`GetTimelineCSVHeader`](#classURH__PEXStatGroupsTopLevel_1aff97962998e21beb4c9ebfd3c44cd1f9)`() const` <a id="classURH__PEXStatGroupsTopLevel_1aff97962998e21beb4c9ebfd3c44cd1f9"></a>

Write the timeline data header to a CSV file for all stats.

#### `public inline virtual FString `[`GetTimelineCSVValues`](#classURH__PEXStatGroupsTopLevel_1ad841dbcb251e50e7f97396c7383aedec)`() const` <a id="classURH__PEXStatGroupsTopLevel_1ad841dbcb251e50e7f97396c7383aedec"></a>

Write the timeline data values to a CSV file for all stats.

#### `enum `[`ECaptureCounter`](#classURH__PEXStatGroupsTopLevel_1a2f67624e0820ceaf33c5c65694059372) <a id="classURH__PEXStatGroupsTopLevel_1a2f67624e0820ceaf33c5c65694059372"></a>

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
IgnoredForSummary            | 
Max            | 

## class `URH_PEXCollector` <a id="classURH__PEXCollector"></a>

```
class URH_PEXCollector
  : public UObject
```

PlayerExperience Collector class, responsible for collecting and tracking PEX data via PEX Stat Groups.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`URH_PEXCollector`](#classURH__PEXCollector_1aa973c234bd466bd10779d9bcea257ee9)`()` | 
`public virtual  `[`~URH_PEXCollector`](#classURH__PEXCollector_1a92a6e63282290fdd5684fd3a5b2284fa)`()` | 
`public virtual bool `[`Init`](#classURH__PEXCollector_1a5976807cc07bb1aba1719f8949df42a2)`(`[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` * InOwner)` | Initialize the collector. Can only be done once.
`public virtual bool `[`InitWithConfig`](#classURH__PEXCollector_1aa1ce8de7522accac1b9f80242be8a705)`(`[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` * InOwner,const `[`URH_PEXCollectorConfig`](PlayerExperience.md#classURH__PEXCollectorConfig)` * InConfig)` | Initialize the collector. Can only be done once.
`public virtual void `[`OnEndFrame`](#classURH__PEXCollector_1a4aef02ed0ddba34d7b2f970537071d01)`()` | Tick the collector, updating per frame stats and potentially per second stats.
`public virtual void `[`OnMapLoadComplete`](#classURH__PEXCollector_1a8b3c1c91454411f619c14daa65a7df69)`()` | Notification that a map load has completed.
`public inline const `[`URH_PEXCollectorConfig`](PlayerExperience.md#classURH__PEXCollectorConfig)` * `[`GetConfig`](#classURH__PEXCollector_1a71bd22ee8057031fe4adbfb7c06bc48e)`() const` | Retrieve the config to use for this collector instance.
`public inline void `[`ResetSummary`](#classURH__PEXCollector_1a73fa2f29acff15a77101afdf3ca6214a)`()` | Reset the summary state, which is useful if wanting to trim the front of the summary to when gameplay starts.
`public inline void `[`SetIgnoreCurrentIntervalForSummary`](#classURH__PEXCollector_1af974f89c7e353501a11d67184850186f)`(int32 NumToIgnore)` | Flags the current interval (and potentially more) to be ignored for summary if it was not already. This is useful in cases of events that will generate bad behavior reports such as map loads.
`public void `[`Close`](#classURH__PEXCollector_1a29b53ef9f1777a3bb14cda202bc9e8a9)`()` | Closes state, writes summary if needed, and uploads data if needed. Can only be done once.
`public void `[`WriteSummary`](#classURH__PEXCollector_1ad508ef615e45584a827b3aeb7bac96b6)`()` | Writes summary data to file and/or API, and uploads any data requested, can only be called once.
`public inline FString `[`GetSummaryFilePath`](#classURH__PEXCollector_1a33d74feb6daa05f89c03fe93734dd1b4)`() const` | Get the file path for the summary file, if it was written.
`public inline FString `[`GetTimelineFilePath`](#classURH__PEXCollector_1af4e9b3118636396e8801ea2c7878a78b)`() const` | Get the file path for the timeline file, if it was written.
`public TSharedRef< FJsonObject > `[`GetSummaryJson`](#classURH__PEXCollector_1ae056ff5a734c2de99ffec883886ecbbf)`() const` | Retrieves the summary data in Json format.
`protected TWeakInterfacePtr< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > `[`Owner`](#classURH__PEXCollector_1ae8ba839b956c23850efc1549e9d542d4) | Cached owner of the collector
`protected const `[`URH_PEXCollectorConfig`](PlayerExperience.md#classURH__PEXCollectorConfig)` * `[`CachedConfig`](#classURH__PEXCollector_1a9cf7c881dd3f599b9815556751677d87) | Cached file path for timeline file
`protected FString `[`CachedMatchId`](#classURH__PEXCollector_1ab69102a0609e5af5bebc4df22b4c16f6) | Cached match id to use for routing the captured data to storage. Cached so it does not change mid-capture
`protected `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` `[`CachedRemoteFileDirectory`](#classURH__PEXCollector_1aee6b0324bd8261f0f09d18029c740c8e) | Cached remote file directory to use for routing the captured data to storage. Cached so it does not change mid-capture
`protected FGuid `[`CachedPlayerId`](#classURH__PEXCollector_1a5f1f4ef0b0d0e14bb2e7931cd06a6c78) | Cached player id to use for routing the captured data to storage. Cached so it does not change mid-capture
`protected bool `[`bCachedIsHost`](#classURH__PEXCollector_1ae630a18e684af6da72f665af77614772) | Cached whether this owner is the host of the match. Cached so it does not change mid-capture
`protected bool `[`bHasBeenInitialized`](#classURH__PEXCollector_1a58d5d0c8695e4b5f07181c5b60b2ec24) | Whether the collector has been initialized, to guard against it being initialized multiple times.
`protected bool `[`bHasBeenClosed`](#classURH__PEXCollector_1af11d6bd32f2abb6a738136cf6270ca93) | Whether the collector has been closed, to guard against it being closed multiple times.
`protected bool `[`bHasWrittenSummary`](#classURH__PEXCollector_1abce5549764d70cb3b377353cdac3c74f) | Whether the summary data has been written, to guard against it being written multiple times.
`protected double `[`TimeTracker`](#classURH__PEXCollector_1a351f5e98ee2ecdda2445f86ccf6b841f) | Time accumulator so that time is always monotonic
`protected int32 `[`NumRemainingIntervalsToIgnore`](#classURH__PEXCollector_1ab8b392ab1ba60819943ac70abbde81df) | Number of remaining intervals to ignore for summary (decremented at the end of each interval)
`protected `[`URH_PEXStatGroupsTopLevel`](PlayerExperience.md#classURH__PEXStatGroupsTopLevel)` * `[`TopLevelStatGroup`](#classURH__PEXCollector_1a19bd2bcb0f8f408f9690f7161265ed93) | 
`protected class FArchive * `[`TimelineFileCSV`](#classURH__PEXCollector_1a82fd95d78b4ec189504331f0e8c0ab9d) | Local file archive to write timeline data to
`protected FString `[`TimelineFilePath`](#classURH__PEXCollector_1a1f032b2d4926fd92ab96ce7f68018fa5) | Cached file path for timeline file
`protected FString `[`SummaryFilePath`](#classURH__PEXCollector_1ac4cb8e098782eebc4e2cbfbc30927ba2) | Cached file path for summary file
`protected void `[`UploadFile`](#classURH__PEXCollector_1a3093ebae2fc7eecb2b495c4b8215b0fe)`(const FString & FilePath,const FString & RemoteFileName) const` | Internal helper to upload a file to remote file storage

### Members

#### `public  `[`URH_PEXCollector`](#classURH__PEXCollector_1aa973c234bd466bd10779d9bcea257ee9)`()` <a id="classURH__PEXCollector_1aa973c234bd466bd10779d9bcea257ee9"></a>

#### `public virtual  `[`~URH_PEXCollector`](#classURH__PEXCollector_1a92a6e63282290fdd5684fd3a5b2284fa)`()` <a id="classURH__PEXCollector_1a92a6e63282290fdd5684fd3a5b2284fa"></a>

#### `public virtual bool `[`Init`](#classURH__PEXCollector_1a5976807cc07bb1aba1719f8949df42a2)`(`[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` * InOwner)` <a id="classURH__PEXCollector_1a5976807cc07bb1aba1719f8949df42a2"></a>

Initialize the collector. Can only be done once.

#### `public virtual bool `[`InitWithConfig`](#classURH__PEXCollector_1aa1ce8de7522accac1b9f80242be8a705)`(`[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` * InOwner,const `[`URH_PEXCollectorConfig`](PlayerExperience.md#classURH__PEXCollectorConfig)` * InConfig)` <a id="classURH__PEXCollector_1aa1ce8de7522accac1b9f80242be8a705"></a>

Initialize the collector. Can only be done once.

#### `public virtual void `[`OnEndFrame`](#classURH__PEXCollector_1a4aef02ed0ddba34d7b2f970537071d01)`()` <a id="classURH__PEXCollector_1a4aef02ed0ddba34d7b2f970537071d01"></a>

Tick the collector, updating per frame stats and potentially per second stats.

#### `public virtual void `[`OnMapLoadComplete`](#classURH__PEXCollector_1a8b3c1c91454411f619c14daa65a7df69)`()` <a id="classURH__PEXCollector_1a8b3c1c91454411f619c14daa65a7df69"></a>

Notification that a map load has completed.

#### `public inline const `[`URH_PEXCollectorConfig`](PlayerExperience.md#classURH__PEXCollectorConfig)` * `[`GetConfig`](#classURH__PEXCollector_1a71bd22ee8057031fe4adbfb7c06bc48e)`() const` <a id="classURH__PEXCollector_1a71bd22ee8057031fe4adbfb7c06bc48e"></a>

Retrieve the config to use for this collector instance.

#### `public inline void `[`ResetSummary`](#classURH__PEXCollector_1a73fa2f29acff15a77101afdf3ca6214a)`()` <a id="classURH__PEXCollector_1a73fa2f29acff15a77101afdf3ca6214a"></a>

Reset the summary state, which is useful if wanting to trim the front of the summary to when gameplay starts.

#### `public inline void `[`SetIgnoreCurrentIntervalForSummary`](#classURH__PEXCollector_1af974f89c7e353501a11d67184850186f)`(int32 NumToIgnore)` <a id="classURH__PEXCollector_1af974f89c7e353501a11d67184850186f"></a>

Flags the current interval (and potentially more) to be ignored for summary if it was not already. This is useful in cases of events that will generate bad behavior reports such as map loads.

#### `public void `[`Close`](#classURH__PEXCollector_1a29b53ef9f1777a3bb14cda202bc9e8a9)`()` <a id="classURH__PEXCollector_1a29b53ef9f1777a3bb14cda202bc9e8a9"></a>

Closes state, writes summary if needed, and uploads data if needed. Can only be done once.

#### `public void `[`WriteSummary`](#classURH__PEXCollector_1ad508ef615e45584a827b3aeb7bac96b6)`()` <a id="classURH__PEXCollector_1ad508ef615e45584a827b3aeb7bac96b6"></a>

Writes summary data to file and/or API, and uploads any data requested, can only be called once.

#### `public inline FString `[`GetSummaryFilePath`](#classURH__PEXCollector_1a33d74feb6daa05f89c03fe93734dd1b4)`() const` <a id="classURH__PEXCollector_1a33d74feb6daa05f89c03fe93734dd1b4"></a>

Get the file path for the summary file, if it was written.

#### `public inline FString `[`GetTimelineFilePath`](#classURH__PEXCollector_1af4e9b3118636396e8801ea2c7878a78b)`() const` <a id="classURH__PEXCollector_1af4e9b3118636396e8801ea2c7878a78b"></a>

Get the file path for the timeline file, if it was written.

#### `public TSharedRef< FJsonObject > `[`GetSummaryJson`](#classURH__PEXCollector_1ae056ff5a734c2de99ffec883886ecbbf)`() const` <a id="classURH__PEXCollector_1ae056ff5a734c2de99ffec883886ecbbf"></a>

Retrieves the summary data in Json format.

#### `protected TWeakInterfacePtr< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > `[`Owner`](#classURH__PEXCollector_1ae8ba839b956c23850efc1549e9d542d4) <a id="classURH__PEXCollector_1ae8ba839b956c23850efc1549e9d542d4"></a>

Cached owner of the collector

#### `protected const `[`URH_PEXCollectorConfig`](PlayerExperience.md#classURH__PEXCollectorConfig)` * `[`CachedConfig`](#classURH__PEXCollector_1a9cf7c881dd3f599b9815556751677d87) <a id="classURH__PEXCollector_1a9cf7c881dd3f599b9815556751677d87"></a>

Cached file path for timeline file

#### `protected FString `[`CachedMatchId`](#classURH__PEXCollector_1ab69102a0609e5af5bebc4df22b4c16f6) <a id="classURH__PEXCollector_1ab69102a0609e5af5bebc4df22b4c16f6"></a>

Cached match id to use for routing the captured data to storage. Cached so it does not change mid-capture

#### `protected `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` `[`CachedRemoteFileDirectory`](#classURH__PEXCollector_1aee6b0324bd8261f0f09d18029c740c8e) <a id="classURH__PEXCollector_1aee6b0324bd8261f0f09d18029c740c8e"></a>

Cached remote file directory to use for routing the captured data to storage. Cached so it does not change mid-capture

#### `protected FGuid `[`CachedPlayerId`](#classURH__PEXCollector_1a5f1f4ef0b0d0e14bb2e7931cd06a6c78) <a id="classURH__PEXCollector_1a5f1f4ef0b0d0e14bb2e7931cd06a6c78"></a>

Cached player id to use for routing the captured data to storage. Cached so it does not change mid-capture

#### `protected bool `[`bCachedIsHost`](#classURH__PEXCollector_1ae630a18e684af6da72f665af77614772) <a id="classURH__PEXCollector_1ae630a18e684af6da72f665af77614772"></a>

Cached whether this owner is the host of the match. Cached so it does not change mid-capture

#### `protected bool `[`bHasBeenInitialized`](#classURH__PEXCollector_1a58d5d0c8695e4b5f07181c5b60b2ec24) <a id="classURH__PEXCollector_1a58d5d0c8695e4b5f07181c5b60b2ec24"></a>

Whether the collector has been initialized, to guard against it being initialized multiple times.

#### `protected bool `[`bHasBeenClosed`](#classURH__PEXCollector_1af11d6bd32f2abb6a738136cf6270ca93) <a id="classURH__PEXCollector_1af11d6bd32f2abb6a738136cf6270ca93"></a>

Whether the collector has been closed, to guard against it being closed multiple times.

#### `protected bool `[`bHasWrittenSummary`](#classURH__PEXCollector_1abce5549764d70cb3b377353cdac3c74f) <a id="classURH__PEXCollector_1abce5549764d70cb3b377353cdac3c74f"></a>

Whether the summary data has been written, to guard against it being written multiple times.

#### `protected double `[`TimeTracker`](#classURH__PEXCollector_1a351f5e98ee2ecdda2445f86ccf6b841f) <a id="classURH__PEXCollector_1a351f5e98ee2ecdda2445f86ccf6b841f"></a>

Time accumulator so that time is always monotonic

#### `protected int32 `[`NumRemainingIntervalsToIgnore`](#classURH__PEXCollector_1ab8b392ab1ba60819943ac70abbde81df) <a id="classURH__PEXCollector_1ab8b392ab1ba60819943ac70abbde81df"></a>

Number of remaining intervals to ignore for summary (decremented at the end of each interval)

#### `protected `[`URH_PEXStatGroupsTopLevel`](PlayerExperience.md#classURH__PEXStatGroupsTopLevel)` * `[`TopLevelStatGroup`](#classURH__PEXCollector_1a19bd2bcb0f8f408f9690f7161265ed93) <a id="classURH__PEXCollector_1a19bd2bcb0f8f408f9690f7161265ed93"></a>

#### `protected class FArchive * `[`TimelineFileCSV`](#classURH__PEXCollector_1a82fd95d78b4ec189504331f0e8c0ab9d) <a id="classURH__PEXCollector_1a82fd95d78b4ec189504331f0e8c0ab9d"></a>

Local file archive to write timeline data to

#### `protected FString `[`TimelineFilePath`](#classURH__PEXCollector_1a1f032b2d4926fd92ab96ce7f68018fa5) <a id="classURH__PEXCollector_1a1f032b2d4926fd92ab96ce7f68018fa5"></a>

Cached file path for timeline file

#### `protected FString `[`SummaryFilePath`](#classURH__PEXCollector_1ac4cb8e098782eebc4e2cbfbc30927ba2) <a id="classURH__PEXCollector_1ac4cb8e098782eebc4e2cbfbc30927ba2"></a>

Cached file path for summary file

#### `protected void `[`UploadFile`](#classURH__PEXCollector_1a3093ebae2fc7eecb2b495c4b8215b0fe)`(const FString & FilePath,const FString & RemoteFileName) const` <a id="classURH__PEXCollector_1a3093ebae2fc7eecb2b495c4b8215b0fe"></a>

Internal helper to upload a file to remote file storage

## class `URH_PEXPrimaryStats` <a id="classURH__PEXPrimaryStats"></a>

```
class URH_PEXPrimaryStats
  : public URH_PEXStatGroup
```

Stat group for capturing primary stats.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline FORCEINLINE `[`FRH_StatAccumulator`](PlayerExperience.md#structFRH__StatAccumulator)` & `[`GetCaptureStat`](#classURH__PEXPrimaryStats_1ab7dc6ac57528d8c4f1a8e9acdbc63259)`(ECaptureStat Stat)` | 
`public inline FORCEINLINE const `[`FRH_StatAccumulator`](PlayerExperience.md#structFRH__StatAccumulator)` & `[`GetCaptureStat`](#classURH__PEXPrimaryStats_1af0cfff7b7342c59865eeda44670136dc)`(ECaptureStat Stat) const` | 
`public inline FORCEINLINE `[`FRH_StatCounter`](PlayerExperience.md#structFRH__StatCounter)` & `[`GetCaptureCounter`](#classURH__PEXPrimaryStats_1adaef813d91ae4370de3f4bf5ae1cba39)`(ECaptureCounter Counter)` | 
`public inline FORCEINLINE const `[`FRH_StatCounter`](PlayerExperience.md#structFRH__StatCounter)` & `[`GetCaptureCounter`](#classURH__PEXPrimaryStats_1a80c10baa075b3432b0b10418ecfa2d21)`(ECaptureCounter Counter) const` | 
`public  `[`URH_PEXPrimaryStats`](#classURH__PEXPrimaryStats_1a0c3778c9c3219e32a7f76744dc3a476b)`()` | 
`public virtual void `[`Init`](#classURH__PEXPrimaryStats_1acca2b022e2e56b972e0265f42bfd1d5d)`(const `[`URH_PEXCollectorConfig`](PlayerExperience.md#classURH__PEXCollectorConfig)` * InConfig,const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Initialize the stat group and any children. May add non-dynamic groups and init them as well.
`public virtual void `[`CapturePerFrameStats`](#classURH__PEXPrimaryStats_1ac3d24a75995eb1d7f0903c3eec5a4faf)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-frame stats.
`public virtual void `[`CapturePerIntervalStats`](#classURH__PEXPrimaryStats_1acdedf0c275a9279eaa34f305b2bf6ab9)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-interval stats.
`public inline virtual void `[`GetPEXHostSummary`](#classURH__PEXPrimaryStats_1aef86c588fefc43c341cf91531ea53b21)`(`[`FRHAPI_PexHostRequest`](models/RHAPI_PexHostRequest.md#structFRHAPI__PexHostRequest)` & Report) const` | Fill in a API PEX host summary report with the summary data.
`public inline virtual void `[`GetPEXClientSummary`](#classURH__PEXPrimaryStats_1a56041f0246ba4a1dca4dc304caea7a42)`(`[`FRHAPI_PexClientRequest`](models/RHAPI_PexClientRequest.md#structFRHAPI__PexClientRequest)` & Report) const` | Fill in a API PEX client summary report with the summary data.
`enum `[`ECaptureStat`](#classURH__PEXPrimaryStats_1a3680482a111dacd52d63a8fb41c213e3) | 
`enum `[`ECaptureCounter`](#classURH__PEXPrimaryStats_1a209895a19d0081b1c9a891af140c24cf) | 

### Members

#### `public inline FORCEINLINE `[`FRH_StatAccumulator`](PlayerExperience.md#structFRH__StatAccumulator)` & `[`GetCaptureStat`](#classURH__PEXPrimaryStats_1ab7dc6ac57528d8c4f1a8e9acdbc63259)`(ECaptureStat Stat)` <a id="classURH__PEXPrimaryStats_1ab7dc6ac57528d8c4f1a8e9acdbc63259"></a>

#### `public inline FORCEINLINE const `[`FRH_StatAccumulator`](PlayerExperience.md#structFRH__StatAccumulator)` & `[`GetCaptureStat`](#classURH__PEXPrimaryStats_1af0cfff7b7342c59865eeda44670136dc)`(ECaptureStat Stat) const` <a id="classURH__PEXPrimaryStats_1af0cfff7b7342c59865eeda44670136dc"></a>

#### `public inline FORCEINLINE `[`FRH_StatCounter`](PlayerExperience.md#structFRH__StatCounter)` & `[`GetCaptureCounter`](#classURH__PEXPrimaryStats_1adaef813d91ae4370de3f4bf5ae1cba39)`(ECaptureCounter Counter)` <a id="classURH__PEXPrimaryStats_1adaef813d91ae4370de3f4bf5ae1cba39"></a>

#### `public inline FORCEINLINE const `[`FRH_StatCounter`](PlayerExperience.md#structFRH__StatCounter)` & `[`GetCaptureCounter`](#classURH__PEXPrimaryStats_1a80c10baa075b3432b0b10418ecfa2d21)`(ECaptureCounter Counter) const` <a id="classURH__PEXPrimaryStats_1a80c10baa075b3432b0b10418ecfa2d21"></a>

#### `public  `[`URH_PEXPrimaryStats`](#classURH__PEXPrimaryStats_1a0c3778c9c3219e32a7f76744dc3a476b)`()` <a id="classURH__PEXPrimaryStats_1a0c3778c9c3219e32a7f76744dc3a476b"></a>

#### `public virtual void `[`Init`](#classURH__PEXPrimaryStats_1acca2b022e2e56b972e0265f42bfd1d5d)`(const `[`URH_PEXCollectorConfig`](PlayerExperience.md#classURH__PEXCollectorConfig)` * InConfig,const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXPrimaryStats_1acca2b022e2e56b972e0265f42bfd1d5d"></a>

Initialize the stat group and any children. May add non-dynamic groups and init them as well.

#### `public virtual void `[`CapturePerFrameStats`](#classURH__PEXPrimaryStats_1ac3d24a75995eb1d7f0903c3eec5a4faf)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXPrimaryStats_1ac3d24a75995eb1d7f0903c3eec5a4faf"></a>

Capture once-per-frame stats.

#### `public virtual void `[`CapturePerIntervalStats`](#classURH__PEXPrimaryStats_1acdedf0c275a9279eaa34f305b2bf6ab9)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXPrimaryStats_1acdedf0c275a9279eaa34f305b2bf6ab9"></a>

Capture once-per-interval stats.

#### `public inline virtual void `[`GetPEXHostSummary`](#classURH__PEXPrimaryStats_1aef86c588fefc43c341cf91531ea53b21)`(`[`FRHAPI_PexHostRequest`](models/RHAPI_PexHostRequest.md#structFRHAPI__PexHostRequest)` & Report) const` <a id="classURH__PEXPrimaryStats_1aef86c588fefc43c341cf91531ea53b21"></a>

Fill in a API PEX host summary report with the summary data.

#### `public inline virtual void `[`GetPEXClientSummary`](#classURH__PEXPrimaryStats_1a56041f0246ba4a1dca4dc304caea7a42)`(`[`FRHAPI_PexClientRequest`](models/RHAPI_PexClientRequest.md#structFRHAPI__PexClientRequest)` & Report) const` <a id="classURH__PEXPrimaryStats_1a56041f0246ba4a1dca4dc304caea7a42"></a>

Fill in a API PEX client summary report with the summary data.

#### `enum `[`ECaptureStat`](#classURH__PEXPrimaryStats_1a3680482a111dacd52d63a8fb41c213e3) <a id="classURH__PEXPrimaryStats_1a3680482a111dacd52d63a8fb41c213e3"></a>

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
FrameTime            | 
GameThreadTime            | 
RenderThreadTime            | 
RHIThreadTime            | 
GPUTime            | 
DeltaTime            | 
GameThreadWaitTime            | 
FlushLoadingTime            | 
MemoryWS            | 
MemoryVB            | 
CPUProcess            | 
CPUMachine            | 
Max            | 

#### `enum `[`ECaptureCounter`](#classURH__PEXPrimaryStats_1a209895a19d0081b1c9a891af140c24cf) <a id="classURH__PEXPrimaryStats_1a209895a19d0081b1c9a891af140c24cf"></a>

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
TickCount            | 
DelayedTickCount            | 
LevelLoadCompleted            | 
Max            | 

## class `URH_PEXNetworkStats_Base` <a id="classURH__PEXNetworkStats__Base"></a>

```
class URH_PEXNetworkStats_Base
  : public URH_PEXStatGroup
```

Stat group for capturing whole-state network stats.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline FORCEINLINE `[`FRH_StatAccumulator`](PlayerExperience.md#structFRH__StatAccumulator)` & `[`GetCaptureStat`](#classURH__PEXNetworkStats__Base_1af86e26e7c4258b5cae49009a11156cb8)`(ECaptureStat Stat)` | 
`public inline FORCEINLINE const `[`FRH_StatAccumulator`](PlayerExperience.md#structFRH__StatAccumulator)` & `[`GetCaptureStat`](#classURH__PEXNetworkStats__Base_1a0311d5f7b01b3ba2d89f3787d413e86f)`(ECaptureStat Stat) const` | 
`public  `[`URH_PEXNetworkStats_Base`](#classURH__PEXNetworkStats__Base_1af3a02b991ff93ef56148932b5c4cee60)`()` | 
`public inline virtual void `[`GetPEXHostSummary`](#classURH__PEXNetworkStats__Base_1a955776d5d441399b8efc0e5ae8703a0e)`(`[`FRHAPI_PexHostRequest`](models/RHAPI_PexHostRequest.md#structFRHAPI__PexHostRequest)` & Report) const` | Fill in a API PEX host summary report with the summary data.
`public inline virtual void `[`GetPEXClientSummary`](#classURH__PEXNetworkStats__Base_1a056e52f6d8e9f191af2ce3f4416c4158)`(`[`FRHAPI_PexClientRequest`](models/RHAPI_PexClientRequest.md#structFRHAPI__PexClientRequest)` & Report) const` | Fill in a API PEX client summary report with the summary data.
`enum `[`ECaptureStat`](#classURH__PEXNetworkStats__Base_1a4442bfbff2299f7b2590c680474e79cd) | 

### Members

#### `public inline FORCEINLINE `[`FRH_StatAccumulator`](PlayerExperience.md#structFRH__StatAccumulator)` & `[`GetCaptureStat`](#classURH__PEXNetworkStats__Base_1af86e26e7c4258b5cae49009a11156cb8)`(ECaptureStat Stat)` <a id="classURH__PEXNetworkStats__Base_1af86e26e7c4258b5cae49009a11156cb8"></a>

#### `public inline FORCEINLINE const `[`FRH_StatAccumulator`](PlayerExperience.md#structFRH__StatAccumulator)` & `[`GetCaptureStat`](#classURH__PEXNetworkStats__Base_1a0311d5f7b01b3ba2d89f3787d413e86f)`(ECaptureStat Stat) const` <a id="classURH__PEXNetworkStats__Base_1a0311d5f7b01b3ba2d89f3787d413e86f"></a>

#### `public  `[`URH_PEXNetworkStats_Base`](#classURH__PEXNetworkStats__Base_1af3a02b991ff93ef56148932b5c4cee60)`()` <a id="classURH__PEXNetworkStats__Base_1af3a02b991ff93ef56148932b5c4cee60"></a>

#### `public inline virtual void `[`GetPEXHostSummary`](#classURH__PEXNetworkStats__Base_1a955776d5d441399b8efc0e5ae8703a0e)`(`[`FRHAPI_PexHostRequest`](models/RHAPI_PexHostRequest.md#structFRHAPI__PexHostRequest)` & Report) const` <a id="classURH__PEXNetworkStats__Base_1a955776d5d441399b8efc0e5ae8703a0e"></a>

Fill in a API PEX host summary report with the summary data.

#### `public inline virtual void `[`GetPEXClientSummary`](#classURH__PEXNetworkStats__Base_1a056e52f6d8e9f191af2ce3f4416c4158)`(`[`FRHAPI_PexClientRequest`](models/RHAPI_PexClientRequest.md#structFRHAPI__PexClientRequest)` & Report) const` <a id="classURH__PEXNetworkStats__Base_1a056e52f6d8e9f191af2ce3f4416c4158"></a>

Fill in a API PEX client summary report with the summary data.

#### `enum `[`ECaptureStat`](#classURH__PEXNetworkStats__Base_1a4442bfbff2299f7b2590c680474e79cd) <a id="classURH__PEXNetworkStats__Base_1a4442bfbff2299f7b2590c680474e79cd"></a>

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
ConnectionCount            | 
Ping            | 
InPackets            | 
OutPackets            | 
TotalPackets            | 
InPacketsLost            | 
OutPacketsLost            | 
TotalPacketsLost            | 
InPacketLossPct            | 
OutPacketLossPct            | 
TotalPacketLossPct            | 
Max            | 

## class `URH_PEXNetworkStats_Global` <a id="classURH__PEXNetworkStats__Global"></a>

```
class URH_PEXNetworkStats_Global
  : public URH_PEXNetworkStats_Base
```

Stat group for capturing global network stats.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`URH_PEXNetworkStats_Global`](#classURH__PEXNetworkStats__Global_1add53421f643f0958549c59778533966a)`()` | 
`public virtual void `[`CapturePerSecondStats`](#classURH__PEXNetworkStats__Global_1a3a2339cb7f0276d5f0f36ebca501359d)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-second stats.

### Members

#### `public inline  `[`URH_PEXNetworkStats_Global`](#classURH__PEXNetworkStats__Global_1add53421f643f0958549c59778533966a)`()` <a id="classURH__PEXNetworkStats__Global_1add53421f643f0958549c59778533966a"></a>

#### `public virtual void `[`CapturePerSecondStats`](#classURH__PEXNetworkStats__Global_1a3a2339cb7f0276d5f0f36ebca501359d)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXNetworkStats__Global_1a3a2339cb7f0276d5f0f36ebca501359d"></a>

Capture once-per-second stats.

## class `URH_PEXNetworkStats_Connection` <a id="classURH__PEXNetworkStats__Connection"></a>

```
class URH_PEXNetworkStats_Connection
  : public URH_PEXNetworkStats_Base
```

Stat group for capturing per-player network stats.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TWeakObjectPtr< const UNetConnection > `[`Connection`](#classURH__PEXNetworkStats__Connection_1acb8e75647ec0062018d67ce83c50fe5e) | 
`public inline  `[`URH_PEXNetworkStats_Connection`](#classURH__PEXNetworkStats__Connection_1a4e0e02f9ab7dba0e8e7f2ab051992cb8)`()` | 
`public void `[`InitForConnection`](#classURH__PEXNetworkStats__Connection_1a6b05837479183d9014a8cd0ebab04f0d)`(const UNetConnection * InConnection)` | 
`public virtual void `[`CapturePerSecondStats`](#classURH__PEXNetworkStats__Connection_1a35d8b1685fee8553f48139cd867a5e94)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-second stats.

### Members

#### `public TWeakObjectPtr< const UNetConnection > `[`Connection`](#classURH__PEXNetworkStats__Connection_1acb8e75647ec0062018d67ce83c50fe5e) <a id="classURH__PEXNetworkStats__Connection_1acb8e75647ec0062018d67ce83c50fe5e"></a>

#### `public inline  `[`URH_PEXNetworkStats_Connection`](#classURH__PEXNetworkStats__Connection_1a4e0e02f9ab7dba0e8e7f2ab051992cb8)`()` <a id="classURH__PEXNetworkStats__Connection_1a4e0e02f9ab7dba0e8e7f2ab051992cb8"></a>

#### `public void `[`InitForConnection`](#classURH__PEXNetworkStats__Connection_1a6b05837479183d9014a8cd0ebab04f0d)`(const UNetConnection * InConnection)` <a id="classURH__PEXNetworkStats__Connection_1a6b05837479183d9014a8cd0ebab04f0d"></a>

#### `public virtual void `[`CapturePerSecondStats`](#classURH__PEXNetworkStats__Connection_1a35d8b1685fee8553f48139cd867a5e94)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXNetworkStats__Connection_1a35d8b1685fee8553f48139cd867a5e94"></a>

Capture once-per-second stats.

## class `URH_PEXNetworkStats_Host` <a id="classURH__PEXNetworkStats__Host"></a>

```
class URH_PEXNetworkStats_Host
  : public URH_PEXNetworkStats_Base
```

Stat group for capturing a group of player network stats.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FGuid, `[`URH_PEXNetworkStats_Connection`](PlayerExperience.md#classURH__PEXNetworkStats__Connection)` * > `[`PlayerNetworkStats`](#classURH__PEXNetworkStats__Host_1a2a188dda4bc46e14802aa2c43a78653f) | Per-player network stats, only used by summary
`public inline  `[`URH_PEXNetworkStats_Host`](#classURH__PEXNetworkStats__Host_1a4b679c43c823bbcf78d1c6d853e09e04)`()` | 
`public virtual void `[`GetOrCreatePlayerNetworkStats`](#classURH__PEXNetworkStats__Host_1a0499371af05de74f3e8785f1150d0c78)`(const class UNetConnection * Connection,`[`URH_PEXNetworkStats_Connection`](PlayerExperience.md#classURH__PEXNetworkStats__Connection)` *& OutPlayerNetworkStats)` | Get or create a player's network stats.
`public inline virtual void `[`ResetSummary`](#classURH__PEXNetworkStats__Host_1a9d2b323c8976b30a4e1736c5785ec60e)`()` | Reset the summary state of all stats.
`public inline virtual void `[`GetPEXHostSummary`](#classURH__PEXNetworkStats__Host_1a4c65911c24e4727cce22420a940683c2)`(`[`FRHAPI_PexHostRequest`](models/RHAPI_PexHostRequest.md#structFRHAPI__PexHostRequest)` & Report) const` | Fill in a API PEX host summary report with the summary data.
`public virtual void `[`EnsureConnectionTrackersExist`](#classURH__PEXNetworkStats__Host_1a6c20265da5e08351301b5544bd366f88)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | 
`public virtual void `[`CapturePerFrameStats`](#classURH__PEXNetworkStats__Host_1a8a577d11ba1d408c9abfdd22d1b2f6da)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-frame stats.
`public virtual void `[`CapturePerSecondStats`](#classURH__PEXNetworkStats__Host_1a4386ba497c2e2a871b51334b786291fc)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-second stats.
`public virtual void `[`CapturePerIntervalStats`](#classURH__PEXNetworkStats__Host_1a011f73713fca75190fd0e3659d4e7f37)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-interval stats.

### Members

#### `public TMap< FGuid, `[`URH_PEXNetworkStats_Connection`](PlayerExperience.md#classURH__PEXNetworkStats__Connection)` * > `[`PlayerNetworkStats`](#classURH__PEXNetworkStats__Host_1a2a188dda4bc46e14802aa2c43a78653f) <a id="classURH__PEXNetworkStats__Host_1a2a188dda4bc46e14802aa2c43a78653f"></a>

Per-player network stats, only used by summary

#### `public inline  `[`URH_PEXNetworkStats_Host`](#classURH__PEXNetworkStats__Host_1a4b679c43c823bbcf78d1c6d853e09e04)`()` <a id="classURH__PEXNetworkStats__Host_1a4b679c43c823bbcf78d1c6d853e09e04"></a>

#### `public virtual void `[`GetOrCreatePlayerNetworkStats`](#classURH__PEXNetworkStats__Host_1a0499371af05de74f3e8785f1150d0c78)`(const class UNetConnection * Connection,`[`URH_PEXNetworkStats_Connection`](PlayerExperience.md#classURH__PEXNetworkStats__Connection)` *& OutPlayerNetworkStats)` <a id="classURH__PEXNetworkStats__Host_1a0499371af05de74f3e8785f1150d0c78"></a>

Get or create a player's network stats.

#### `public inline virtual void `[`ResetSummary`](#classURH__PEXNetworkStats__Host_1a9d2b323c8976b30a4e1736c5785ec60e)`()` <a id="classURH__PEXNetworkStats__Host_1a9d2b323c8976b30a4e1736c5785ec60e"></a>

Reset the summary state of all stats.

#### `public inline virtual void `[`GetPEXHostSummary`](#classURH__PEXNetworkStats__Host_1a4c65911c24e4727cce22420a940683c2)`(`[`FRHAPI_PexHostRequest`](models/RHAPI_PexHostRequest.md#structFRHAPI__PexHostRequest)` & Report) const` <a id="classURH__PEXNetworkStats__Host_1a4c65911c24e4727cce22420a940683c2"></a>

Fill in a API PEX host summary report with the summary data.

#### `public virtual void `[`EnsureConnectionTrackersExist`](#classURH__PEXNetworkStats__Host_1a6c20265da5e08351301b5544bd366f88)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXNetworkStats__Host_1a6c20265da5e08351301b5544bd366f88"></a>

#### `public virtual void `[`CapturePerFrameStats`](#classURH__PEXNetworkStats__Host_1a8a577d11ba1d408c9abfdd22d1b2f6da)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXNetworkStats__Host_1a8a577d11ba1d408c9abfdd22d1b2f6da"></a>

Capture once-per-frame stats.

#### `public virtual void `[`CapturePerSecondStats`](#classURH__PEXNetworkStats__Host_1a4386ba497c2e2a871b51334b786291fc)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXNetworkStats__Host_1a4386ba497c2e2a871b51334b786291fc"></a>

Capture once-per-second stats.

#### `public virtual void `[`CapturePerIntervalStats`](#classURH__PEXNetworkStats__Host_1a011f73713fca75190fd0e3659d4e7f37)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXNetworkStats__Host_1a011f73713fca75190fd0e3659d4e7f37"></a>

Capture once-per-interval stats.

## class `URH_PEXNetworkStats_Client` <a id="classURH__PEXNetworkStats__Client"></a>

```
class URH_PEXNetworkStats_Client
  : public URH_PEXNetworkStats_Connection
```

Stat group for capturing a group of client's connection to server's network stats.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`URH_PEXNetworkStats_Client`](#classURH__PEXNetworkStats__Client_1a8571a54ddb046dc70d0d7f0eac9146a9)`()` | 
`public virtual void `[`EnsureConnectionTrackersExist`](#classURH__PEXNetworkStats__Client_1aa65d8f0dc761701d61e60cc664709a64)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | 
`public virtual void `[`CapturePerFrameStats`](#classURH__PEXNetworkStats__Client_1a43a9a248743ac78178220b6affc84634)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-frame stats.
`public virtual void `[`CapturePerSecondStats`](#classURH__PEXNetworkStats__Client_1a50b8880d99b872fd6397a6de46703fea)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-second stats.
`public virtual void `[`CapturePerIntervalStats`](#classURH__PEXNetworkStats__Client_1a062e89b49a6be0d6fbe66e7686779b9f)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-interval stats.

### Members

#### `public inline  `[`URH_PEXNetworkStats_Client`](#classURH__PEXNetworkStats__Client_1a8571a54ddb046dc70d0d7f0eac9146a9)`()` <a id="classURH__PEXNetworkStats__Client_1a8571a54ddb046dc70d0d7f0eac9146a9"></a>

#### `public virtual void `[`EnsureConnectionTrackersExist`](#classURH__PEXNetworkStats__Client_1aa65d8f0dc761701d61e60cc664709a64)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXNetworkStats__Client_1aa65d8f0dc761701d61e60cc664709a64"></a>

#### `public virtual void `[`CapturePerFrameStats`](#classURH__PEXNetworkStats__Client_1a43a9a248743ac78178220b6affc84634)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXNetworkStats__Client_1a43a9a248743ac78178220b6affc84634"></a>

Capture once-per-frame stats.

#### `public virtual void `[`CapturePerSecondStats`](#classURH__PEXNetworkStats__Client_1a50b8880d99b872fd6397a6de46703fea)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXNetworkStats__Client_1a50b8880d99b872fd6397a6de46703fea"></a>

Capture once-per-second stats.

#### `public virtual void `[`CapturePerIntervalStats`](#classURH__PEXNetworkStats__Client_1a062e89b49a6be0d6fbe66e7686779b9f)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXNetworkStats__Client_1a062e89b49a6be0d6fbe66e7686779b9f"></a>

Capture once-per-interval stats.

## class `URH_PEXNetworkStats` <a id="classURH__PEXNetworkStats"></a>

```
class URH_PEXNetworkStats
  : public URH_PEXStatGroup
```

Stat group for capturing local whole-state network stats, plus per-player stats.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`URH_PEXNetworkStats_Global`](PlayerExperience.md#classURH__PEXNetworkStats__Global)` * `[`GlobalNetworkStats`](#classURH__PEXNetworkStats_1ac57913ba5907a47c4dfdd8bc55627d50) | Global network stats, used by summary and timeline
`public `[`URH_PEXNetworkStats_Client`](PlayerExperience.md#classURH__PEXNetworkStats__Client)` * `[`ClientNetworkStats`](#classURH__PEXNetworkStats_1a212cb988d8d7039c901932789fe54318) | Client's connection to host, only used by summary
`public `[`URH_PEXNetworkStats_Host`](PlayerExperience.md#classURH__PEXNetworkStats__Host)` * `[`HostNetworkStats`](#classURH__PEXNetworkStats_1a0b98f24749d884e7ee921ef93b213c97) | Host's connection to clients, only used by summary
`public  `[`URH_PEXNetworkStats`](#classURH__PEXNetworkStats_1a3354185befc3c15728f1362cc34f95e2)`()` | 
`public inline virtual void `[`GetPEXHostSummary`](#classURH__PEXNetworkStats_1a18a03108cbe2dcb94d6dc97dd4f1a229)`(`[`FRHAPI_PexHostRequest`](models/RHAPI_PexHostRequest.md#structFRHAPI__PexHostRequest)` & Report) const` | Fill in a API PEX host summary report with the summary data.
`public inline virtual void `[`GetPEXClientSummary`](#classURH__PEXNetworkStats_1aa53c887acc51913905a8081079263e88)`(`[`FRHAPI_PexClientRequest`](models/RHAPI_PexClientRequest.md#structFRHAPI__PexClientRequest)` & Report) const` | Fill in a API PEX client summary report with the summary data.

### Members

#### `public `[`URH_PEXNetworkStats_Global`](PlayerExperience.md#classURH__PEXNetworkStats__Global)` * `[`GlobalNetworkStats`](#classURH__PEXNetworkStats_1ac57913ba5907a47c4dfdd8bc55627d50) <a id="classURH__PEXNetworkStats_1ac57913ba5907a47c4dfdd8bc55627d50"></a>

Global network stats, used by summary and timeline

#### `public `[`URH_PEXNetworkStats_Client`](PlayerExperience.md#classURH__PEXNetworkStats__Client)` * `[`ClientNetworkStats`](#classURH__PEXNetworkStats_1a212cb988d8d7039c901932789fe54318) <a id="classURH__PEXNetworkStats_1a212cb988d8d7039c901932789fe54318"></a>

Client's connection to host, only used by summary

#### `public `[`URH_PEXNetworkStats_Host`](PlayerExperience.md#classURH__PEXNetworkStats__Host)` * `[`HostNetworkStats`](#classURH__PEXNetworkStats_1a0b98f24749d884e7ee921ef93b213c97) <a id="classURH__PEXNetworkStats_1a0b98f24749d884e7ee921ef93b213c97"></a>

Host's connection to clients, only used by summary

#### `public  `[`URH_PEXNetworkStats`](#classURH__PEXNetworkStats_1a3354185befc3c15728f1362cc34f95e2)`()` <a id="classURH__PEXNetworkStats_1a3354185befc3c15728f1362cc34f95e2"></a>

#### `public inline virtual void `[`GetPEXHostSummary`](#classURH__PEXNetworkStats_1a18a03108cbe2dcb94d6dc97dd4f1a229)`(`[`FRHAPI_PexHostRequest`](models/RHAPI_PexHostRequest.md#structFRHAPI__PexHostRequest)` & Report) const` <a id="classURH__PEXNetworkStats_1a18a03108cbe2dcb94d6dc97dd4f1a229"></a>

Fill in a API PEX host summary report with the summary data.

#### `public inline virtual void `[`GetPEXClientSummary`](#classURH__PEXNetworkStats_1aa53c887acc51913905a8081079263e88)`(`[`FRHAPI_PexClientRequest`](models/RHAPI_PexClientRequest.md#structFRHAPI__PexClientRequest)` & Report) const` <a id="classURH__PEXNetworkStats_1aa53c887acc51913905a8081079263e88"></a>

Fill in a API PEX client summary report with the summary data.

## class `URH_PEXGameStats` <a id="classURH__PEXGameStats"></a>

```
class URH_PEXGameStats
  : public URH_PEXStatGroup
```

Stat group for capturing game stats.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline FORCEINLINE `[`FRH_StatAccumulator`](PlayerExperience.md#structFRH__StatAccumulator)` & `[`GetCaptureStat`](#classURH__PEXGameStats_1ae43066a312a6084d698bce0d6f87becd)`(ECaptureStat Stat)` | 
`public inline FORCEINLINE const `[`FRH_StatAccumulator`](PlayerExperience.md#structFRH__StatAccumulator)` & `[`GetCaptureStat`](#classURH__PEXGameStats_1a12411fefd93bddd1b8eac46f3e890217)`(ECaptureStat Stat) const` | 
`public  `[`URH_PEXGameStats`](#classURH__PEXGameStats_1a8c5f7d865482740f9741ecaa4c937e20)`()` | 
`public virtual void `[`CapturePerIntervalStats`](#classURH__PEXGameStats_1a5496f3c239a4817ab1a14fa9b0d08cb6)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-interval stats.
`enum `[`ECaptureStat`](#classURH__PEXGameStats_1a76c5c355c9016f716f84c2352dabcf05) | 

### Members

#### `public inline FORCEINLINE `[`FRH_StatAccumulator`](PlayerExperience.md#structFRH__StatAccumulator)` & `[`GetCaptureStat`](#classURH__PEXGameStats_1ae43066a312a6084d698bce0d6f87becd)`(ECaptureStat Stat)` <a id="classURH__PEXGameStats_1ae43066a312a6084d698bce0d6f87becd"></a>

#### `public inline FORCEINLINE const `[`FRH_StatAccumulator`](PlayerExperience.md#structFRH__StatAccumulator)` & `[`GetCaptureStat`](#classURH__PEXGameStats_1a12411fefd93bddd1b8eac46f3e890217)`(ECaptureStat Stat) const` <a id="classURH__PEXGameStats_1a12411fefd93bddd1b8eac46f3e890217"></a>

#### `public  `[`URH_PEXGameStats`](#classURH__PEXGameStats_1a8c5f7d865482740f9741ecaa4c937e20)`()` <a id="classURH__PEXGameStats_1a8c5f7d865482740f9741ecaa4c937e20"></a>

#### `public virtual void `[`CapturePerIntervalStats`](#classURH__PEXGameStats_1a5496f3c239a4817ab1a14fa9b0d08cb6)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXGameStats_1a5496f3c239a4817ab1a14fa9b0d08cb6"></a>

Capture once-per-interval stats.

#### `enum `[`ECaptureStat`](#classURH__PEXGameStats_1a76c5c355c9016f716f84c2352dabcf05) <a id="classURH__PEXGameStats_1a76c5c355c9016f716f84c2352dabcf05"></a>

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
PlayerControllerCount            | 
AIControllerCount            | 
PawnCount            | 
Max            | 

## class `URH_PEXBlueprintableStats` <a id="classURH__PEXBlueprintableStats"></a>

```
class URH_PEXBlueprintableStats
  : public URH_PEXStatGroup
```

Blueprintable stat group for capturing stats.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`URH_PEXBlueprintableStats`](#classURH__PEXBlueprintableStats_1a39fdd25ae96b167809e89a7f90f3bf4c)`()` | 
`public inline virtual void `[`CapturePerFrameStats`](#classURH__PEXBlueprintableStats_1ab4a3fe21879a698ef7052dab3922423e)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-frame stats.
`public inline virtual void `[`CapturePerIntervalStats`](#classURH__PEXBlueprintableStats_1a6eb482169d59e81d1ebc130de1d128a0)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-interval stats.
`public void `[`BLUEPRINT_CapturePerFrameStats`](#classURH__PEXBlueprintableStats_1ae3736c0845321b4de171f2d10c7f14c0)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | 
`public void `[`BLUEPRINT_CapturePerSecondStats`](#classURH__PEXBlueprintableStats_1afd712220fec60d44ab2d2481ba24b7ae)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | 
`public inline void `[`CaptureStatValue`](#classURH__PEXBlueprintableStats_1a001038c30e53be603ea852535ec9b9a6)`(FName StatName,float Value)` | 
`public inline void `[`CaptureCounterValue`](#classURH__PEXBlueprintableStats_1a1c8225c5b33baa0f7b8ce98bede9a891)`(FName StatName,float Value)` | 

### Members

#### `public inline  `[`URH_PEXBlueprintableStats`](#classURH__PEXBlueprintableStats_1a39fdd25ae96b167809e89a7f90f3bf4c)`()` <a id="classURH__PEXBlueprintableStats_1a39fdd25ae96b167809e89a7f90f3bf4c"></a>

#### `public inline virtual void `[`CapturePerFrameStats`](#classURH__PEXBlueprintableStats_1ab4a3fe21879a698ef7052dab3922423e)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXBlueprintableStats_1ab4a3fe21879a698ef7052dab3922423e"></a>

Capture once-per-frame stats.

#### `public inline virtual void `[`CapturePerIntervalStats`](#classURH__PEXBlueprintableStats_1a6eb482169d59e81d1ebc130de1d128a0)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXBlueprintableStats_1a6eb482169d59e81d1ebc130de1d128a0"></a>

Capture once-per-interval stats.

#### `public void `[`BLUEPRINT_CapturePerFrameStats`](#classURH__PEXBlueprintableStats_1ae3736c0845321b4de171f2d10c7f14c0)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXBlueprintableStats_1ae3736c0845321b4de171f2d10c7f14c0"></a>

#### `public void `[`BLUEPRINT_CapturePerSecondStats`](#classURH__PEXBlueprintableStats_1afd712220fec60d44ab2d2481ba24b7ae)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXBlueprintableStats_1afd712220fec60d44ab2d2481ba24b7ae"></a>

#### `public inline void `[`CaptureStatValue`](#classURH__PEXBlueprintableStats_1a001038c30e53be603ea852535ec9b9a6)`(FName StatName,float Value)` <a id="classURH__PEXBlueprintableStats_1a001038c30e53be603ea852535ec9b9a6"></a>

#### `public inline void `[`CaptureCounterValue`](#classURH__PEXBlueprintableStats_1a1c8225c5b33baa0f7b8ce98bede9a891)`(FName StatName,float Value)` <a id="classURH__PEXBlueprintableStats_1a1c8225c5b33baa0f7b8ce98bede9a891"></a>

## class `URH_PEXCollectorConfig_Test` <a id="classURH__PEXCollectorConfig__Test"></a>

```
class URH_PEXCollectorConfig_Test
  : public URH_PEXCollectorConfig_Host
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------

### Members

## class `URH_TestPEXOwner` <a id="classURH__TestPEXOwner"></a>

```
class URH_TestPEXOwner
  : public UObject
  : public IRH_PEXOwnerInterface
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerId`](#classURH__TestPEXOwner_1a43b7bd0bb58a6ebb37ade126a774f2d6) | 
`public FString `[`MatchId`](#classURH__TestPEXOwner_1a1127493ed99ade6e18620921a4470b91) | 
`public bool `[`bSendReportsToAPI`](#classURH__TestPEXOwner_1a234ed01e57ee337a919bae13d1001f1d) | 
`public mutable TOptional< `[`FRHAPI_PexClientRequest`](models/RHAPI_PexClientRequest.md#structFRHAPI__PexClientRequest)` > `[`ClientReport`](#classURH__TestPEXOwner_1a94bed84e6a2aef0f3135344dfdc414cf) | 
`public mutable TOptional< `[`FRHAPI_PexHostRequest`](models/RHAPI_PexHostRequest.md#structFRHAPI__PexHostRequest)` > `[`HostReport`](#classURH__TestPEXOwner_1afe117b1194971b6c8f20f1726b20cb73) | 
`public inline  `[`URH_TestPEXOwner`](#classURH__TestPEXOwner_1a59cc322ce116f2a880e3057909b6da18)`()` | 
`public inline virtual UEngine * `[`GetPEXEngine`](#classURH__TestPEXOwner_1a59738a682866e8a7a6194b51713ff39f)`() const` | 
`public inline virtual UWorld * `[`GetPEXWorld`](#classURH__TestPEXOwner_1a5b50b9ea1dc76a9a830f1f901fd83365)`() const` | 
`public inline virtual FString `[`GetPEXMatchId`](#classURH__TestPEXOwner_1a5cbb10cd0279946092f0b12650c848b6)`() const` | 
`public inline virtual FGuid `[`GetPEXPlayerId`](#classURH__TestPEXOwner_1ac975e4caa360548e994a27f2443188f6)`() const` | 
`public inline virtual `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` `[`GetPEXRemoteFileDirectory`](#classURH__TestPEXOwner_1a5854365a69238f85f4007083e38f4979)`() const` | 
`public inline virtual bool `[`GetPEXIsHost`](#classURH__TestPEXOwner_1a1a7d5a3b776e8c01bd668fcbe027ecf8)`() const` | 
`public virtual void `[`SubmitPEXHostSummary`](#classURH__TestPEXOwner_1a420ec1e5e87bcc7c08c3fa70a28d643b)`(`[`FRHAPI_PexHostRequest`](models/RHAPI_PexHostRequest.md#structFRHAPI__PexHostRequest)` && Report) const` | 
`public virtual void `[`SubmitPEXClientSummary`](#classURH__TestPEXOwner_1a8b6db289fa0ccfd3931e368eaa088d17)`(`[`FRHAPI_PexClientRequest`](models/RHAPI_PexClientRequest.md#structFRHAPI__PexClientRequest)` && Report) const` | 
`public virtual void `[`ValidateReports`](#classURH__TestPEXOwner_1a85e7219ba356d999310e7244bc8ca205)`(FAutomationTestBase * Test,const `[`URH_PEXCollectorConfig`](PlayerExperience.md#classURH__PEXCollectorConfig)` * Config) const` | 

### Members

#### `public FGuid `[`PlayerId`](#classURH__TestPEXOwner_1a43b7bd0bb58a6ebb37ade126a774f2d6) <a id="classURH__TestPEXOwner_1a43b7bd0bb58a6ebb37ade126a774f2d6"></a>

#### `public FString `[`MatchId`](#classURH__TestPEXOwner_1a1127493ed99ade6e18620921a4470b91) <a id="classURH__TestPEXOwner_1a1127493ed99ade6e18620921a4470b91"></a>

#### `public bool `[`bSendReportsToAPI`](#classURH__TestPEXOwner_1a234ed01e57ee337a919bae13d1001f1d) <a id="classURH__TestPEXOwner_1a234ed01e57ee337a919bae13d1001f1d"></a>

#### `public mutable TOptional< `[`FRHAPI_PexClientRequest`](models/RHAPI_PexClientRequest.md#structFRHAPI__PexClientRequest)` > `[`ClientReport`](#classURH__TestPEXOwner_1a94bed84e6a2aef0f3135344dfdc414cf) <a id="classURH__TestPEXOwner_1a94bed84e6a2aef0f3135344dfdc414cf"></a>

#### `public mutable TOptional< `[`FRHAPI_PexHostRequest`](models/RHAPI_PexHostRequest.md#structFRHAPI__PexHostRequest)` > `[`HostReport`](#classURH__TestPEXOwner_1afe117b1194971b6c8f20f1726b20cb73) <a id="classURH__TestPEXOwner_1afe117b1194971b6c8f20f1726b20cb73"></a>

#### `public inline  `[`URH_TestPEXOwner`](#classURH__TestPEXOwner_1a59cc322ce116f2a880e3057909b6da18)`()` <a id="classURH__TestPEXOwner_1a59cc322ce116f2a880e3057909b6da18"></a>

#### `public inline virtual UEngine * `[`GetPEXEngine`](#classURH__TestPEXOwner_1a59738a682866e8a7a6194b51713ff39f)`() const` <a id="classURH__TestPEXOwner_1a59738a682866e8a7a6194b51713ff39f"></a>

#### `public inline virtual UWorld * `[`GetPEXWorld`](#classURH__TestPEXOwner_1a5b50b9ea1dc76a9a830f1f901fd83365)`() const` <a id="classURH__TestPEXOwner_1a5b50b9ea1dc76a9a830f1f901fd83365"></a>

#### `public inline virtual FString `[`GetPEXMatchId`](#classURH__TestPEXOwner_1a5cbb10cd0279946092f0b12650c848b6)`() const` <a id="classURH__TestPEXOwner_1a5cbb10cd0279946092f0b12650c848b6"></a>

#### `public inline virtual FGuid `[`GetPEXPlayerId`](#classURH__TestPEXOwner_1ac975e4caa360548e994a27f2443188f6)`() const` <a id="classURH__TestPEXOwner_1ac975e4caa360548e994a27f2443188f6"></a>

#### `public inline virtual `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` `[`GetPEXRemoteFileDirectory`](#classURH__TestPEXOwner_1a5854365a69238f85f4007083e38f4979)`() const` <a id="classURH__TestPEXOwner_1a5854365a69238f85f4007083e38f4979"></a>

#### `public inline virtual bool `[`GetPEXIsHost`](#classURH__TestPEXOwner_1a1a7d5a3b776e8c01bd668fcbe027ecf8)`() const` <a id="classURH__TestPEXOwner_1a1a7d5a3b776e8c01bd668fcbe027ecf8"></a>

#### `public virtual void `[`SubmitPEXHostSummary`](#classURH__TestPEXOwner_1a420ec1e5e87bcc7c08c3fa70a28d643b)`(`[`FRHAPI_PexHostRequest`](models/RHAPI_PexHostRequest.md#structFRHAPI__PexHostRequest)` && Report) const` <a id="classURH__TestPEXOwner_1a420ec1e5e87bcc7c08c3fa70a28d643b"></a>

#### `public virtual void `[`SubmitPEXClientSummary`](#classURH__TestPEXOwner_1a8b6db289fa0ccfd3931e368eaa088d17)`(`[`FRHAPI_PexClientRequest`](models/RHAPI_PexClientRequest.md#structFRHAPI__PexClientRequest)` && Report) const` <a id="classURH__TestPEXOwner_1a8b6db289fa0ccfd3931e368eaa088d17"></a>

#### `public virtual void `[`ValidateReports`](#classURH__TestPEXOwner_1a85e7219ba356d999310e7244bc8ca205)`(FAutomationTestBase * Test,const `[`URH_PEXCollectorConfig`](PlayerExperience.md#classURH__PEXCollectorConfig)` * Config) const` <a id="classURH__TestPEXOwner_1a85e7219ba356d999310e7244bc8ca205"></a>

## struct `FRH_PEXStatState` <a id="structFRH__PEXStatState"></a>

State of the accumulated stat.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public float `[`Current`](#structFRH__PEXStatState_1ab61cf8cdd457dfa773312b3bd97d5c0b) | Current value.
`public float `[`Min`](#structFRH__PEXStatState_1adc36a682a15c0fbbb606f7f0e2601ccd) | Minimum value.
`public float `[`Max`](#structFRH__PEXStatState_1a74e6a8ce8145c57b56e0241b2d5b83de) | Maximum value.
`public float `[`Avg`](#structFRH__PEXStatState_1a392def5e3392079f98c158a1ba2fe911) | Average value.
`public float `[`Sum`](#structFRH__PEXStatState_1a691f0e317ed4e5b32c1a3e1cc66495cc) | Sum of values.
`public float `[`SumOfSquares`](#structFRH__PEXStatState_1acb9a8531a39fc398d704581fe35b8131) | Sum of squared values.
`public float `[`Variance`](#structFRH__PEXStatState_1abd698b52451f0690e9b974c9c868f4d5) | Variance of values.
`public int32 `[`Count`](#structFRH__PEXStatState_1aa78473aba85331923e63df785b2ce2ab) | Count of values.
`public inline  `[`FRH_PEXStatState`](#structFRH__PEXStatState_1afbf06852851c62d7e57acfe36a7f15d0)`()` | 
`public inline void `[`Reset`](#structFRH__PEXStatState_1a640b7389adc87774e29b2d4a6971629c)`()` | Reset the state to defaults.
`public inline void `[`AddValue`](#structFRH__PEXStatState_1a0c07fc5f97ff5396f0073d21ce756f5a)`(float Value)` | Add a value to the accumulator.
`public inline void `[`MergeAddValue`](#structFRH__PEXStatState_1ab7ff73a43515fc4ad23e8588759f8db5)`(const `[`FRH_PEXStatState`](#structFRH__PEXStatState)` & Other)` | Merge another stat state into this one.
`public inline void `[`UpdateSummary`](#structFRH__PEXStatState_1a0a6f5e8339d76333b329d7a284de6a18)`(const `[`FRH_PEXStatState`](#structFRH__PEXStatState)` & CurrentState)` | Update the summary state with the current state.

### Members

#### `public float `[`Current`](#structFRH__PEXStatState_1ab61cf8cdd457dfa773312b3bd97d5c0b) <a id="structFRH__PEXStatState_1ab61cf8cdd457dfa773312b3bd97d5c0b"></a>

Current value.

#### `public float `[`Min`](#structFRH__PEXStatState_1adc36a682a15c0fbbb606f7f0e2601ccd) <a id="structFRH__PEXStatState_1adc36a682a15c0fbbb606f7f0e2601ccd"></a>

Minimum value.

#### `public float `[`Max`](#structFRH__PEXStatState_1a74e6a8ce8145c57b56e0241b2d5b83de) <a id="structFRH__PEXStatState_1a74e6a8ce8145c57b56e0241b2d5b83de"></a>

Maximum value.

#### `public float `[`Avg`](#structFRH__PEXStatState_1a392def5e3392079f98c158a1ba2fe911) <a id="structFRH__PEXStatState_1a392def5e3392079f98c158a1ba2fe911"></a>

Average value.

#### `public float `[`Sum`](#structFRH__PEXStatState_1a691f0e317ed4e5b32c1a3e1cc66495cc) <a id="structFRH__PEXStatState_1a691f0e317ed4e5b32c1a3e1cc66495cc"></a>

Sum of values.

#### `public float `[`SumOfSquares`](#structFRH__PEXStatState_1acb9a8531a39fc398d704581fe35b8131) <a id="structFRH__PEXStatState_1acb9a8531a39fc398d704581fe35b8131"></a>

Sum of squared values.

#### `public float `[`Variance`](#structFRH__PEXStatState_1abd698b52451f0690e9b974c9c868f4d5) <a id="structFRH__PEXStatState_1abd698b52451f0690e9b974c9c868f4d5"></a>

Variance of values.

#### `public int32 `[`Count`](#structFRH__PEXStatState_1aa78473aba85331923e63df785b2ce2ab) <a id="structFRH__PEXStatState_1aa78473aba85331923e63df785b2ce2ab"></a>

Count of values.

#### `public inline  `[`FRH_PEXStatState`](#structFRH__PEXStatState_1afbf06852851c62d7e57acfe36a7f15d0)`()` <a id="structFRH__PEXStatState_1afbf06852851c62d7e57acfe36a7f15d0"></a>

#### `public inline void `[`Reset`](#structFRH__PEXStatState_1a640b7389adc87774e29b2d4a6971629c)`()` <a id="structFRH__PEXStatState_1a640b7389adc87774e29b2d4a6971629c"></a>

Reset the state to defaults.

#### `public inline void `[`AddValue`](#structFRH__PEXStatState_1a0c07fc5f97ff5396f0073d21ce756f5a)`(float Value)` <a id="structFRH__PEXStatState_1a0c07fc5f97ff5396f0073d21ce756f5a"></a>

Add a value to the accumulator.

#### `public inline void `[`MergeAddValue`](#structFRH__PEXStatState_1ab7ff73a43515fc4ad23e8588759f8db5)`(const `[`FRH_PEXStatState`](#structFRH__PEXStatState)` & Other)` <a id="structFRH__PEXStatState_1ab7ff73a43515fc4ad23e8588759f8db5"></a>

Merge another stat state into this one.

#### `public inline void `[`UpdateSummary`](#structFRH__PEXStatState_1a0a6f5e8339d76333b329d7a284de6a18)`(const `[`FRH_PEXStatState`](#structFRH__PEXStatState)` & CurrentState)` <a id="structFRH__PEXStatState_1a0a6f5e8339d76333b329d7a284de6a18"></a>

Update the summary state with the current state.

## struct `FRH_StatAccumulator` <a id="structFRH__StatAccumulator"></a>

Simple accumulator that represents a captured statistic. Tracks min, max, average, and other values internally without having to store all values.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FName `[`Name`](#structFRH__StatAccumulator_1a97fbef6ef5de0d5f11cd3f6e5a1e0af3) | Name of the stat.
`public `[`ERH_PEXValueType`](undefined.md#group__PlayerExperience_1ga4aa4d68c147f6cf7a965526bf6942234)` `[`TimelineValueType`](#structFRH__StatAccumulator_1aa15408c5a2d42180a1833ccb39c706a5) | Type of value to record for timeline file (which value from the capture state is used to build the timeline data)
`public `[`FRH_PEXStatState`](PlayerExperience.md#structFRH__PEXStatState)` `[`CaptureState`](#structFRH__StatAccumulator_1a90f0c79668722ef177b8b0c377d5c88f) | State of the stat for the current capture.
`public `[`FRH_PEXStatState`](PlayerExperience.md#structFRH__PEXStatState)` `[`SummaryState`](#structFRH__StatAccumulator_1a2637ca10fa3f6e094fb0ee04005d3e7e) | State of the stat for the summary.
`public inline  `[`FRH_StatAccumulator`](#structFRH__StatAccumulator_1a6baf33f56a1d35593c8001f05eb28191)`()` | Constructor.
`public inline  `[`FRH_StatAccumulator`](#structFRH__StatAccumulator_1ae1cf216c62ec18f4e90eaa36351bb4d9)`(FName InName,`[`ERH_PEXValueType`](undefined.md#group__PlayerExperience_1ga4aa4d68c147f6cf7a965526bf6942234)` InTimelineValueType)` | Constructor.
`public inline void `[`ResetCapture`](#structFRH__StatAccumulator_1a7ceaa1653fe1d68b74c53284a1d723a1)`()` | Reset the capture state.
`public inline void `[`ResetSummary`](#structFRH__StatAccumulator_1ad0c5649e4ad402a6bcefe69dd916fd87)`()` | Reset the summary state.
`public inline void `[`CaptureValue`](#structFRH__StatAccumulator_1a77f7598cd1b089afa7c4d8691f40273f)`(float Value)` | Add a value to the accumulator.
`public inline void `[`IncrementCaptureValue`](#structFRH__StatAccumulator_1ae29faafb4b1ca561f900964b5ee673e7)`(float IncrementBy)` | Increment the capture state's current value by 1 and recapture.
`public inline void `[`CaptureSummaryValue`](#structFRH__StatAccumulator_1ad4ab7144cda6791d533b929ff33e7f1f)`()` | Capture the current value into the summary state.
`public inline FName `[`GetName`](#structFRH__StatAccumulator_1a1a88cbe4e0cf605a8d764dffc7e73d60)`() const` | Get the name of the stat.
`public inline float `[`GetTimelineValue`](#structFRH__StatAccumulator_1afb8eda2508255bd08ce9d110cbb08460)`() const` | Get the value of the stat to be recorded in the timeline.
`public inline TSharedPtr< FJsonObject > `[`GetSummaryJson`](#structFRH__StatAccumulator_1aab14419061a5d9aabfe17e3b5c057389)`(bool bIncludeName) const` | Get a JSON object representing the summary data.
`public inline bool `[`GetPexStat`](#structFRH__StatAccumulator_1a586d65db4e4dff6be2e48ac3de148796)`(`[`FRHAPI_PexStat`](models/RHAPI_PexStat.md#structFRHAPI__PexStat)` & PexStat) const` | Get a PexStat object representing the summary data.

### Members

#### `public FName `[`Name`](#structFRH__StatAccumulator_1a97fbef6ef5de0d5f11cd3f6e5a1e0af3) <a id="structFRH__StatAccumulator_1a97fbef6ef5de0d5f11cd3f6e5a1e0af3"></a>

Name of the stat.

#### `public `[`ERH_PEXValueType`](undefined.md#group__PlayerExperience_1ga4aa4d68c147f6cf7a965526bf6942234)` `[`TimelineValueType`](#structFRH__StatAccumulator_1aa15408c5a2d42180a1833ccb39c706a5) <a id="structFRH__StatAccumulator_1aa15408c5a2d42180a1833ccb39c706a5"></a>

Type of value to record for timeline file (which value from the capture state is used to build the timeline data)

#### `public `[`FRH_PEXStatState`](PlayerExperience.md#structFRH__PEXStatState)` `[`CaptureState`](#structFRH__StatAccumulator_1a90f0c79668722ef177b8b0c377d5c88f) <a id="structFRH__StatAccumulator_1a90f0c79668722ef177b8b0c377d5c88f"></a>

State of the stat for the current capture.

#### `public `[`FRH_PEXStatState`](PlayerExperience.md#structFRH__PEXStatState)` `[`SummaryState`](#structFRH__StatAccumulator_1a2637ca10fa3f6e094fb0ee04005d3e7e) <a id="structFRH__StatAccumulator_1a2637ca10fa3f6e094fb0ee04005d3e7e"></a>

State of the stat for the summary.

#### `public inline  `[`FRH_StatAccumulator`](#structFRH__StatAccumulator_1a6baf33f56a1d35593c8001f05eb28191)`()` <a id="structFRH__StatAccumulator_1a6baf33f56a1d35593c8001f05eb28191"></a>

Constructor.

#### `public inline  `[`FRH_StatAccumulator`](#structFRH__StatAccumulator_1ae1cf216c62ec18f4e90eaa36351bb4d9)`(FName InName,`[`ERH_PEXValueType`](undefined.md#group__PlayerExperience_1ga4aa4d68c147f6cf7a965526bf6942234)` InTimelineValueType)` <a id="structFRH__StatAccumulator_1ae1cf216c62ec18f4e90eaa36351bb4d9"></a>

Constructor.

#### `public inline void `[`ResetCapture`](#structFRH__StatAccumulator_1a7ceaa1653fe1d68b74c53284a1d723a1)`()` <a id="structFRH__StatAccumulator_1a7ceaa1653fe1d68b74c53284a1d723a1"></a>

Reset the capture state.

#### `public inline void `[`ResetSummary`](#structFRH__StatAccumulator_1ad0c5649e4ad402a6bcefe69dd916fd87)`()` <a id="structFRH__StatAccumulator_1ad0c5649e4ad402a6bcefe69dd916fd87"></a>

Reset the summary state.

#### `public inline void `[`CaptureValue`](#structFRH__StatAccumulator_1a77f7598cd1b089afa7c4d8691f40273f)`(float Value)` <a id="structFRH__StatAccumulator_1a77f7598cd1b089afa7c4d8691f40273f"></a>

Add a value to the accumulator.

#### `public inline void `[`IncrementCaptureValue`](#structFRH__StatAccumulator_1ae29faafb4b1ca561f900964b5ee673e7)`(float IncrementBy)` <a id="structFRH__StatAccumulator_1ae29faafb4b1ca561f900964b5ee673e7"></a>

Increment the capture state's current value by 1 and recapture.

#### Parameters
* `IncrementBy` The amount to increment the current value by (default is 1.0)

#### `public inline void `[`CaptureSummaryValue`](#structFRH__StatAccumulator_1ad4ab7144cda6791d533b929ff33e7f1f)`()` <a id="structFRH__StatAccumulator_1ad4ab7144cda6791d533b929ff33e7f1f"></a>

Capture the current value into the summary state.

#### `public inline FName `[`GetName`](#structFRH__StatAccumulator_1a1a88cbe4e0cf605a8d764dffc7e73d60)`() const` <a id="structFRH__StatAccumulator_1a1a88cbe4e0cf605a8d764dffc7e73d60"></a>

Get the name of the stat.

#### `public inline float `[`GetTimelineValue`](#structFRH__StatAccumulator_1afb8eda2508255bd08ce9d110cbb08460)`() const` <a id="structFRH__StatAccumulator_1afb8eda2508255bd08ce9d110cbb08460"></a>

Get the value of the stat to be recorded in the timeline.

#### `public inline TSharedPtr< FJsonObject > `[`GetSummaryJson`](#structFRH__StatAccumulator_1aab14419061a5d9aabfe17e3b5c057389)`(bool bIncludeName) const` <a id="structFRH__StatAccumulator_1aab14419061a5d9aabfe17e3b5c057389"></a>

Get a JSON object representing the summary data.

#### `public inline bool `[`GetPexStat`](#structFRH__StatAccumulator_1a586d65db4e4dff6be2e48ac3de148796)`(`[`FRHAPI_PexStat`](models/RHAPI_PexStat.md#structFRHAPI__PexStat)` & PexStat) const` <a id="structFRH__StatAccumulator_1a586d65db4e4dff6be2e48ac3de148796"></a>

Get a PexStat object representing the summary data.

## struct `FRH_StatCounter` <a id="structFRH__StatCounter"></a>

Simple counter that represents a captured statistic. Tracks current value, and tracks summary data.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FName `[`Name`](#structFRH__StatCounter_1a7167abe34de7c5c5e2df6881373bff56) | Name of the stat.
`public float `[`Current`](#structFRH__StatCounter_1a5358c6b31bb0740deba2752595ad3d60) | State of the stat for the current capture.
`public `[`FRH_PEXStatState`](PlayerExperience.md#structFRH__PEXStatState)` `[`SummaryState`](#structFRH__StatCounter_1ae8a73cab8117e18ce7b8bf64c851a35f) | State of the stat for the summary.
`public inline  `[`FRH_StatCounter`](#structFRH__StatCounter_1a964cc41f599e3f2abe43724cd3531b08)`()` | Constructor.
`public inline  `[`FRH_StatCounter`](#structFRH__StatCounter_1ac804ad8770ecde6da9ae8e4264244387)`(FName InName)` | Constructor.
`public inline void `[`ResetCapture`](#structFRH__StatCounter_1a50f890f80588dc4c86ed58951c6fbeed)`()` | Reset the capture state.
`public inline void `[`ResetSummary`](#structFRH__StatCounter_1a3bba4bdcb00adb46865c017f26a6e248)`()` | Reset the summary state.
`public inline void `[`CaptureValue`](#structFRH__StatCounter_1a99cb7e583c2c97d70c9323f738193240)`(float Value)` | Add a value to the accumulator.
`public inline void `[`IncrementCaptureValue`](#structFRH__StatCounter_1a249e4e3c64b86c0df7daed961a750343)`(float IncrementBy)` | Increment the capture state's current value by 1 and recapture.
`public inline void `[`CaptureSummaryValue`](#structFRH__StatCounter_1a069e1aa0bad12a130bc5a6bd8753c89d)`()` | Capture the current value into the summary state.
`public inline FName `[`GetName`](#structFRH__StatCounter_1a8136128ec541f3d424969dbf371fa32f)`() const` | Get the name of the stat.
`public inline float `[`GetTimelineValue`](#structFRH__StatCounter_1ab3ef232d3130ee9fb1bfe8357c9b9bed)`() const` | Get the value of the stat to be recorded in the timeline.
`public inline TSharedPtr< FJsonObject > `[`GetSummaryJson`](#structFRH__StatCounter_1a6c918987cbce1ebe8af05b9983b0d15e)`(bool bIncludeName) const` | Get a JSON object representing the summary data.
`public inline bool `[`GetPexStat`](#structFRH__StatCounter_1abf6a742866b4a76746b12bb007b8dbfb)`(`[`FRHAPI_PexStat`](models/RHAPI_PexStat.md#structFRHAPI__PexStat)` & PexStat) const` | Get a PexStat object representing the summary data.

### Members

#### `public FName `[`Name`](#structFRH__StatCounter_1a7167abe34de7c5c5e2df6881373bff56) <a id="structFRH__StatCounter_1a7167abe34de7c5c5e2df6881373bff56"></a>

Name of the stat.

#### `public float `[`Current`](#structFRH__StatCounter_1a5358c6b31bb0740deba2752595ad3d60) <a id="structFRH__StatCounter_1a5358c6b31bb0740deba2752595ad3d60"></a>

State of the stat for the current capture.

#### `public `[`FRH_PEXStatState`](PlayerExperience.md#structFRH__PEXStatState)` `[`SummaryState`](#structFRH__StatCounter_1ae8a73cab8117e18ce7b8bf64c851a35f) <a id="structFRH__StatCounter_1ae8a73cab8117e18ce7b8bf64c851a35f"></a>

State of the stat for the summary.

#### `public inline  `[`FRH_StatCounter`](#structFRH__StatCounter_1a964cc41f599e3f2abe43724cd3531b08)`()` <a id="structFRH__StatCounter_1a964cc41f599e3f2abe43724cd3531b08"></a>

Constructor.

#### `public inline  `[`FRH_StatCounter`](#structFRH__StatCounter_1ac804ad8770ecde6da9ae8e4264244387)`(FName InName)` <a id="structFRH__StatCounter_1ac804ad8770ecde6da9ae8e4264244387"></a>

Constructor.

#### `public inline void `[`ResetCapture`](#structFRH__StatCounter_1a50f890f80588dc4c86ed58951c6fbeed)`()` <a id="structFRH__StatCounter_1a50f890f80588dc4c86ed58951c6fbeed"></a>

Reset the capture state.

#### `public inline void `[`ResetSummary`](#structFRH__StatCounter_1a3bba4bdcb00adb46865c017f26a6e248)`()` <a id="structFRH__StatCounter_1a3bba4bdcb00adb46865c017f26a6e248"></a>

Reset the summary state.

#### `public inline void `[`CaptureValue`](#structFRH__StatCounter_1a99cb7e583c2c97d70c9323f738193240)`(float Value)` <a id="structFRH__StatCounter_1a99cb7e583c2c97d70c9323f738193240"></a>

Add a value to the accumulator.

#### `public inline void `[`IncrementCaptureValue`](#structFRH__StatCounter_1a249e4e3c64b86c0df7daed961a750343)`(float IncrementBy)` <a id="structFRH__StatCounter_1a249e4e3c64b86c0df7daed961a750343"></a>

Increment the capture state's current value by 1 and recapture.

#### Parameters
* `IncrementBy` The amount to increment the current value by (default is 1.0)

#### `public inline void `[`CaptureSummaryValue`](#structFRH__StatCounter_1a069e1aa0bad12a130bc5a6bd8753c89d)`()` <a id="structFRH__StatCounter_1a069e1aa0bad12a130bc5a6bd8753c89d"></a>

Capture the current value into the summary state.

#### `public inline FName `[`GetName`](#structFRH__StatCounter_1a8136128ec541f3d424969dbf371fa32f)`() const` <a id="structFRH__StatCounter_1a8136128ec541f3d424969dbf371fa32f"></a>

Get the name of the stat.

#### `public inline float `[`GetTimelineValue`](#structFRH__StatCounter_1ab3ef232d3130ee9fb1bfe8357c9b9bed)`() const` <a id="structFRH__StatCounter_1ab3ef232d3130ee9fb1bfe8357c9b9bed"></a>

Get the value of the stat to be recorded in the timeline.

#### `public inline TSharedPtr< FJsonObject > `[`GetSummaryJson`](#structFRH__StatCounter_1a6c918987cbce1ebe8af05b9983b0d15e)`(bool bIncludeName) const` <a id="structFRH__StatCounter_1a6c918987cbce1ebe8af05b9983b0d15e"></a>

Get a JSON object representing the summary data.

#### `public inline bool `[`GetPexStat`](#structFRH__StatCounter_1abf6a742866b4a76746b12bb007b8dbfb)`(`[`FRHAPI_PexStat`](models/RHAPI_PexStat.md#structFRHAPI__PexStat)` & PexStat) const` <a id="structFRH__StatCounter_1abf6a742866b4a76746b12bb007b8dbfb"></a>

Get a PexStat object representing the summary data.

