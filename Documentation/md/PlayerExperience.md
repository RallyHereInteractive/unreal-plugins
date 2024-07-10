# group `PlayerExperience` <a id="group__PlayerExperience"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`enum `[`ERH_PEXValueType`](#group__PlayerExperience_1ga4aa4d68c147f6cf7a965526bf6942234)            | Enum representing what value should be recorded when only a single value is requested for display or logging.
`class `[`URH_PEXCollectorConfig`](#classURH__PEXCollectorConfig) | 
`class `[`URH_PEXCollectorConfig_Client`](#classURH__PEXCollectorConfig__Client) | 
`class `[`URH_PEXCollectorConfig_Host`](#classURH__PEXCollectorConfig__Host) | 
`class `[`URH_PEXCollectorConfig_DedicatedServer`](#classURH__PEXCollectorConfig__DedicatedServer) | 
`class `[`URH_PEXOwnerInterface`](#classURH__PEXOwnerInterface) | PlayerExperience Owner Interface class.
`class `[`IRH_PEXOwnerInterface`](#classIRH__PEXOwnerInterface) | PlayerExperience Owner Interface.
`class `[`URH_PEXStatGroup`](#classURH__PEXStatGroup) | Base class for a group of stats.
`class `[`URH_PEXCollector`](#classURH__PEXCollector) | PlayerExperience Collector class, responsible for collecting and tracking PEX data via PEX Stat Groups.
`class `[`URH_PEXPrimaryStats`](#classURH__PEXPrimaryStats) | Stat group for capturing primary stats.
`class `[`URH_PEXNetworkStats_Base`](#classURH__PEXNetworkStats__Base) | Stat group for capturing whole-state network stats.
`class `[`URH_PEXNetworkStats_Global`](#classURH__PEXNetworkStats__Global) | Stat group for capturing global network stats.
`class `[`URH_PEXNetworkStats_Connection`](#classURH__PEXNetworkStats__Connection) | Stat group for capturing per-player network stats.
`class `[`URH_PEXNetworkStats`](#classURH__PEXNetworkStats) | Stat group for capturing local whole-state network stats, plus per-player stats.
`class `[`URH_PEXGameStats`](#classURH__PEXGameStats) | Stat group for capturing game stats.
`class `[`URH_PEXBlueprintableStats`](#classURH__PEXBlueprintableStats) | Blueprintable stat group for capturing stats.
`struct `[`FRH_PEXStatState`](#structFRH__PEXStatState) | State of the accumulated stat.
`struct `[`FRH_StatAccumulator`](#structFRH__StatAccumulator) | Simple accumulator that represents a captured statistic. Tracks min, max, average, and other values internally without having to store all values.

## Members

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
`public FString `[`TimelineFilePrefix`](#classURH__PEXCollectorConfig_1a85e4c4eb8c381adbf8e02b2f00911a1d) | Prefix for timeline file name
`public FString `[`SummaryFilePrefix`](#classURH__PEXCollectorConfig_1aa5ad5eaa1723126934fb7335f20890bb) | Prefix for summary file name
`public inline  `[`URH_PEXCollectorConfig`](#classURH__PEXCollectorConfig_1a6b5675c95f49d2fc131b6405d545202c)`()` | 
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

#### `public FString `[`TimelineFilePrefix`](#classURH__PEXCollectorConfig_1a85e4c4eb8c381adbf8e02b2f00911a1d) <a id="classURH__PEXCollectorConfig_1a85e4c4eb8c381adbf8e02b2f00911a1d"></a>

Prefix for timeline file name

#### `public FString `[`SummaryFilePrefix`](#classURH__PEXCollectorConfig_1aa5ad5eaa1723126934fb7335f20890bb) <a id="classURH__PEXCollectorConfig_1aa5ad5eaa1723126934fb7335f20890bb"></a>

Prefix for summary file name

#### `public inline  `[`URH_PEXCollectorConfig`](#classURH__PEXCollectorConfig_1a6b5675c95f49d2fc131b6405d545202c)`()` <a id="classURH__PEXCollectorConfig_1a6b5675c95f49d2fc131b6405d545202c"></a>

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
`public inline virtual void `[`CapturePerFrameStats`](#classURH__PEXStatGroup_1a145b13d64996000080270ce925e4add8)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-frame stats.
`public inline virtual void `[`CapturePerSecondStats`](#classURH__PEXStatGroup_1a0bff8db8481845141a4ec1468e06aab4)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-second stats.
`public inline virtual void `[`CapturePerIntervalStats`](#classURH__PEXStatGroup_1af7f087010ec44a299a743c1cdf61898e)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-interval stats.
`public inline virtual void `[`ResetCapture`](#classURH__PEXStatGroup_1a18d8409b89eaf9dd83865a4ad571b2b4)`()` | Reset the capture state of all stats.
`public inline virtual void `[`ResetSummary`](#classURH__PEXStatGroup_1ae199225c1db4048af75dd484422a6e43)`()` | Reset the summary state of all stats.
`public inline virtual void `[`ResetStats`](#classURH__PEXStatGroup_1ae11affb79d4639e291882f456a6c9240)`()` | Reset both the capture and summary states of all stats.
`public inline virtual void `[`UpdateSummary`](#classURH__PEXStatGroup_1aa07350eed1abc2a96b6f06dfbabffec8)`()` | Update the summary state of all stats.
`public inline virtual TSharedPtr< FJsonObject > `[`GetSummary`](#classURH__PEXStatGroup_1a97f8da2b17e67549687dd95e0ed20c1d)`() const` | Write the summary data to a JSON object.
`public inline virtual FString `[`GetTimelineCSVHeader`](#classURH__PEXStatGroup_1a42e88b291697e54f60ab5456c32c6495)`() const` | Write the timeline data header to a CSV file for all stats.
`public inline virtual FString `[`GetTimelineCSVValues`](#classURH__PEXStatGroup_1ac01e22d6cfb9def52b82ba36365d6589)`() const` | Write the timeline data values to a CSV file for all stats.

### Members

#### `public FName `[`GroupName`](#classURH__PEXStatGroup_1a28b3a8f1e44476338694da43b94f238f) <a id="classURH__PEXStatGroup_1a28b3a8f1e44476338694da43b94f238f"></a>

Name of the stat group.

#### `public TArray< `[`FRH_StatAccumulator`](PlayerExperience.md#structFRH__StatAccumulator)` > `[`Stats`](#classURH__PEXStatGroup_1a4a8c32a928070ec22a33dbc32731e04a) <a id="classURH__PEXStatGroup_1a4a8c32a928070ec22a33dbc32731e04a"></a>

Array of stats to track.

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

#### `public inline virtual TSharedPtr< FJsonObject > `[`GetSummary`](#classURH__PEXStatGroup_1a97f8da2b17e67549687dd95e0ed20c1d)`() const` <a id="classURH__PEXStatGroup_1a97f8da2b17e67549687dd95e0ed20c1d"></a>

Write the summary data to a JSON object.

#### Returns
The JSON object containing the summary data

#### `public inline virtual FString `[`GetTimelineCSVHeader`](#classURH__PEXStatGroup_1a42e88b291697e54f60ab5456c32c6495)`() const` <a id="classURH__PEXStatGroup_1a42e88b291697e54f60ab5456c32c6495"></a>

Write the timeline data header to a CSV file for all stats.

#### `public inline virtual FString `[`GetTimelineCSVValues`](#classURH__PEXStatGroup_1ac01e22d6cfb9def52b82ba36365d6589)`() const` <a id="classURH__PEXStatGroup_1ac01e22d6cfb9def52b82ba36365d6589"></a>

Write the timeline data values to a CSV file for all stats.

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
`public virtual void `[`OnEndFrame`](#classURH__PEXCollector_1a4aef02ed0ddba34d7b2f970537071d01)`()` | Tick the collector, updating per frame stats and potentially per second stats.
`public inline const `[`URH_PEXCollectorConfig`](PlayerExperience.md#classURH__PEXCollectorConfig)` * `[`GetConfig`](#classURH__PEXCollector_1a71bd22ee8057031fe4adbfb7c06bc48e)`() const` | Retrieve the config to use for this collector instance.
`public void `[`Close`](#classURH__PEXCollector_1a29b53ef9f1777a3bb14cda202bc9e8a9)`()` | Closes state, writes summary if needed, and uploads data if needed. Can only be done once.
`public void `[`WriteSummary`](#classURH__PEXCollector_1ad508ef615e45584a827b3aeb7bac96b6)`()` | Writes summary data to file and/or API, and uploads any data requested, can only be called once
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
`protected TSet< TSubclassOf< `[`URH_PEXStatGroup`](PlayerExperience.md#classURH__PEXStatGroup)` > > `[`StatGroupsToCapture`](#classURH__PEXCollector_1ac7d98a2968afa62c76d13442d2babd33) | Array of StatGroups to capture
`protected TArray< `[`URH_PEXStatGroup`](PlayerExperience.md#classURH__PEXStatGroup)` * > `[`StatGroups`](#classURH__PEXCollector_1a7fa3e9f107045ba95e975f6216d99d75) | 
`protected class FArchive * `[`TimelineFileCSV`](#classURH__PEXCollector_1a82fd95d78b4ec189504331f0e8c0ab9d) | Local file archive to write timeline data to
`protected FString `[`TimelineFilePath`](#classURH__PEXCollector_1a1f032b2d4926fd92ab96ce7f68018fa5) | Cached file path for timeline file
`protected void `[`UploadFile`](#classURH__PEXCollector_1a3093ebae2fc7eecb2b495c4b8215b0fe)`(const FString & FilePath,const FString & RemoteFileName) const` | Internal helper to upload a file to remote file storage

### Members

#### `public  `[`URH_PEXCollector`](#classURH__PEXCollector_1aa973c234bd466bd10779d9bcea257ee9)`()` <a id="classURH__PEXCollector_1aa973c234bd466bd10779d9bcea257ee9"></a>

#### `public virtual  `[`~URH_PEXCollector`](#classURH__PEXCollector_1a92a6e63282290fdd5684fd3a5b2284fa)`()` <a id="classURH__PEXCollector_1a92a6e63282290fdd5684fd3a5b2284fa"></a>

#### `public virtual bool `[`Init`](#classURH__PEXCollector_1a5976807cc07bb1aba1719f8949df42a2)`(`[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` * InOwner)` <a id="classURH__PEXCollector_1a5976807cc07bb1aba1719f8949df42a2"></a>

Initialize the collector. Can only be done once.

#### `public virtual void `[`OnEndFrame`](#classURH__PEXCollector_1a4aef02ed0ddba34d7b2f970537071d01)`()` <a id="classURH__PEXCollector_1a4aef02ed0ddba34d7b2f970537071d01"></a>

Tick the collector, updating per frame stats and potentially per second stats.

#### `public inline const `[`URH_PEXCollectorConfig`](PlayerExperience.md#classURH__PEXCollectorConfig)` * `[`GetConfig`](#classURH__PEXCollector_1a71bd22ee8057031fe4adbfb7c06bc48e)`() const` <a id="classURH__PEXCollector_1a71bd22ee8057031fe4adbfb7c06bc48e"></a>

Retrieve the config to use for this collector instance.

#### `public void `[`Close`](#classURH__PEXCollector_1a29b53ef9f1777a3bb14cda202bc9e8a9)`()` <a id="classURH__PEXCollector_1a29b53ef9f1777a3bb14cda202bc9e8a9"></a>

Closes state, writes summary if needed, and uploads data if needed. Can only be done once.

#### `public void `[`WriteSummary`](#classURH__PEXCollector_1ad508ef615e45584a827b3aeb7bac96b6)`()` <a id="classURH__PEXCollector_1ad508ef615e45584a827b3aeb7bac96b6"></a>

Writes summary data to file and/or API, and uploads any data requested, can only be called once

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

#### `protected TSet< TSubclassOf< `[`URH_PEXStatGroup`](PlayerExperience.md#classURH__PEXStatGroup)` > > `[`StatGroupsToCapture`](#classURH__PEXCollector_1ac7d98a2968afa62c76d13442d2babd33) <a id="classURH__PEXCollector_1ac7d98a2968afa62c76d13442d2babd33"></a>

Array of StatGroups to capture

#### `protected TArray< `[`URH_PEXStatGroup`](PlayerExperience.md#classURH__PEXStatGroup)` * > `[`StatGroups`](#classURH__PEXCollector_1a7fa3e9f107045ba95e975f6216d99d75) <a id="classURH__PEXCollector_1a7fa3e9f107045ba95e975f6216d99d75"></a>

#### `protected class FArchive * `[`TimelineFileCSV`](#classURH__PEXCollector_1a82fd95d78b4ec189504331f0e8c0ab9d) <a id="classURH__PEXCollector_1a82fd95d78b4ec189504331f0e8c0ab9d"></a>

Local file archive to write timeline data to

#### `protected FString `[`TimelineFilePath`](#classURH__PEXCollector_1a1f032b2d4926fd92ab96ce7f68018fa5) <a id="classURH__PEXCollector_1a1f032b2d4926fd92ab96ce7f68018fa5"></a>

Cached file path for timeline file

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
`public FDateTime `[`LastCaptureTime`](#classURH__PEXPrimaryStats_1ae646b417c85a714093048311841f7993) | The timetamp for the last capture.
`public  `[`URH_PEXPrimaryStats`](#classURH__PEXPrimaryStats_1a0c3778c9c3219e32a7f76744dc3a476b)`()` | 
`public virtual void `[`CapturePerFrameStats`](#classURH__PEXPrimaryStats_1ac3d24a75995eb1d7f0903c3eec5a4faf)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-frame stats.
`public virtual void `[`CapturePerIntervalStats`](#classURH__PEXPrimaryStats_1acdedf0c275a9279eaa34f305b2bf6ab9)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-interval stats.
`public inline virtual void `[`ResetCapture`](#classURH__PEXPrimaryStats_1aba0a2de6d3584d07173b9be4997a8d3d)`()` | Reset the capture state of all stats.
`public inline virtual FString `[`GetTimelineCSVHeader`](#classURH__PEXPrimaryStats_1a1c524a3efc9475502ea7990dc4f0199f)`() const` | Write the timeline data header to a CSV file for all stats.
`public inline virtual FString `[`GetTimelineCSVValues`](#classURH__PEXPrimaryStats_1a95c1bee020304e95ef71956f0dd243c4)`() const` | Write the timeline data values to a CSV file for all stats.
`enum `[`ECaptureStat`](#classURH__PEXPrimaryStats_1aecdee206733b40ae82e847268875722a) | 

### Members

#### `public FDateTime `[`LastCaptureTime`](#classURH__PEXPrimaryStats_1ae646b417c85a714093048311841f7993) <a id="classURH__PEXPrimaryStats_1ae646b417c85a714093048311841f7993"></a>

The timetamp for the last capture.

#### `public  `[`URH_PEXPrimaryStats`](#classURH__PEXPrimaryStats_1a0c3778c9c3219e32a7f76744dc3a476b)`()` <a id="classURH__PEXPrimaryStats_1a0c3778c9c3219e32a7f76744dc3a476b"></a>

#### `public virtual void `[`CapturePerFrameStats`](#classURH__PEXPrimaryStats_1ac3d24a75995eb1d7f0903c3eec5a4faf)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXPrimaryStats_1ac3d24a75995eb1d7f0903c3eec5a4faf"></a>

Capture once-per-frame stats.

#### `public virtual void `[`CapturePerIntervalStats`](#classURH__PEXPrimaryStats_1acdedf0c275a9279eaa34f305b2bf6ab9)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXPrimaryStats_1acdedf0c275a9279eaa34f305b2bf6ab9"></a>

Capture once-per-interval stats.

#### `public inline virtual void `[`ResetCapture`](#classURH__PEXPrimaryStats_1aba0a2de6d3584d07173b9be4997a8d3d)`()` <a id="classURH__PEXPrimaryStats_1aba0a2de6d3584d07173b9be4997a8d3d"></a>

Reset the capture state of all stats.

#### `public inline virtual FString `[`GetTimelineCSVHeader`](#classURH__PEXPrimaryStats_1a1c524a3efc9475502ea7990dc4f0199f)`() const` <a id="classURH__PEXPrimaryStats_1a1c524a3efc9475502ea7990dc4f0199f"></a>

Write the timeline data header to a CSV file for all stats.

#### `public inline virtual FString `[`GetTimelineCSVValues`](#classURH__PEXPrimaryStats_1a95c1bee020304e95ef71956f0dd243c4)`() const` <a id="classURH__PEXPrimaryStats_1a95c1bee020304e95ef71956f0dd243c4"></a>

Write the timeline data values to a CSV file for all stats.

#### `enum `[`ECaptureStat`](#classURH__PEXPrimaryStats_1aecdee206733b40ae82e847268875722a) <a id="classURH__PEXPrimaryStats_1aecdee206733b40ae82e847268875722a"></a>

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
TickCount            | 
DelayedTickCount            | 
MemoryWS            | 
MemoryVB            | 
CPUProcess            | 
CPUMachine            | 
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
`public  `[`URH_PEXNetworkStats_Base`](#classURH__PEXNetworkStats__Base_1af3a02b991ff93ef56148932b5c4cee60)`()` | 
`enum `[`ECaptureStat`](#classURH__PEXNetworkStats__Base_1ab8bc9fbd98d6629a8fe3a39cdf3acdf5) | 

### Members

#### `public  `[`URH_PEXNetworkStats_Base`](#classURH__PEXNetworkStats__Base_1af3a02b991ff93ef56148932b5c4cee60)`()` <a id="classURH__PEXNetworkStats__Base_1af3a02b991ff93ef56148932b5c4cee60"></a>

#### `enum `[`ECaptureStat`](#classURH__PEXNetworkStats__Base_1ab8bc9fbd98d6629a8fe3a39cdf3acdf5) <a id="classURH__PEXNetworkStats__Base_1ab8bc9fbd98d6629a8fe3a39cdf3acdf5"></a>

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
ConnectionCount            | 
AvgPing            | 
InPackets            | 
OutPackets            | 
TotalPackets            | 
InPacketsLost            | 
OutPacketsLost            | 
TotalPacketsLost            | 
PacketLoss            | 
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
`public virtual void `[`CapturePerFrameStats`](#classURH__PEXNetworkStats__Global_1ac19223247836c023eea5ab9b6364fdf5)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-frame stats.
`public virtual void `[`CapturePerSecondStats`](#classURH__PEXNetworkStats__Global_1a3a2339cb7f0276d5f0f36ebca501359d)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-second stats.

### Members

#### `public inline  `[`URH_PEXNetworkStats_Global`](#classURH__PEXNetworkStats__Global_1add53421f643f0958549c59778533966a)`()` <a id="classURH__PEXNetworkStats__Global_1add53421f643f0958549c59778533966a"></a>

#### `public virtual void `[`CapturePerFrameStats`](#classURH__PEXNetworkStats__Global_1ac19223247836c023eea5ab9b6364fdf5)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXNetworkStats__Global_1ac19223247836c023eea5ab9b6364fdf5"></a>

Capture once-per-frame stats.

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
`public virtual void `[`CapturePerFrameStats`](#classURH__PEXNetworkStats__Connection_1a10e837eccb605f37cb95e93ccba3fcfc)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-frame stats.
`public virtual void `[`CapturePerSecondStats`](#classURH__PEXNetworkStats__Connection_1a35d8b1685fee8553f48139cd867a5e94)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-second stats.

### Members

#### `public TWeakObjectPtr< const UNetConnection > `[`Connection`](#classURH__PEXNetworkStats__Connection_1acb8e75647ec0062018d67ce83c50fe5e) <a id="classURH__PEXNetworkStats__Connection_1acb8e75647ec0062018d67ce83c50fe5e"></a>

#### `public inline  `[`URH_PEXNetworkStats_Connection`](#classURH__PEXNetworkStats__Connection_1a4e0e02f9ab7dba0e8e7f2ab051992cb8)`()` <a id="classURH__PEXNetworkStats__Connection_1a4e0e02f9ab7dba0e8e7f2ab051992cb8"></a>

#### `public void `[`InitForConnection`](#classURH__PEXNetworkStats__Connection_1a6b05837479183d9014a8cd0ebab04f0d)`(const UNetConnection * InConnection)` <a id="classURH__PEXNetworkStats__Connection_1a6b05837479183d9014a8cd0ebab04f0d"></a>

#### `public virtual void `[`CapturePerFrameStats`](#classURH__PEXNetworkStats__Connection_1a10e837eccb605f37cb95e93ccba3fcfc)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXNetworkStats__Connection_1a10e837eccb605f37cb95e93ccba3fcfc"></a>

Capture once-per-frame stats.

#### `public virtual void `[`CapturePerSecondStats`](#classURH__PEXNetworkStats__Connection_1a35d8b1685fee8553f48139cd867a5e94)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXNetworkStats__Connection_1a35d8b1685fee8553f48139cd867a5e94"></a>

Capture once-per-second stats.

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
`public TMap< FGuid, `[`URH_PEXNetworkStats_Connection`](PlayerExperience.md#classURH__PEXNetworkStats__Connection)` * > `[`PlayerNetworkStats`](#classURH__PEXNetworkStats_1adb5f9c4876f43e4e590c1b7b7409f949) | Per-player network stats, only used by summary
`public `[`URH_PEXNetworkStats_Connection`](PlayerExperience.md#classURH__PEXNetworkStats__Connection)` * `[`ServerNetworkStats`](#classURH__PEXNetworkStats_1aab5ec2a724f8786cba04444b4be737aa) | Client's server connection, only used by summary
`public  `[`URH_PEXNetworkStats`](#classURH__PEXNetworkStats_1a3354185befc3c15728f1362cc34f95e2)`()` | 
`public inline virtual void `[`ResetCapture`](#classURH__PEXNetworkStats_1ab9cd7f11fa5e7a095ee7c27031f254f1)`()` | Reset the capture state of all stats.
`public inline virtual void `[`ResetSummary`](#classURH__PEXNetworkStats_1a55aa00d8afa79469eca59705a4b39734)`()` | Reset the summary state of all stats.
`public inline virtual FString `[`GetTimelineCSVHeader`](#classURH__PEXNetworkStats_1ab70ac2ec100231c7994f89791143cd6b)`() const` | Write the timeline data header to a CSV file for all stats.
`public inline virtual FString `[`GetTimelineCSVValues`](#classURH__PEXNetworkStats_1acc2a3707daf8c7089461ed3f087b65e7)`() const` | Write the timeline data values to a CSV file for all stats.
`public inline virtual void `[`UpdateSummary`](#classURH__PEXNetworkStats_1acf9e8fe32ce4c2386ce84b2f59988df6)`()` | Update the summary state of all stats.
`public inline virtual TSharedPtr< FJsonObject > `[`GetSummary`](#classURH__PEXNetworkStats_1a284f7730950b476eaf9d15ff724f2883)`() const` | Write the summary data to a JSON object.
`public virtual void `[`GetOrCreatePlayerNetworkStats`](#classURH__PEXNetworkStats_1afa1b79df29714e9f57582740684453e8)`(const class UNetConnection * Connection,`[`URH_PEXNetworkStats_Connection`](PlayerExperience.md#classURH__PEXNetworkStats__Connection)` *& OutPlayerNetworkStats)` | 
`public virtual void `[`CapturePerFrameStats`](#classURH__PEXNetworkStats_1a76cf3d3b1f2739a851e695fc4e0bb760)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-frame stats.
`public virtual void `[`CapturePerSecondStats`](#classURH__PEXNetworkStats_1a73ebe5e78ef7f9c9a8013905eee42ef3)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-second stats.
`public virtual void `[`CapturePerIntervalStats`](#classURH__PEXNetworkStats_1ae6101b0cadcf8836680598fdbbe8d927)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-interval stats.

### Members

#### `public `[`URH_PEXNetworkStats_Global`](PlayerExperience.md#classURH__PEXNetworkStats__Global)` * `[`GlobalNetworkStats`](#classURH__PEXNetworkStats_1ac57913ba5907a47c4dfdd8bc55627d50) <a id="classURH__PEXNetworkStats_1ac57913ba5907a47c4dfdd8bc55627d50"></a>

Global network stats, used by summary and timeline

#### `public TMap< FGuid, `[`URH_PEXNetworkStats_Connection`](PlayerExperience.md#classURH__PEXNetworkStats__Connection)` * > `[`PlayerNetworkStats`](#classURH__PEXNetworkStats_1adb5f9c4876f43e4e590c1b7b7409f949) <a id="classURH__PEXNetworkStats_1adb5f9c4876f43e4e590c1b7b7409f949"></a>

Per-player network stats, only used by summary

#### `public `[`URH_PEXNetworkStats_Connection`](PlayerExperience.md#classURH__PEXNetworkStats__Connection)` * `[`ServerNetworkStats`](#classURH__PEXNetworkStats_1aab5ec2a724f8786cba04444b4be737aa) <a id="classURH__PEXNetworkStats_1aab5ec2a724f8786cba04444b4be737aa"></a>

Client's server connection, only used by summary

#### `public  `[`URH_PEXNetworkStats`](#classURH__PEXNetworkStats_1a3354185befc3c15728f1362cc34f95e2)`()` <a id="classURH__PEXNetworkStats_1a3354185befc3c15728f1362cc34f95e2"></a>

#### `public inline virtual void `[`ResetCapture`](#classURH__PEXNetworkStats_1ab9cd7f11fa5e7a095ee7c27031f254f1)`()` <a id="classURH__PEXNetworkStats_1ab9cd7f11fa5e7a095ee7c27031f254f1"></a>

Reset the capture state of all stats.

#### `public inline virtual void `[`ResetSummary`](#classURH__PEXNetworkStats_1a55aa00d8afa79469eca59705a4b39734)`()` <a id="classURH__PEXNetworkStats_1a55aa00d8afa79469eca59705a4b39734"></a>

Reset the summary state of all stats.

#### `public inline virtual FString `[`GetTimelineCSVHeader`](#classURH__PEXNetworkStats_1ab70ac2ec100231c7994f89791143cd6b)`() const` <a id="classURH__PEXNetworkStats_1ab70ac2ec100231c7994f89791143cd6b"></a>

Write the timeline data header to a CSV file for all stats.

#### `public inline virtual FString `[`GetTimelineCSVValues`](#classURH__PEXNetworkStats_1acc2a3707daf8c7089461ed3f087b65e7)`() const` <a id="classURH__PEXNetworkStats_1acc2a3707daf8c7089461ed3f087b65e7"></a>

Write the timeline data values to a CSV file for all stats.

#### `public inline virtual void `[`UpdateSummary`](#classURH__PEXNetworkStats_1acf9e8fe32ce4c2386ce84b2f59988df6)`()` <a id="classURH__PEXNetworkStats_1acf9e8fe32ce4c2386ce84b2f59988df6"></a>

Update the summary state of all stats.

#### `public inline virtual TSharedPtr< FJsonObject > `[`GetSummary`](#classURH__PEXNetworkStats_1a284f7730950b476eaf9d15ff724f2883)`() const` <a id="classURH__PEXNetworkStats_1a284f7730950b476eaf9d15ff724f2883"></a>

Write the summary data to a JSON object.

#### `public virtual void `[`GetOrCreatePlayerNetworkStats`](#classURH__PEXNetworkStats_1afa1b79df29714e9f57582740684453e8)`(const class UNetConnection * Connection,`[`URH_PEXNetworkStats_Connection`](PlayerExperience.md#classURH__PEXNetworkStats__Connection)` *& OutPlayerNetworkStats)` <a id="classURH__PEXNetworkStats_1afa1b79df29714e9f57582740684453e8"></a>

#### `public virtual void `[`CapturePerFrameStats`](#classURH__PEXNetworkStats_1a76cf3d3b1f2739a851e695fc4e0bb760)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXNetworkStats_1a76cf3d3b1f2739a851e695fc4e0bb760"></a>

Capture once-per-frame stats.

#### `public virtual void `[`CapturePerSecondStats`](#classURH__PEXNetworkStats_1a73ebe5e78ef7f9c9a8013905eee42ef3)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXNetworkStats_1a73ebe5e78ef7f9c9a8013905eee42ef3"></a>

Capture once-per-second stats.

#### `public virtual void `[`CapturePerIntervalStats`](#classURH__PEXNetworkStats_1ae6101b0cadcf8836680598fdbbe8d927)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXNetworkStats_1ae6101b0cadcf8836680598fdbbe8d927"></a>

Capture once-per-interval stats.

## class `URH_PEXGameStats` <a id="classURH__PEXGameStats"></a>

```
class URH_PEXGameStats
  : public URH_PEXStatGroup
```

Stat group for capturing game stats.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`URH_PEXGameStats`](#classURH__PEXGameStats_1a8c5f7d865482740f9741ecaa4c937e20)`()` | 
`public virtual void `[`CapturePerFrameStats`](#classURH__PEXGameStats_1afba898ac1c57452493a363d35ac8c69a)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-frame stats.
`public virtual void `[`CapturePerIntervalStats`](#classURH__PEXGameStats_1a5496f3c239a4817ab1a14fa9b0d08cb6)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` | Capture once-per-interval stats.
`enum `[`ECaptureStat`](#classURH__PEXGameStats_1aa3778ac42579e048d965b6811c91871b) | 

### Members

#### `public  `[`URH_PEXGameStats`](#classURH__PEXGameStats_1a8c5f7d865482740f9741ecaa4c937e20)`()` <a id="classURH__PEXGameStats_1a8c5f7d865482740f9741ecaa4c937e20"></a>

#### `public virtual void `[`CapturePerFrameStats`](#classURH__PEXGameStats_1afba898ac1c57452493a363d35ac8c69a)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXGameStats_1afba898ac1c57452493a363d35ac8c69a"></a>

Capture once-per-frame stats.

#### `public virtual void `[`CapturePerIntervalStats`](#classURH__PEXGameStats_1a5496f3c239a4817ab1a14fa9b0d08cb6)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXGameStats_1a5496f3c239a4817ab1a14fa9b0d08cb6"></a>

Capture once-per-interval stats.

#### `enum `[`ECaptureStat`](#classURH__PEXGameStats_1aa3778ac42579e048d965b6811c91871b) <a id="classURH__PEXGameStats_1aa3778ac42579e048d965b6811c91871b"></a>

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
`public inline void `[`CaptureValue`](#classURH__PEXBlueprintableStats_1a20215f05c76bf4399d7a3cdcff1a4183)`(FName StatName,float Value)` | 

### Members

#### `public inline  `[`URH_PEXBlueprintableStats`](#classURH__PEXBlueprintableStats_1a39fdd25ae96b167809e89a7f90f3bf4c)`()` <a id="classURH__PEXBlueprintableStats_1a39fdd25ae96b167809e89a7f90f3bf4c"></a>

#### `public inline virtual void `[`CapturePerFrameStats`](#classURH__PEXBlueprintableStats_1ab4a3fe21879a698ef7052dab3922423e)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXBlueprintableStats_1ab4a3fe21879a698ef7052dab3922423e"></a>

Capture once-per-frame stats.

#### `public inline virtual void `[`CapturePerIntervalStats`](#classURH__PEXBlueprintableStats_1a6eb482169d59e81d1ebc130de1d128a0)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXBlueprintableStats_1a6eb482169d59e81d1ebc130de1d128a0"></a>

Capture once-per-interval stats.

#### `public void `[`BLUEPRINT_CapturePerFrameStats`](#classURH__PEXBlueprintableStats_1ae3736c0845321b4de171f2d10c7f14c0)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXBlueprintableStats_1ae3736c0845321b4de171f2d10c7f14c0"></a>

#### `public void `[`BLUEPRINT_CapturePerSecondStats`](#classURH__PEXBlueprintableStats_1afd712220fec60d44ab2d2481ba24b7ae)`(const TScriptInterface< `[`IRH_PEXOwnerInterface`](PlayerExperience.md#classIRH__PEXOwnerInterface)` > & Owner)` <a id="classURH__PEXBlueprintableStats_1afd712220fec60d44ab2d2481ba24b7ae"></a>

#### `public inline void `[`CaptureValue`](#classURH__PEXBlueprintableStats_1a20215f05c76bf4399d7a3cdcff1a4183)`(FName StatName,float Value)` <a id="classURH__PEXBlueprintableStats_1a20215f05c76bf4399d7a3cdcff1a4183"></a>

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

