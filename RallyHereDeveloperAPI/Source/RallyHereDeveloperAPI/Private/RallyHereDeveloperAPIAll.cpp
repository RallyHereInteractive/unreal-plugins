
#include "CoreMinimal.h"
#include "RallyHereDeveloperAPIAll.h"

namespace RallyHereDeveloperAPI
{

FRallyHereDeveloperAPIAll::FRallyHereDeveloperAPIAll()
{
    AllAPIs.Add(&Auth0AccountPermissions);
    AllAPIs.Add(&Catalog);
    AllAPIs.Add(&Clients);
    AllAPIs.Add(&Environment);
    AllAPIs.Add(&InstanceRequestTemplates);
    AllAPIs.Add(&Maps);
    AllAPIs.Add(&MatchMakingProfiles);
    AllAPIs.Add(&MatchMakingRules);
    AllAPIs.Add(&MatchMakingStrides);
    AllAPIs.Add(&MatchMakingTemplates);
    AllAPIs.Add(&Organization);
    AllAPIs.Add(&OrganizationAccounts);
    AllAPIs.Add(&Permissions);
    AllAPIs.Add(&PlatformSessionTemplates);
    AllAPIs.Add(&Policies);
    AllAPIs.Add(&PortalMenuData);
    AllAPIs.Add(&PortalPermissions);
    AllAPIs.Add(&Product);
    AllAPIs.Add(&Queues);
    AllAPIs.Add(&Ranks);
    AllAPIs.Add(&Sandbox);
    AllAPIs.Add(&SandboxConfigAudit);
    AllAPIs.Add(&SandboxConfigGameConfig);
    AllAPIs.Add(&SandboxConfigKV);
    AllAPIs.Add(&SandboxConfigPlayerSettingTypes);
    AllAPIs.Add(&SandboxConfigRole);
    AllAPIs.Add(&SessionTemplates);
    AllAPIs.Add(&Verify);
}

TArray<FAPI*> FRallyHereDeveloperAPIAll::GetAllAPIs() const
{
    return AllAPIs;
}

FAuth0AccountPermissionsAPI& FRallyHereDeveloperAPIAll::GetAuth0AccountPermissions()
{
    return Auth0AccountPermissions;
}

const FAuth0AccountPermissionsAPI& FRallyHereDeveloperAPIAll::GetAuth0AccountPermissions() const
{
    return Auth0AccountPermissions;
}

FCatalogAPI& FRallyHereDeveloperAPIAll::GetCatalog()
{
    return Catalog;
}

const FCatalogAPI& FRallyHereDeveloperAPIAll::GetCatalog() const
{
    return Catalog;
}

FClientsAPI& FRallyHereDeveloperAPIAll::GetClients()
{
    return Clients;
}

const FClientsAPI& FRallyHereDeveloperAPIAll::GetClients() const
{
    return Clients;
}

FEnvironmentAPI& FRallyHereDeveloperAPIAll::GetEnvironment()
{
    return Environment;
}

const FEnvironmentAPI& FRallyHereDeveloperAPIAll::GetEnvironment() const
{
    return Environment;
}

FInstanceRequestTemplatesAPI& FRallyHereDeveloperAPIAll::GetInstanceRequestTemplates()
{
    return InstanceRequestTemplates;
}

const FInstanceRequestTemplatesAPI& FRallyHereDeveloperAPIAll::GetInstanceRequestTemplates() const
{
    return InstanceRequestTemplates;
}

FMapsAPI& FRallyHereDeveloperAPIAll::GetMaps()
{
    return Maps;
}

const FMapsAPI& FRallyHereDeveloperAPIAll::GetMaps() const
{
    return Maps;
}

FMatchMakingProfilesAPI& FRallyHereDeveloperAPIAll::GetMatchMakingProfiles()
{
    return MatchMakingProfiles;
}

const FMatchMakingProfilesAPI& FRallyHereDeveloperAPIAll::GetMatchMakingProfiles() const
{
    return MatchMakingProfiles;
}

FMatchMakingRulesAPI& FRallyHereDeveloperAPIAll::GetMatchMakingRules()
{
    return MatchMakingRules;
}

const FMatchMakingRulesAPI& FRallyHereDeveloperAPIAll::GetMatchMakingRules() const
{
    return MatchMakingRules;
}

FMatchMakingStridesAPI& FRallyHereDeveloperAPIAll::GetMatchMakingStrides()
{
    return MatchMakingStrides;
}

const FMatchMakingStridesAPI& FRallyHereDeveloperAPIAll::GetMatchMakingStrides() const
{
    return MatchMakingStrides;
}

FMatchMakingTemplatesAPI& FRallyHereDeveloperAPIAll::GetMatchMakingTemplates()
{
    return MatchMakingTemplates;
}

const FMatchMakingTemplatesAPI& FRallyHereDeveloperAPIAll::GetMatchMakingTemplates() const
{
    return MatchMakingTemplates;
}

FOrganizationAPI& FRallyHereDeveloperAPIAll::GetOrganization()
{
    return Organization;
}

const FOrganizationAPI& FRallyHereDeveloperAPIAll::GetOrganization() const
{
    return Organization;
}

FOrganizationAccountsAPI& FRallyHereDeveloperAPIAll::GetOrganizationAccounts()
{
    return OrganizationAccounts;
}

const FOrganizationAccountsAPI& FRallyHereDeveloperAPIAll::GetOrganizationAccounts() const
{
    return OrganizationAccounts;
}

FPermissionsAPI& FRallyHereDeveloperAPIAll::GetPermissions()
{
    return Permissions;
}

const FPermissionsAPI& FRallyHereDeveloperAPIAll::GetPermissions() const
{
    return Permissions;
}

FPlatformSessionTemplatesAPI& FRallyHereDeveloperAPIAll::GetPlatformSessionTemplates()
{
    return PlatformSessionTemplates;
}

const FPlatformSessionTemplatesAPI& FRallyHereDeveloperAPIAll::GetPlatformSessionTemplates() const
{
    return PlatformSessionTemplates;
}

FPoliciesAPI& FRallyHereDeveloperAPIAll::GetPolicies()
{
    return Policies;
}

const FPoliciesAPI& FRallyHereDeveloperAPIAll::GetPolicies() const
{
    return Policies;
}

FPortalMenuDataAPI& FRallyHereDeveloperAPIAll::GetPortalMenuData()
{
    return PortalMenuData;
}

const FPortalMenuDataAPI& FRallyHereDeveloperAPIAll::GetPortalMenuData() const
{
    return PortalMenuData;
}

FPortalPermissionsAPI& FRallyHereDeveloperAPIAll::GetPortalPermissions()
{
    return PortalPermissions;
}

const FPortalPermissionsAPI& FRallyHereDeveloperAPIAll::GetPortalPermissions() const
{
    return PortalPermissions;
}

FProductAPI& FRallyHereDeveloperAPIAll::GetProduct()
{
    return Product;
}

const FProductAPI& FRallyHereDeveloperAPIAll::GetProduct() const
{
    return Product;
}

FQueuesAPI& FRallyHereDeveloperAPIAll::GetQueues()
{
    return Queues;
}

const FQueuesAPI& FRallyHereDeveloperAPIAll::GetQueues() const
{
    return Queues;
}

FRanksAPI& FRallyHereDeveloperAPIAll::GetRanks()
{
    return Ranks;
}

const FRanksAPI& FRallyHereDeveloperAPIAll::GetRanks() const
{
    return Ranks;
}

FSandboxAPI& FRallyHereDeveloperAPIAll::GetSandbox()
{
    return Sandbox;
}

const FSandboxAPI& FRallyHereDeveloperAPIAll::GetSandbox() const
{
    return Sandbox;
}

FSandboxConfigAuditAPI& FRallyHereDeveloperAPIAll::GetSandboxConfigAudit()
{
    return SandboxConfigAudit;
}

const FSandboxConfigAuditAPI& FRallyHereDeveloperAPIAll::GetSandboxConfigAudit() const
{
    return SandboxConfigAudit;
}

FSandboxConfigGameConfigAPI& FRallyHereDeveloperAPIAll::GetSandboxConfigGameConfig()
{
    return SandboxConfigGameConfig;
}

const FSandboxConfigGameConfigAPI& FRallyHereDeveloperAPIAll::GetSandboxConfigGameConfig() const
{
    return SandboxConfigGameConfig;
}

FSandboxConfigKVAPI& FRallyHereDeveloperAPIAll::GetSandboxConfigKV()
{
    return SandboxConfigKV;
}

const FSandboxConfigKVAPI& FRallyHereDeveloperAPIAll::GetSandboxConfigKV() const
{
    return SandboxConfigKV;
}

FSandboxConfigPlayerSettingTypesAPI& FRallyHereDeveloperAPIAll::GetSandboxConfigPlayerSettingTypes()
{
    return SandboxConfigPlayerSettingTypes;
}

const FSandboxConfigPlayerSettingTypesAPI& FRallyHereDeveloperAPIAll::GetSandboxConfigPlayerSettingTypes() const
{
    return SandboxConfigPlayerSettingTypes;
}

FSandboxConfigRoleAPI& FRallyHereDeveloperAPIAll::GetSandboxConfigRole()
{
    return SandboxConfigRole;
}

const FSandboxConfigRoleAPI& FRallyHereDeveloperAPIAll::GetSandboxConfigRole() const
{
    return SandboxConfigRole;
}

FSessionTemplatesAPI& FRallyHereDeveloperAPIAll::GetSessionTemplates()
{
    return SessionTemplates;
}

const FSessionTemplatesAPI& FRallyHereDeveloperAPIAll::GetSessionTemplates() const
{
    return SessionTemplates;
}

FVerifyAPI& FRallyHereDeveloperAPIAll::GetVerify()
{
    return Verify;
}

const FVerifyAPI& FRallyHereDeveloperAPIAll::GetVerify() const
{
    return Verify;
}
}
