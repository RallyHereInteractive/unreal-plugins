---
title: FRHAPI_DiscoveryResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Contains information that aids the client in communicating with the connection managers.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< FString >|[Addresses](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1abd010d5823d7e84aa65263c560e67250)|The list of addresses for the connection managers.|
|FString|[ServerStatus_Optional](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1a9cb99e5fa040f6221c7e61282dd78f46)|The status of the connection managers.|
|bool|[ServerStatus_IsSet](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1a12dcac351a153bbfe02f80e5045e773b)|true if ServerStatus_Optional has been set to a value|
|FString|[CommandLineArgs_Optional](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1a09e87974e7cafd8b83b0f24c71b4f294)|The command line arguments used to be used by the client.|
|bool|[CommandLineArgs_IsSet](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1adf860f822feb098279863faeae499103)|true if CommandLineArgs_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1a1cab16125914d3f4ed6b2c216486828d)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1add2f7c9d6e4dac3726a67afa1fdbbd38)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< FString > &|[GetAddresses](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1adc4663378a4b8a4b4f045c45c08b4b89)()|Gets the value of Addresses.|
|const TArray< FString > &|[GetAddresses](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1abb1a740ba571a9a14e466bd21e0e9e8a)()|Gets the value of Addresses.|
|void|[SetAddresses](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1aa16172cfc73ec1f6dc3249d4652397fa)(TArray< FString > NewValue)|Sets the value of Addresses.|
|FString &|[GetServerStatus](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1a9406fc20878bec33a6dd09293f26142e)()|Gets the value of ServerStatus_Optional, regardless of it having been set.|
|const FString &|[GetServerStatus](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1ad4cd3fa066d5bedc1a8e548825ac9c3d)()|Gets the value of ServerStatus_Optional, regardless of it having been set.|
|const FString &|[GetServerStatus](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1a6e345b699062a8d39cf684dbd2d03bca)(const FString & DefaultValue)|Gets the value of ServerStatus_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetServerStatus](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1ae369d1b44cf37bdd0db10945dc7c6c4e)(FString & OutValue)|Fills OutValue with the value of ServerStatus_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetServerStatusOrNull](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1a5996b48954228ecbe972e6adb5c3fbf6)()|Returns a pointer to ServerStatus_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetServerStatusOrNull](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1a88bcddde87dfeacd03b68bf17ca05e71)()|Returns a pointer to ServerStatus_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetServerStatus](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1a19446ae7dec19a434268a852a09f4f88)(FString NewValue)|Sets the value of ServerStatus_Optional and also sets ServerStatus_IsSet to true.|
|void|[ClearServerStatus](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1a2c02f4afe4e4e28d4ce00ec5bb89cfa3)()|Clears the value of ServerStatus_Optional and sets ServerStatus_IsSet to false.|
|bool|[IsServerStatusDefaultValue](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1a76b02d597f9b4feb7bf718bfa89ad549)()|Returns true if ServerStatus_Optional is set and matches the default value.|
|void|[SetServerStatusToDefault](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1acb96ba72ea7b6dfa0521904fc2a386e8)()|Sets the value of ServerStatus_Optional to its default and also sets ServerStatus_IsSet to true.|
|FString &|[GetCommandLineArgs](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1a257ce0925637fab7143f30a73f618e94)()|Gets the value of CommandLineArgs_Optional, regardless of it having been set.|
|const FString &|[GetCommandLineArgs](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1a173cc4d95be539b88f2c1f562ea06618)()|Gets the value of CommandLineArgs_Optional, regardless of it having been set.|
|const FString &|[GetCommandLineArgs](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1a99272fd2510d64f70e5f5f47a8106047)(const FString & DefaultValue)|Gets the value of CommandLineArgs_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCommandLineArgs](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1a38886cf4f2aa5933fd5bb1494eddb76f)(FString & OutValue)|Fills OutValue with the value of CommandLineArgs_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetCommandLineArgsOrNull](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1a7010030c9338ef4232bd38475aa16e06)()|Returns a pointer to CommandLineArgs_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetCommandLineArgsOrNull](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1ad82cc8d4abea928417c3fee33f992869)()|Returns a pointer to CommandLineArgs_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCommandLineArgs](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1a1a5665652fe213a19b4c8080ba6bc736)(FString NewValue)|Sets the value of CommandLineArgs_Optional and also sets CommandLineArgs_IsSet to true.|
|void|[ClearCommandLineArgs](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1ae9256e750892be73ce2f1fde54781efb)()|Clears the value of CommandLineArgs_Optional and sets CommandLineArgs_IsSet to false.|
|bool|[IsCommandLineArgsDefaultValue](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1a5b90f54f2ca1a0eae8ce887d9107d60b)()|Returns true if CommandLineArgs_Optional is set and matches the default value.|
|void|[SetCommandLineArgsToDefault](/unreal-plugins/all/structfrhapi__discoveryresponse/#structFRHAPI__DiscoveryResponse_1ab2f9f9523d6eae07c91e980749fdfc7d)()|Sets the value of CommandLineArgs_Optional to its default and also sets CommandLineArgs_IsSet to true.|
## Public Attributes



### `Addresses` <a id="structFRHAPI__DiscoveryResponse_1abd010d5823d7e84aa65263c560e67250"></a>

`TArray<FString> FRHAPI_DiscoveryResponse::Addresses`

The list of addresses for the connection managers.




### `ServerStatus_Optional` <a id="structFRHAPI__DiscoveryResponse_1a9cb99e5fa040f6221c7e61282dd78f46"></a>

`FString FRHAPI_DiscoveryResponse::ServerStatus_Optional`

The status of the connection managers.




### `ServerStatus_IsSet` <a id="structFRHAPI__DiscoveryResponse_1a12dcac351a153bbfe02f80e5045e773b"></a>

`bool FRHAPI_DiscoveryResponse::ServerStatus_IsSet`

true if ServerStatus_Optional has been set to a value




### `CommandLineArgs_Optional` <a id="structFRHAPI__DiscoveryResponse_1a09e87974e7cafd8b83b0f24c71b4f294"></a>

`FString FRHAPI_DiscoveryResponse::CommandLineArgs_Optional`

The command line arguments used to be used by the client.




### `CommandLineArgs_IsSet` <a id="structFRHAPI__DiscoveryResponse_1adf860f822feb098279863faeae499103"></a>

`bool FRHAPI_DiscoveryResponse::CommandLineArgs_IsSet`

true if CommandLineArgs_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__DiscoveryResponse_1a1cab16125914d3f4ed6b2c216486828d"></a>

bool FromJson(const TSharedPtr< FJsonValue > & JsonValue)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|

#### Description

Fills this object with data from the passed in JSON.


#### Parameters

JsonValue
: Data from the API call.

#### Returns
true if parsing of the JSON data was successful. 



### `WriteJson` <a id="structFRHAPI__DiscoveryResponse_1add2f7c9d6e4dac3726a67afa1fdbbd38"></a>

void WriteJson(TSharedRef< TJsonWriter<>> & Writer)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|

#### Description

Writes the data from this object into the specified JSON Writer stream.


#### Parameters

Writer
: JSON Writer stream to push . 



### `GetAddresses` <a id="structFRHAPI__DiscoveryResponse_1adc4663378a4b8a4b4f045c45c08b4b89"></a>

TArray< FString > & GetAddresses()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Addresses.




### `GetAddresses` <a id="structFRHAPI__DiscoveryResponse_1abb1a740ba571a9a14e466bd21e0e9e8a"></a>

const TArray< FString > & GetAddresses()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Addresses.




### `SetAddresses` <a id="structFRHAPI__DiscoveryResponse_1aa16172cfc73ec1f6dc3249d4652397fa"></a>

void SetAddresses(TArray< FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< FString >|NewValue|

#### Description

Sets the value of Addresses.




### `GetServerStatus` <a id="structFRHAPI__DiscoveryResponse_1a9406fc20878bec33a6dd09293f26142e"></a>

FString & GetServerStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ServerStatus_Optional, regardless of it having been set.




### `GetServerStatus` <a id="structFRHAPI__DiscoveryResponse_1ad4cd3fa066d5bedc1a8e548825ac9c3d"></a>

const FString & GetServerStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ServerStatus_Optional, regardless of it having been set.




### `GetServerStatus` <a id="structFRHAPI__DiscoveryResponse_1a6e345b699062a8d39cf684dbd2d03bca"></a>

const FString & GetServerStatus(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of ServerStatus_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetServerStatus` <a id="structFRHAPI__DiscoveryResponse_1ae369d1b44cf37bdd0db10945dc7c6c4e"></a>

bool GetServerStatus(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of ServerStatus_Optional and returns true if it has been set, otherwise returns false.




### `GetServerStatusOrNull` <a id="structFRHAPI__DiscoveryResponse_1a5996b48954228ecbe972e6adb5c3fbf6"></a>

FString * GetServerStatusOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ServerStatus_Optional, if it has been set, otherwise returns nullptr.




### `GetServerStatusOrNull` <a id="structFRHAPI__DiscoveryResponse_1a88bcddde87dfeacd03b68bf17ca05e71"></a>

const FString * GetServerStatusOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ServerStatus_Optional, if it has been set, otherwise returns nullptr.




### `SetServerStatus` <a id="structFRHAPI__DiscoveryResponse_1a19446ae7dec19a434268a852a09f4f88"></a>

void SetServerStatus(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of ServerStatus_Optional and also sets ServerStatus_IsSet to true.




### `ClearServerStatus` <a id="structFRHAPI__DiscoveryResponse_1a2c02f4afe4e4e28d4ce00ec5bb89cfa3"></a>

void ClearServerStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ServerStatus_Optional and sets ServerStatus_IsSet to false.




### `IsServerStatusDefaultValue` <a id="structFRHAPI__DiscoveryResponse_1a76b02d597f9b4feb7bf718bfa89ad549"></a>

bool IsServerStatusDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if ServerStatus_Optional is set and matches the default value.




### `SetServerStatusToDefault` <a id="structFRHAPI__DiscoveryResponse_1acb96ba72ea7b6dfa0521904fc2a386e8"></a>

void SetServerStatusToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of ServerStatus_Optional to its default and also sets ServerStatus_IsSet to true.




### `GetCommandLineArgs` <a id="structFRHAPI__DiscoveryResponse_1a257ce0925637fab7143f30a73f618e94"></a>

FString & GetCommandLineArgs()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CommandLineArgs_Optional, regardless of it having been set.




### `GetCommandLineArgs` <a id="structFRHAPI__DiscoveryResponse_1a173cc4d95be539b88f2c1f562ea06618"></a>

const FString & GetCommandLineArgs()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CommandLineArgs_Optional, regardless of it having been set.




### `GetCommandLineArgs` <a id="structFRHAPI__DiscoveryResponse_1a99272fd2510d64f70e5f5f47a8106047"></a>

const FString & GetCommandLineArgs(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of CommandLineArgs_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCommandLineArgs` <a id="structFRHAPI__DiscoveryResponse_1a38886cf4f2aa5933fd5bb1494eddb76f"></a>

bool GetCommandLineArgs(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of CommandLineArgs_Optional and returns true if it has been set, otherwise returns false.




### `GetCommandLineArgsOrNull` <a id="structFRHAPI__DiscoveryResponse_1a7010030c9338ef4232bd38475aa16e06"></a>

FString * GetCommandLineArgsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CommandLineArgs_Optional, if it has been set, otherwise returns nullptr.




### `GetCommandLineArgsOrNull` <a id="structFRHAPI__DiscoveryResponse_1ad82cc8d4abea928417c3fee33f992869"></a>

const FString * GetCommandLineArgsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CommandLineArgs_Optional, if it has been set, otherwise returns nullptr.




### `SetCommandLineArgs` <a id="structFRHAPI__DiscoveryResponse_1a1a5665652fe213a19b4c8080ba6bc736"></a>

void SetCommandLineArgs(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of CommandLineArgs_Optional and also sets CommandLineArgs_IsSet to true.




### `ClearCommandLineArgs` <a id="structFRHAPI__DiscoveryResponse_1ae9256e750892be73ce2f1fde54781efb"></a>

void ClearCommandLineArgs()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CommandLineArgs_Optional and sets CommandLineArgs_IsSet to false.




### `IsCommandLineArgsDefaultValue` <a id="structFRHAPI__DiscoveryResponse_1a5b90f54f2ca1a0eae8ce887d9107d60b"></a>

bool IsCommandLineArgsDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if CommandLineArgs_Optional is set and matches the default value.




### `SetCommandLineArgsToDefault` <a id="structFRHAPI__DiscoveryResponse_1ab2f9f9523d6eae07c91e980749fdfc7d"></a>

void SetCommandLineArgsToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of CommandLineArgs_Optional to its default and also sets CommandLineArgs_IsSet to true.





