---
title: RHAPI_LeaderboardConfigList
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LeaderboardConfigList`](#structFRHAPI__LeaderboardConfigList) | 

## struct `FRHAPI_LeaderboardConfigList` <a id="structFRHAPI__LeaderboardConfigList"></a>

```
struct FRHAPI_LeaderboardConfigList
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_LeaderboardConfig`](RHAPI_LeaderboardConfig.md#structFRHAPI__LeaderboardConfig)` > `[`LeaderboardConfigs`](#structFRHAPI__LeaderboardConfigList_1a8c1b6836a7fcfbe8ae0ebc9a7dc1d874) | List of leaderboard configs.
`public virtual bool `[`FromJson`](#structFRHAPI__LeaderboardConfigList_1ac619f5255097f4cb6bb5b908cb6c8dfc)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LeaderboardConfigList_1a3e748cfb385e5eb931c69f5a737b2646)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_LeaderboardConfig`](RHAPI_LeaderboardConfig.md#structFRHAPI__LeaderboardConfig)` > & `[`GetLeaderboardConfigs`](#structFRHAPI__LeaderboardConfigList_1a2dc91d0b3441a5be4794ea790a7cd200)`()` | Gets the value of LeaderboardConfigs.
`public inline FORCEINLINE const TArray< `[`FRHAPI_LeaderboardConfig`](RHAPI_LeaderboardConfig.md#structFRHAPI__LeaderboardConfig)` > & `[`GetLeaderboardConfigs`](#structFRHAPI__LeaderboardConfigList_1ac326496eddb06fdbd37187c43605735d)`() const` | Gets the value of LeaderboardConfigs.
`public inline FORCEINLINE void `[`SetLeaderboardConfigs`](#structFRHAPI__LeaderboardConfigList_1a42725f2764999372c6cd8f480815342b)`(const TArray< `[`FRHAPI_LeaderboardConfig`](RHAPI_LeaderboardConfig.md#structFRHAPI__LeaderboardConfig)` > & NewValue)` | Sets the value of LeaderboardConfigs.
`public inline FORCEINLINE void `[`SetLeaderboardConfigs`](#structFRHAPI__LeaderboardConfigList_1a4a883dc2fdda620206b90f4f575c3dfc)`(TArray< `[`FRHAPI_LeaderboardConfig`](RHAPI_LeaderboardConfig.md#structFRHAPI__LeaderboardConfig)` > && NewValue)` | Sets the value of LeaderboardConfigs using move semantics.

### Members

#### `public TArray< `[`FRHAPI_LeaderboardConfig`](RHAPI_LeaderboardConfig.md#structFRHAPI__LeaderboardConfig)` > `[`LeaderboardConfigs`](#structFRHAPI__LeaderboardConfigList_1a8c1b6836a7fcfbe8ae0ebc9a7dc1d874) <a id="structFRHAPI__LeaderboardConfigList_1a8c1b6836a7fcfbe8ae0ebc9a7dc1d874"></a>

List of leaderboard configs.

#### `public virtual bool `[`FromJson`](#structFRHAPI__LeaderboardConfigList_1ac619f5255097f4cb6bb5b908cb6c8dfc)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LeaderboardConfigList_1ac619f5255097f4cb6bb5b908cb6c8dfc"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__LeaderboardConfigList_1a3e748cfb385e5eb931c69f5a737b2646)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__LeaderboardConfigList_1a3e748cfb385e5eb931c69f5a737b2646"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_LeaderboardConfig`](RHAPI_LeaderboardConfig.md#structFRHAPI__LeaderboardConfig)` > & `[`GetLeaderboardConfigs`](#structFRHAPI__LeaderboardConfigList_1a2dc91d0b3441a5be4794ea790a7cd200)`()` <a id="structFRHAPI__LeaderboardConfigList_1a2dc91d0b3441a5be4794ea790a7cd200"></a>

Gets the value of LeaderboardConfigs.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_LeaderboardConfig`](RHAPI_LeaderboardConfig.md#structFRHAPI__LeaderboardConfig)` > & `[`GetLeaderboardConfigs`](#structFRHAPI__LeaderboardConfigList_1ac326496eddb06fdbd37187c43605735d)`() const` <a id="structFRHAPI__LeaderboardConfigList_1ac326496eddb06fdbd37187c43605735d"></a>

Gets the value of LeaderboardConfigs.

#### `public inline FORCEINLINE void `[`SetLeaderboardConfigs`](#structFRHAPI__LeaderboardConfigList_1a42725f2764999372c6cd8f480815342b)`(const TArray< `[`FRHAPI_LeaderboardConfig`](RHAPI_LeaderboardConfig.md#structFRHAPI__LeaderboardConfig)` > & NewValue)` <a id="structFRHAPI__LeaderboardConfigList_1a42725f2764999372c6cd8f480815342b"></a>

Sets the value of LeaderboardConfigs.

#### `public inline FORCEINLINE void `[`SetLeaderboardConfigs`](#structFRHAPI__LeaderboardConfigList_1a4a883dc2fdda620206b90f4f575c3dfc)`(TArray< `[`FRHAPI_LeaderboardConfig`](RHAPI_LeaderboardConfig.md#structFRHAPI__LeaderboardConfig)` > && NewValue)` <a id="structFRHAPI__LeaderboardConfigList_1a4a883dc2fdda620206b90f4f575c3dfc"></a>

Sets the value of LeaderboardConfigs using move semantics.

