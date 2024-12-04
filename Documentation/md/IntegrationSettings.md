---
title: IntegrationSettings
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`enum `[`ERH_HostMapLoadMethod`](#group__IntegrationSettings_1gafe16cb637681d7fe47ad1a8eaa8c1e06)            | 
`struct `[`FRH_EnvironmentConfiguration`](#structFRH__EnvironmentConfiguration) | Settings for Environment Configuration. If set, these override the defaults when the EnvironmentId matches the specified environment id.

## Members

#### `enum `[`ERH_HostMapLoadMethod`](#group__IntegrationSettings_1gafe16cb637681d7fe47ad1a8eaa8c1e06) <a id="group__IntegrationSettings_1gafe16cb637681d7fe47ad1a8eaa8c1e06"></a>

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
ServerTravelAlways            | 
SeamlessTravelAlways            | 
ServerTravelOnlyIfNeeded            | 

## struct `FRH_EnvironmentConfiguration` <a id="structFRH__EnvironmentConfiguration"></a>

Settings for Environment Configuration. If set, these override the defaults when the EnvironmentId matches the specified environment id.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`EnvironmentId`](#structFRH__EnvironmentConfiguration_1af7a0c896b818f1a844a2e49db24c7993) | Environment Name, for use with client side environment lookups and overrides.
`public FString `[`BaseUrl`](#structFRH__EnvironmentConfiguration_1a4d83e6b00d9676173cfce51696239f33) | RallyHere BaseURL. Determines the base URL to use when connecting to the RallyHere API.
`public FString `[`ClientId`](#structFRH__EnvironmentConfiguration_1ad89cebe1e08c49b87a7132acb5ad8da4) | RallyHere Client ID. Determines the available permissions for RallyHere APIs.
`public FString `[`ClientSecret`](#structFRH__EnvironmentConfiguration_1a92ac23bcd32f8ec70f2d361594e4a666) | RallyHere Client secret. Must be associated with the defined client ID.

### Members

#### `public FString `[`EnvironmentId`](#structFRH__EnvironmentConfiguration_1af7a0c896b818f1a844a2e49db24c7993) <a id="structFRH__EnvironmentConfiguration_1af7a0c896b818f1a844a2e49db24c7993"></a>

Environment Name, for use with client side environment lookups and overrides.

#### `public FString `[`BaseUrl`](#structFRH__EnvironmentConfiguration_1a4d83e6b00d9676173cfce51696239f33) <a id="structFRH__EnvironmentConfiguration_1a4d83e6b00d9676173cfce51696239f33"></a>

RallyHere BaseURL. Determines the base URL to use when connecting to the RallyHere API.

#### `public FString `[`ClientId`](#structFRH__EnvironmentConfiguration_1ad89cebe1e08c49b87a7132acb5ad8da4) <a id="structFRH__EnvironmentConfiguration_1ad89cebe1e08c49b87a7132acb5ad8da4"></a>

RallyHere Client ID. Determines the available permissions for RallyHere APIs.

#### `public FString `[`ClientSecret`](#structFRH__EnvironmentConfiguration_1a92ac23bcd32f8ec70f2d361594e4a666) <a id="structFRH__EnvironmentConfiguration_1a92ac23bcd32f8ec70f2d361594e4a666"></a>

RallyHere Client secret. Must be associated with the defined client ID.

