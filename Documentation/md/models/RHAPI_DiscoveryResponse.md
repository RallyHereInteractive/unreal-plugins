# RHAPI_DiscoveryResponse <a id="group__RHAPI__DiscoveryResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_DiscoveryResponse`](#structFRHAPI__DiscoveryResponse) | Contains information that aids the client in communicating with the connection managers.

## struct `FRHAPI_DiscoveryResponse` <a id="structFRHAPI__DiscoveryResponse"></a>

```
struct FRHAPI_DiscoveryResponse
  : public FRHAPI_Model
```

Contains information that aids the client in communicating with the connection managers.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< FString > `[`Addresses`](#structFRHAPI__DiscoveryResponse_1abd010d5823d7e84aa65263c560e67250) | The list of addresses for the connection managers.
`public FString `[`ServerStatus_Optional`](#structFRHAPI__DiscoveryResponse_1a9cb99e5fa040f6221c7e61282dd78f46) | The status of the connection managers.
`public bool `[`ServerStatus_IsSet`](#structFRHAPI__DiscoveryResponse_1a12dcac351a153bbfe02f80e5045e773b) | true if ServerStatus_Optional has been set to a value
`public FString `[`CommandLineArgs_Optional`](#structFRHAPI__DiscoveryResponse_1a09e87974e7cafd8b83b0f24c71b4f294) | The command line arguments used to be used by the client.
`public bool `[`CommandLineArgs_IsSet`](#structFRHAPI__DiscoveryResponse_1adf860f822feb098279863faeae499103) | true if CommandLineArgs_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__DiscoveryResponse_1a1cab16125914d3f4ed6b2c216486828d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__DiscoveryResponse_1add2f7c9d6e4dac3726a67afa1fdbbd38)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< FString > & `[`GetAddresses`](#structFRHAPI__DiscoveryResponse_1adc4663378a4b8a4b4f045c45c08b4b89)`()` | Gets the value of Addresses.
`public inline const TArray< FString > & `[`GetAddresses`](#structFRHAPI__DiscoveryResponse_1abb1a740ba571a9a14e466bd21e0e9e8a)`() const` | Gets the value of Addresses.
`public inline void `[`SetAddresses`](#structFRHAPI__DiscoveryResponse_1aa16172cfc73ec1f6dc3249d4652397fa)`(TArray< FString > NewValue)` | Sets the value of Addresses.
`public inline FString & `[`GetServerStatus`](#structFRHAPI__DiscoveryResponse_1a9406fc20878bec33a6dd09293f26142e)`()` | Gets the value of ServerStatus_Optional, regardless of it having been set.
`public inline const FString & `[`GetServerStatus`](#structFRHAPI__DiscoveryResponse_1ad4cd3fa066d5bedc1a8e548825ac9c3d)`() const` | Gets the value of ServerStatus_Optional, regardless of it having been set.
`public inline const FString & `[`GetServerStatus`](#structFRHAPI__DiscoveryResponse_1a6e345b699062a8d39cf684dbd2d03bca)`(const FString & DefaultValue) const` | Gets the value of ServerStatus_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetServerStatus`](#structFRHAPI__DiscoveryResponse_1ae369d1b44cf37bdd0db10945dc7c6c4e)`(FString & OutValue) const` | Fills OutValue with the value of ServerStatus_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetServerStatusOrNull`](#structFRHAPI__DiscoveryResponse_1a5996b48954228ecbe972e6adb5c3fbf6)`()` | Returns a pointer to ServerStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetServerStatusOrNull`](#structFRHAPI__DiscoveryResponse_1a88bcddde87dfeacd03b68bf17ca05e71)`() const` | Returns a pointer to ServerStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetServerStatus`](#structFRHAPI__DiscoveryResponse_1a19446ae7dec19a434268a852a09f4f88)`(FString NewValue)` | Sets the value of ServerStatus_Optional and also sets ServerStatus_IsSet to true.
`public inline void `[`ClearServerStatus`](#structFRHAPI__DiscoveryResponse_1a2c02f4afe4e4e28d4ce00ec5bb89cfa3)`()` | Clears the value of ServerStatus_Optional and sets ServerStatus_IsSet to false.
`public inline bool `[`IsServerStatusDefaultValue`](#structFRHAPI__DiscoveryResponse_1a76b02d597f9b4feb7bf718bfa89ad549)`() const` | Returns true if ServerStatus_Optional is set and matches the default value.
`public inline void `[`SetServerStatusToDefault`](#structFRHAPI__DiscoveryResponse_1acb96ba72ea7b6dfa0521904fc2a386e8)`()` | Sets the value of ServerStatus_Optional to its default and also sets ServerStatus_IsSet to true.
`public inline FString & `[`GetCommandLineArgs`](#structFRHAPI__DiscoveryResponse_1a257ce0925637fab7143f30a73f618e94)`()` | Gets the value of CommandLineArgs_Optional, regardless of it having been set.
`public inline const FString & `[`GetCommandLineArgs`](#structFRHAPI__DiscoveryResponse_1a173cc4d95be539b88f2c1f562ea06618)`() const` | Gets the value of CommandLineArgs_Optional, regardless of it having been set.
`public inline const FString & `[`GetCommandLineArgs`](#structFRHAPI__DiscoveryResponse_1a99272fd2510d64f70e5f5f47a8106047)`(const FString & DefaultValue) const` | Gets the value of CommandLineArgs_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCommandLineArgs`](#structFRHAPI__DiscoveryResponse_1a38886cf4f2aa5933fd5bb1494eddb76f)`(FString & OutValue) const` | Fills OutValue with the value of CommandLineArgs_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCommandLineArgsOrNull`](#structFRHAPI__DiscoveryResponse_1a7010030c9338ef4232bd38475aa16e06)`()` | Returns a pointer to CommandLineArgs_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCommandLineArgsOrNull`](#structFRHAPI__DiscoveryResponse_1ad82cc8d4abea928417c3fee33f992869)`() const` | Returns a pointer to CommandLineArgs_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCommandLineArgs`](#structFRHAPI__DiscoveryResponse_1a1a5665652fe213a19b4c8080ba6bc736)`(FString NewValue)` | Sets the value of CommandLineArgs_Optional and also sets CommandLineArgs_IsSet to true.
`public inline void `[`ClearCommandLineArgs`](#structFRHAPI__DiscoveryResponse_1ae9256e750892be73ce2f1fde54781efb)`()` | Clears the value of CommandLineArgs_Optional and sets CommandLineArgs_IsSet to false.
`public inline bool `[`IsCommandLineArgsDefaultValue`](#structFRHAPI__DiscoveryResponse_1a5b90f54f2ca1a0eae8ce887d9107d60b)`() const` | Returns true if CommandLineArgs_Optional is set and matches the default value.
`public inline void `[`SetCommandLineArgsToDefault`](#structFRHAPI__DiscoveryResponse_1ab2f9f9523d6eae07c91e980749fdfc7d)`()` | Sets the value of CommandLineArgs_Optional to its default and also sets CommandLineArgs_IsSet to true.

#### Members

#### `public TArray< FString > `[`Addresses`](#structFRHAPI__DiscoveryResponse_1abd010d5823d7e84aa65263c560e67250) <a id="structFRHAPI__DiscoveryResponse_1abd010d5823d7e84aa65263c560e67250"></a>

The list of addresses for the connection managers.

<br>
#### `public FString `[`ServerStatus_Optional`](#structFRHAPI__DiscoveryResponse_1a9cb99e5fa040f6221c7e61282dd78f46) <a id="structFRHAPI__DiscoveryResponse_1a9cb99e5fa040f6221c7e61282dd78f46"></a>

The status of the connection managers.

<br>
#### `public bool `[`ServerStatus_IsSet`](#structFRHAPI__DiscoveryResponse_1a12dcac351a153bbfe02f80e5045e773b) <a id="structFRHAPI__DiscoveryResponse_1a12dcac351a153bbfe02f80e5045e773b"></a>

true if ServerStatus_Optional has been set to a value

<br>
#### `public FString `[`CommandLineArgs_Optional`](#structFRHAPI__DiscoveryResponse_1a09e87974e7cafd8b83b0f24c71b4f294) <a id="structFRHAPI__DiscoveryResponse_1a09e87974e7cafd8b83b0f24c71b4f294"></a>

The command line arguments used to be used by the client.

<br>
#### `public bool `[`CommandLineArgs_IsSet`](#structFRHAPI__DiscoveryResponse_1adf860f822feb098279863faeae499103) <a id="structFRHAPI__DiscoveryResponse_1adf860f822feb098279863faeae499103"></a>

true if CommandLineArgs_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__DiscoveryResponse_1a1cab16125914d3f4ed6b2c216486828d)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__DiscoveryResponse_1a1cab16125914d3f4ed6b2c216486828d"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__DiscoveryResponse_1add2f7c9d6e4dac3726a67afa1fdbbd38)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__DiscoveryResponse_1add2f7c9d6e4dac3726a67afa1fdbbd38"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TArray< FString > & `[`GetAddresses`](#structFRHAPI__DiscoveryResponse_1adc4663378a4b8a4b4f045c45c08b4b89)`()` <a id="structFRHAPI__DiscoveryResponse_1adc4663378a4b8a4b4f045c45c08b4b89"></a>

Gets the value of Addresses.

<br>
#### `public inline const TArray< FString > & `[`GetAddresses`](#structFRHAPI__DiscoveryResponse_1abb1a740ba571a9a14e466bd21e0e9e8a)`() const` <a id="structFRHAPI__DiscoveryResponse_1abb1a740ba571a9a14e466bd21e0e9e8a"></a>

Gets the value of Addresses.

<br>
#### `public inline void `[`SetAddresses`](#structFRHAPI__DiscoveryResponse_1aa16172cfc73ec1f6dc3249d4652397fa)`(TArray< FString > NewValue)` <a id="structFRHAPI__DiscoveryResponse_1aa16172cfc73ec1f6dc3249d4652397fa"></a>

Sets the value of Addresses.

<br>
#### `public inline FString & `[`GetServerStatus`](#structFRHAPI__DiscoveryResponse_1a9406fc20878bec33a6dd09293f26142e)`()` <a id="structFRHAPI__DiscoveryResponse_1a9406fc20878bec33a6dd09293f26142e"></a>

Gets the value of ServerStatus_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetServerStatus`](#structFRHAPI__DiscoveryResponse_1ad4cd3fa066d5bedc1a8e548825ac9c3d)`() const` <a id="structFRHAPI__DiscoveryResponse_1ad4cd3fa066d5bedc1a8e548825ac9c3d"></a>

Gets the value of ServerStatus_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetServerStatus`](#structFRHAPI__DiscoveryResponse_1a6e345b699062a8d39cf684dbd2d03bca)`(const FString & DefaultValue) const` <a id="structFRHAPI__DiscoveryResponse_1a6e345b699062a8d39cf684dbd2d03bca"></a>

Gets the value of ServerStatus_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetServerStatus`](#structFRHAPI__DiscoveryResponse_1ae369d1b44cf37bdd0db10945dc7c6c4e)`(FString & OutValue) const` <a id="structFRHAPI__DiscoveryResponse_1ae369d1b44cf37bdd0db10945dc7c6c4e"></a>

Fills OutValue with the value of ServerStatus_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetServerStatusOrNull`](#structFRHAPI__DiscoveryResponse_1a5996b48954228ecbe972e6adb5c3fbf6)`()` <a id="structFRHAPI__DiscoveryResponse_1a5996b48954228ecbe972e6adb5c3fbf6"></a>

Returns a pointer to ServerStatus_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetServerStatusOrNull`](#structFRHAPI__DiscoveryResponse_1a88bcddde87dfeacd03b68bf17ca05e71)`() const` <a id="structFRHAPI__DiscoveryResponse_1a88bcddde87dfeacd03b68bf17ca05e71"></a>

Returns a pointer to ServerStatus_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetServerStatus`](#structFRHAPI__DiscoveryResponse_1a19446ae7dec19a434268a852a09f4f88)`(FString NewValue)` <a id="structFRHAPI__DiscoveryResponse_1a19446ae7dec19a434268a852a09f4f88"></a>

Sets the value of ServerStatus_Optional and also sets ServerStatus_IsSet to true.

<br>
#### `public inline void `[`ClearServerStatus`](#structFRHAPI__DiscoveryResponse_1a2c02f4afe4e4e28d4ce00ec5bb89cfa3)`()` <a id="structFRHAPI__DiscoveryResponse_1a2c02f4afe4e4e28d4ce00ec5bb89cfa3"></a>

Clears the value of ServerStatus_Optional and sets ServerStatus_IsSet to false.

<br>
#### `public inline bool `[`IsServerStatusDefaultValue`](#structFRHAPI__DiscoveryResponse_1a76b02d597f9b4feb7bf718bfa89ad549)`() const` <a id="structFRHAPI__DiscoveryResponse_1a76b02d597f9b4feb7bf718bfa89ad549"></a>

Returns true if ServerStatus_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetServerStatusToDefault`](#structFRHAPI__DiscoveryResponse_1acb96ba72ea7b6dfa0521904fc2a386e8)`()` <a id="structFRHAPI__DiscoveryResponse_1acb96ba72ea7b6dfa0521904fc2a386e8"></a>

Sets the value of ServerStatus_Optional to its default and also sets ServerStatus_IsSet to true.

<br>
#### `public inline FString & `[`GetCommandLineArgs`](#structFRHAPI__DiscoveryResponse_1a257ce0925637fab7143f30a73f618e94)`()` <a id="structFRHAPI__DiscoveryResponse_1a257ce0925637fab7143f30a73f618e94"></a>

Gets the value of CommandLineArgs_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetCommandLineArgs`](#structFRHAPI__DiscoveryResponse_1a173cc4d95be539b88f2c1f562ea06618)`() const` <a id="structFRHAPI__DiscoveryResponse_1a173cc4d95be539b88f2c1f562ea06618"></a>

Gets the value of CommandLineArgs_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetCommandLineArgs`](#structFRHAPI__DiscoveryResponse_1a99272fd2510d64f70e5f5f47a8106047)`(const FString & DefaultValue) const` <a id="structFRHAPI__DiscoveryResponse_1a99272fd2510d64f70e5f5f47a8106047"></a>

Gets the value of CommandLineArgs_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCommandLineArgs`](#structFRHAPI__DiscoveryResponse_1a38886cf4f2aa5933fd5bb1494eddb76f)`(FString & OutValue) const` <a id="structFRHAPI__DiscoveryResponse_1a38886cf4f2aa5933fd5bb1494eddb76f"></a>

Fills OutValue with the value of CommandLineArgs_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetCommandLineArgsOrNull`](#structFRHAPI__DiscoveryResponse_1a7010030c9338ef4232bd38475aa16e06)`()` <a id="structFRHAPI__DiscoveryResponse_1a7010030c9338ef4232bd38475aa16e06"></a>

Returns a pointer to CommandLineArgs_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetCommandLineArgsOrNull`](#structFRHAPI__DiscoveryResponse_1ad82cc8d4abea928417c3fee33f992869)`() const` <a id="structFRHAPI__DiscoveryResponse_1ad82cc8d4abea928417c3fee33f992869"></a>

Returns a pointer to CommandLineArgs_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCommandLineArgs`](#structFRHAPI__DiscoveryResponse_1a1a5665652fe213a19b4c8080ba6bc736)`(FString NewValue)` <a id="structFRHAPI__DiscoveryResponse_1a1a5665652fe213a19b4c8080ba6bc736"></a>

Sets the value of CommandLineArgs_Optional and also sets CommandLineArgs_IsSet to true.

<br>
#### `public inline void `[`ClearCommandLineArgs`](#structFRHAPI__DiscoveryResponse_1ae9256e750892be73ce2f1fde54781efb)`()` <a id="structFRHAPI__DiscoveryResponse_1ae9256e750892be73ce2f1fde54781efb"></a>

Clears the value of CommandLineArgs_Optional and sets CommandLineArgs_IsSet to false.

<br>
#### `public inline bool `[`IsCommandLineArgsDefaultValue`](#structFRHAPI__DiscoveryResponse_1a5b90f54f2ca1a0eae8ce887d9107d60b)`() const` <a id="structFRHAPI__DiscoveryResponse_1a5b90f54f2ca1a0eae8ce887d9107d60b"></a>

Returns true if CommandLineArgs_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetCommandLineArgsToDefault`](#structFRHAPI__DiscoveryResponse_1ab2f9f9523d6eae07c91e980749fdfc7d)`()` <a id="structFRHAPI__DiscoveryResponse_1ab2f9f9523d6eae07c91e980749fdfc7d"></a>

Sets the value of CommandLineArgs_Optional to its default and also sets CommandLineArgs_IsSet to true.

<br>
