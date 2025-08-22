---
title: RHAPI_RankUpdateRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_RankUpdateRequest`](#structFRHAPI__RankUpdateRequest) | DEPRECATED A request body to calculate and update players&#39; ratings from a match.

## struct `FRHAPI_RankUpdateRequest` <a id="structFRHAPI__RankUpdateRequest"></a>

```
struct FRHAPI_RankUpdateRequest
  : public FRHAPI_Model
```

DEPRECATED A request body to calculate and update players&#39; ratings from a match.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`InstanceId_Optional`](#structFRHAPI__RankUpdateRequest_1a4477171ba14b69eb70af581edef93e48) | ID for the instance the match took place on.
`public bool `[`InstanceId_IsSet`](#structFRHAPI__RankUpdateRequest_1aa8deba01925f301c876175fc18b4f7be) | true if InstanceId_Optional has been set to a value
`public int32 `[`RankId`](#structFRHAPI__RankUpdateRequest_1ab9ce37215c4e7070a1a676f767e078dc) | ID for the rank type used in this match.
`public int32 `[`MatchLengthSeconds`](#structFRHAPI__RankUpdateRequest_1adae1542db62db6b7689c428aa14e4692) | How many seconds the match lasted.
`public TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > `[`Teams`](#structFRHAPI__RankUpdateRequest_1a5df6b65300c1e31bc647d0bc8f1ab7eb) | List of teams that participated in this match.
`public virtual bool `[`FromJson`](#structFRHAPI__RankUpdateRequest_1a5bf5679924195a78832f02146e9f68d2)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RankUpdateRequest_1ae9b6499760db715bbaee97874bf36341)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequest_1a1461a27be86adeac68bc696b80ac3333)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequest_1a2f082cda94d123da3f6db6f69cb40df9)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequest_1a5411af80d1cd4f74b214043b27772917)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstanceId`](#structFRHAPI__RankUpdateRequest_1a3484bc0fa2ce415e383f59e1b56354e6)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetInstanceIdOrNull`](#structFRHAPI__RankUpdateRequest_1afecb67b108b80a53369458b3c0f9c681)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__RankUpdateRequest_1a76a197a66520b6b463d92821b16213d1)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__RankUpdateRequest_1adb269da38bf00cc99e33c7c4f9f17384)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__RankUpdateRequest_1abd0b9022d840a4201fe7ffc699037c45)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__RankUpdateRequest_1aa84c3fd36883c09c7587d4db5455e84b)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetRankId`](#structFRHAPI__RankUpdateRequest_1a907f90325763de9fa89b7e0b3ef4625b)`()` | Gets the value of RankId.
`public inline FORCEINLINE const int32 & `[`GetRankId`](#structFRHAPI__RankUpdateRequest_1a0a25c286fad7fa4ca1c75ade94955664)`() const` | Gets the value of RankId.
`public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__RankUpdateRequest_1ad3386e8a718d7ffdbdbc71138623123a)`(const int32 & NewValue)` | Sets the value of RankId.
`public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__RankUpdateRequest_1a509640c70a451649a42657725da0decd)`(int32 && NewValue)` | Sets the value of RankId using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_RankId`](#structFRHAPI__RankUpdateRequest_1a47fc84a3ef065d0fc504fa9c30c0357b)`()` | Returns the default value of RankId.
`public inline FORCEINLINE int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequest_1afd0ba78f3430ee0f8d1f5105c36c2c46)`()` | Gets the value of MatchLengthSeconds.
`public inline FORCEINLINE const int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequest_1a4aaeffae58b53f2468c2314e12927e4e)`() const` | Gets the value of MatchLengthSeconds.
`public inline FORCEINLINE void `[`SetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequest_1a3a3d7b80d9daf3fd2f5ad91993ab2413)`(const int32 & NewValue)` | Sets the value of MatchLengthSeconds.
`public inline FORCEINLINE void `[`SetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequest_1a3e3ae761deffa77c0ec2a690df6eb86b)`(int32 && NewValue)` | Sets the value of MatchLengthSeconds using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_MatchLengthSeconds`](#structFRHAPI__RankUpdateRequest_1a4aeb18fb83e1628f763a8ac469819d28)`()` | Returns the default value of MatchLengthSeconds.
`public inline FORCEINLINE TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & `[`GetTeams`](#structFRHAPI__RankUpdateRequest_1afa1760f30b62f35dcd4636a018ec660b)`()` | Gets the value of Teams.
`public inline FORCEINLINE const TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & `[`GetTeams`](#structFRHAPI__RankUpdateRequest_1adeede9ad6f56a49810a54ecd82eb6528)`() const` | Gets the value of Teams.
`public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__RankUpdateRequest_1a1439c7e14e63923ab3a2d005d647b9b0)`(const TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & NewValue)` | Sets the value of Teams.
`public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__RankUpdateRequest_1a76532c60a226aa86acc4c8ed7598244d)`(TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > && NewValue)` | Sets the value of Teams using move semantics.

### Members

#### `public FString `[`InstanceId_Optional`](#structFRHAPI__RankUpdateRequest_1a4477171ba14b69eb70af581edef93e48) <a id="structFRHAPI__RankUpdateRequest_1a4477171ba14b69eb70af581edef93e48"></a>

ID for the instance the match took place on.

#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__RankUpdateRequest_1aa8deba01925f301c876175fc18b4f7be) <a id="structFRHAPI__RankUpdateRequest_1aa8deba01925f301c876175fc18b4f7be"></a>

true if InstanceId_Optional has been set to a value

#### `public int32 `[`RankId`](#structFRHAPI__RankUpdateRequest_1ab9ce37215c4e7070a1a676f767e078dc) <a id="structFRHAPI__RankUpdateRequest_1ab9ce37215c4e7070a1a676f767e078dc"></a>

ID for the rank type used in this match.

#### `public int32 `[`MatchLengthSeconds`](#structFRHAPI__RankUpdateRequest_1adae1542db62db6b7689c428aa14e4692) <a id="structFRHAPI__RankUpdateRequest_1adae1542db62db6b7689c428aa14e4692"></a>

How many seconds the match lasted.

#### `public TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > `[`Teams`](#structFRHAPI__RankUpdateRequest_1a5df6b65300c1e31bc647d0bc8f1ab7eb) <a id="structFRHAPI__RankUpdateRequest_1a5df6b65300c1e31bc647d0bc8f1ab7eb"></a>

List of teams that participated in this match.

#### `public virtual bool `[`FromJson`](#structFRHAPI__RankUpdateRequest_1a5bf5679924195a78832f02146e9f68d2)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RankUpdateRequest_1a5bf5679924195a78832f02146e9f68d2"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__RankUpdateRequest_1ae9b6499760db715bbaee97874bf36341)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__RankUpdateRequest_1ae9b6499760db715bbaee97874bf36341"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequest_1a1461a27be86adeac68bc696b80ac3333)`()` <a id="structFRHAPI__RankUpdateRequest_1a1461a27be86adeac68bc696b80ac3333"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequest_1a2f082cda94d123da3f6db6f69cb40df9)`() const` <a id="structFRHAPI__RankUpdateRequest_1a2f082cda94d123da3f6db6f69cb40df9"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequest_1a5411af80d1cd4f74b214043b27772917)`(const FString & DefaultValue) const` <a id="structFRHAPI__RankUpdateRequest_1a5411af80d1cd4f74b214043b27772917"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstanceId`](#structFRHAPI__RankUpdateRequest_1a3484bc0fa2ce415e383f59e1b56354e6)`(FString & OutValue) const` <a id="structFRHAPI__RankUpdateRequest_1a3484bc0fa2ce415e383f59e1b56354e6"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetInstanceIdOrNull`](#structFRHAPI__RankUpdateRequest_1afecb67b108b80a53369458b3c0f9c681)`()` <a id="structFRHAPI__RankUpdateRequest_1afecb67b108b80a53369458b3c0f9c681"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__RankUpdateRequest_1a76a197a66520b6b463d92821b16213d1)`() const` <a id="structFRHAPI__RankUpdateRequest_1a76a197a66520b6b463d92821b16213d1"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__RankUpdateRequest_1adb269da38bf00cc99e33c7c4f9f17384)`(const FString & NewValue)` <a id="structFRHAPI__RankUpdateRequest_1adb269da38bf00cc99e33c7c4f9f17384"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__RankUpdateRequest_1abd0b9022d840a4201fe7ffc699037c45)`(FString && NewValue)` <a id="structFRHAPI__RankUpdateRequest_1abd0b9022d840a4201fe7ffc699037c45"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__RankUpdateRequest_1aa84c3fd36883c09c7587d4db5455e84b)`()` <a id="structFRHAPI__RankUpdateRequest_1aa84c3fd36883c09c7587d4db5455e84b"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetRankId`](#structFRHAPI__RankUpdateRequest_1a907f90325763de9fa89b7e0b3ef4625b)`()` <a id="structFRHAPI__RankUpdateRequest_1a907f90325763de9fa89b7e0b3ef4625b"></a>

Gets the value of RankId.

#### `public inline FORCEINLINE const int32 & `[`GetRankId`](#structFRHAPI__RankUpdateRequest_1a0a25c286fad7fa4ca1c75ade94955664)`() const` <a id="structFRHAPI__RankUpdateRequest_1a0a25c286fad7fa4ca1c75ade94955664"></a>

Gets the value of RankId.

#### `public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__RankUpdateRequest_1ad3386e8a718d7ffdbdbc71138623123a)`(const int32 & NewValue)` <a id="structFRHAPI__RankUpdateRequest_1ad3386e8a718d7ffdbdbc71138623123a"></a>

Sets the value of RankId.

#### `public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__RankUpdateRequest_1a509640c70a451649a42657725da0decd)`(int32 && NewValue)` <a id="structFRHAPI__RankUpdateRequest_1a509640c70a451649a42657725da0decd"></a>

Sets the value of RankId using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_RankId`](#structFRHAPI__RankUpdateRequest_1a47fc84a3ef065d0fc504fa9c30c0357b)`()` <a id="structFRHAPI__RankUpdateRequest_1a47fc84a3ef065d0fc504fa9c30c0357b"></a>

Returns the default value of RankId.

#### `public inline FORCEINLINE int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequest_1afd0ba78f3430ee0f8d1f5105c36c2c46)`()` <a id="structFRHAPI__RankUpdateRequest_1afd0ba78f3430ee0f8d1f5105c36c2c46"></a>

Gets the value of MatchLengthSeconds.

#### `public inline FORCEINLINE const int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequest_1a4aaeffae58b53f2468c2314e12927e4e)`() const` <a id="structFRHAPI__RankUpdateRequest_1a4aaeffae58b53f2468c2314e12927e4e"></a>

Gets the value of MatchLengthSeconds.

#### `public inline FORCEINLINE void `[`SetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequest_1a3a3d7b80d9daf3fd2f5ad91993ab2413)`(const int32 & NewValue)` <a id="structFRHAPI__RankUpdateRequest_1a3a3d7b80d9daf3fd2f5ad91993ab2413"></a>

Sets the value of MatchLengthSeconds.

#### `public inline FORCEINLINE void `[`SetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequest_1a3e3ae761deffa77c0ec2a690df6eb86b)`(int32 && NewValue)` <a id="structFRHAPI__RankUpdateRequest_1a3e3ae761deffa77c0ec2a690df6eb86b"></a>

Sets the value of MatchLengthSeconds using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_MatchLengthSeconds`](#structFRHAPI__RankUpdateRequest_1a4aeb18fb83e1628f763a8ac469819d28)`()` <a id="structFRHAPI__RankUpdateRequest_1a4aeb18fb83e1628f763a8ac469819d28"></a>

Returns the default value of MatchLengthSeconds.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & `[`GetTeams`](#structFRHAPI__RankUpdateRequest_1afa1760f30b62f35dcd4636a018ec660b)`()` <a id="structFRHAPI__RankUpdateRequest_1afa1760f30b62f35dcd4636a018ec660b"></a>

Gets the value of Teams.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & `[`GetTeams`](#structFRHAPI__RankUpdateRequest_1adeede9ad6f56a49810a54ecd82eb6528)`() const` <a id="structFRHAPI__RankUpdateRequest_1adeede9ad6f56a49810a54ecd82eb6528"></a>

Gets the value of Teams.

#### `public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__RankUpdateRequest_1a1439c7e14e63923ab3a2d005d647b9b0)`(const TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & NewValue)` <a id="structFRHAPI__RankUpdateRequest_1a1439c7e14e63923ab3a2d005d647b9b0"></a>

Sets the value of Teams.

#### `public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__RankUpdateRequest_1a76532c60a226aa86acc4c8ed7598244d)`(TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > && NewValue)` <a id="structFRHAPI__RankUpdateRequest_1a76532c60a226aa86acc4c8ed7598244d"></a>

Sets the value of Teams using move semantics.

