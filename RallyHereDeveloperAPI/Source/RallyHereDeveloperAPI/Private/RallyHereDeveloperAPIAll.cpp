#include "CoreMinimal.h"
#include "RallyHereDeveloperAPIAll.h"

namespace RallyHereDeveloperAPI
{

FRallyHereDeveloperAPIAll::FRallyHereDeveloperAPIAll()
{
    AllAPIs.Add(&Accounts);
    AllAPIs.Add(&ArmadaContract);
    AllAPIs.Add(&ArmadaDatacenterLocation);
    AllAPIs.Add(&ArmadaDatacenterProvider);
    AllAPIs.Add(&ArmadaGeographicLocation);
    AllAPIs.Add(&ArmadaHost);
    AllAPIs.Add(&ArmadaMachineClass);
    AllAPIs.Add(&ArmadaMachineImage);
    AllAPIs.Add(&ArmadaSimpleProductAssignment);
    AllAPIs.Add(&Auth0AccountPermissions);
    AllAPIs.Add(&Catalog);
    AllAPIs.Add(&Clients);
    AllAPIs.Add(&Crossplay);
    AllAPIs.Add(&Environment);
    AllAPIs.Add(&Environments);
    AllAPIs.Add(&InstanceRequestTemplates);
    AllAPIs.Add(&Maps);
    AllAPIs.Add(&MatchMakingProfiles);
    AllAPIs.Add(&MatchMakingRules);
    AllAPIs.Add(&MatchMakingStrides);
    AllAPIs.Add(&MatchMakingTemplates);
    AllAPIs.Add(&Organization);
    AllAPIs.Add(&OrganizationAccount);
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
    AllAPIs.Add(&SandboxConfigCustomEndpoints);
    AllAPIs.Add(&SandboxConfigCustomEventSchema);
    AllAPIs.Add(&SandboxConfigEntitlementSKU);
    AllAPIs.Add(&SandboxConfigExternalKeyCampaign);
    AllAPIs.Add(&SandboxConfigGameConfig);
    AllAPIs.Add(&SandboxConfigKV);
    AllAPIs.Add(&SandboxConfigRole);
    AllAPIs.Add(&SandboxConfigSettingTypes);
    AllAPIs.Add(&Secrets);
    AllAPIs.Add(&SessionTemplates);
    AllAPIs.Add(&StandardEventSchema);
    AllAPIs.Add(&UserAccountUserRequestNoM2m);
    AllAPIs.Add(&Verify);
}

TArray<FAPI*> FRallyHereDeveloperAPIAll::GetAllAPIs() const
{
    return AllAPIs;
}

FAccountsAPI& FRallyHereDeveloperAPIAll::GetAccounts()
{
    return Accounts;
}

const FAccountsAPI& FRallyHereDeveloperAPIAll::GetAccounts() const
{
    return Accounts;
}

FArmadaContractAPI& FRallyHereDeveloperAPIAll::GetArmadaContract()
{
    return ArmadaContract;
}

const FArmadaContractAPI& FRallyHereDeveloperAPIAll::GetArmadaContract() const
{
    return ArmadaContract;
}

FArmadaDatacenterLocationAPI& FRallyHereDeveloperAPIAll::GetArmadaDatacenterLocation()
{
    return ArmadaDatacenterLocation;
}

const FArmadaDatacenterLocationAPI& FRallyHereDeveloperAPIAll::GetArmadaDatacenterLocation() const
{
    return ArmadaDatacenterLocation;
}

FArmadaDatacenterProviderAPI& FRallyHereDeveloperAPIAll::GetArmadaDatacenterProvider()
{
    return ArmadaDatacenterProvider;
}

const FArmadaDatacenterProviderAPI& FRallyHereDeveloperAPIAll::GetArmadaDatacenterProvider() const
{
    return ArmadaDatacenterProvider;
}

FArmadaGeographicLocationAPI& FRallyHereDeveloperAPIAll::GetArmadaGeographicLocation()
{
    return ArmadaGeographicLocation;
}

const FArmadaGeographicLocationAPI& FRallyHereDeveloperAPIAll::GetArmadaGeographicLocation() const
{
    return ArmadaGeographicLocation;
}

FArmadaHostAPI& FRallyHereDeveloperAPIAll::GetArmadaHost()
{
    return ArmadaHost;
}

const FArmadaHostAPI& FRallyHereDeveloperAPIAll::GetArmadaHost() const
{
    return ArmadaHost;
}

FArmadaMachineClassAPI& FRallyHereDeveloperAPIAll::GetArmadaMachineClass()
{
    return ArmadaMachineClass;
}

const FArmadaMachineClassAPI& FRallyHereDeveloperAPIAll::GetArmadaMachineClass() const
{
    return ArmadaMachineClass;
}

FArmadaMachineImageAPI& FRallyHereDeveloperAPIAll::GetArmadaMachineImage()
{
    return ArmadaMachineImage;
}

const FArmadaMachineImageAPI& FRallyHereDeveloperAPIAll::GetArmadaMachineImage() const
{
    return ArmadaMachineImage;
}

FArmadaSimpleProductAssignmentAPI& FRallyHereDeveloperAPIAll::GetArmadaSimpleProductAssignment()
{
    return ArmadaSimpleProductAssignment;
}

const FArmadaSimpleProductAssignmentAPI& FRallyHereDeveloperAPIAll::GetArmadaSimpleProductAssignment() const
{
    return ArmadaSimpleProductAssignment;
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

FCrossplayAPI& FRallyHereDeveloperAPIAll::GetCrossplay()
{
    return Crossplay;
}

const FCrossplayAPI& FRallyHereDeveloperAPIAll::GetCrossplay() const
{
    return Crossplay;
}

FEnvironmentAPI& FRallyHereDeveloperAPIAll::GetEnvironment()
{
    return Environment;
}

const FEnvironmentAPI& FRallyHereDeveloperAPIAll::GetEnvironment() const
{
    return Environment;
}

FEnvironmentsAPI& FRallyHereDeveloperAPIAll::GetEnvironments()
{
    return Environments;
}

const FEnvironmentsAPI& FRallyHereDeveloperAPIAll::GetEnvironments() const
{
    return Environments;
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

FOrganizationAccountAPI& FRallyHereDeveloperAPIAll::GetOrganizationAccount()
{
    return OrganizationAccount;
}

const FOrganizationAccountAPI& FRallyHereDeveloperAPIAll::GetOrganizationAccount() const
{
    return OrganizationAccount;
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

FSandboxConfigCustomEndpointsAPI& FRallyHereDeveloperAPIAll::GetSandboxConfigCustomEndpoints()
{
    return SandboxConfigCustomEndpoints;
}

const FSandboxConfigCustomEndpointsAPI& FRallyHereDeveloperAPIAll::GetSandboxConfigCustomEndpoints() const
{
    return SandboxConfigCustomEndpoints;
}

FSandboxConfigCustomEventSchemaAPI& FRallyHereDeveloperAPIAll::GetSandboxConfigCustomEventSchema()
{
    return SandboxConfigCustomEventSchema;
}

const FSandboxConfigCustomEventSchemaAPI& FRallyHereDeveloperAPIAll::GetSandboxConfigCustomEventSchema() const
{
    return SandboxConfigCustomEventSchema;
}

FSandboxConfigEntitlementSKUAPI& FRallyHereDeveloperAPIAll::GetSandboxConfigEntitlementSKU()
{
    return SandboxConfigEntitlementSKU;
}

const FSandboxConfigEntitlementSKUAPI& FRallyHereDeveloperAPIAll::GetSandboxConfigEntitlementSKU() const
{
    return SandboxConfigEntitlementSKU;
}

FSandboxConfigExternalKeyCampaignAPI& FRallyHereDeveloperAPIAll::GetSandboxConfigExternalKeyCampaign()
{
    return SandboxConfigExternalKeyCampaign;
}

const FSandboxConfigExternalKeyCampaignAPI& FRallyHereDeveloperAPIAll::GetSandboxConfigExternalKeyCampaign() const
{
    return SandboxConfigExternalKeyCampaign;
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

FSandboxConfigRoleAPI& FRallyHereDeveloperAPIAll::GetSandboxConfigRole()
{
    return SandboxConfigRole;
}

const FSandboxConfigRoleAPI& FRallyHereDeveloperAPIAll::GetSandboxConfigRole() const
{
    return SandboxConfigRole;
}

FSandboxConfigSettingTypesAPI& FRallyHereDeveloperAPIAll::GetSandboxConfigSettingTypes()
{
    return SandboxConfigSettingTypes;
}

const FSandboxConfigSettingTypesAPI& FRallyHereDeveloperAPIAll::GetSandboxConfigSettingTypes() const
{
    return SandboxConfigSettingTypes;
}

FSecretsAPI& FRallyHereDeveloperAPIAll::GetSecrets()
{
    return Secrets;
}

const FSecretsAPI& FRallyHereDeveloperAPIAll::GetSecrets() const
{
    return Secrets;
}

FSessionTemplatesAPI& FRallyHereDeveloperAPIAll::GetSessionTemplates()
{
    return SessionTemplates;
}

const FSessionTemplatesAPI& FRallyHereDeveloperAPIAll::GetSessionTemplates() const
{
    return SessionTemplates;
}

FStandardEventSchemaAPI& FRallyHereDeveloperAPIAll::GetStandardEventSchema()
{
    return StandardEventSchema;
}

const FStandardEventSchemaAPI& FRallyHereDeveloperAPIAll::GetStandardEventSchema() const
{
    return StandardEventSchema;
}

FUserAccountUserRequestNoM2mAPI& FRallyHereDeveloperAPIAll::GetUserAccountUserRequestNoM2m()
{
    return UserAccountUserRequestNoM2m;
}

const FUserAccountUserRequestNoM2mAPI& FRallyHereDeveloperAPIAll::GetUserAccountUserRequestNoM2m() const
{
    return UserAccountUserRequestNoM2m;
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
