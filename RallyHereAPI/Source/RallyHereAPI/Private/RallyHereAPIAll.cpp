#include "CoreMinimal.h"
#include "RallyHereAPIAll.h"

namespace RallyHereAPI
{

FRallyHereAPIAll::FRallyHereAPIAll()
{
	AllAPIs.Add(&Ad);
	AllAPIs.Add(&Auth);
	AllAPIs.Add(&BlockedV1);
	AllAPIs.Add(&BlockedV2);
	AllAPIs.Add(&Catalog);
	AllAPIs.Add(&Config);
	AllAPIs.Add(&ConfigurationV1);
	AllAPIs.Add(&Custom);
	AllAPIs.Add(&Entitlements);
	AllAPIs.Add(&Environment);
	AllAPIs.Add(&Events);
	AllAPIs.Add(&FriendsV1);
	AllAPIs.Add(&FriendsV2);
	AllAPIs.Add(&InstanceNotification);
	AllAPIs.Add(&Inventory);
	AllAPIs.Add(&KeyClaims);
	AllAPIs.Add(&KeyEntitlements);
	AllAPIs.Add(&Marketing);
	AllAPIs.Add(&Match);
	AllAPIs.Add(&PlayerIdNotification);
	AllAPIs.Add(&PlayerNotification);
	AllAPIs.Add(&Presence);
	AllAPIs.Add(&PresenceAdmin);
	AllAPIs.Add(&Queues);
	AllAPIs.Add(&Rank);
	AllAPIs.Add(&Regions);
	AllAPIs.Add(&Reports);
	AllAPIs.Add(&SessionAudit);
	AllAPIs.Add(&Sessions);
	AllAPIs.Add(&Settings);
	AllAPIs.Add(&Time);
	AllAPIs.Add(&Users);
}

TArray<FAPI*> FRallyHereAPIAll::GetAllAPIs() const
{
	return AllAPIs;
}

FAdAPI& FRallyHereAPIAll::GetAd()
{
	return Ad;
}

const FAdAPI& FRallyHereAPIAll::GetAd() const
{
	return Ad;
}

FAuthAPI& FRallyHereAPIAll::GetAuth()
{
	return Auth;
}

const FAuthAPI& FRallyHereAPIAll::GetAuth() const
{
	return Auth;
}

FBlockedV1API& FRallyHereAPIAll::GetBlockedV1()
{
	return BlockedV1;
}

const FBlockedV1API& FRallyHereAPIAll::GetBlockedV1() const
{
	return BlockedV1;
}

FBlockedV2API& FRallyHereAPIAll::GetBlockedV2()
{
	return BlockedV2;
}

const FBlockedV2API& FRallyHereAPIAll::GetBlockedV2() const
{
	return BlockedV2;
}

FCatalogAPI& FRallyHereAPIAll::GetCatalog()
{
	return Catalog;
}

const FCatalogAPI& FRallyHereAPIAll::GetCatalog() const
{
	return Catalog;
}

FConfigAPI& FRallyHereAPIAll::GetConfig()
{
	return Config;
}

const FConfigAPI& FRallyHereAPIAll::GetConfig() const
{
	return Config;
}

FConfigurationV1API& FRallyHereAPIAll::GetConfigurationV1()
{
	return ConfigurationV1;
}

const FConfigurationV1API& FRallyHereAPIAll::GetConfigurationV1() const
{
	return ConfigurationV1;
}

FCustomAPI& FRallyHereAPIAll::GetCustom()
{
	return Custom;
}

const FCustomAPI& FRallyHereAPIAll::GetCustom() const
{
	return Custom;
}

FEntitlementsAPI& FRallyHereAPIAll::GetEntitlements()
{
	return Entitlements;
}

const FEntitlementsAPI& FRallyHereAPIAll::GetEntitlements() const
{
	return Entitlements;
}

FEnvironmentAPI& FRallyHereAPIAll::GetEnvironment()
{
	return Environment;
}

const FEnvironmentAPI& FRallyHereAPIAll::GetEnvironment() const
{
	return Environment;
}

FEventsAPI& FRallyHereAPIAll::GetEvents()
{
	return Events;
}

const FEventsAPI& FRallyHereAPIAll::GetEvents() const
{
	return Events;
}

FFriendsV1API& FRallyHereAPIAll::GetFriendsV1()
{
	return FriendsV1;
}

const FFriendsV1API& FRallyHereAPIAll::GetFriendsV1() const
{
	return FriendsV1;
}

FFriendsV2API& FRallyHereAPIAll::GetFriendsV2()
{
	return FriendsV2;
}

const FFriendsV2API& FRallyHereAPIAll::GetFriendsV2() const
{
	return FriendsV2;
}

FInstanceNotificationAPI& FRallyHereAPIAll::GetInstanceNotification()
{
	return InstanceNotification;
}

const FInstanceNotificationAPI& FRallyHereAPIAll::GetInstanceNotification() const
{
	return InstanceNotification;
}

FInventoryAPI& FRallyHereAPIAll::GetInventory()
{
	return Inventory;
}

const FInventoryAPI& FRallyHereAPIAll::GetInventory() const
{
	return Inventory;
}

FKeyClaimsAPI& FRallyHereAPIAll::GetKeyClaims()
{
	return KeyClaims;
}

const FKeyClaimsAPI& FRallyHereAPIAll::GetKeyClaims() const
{
	return KeyClaims;
}

FKeyEntitlementsAPI& FRallyHereAPIAll::GetKeyEntitlements()
{
	return KeyEntitlements;
}

const FKeyEntitlementsAPI& FRallyHereAPIAll::GetKeyEntitlements() const
{
	return KeyEntitlements;
}

FMarketingAPI& FRallyHereAPIAll::GetMarketing()
{
	return Marketing;
}

const FMarketingAPI& FRallyHereAPIAll::GetMarketing() const
{
	return Marketing;
}

FMatchAPI& FRallyHereAPIAll::GetMatch()
{
	return Match;
}

const FMatchAPI& FRallyHereAPIAll::GetMatch() const
{
	return Match;
}

FPlayerIdNotificationAPI& FRallyHereAPIAll::GetPlayerIdNotification()
{
	return PlayerIdNotification;
}

const FPlayerIdNotificationAPI& FRallyHereAPIAll::GetPlayerIdNotification() const
{
	return PlayerIdNotification;
}

FPlayerNotificationAPI& FRallyHereAPIAll::GetPlayerNotification()
{
	return PlayerNotification;
}

const FPlayerNotificationAPI& FRallyHereAPIAll::GetPlayerNotification() const
{
	return PlayerNotification;
}

FPresenceAPI& FRallyHereAPIAll::GetPresence()
{
	return Presence;
}

const FPresenceAPI& FRallyHereAPIAll::GetPresence() const
{
	return Presence;
}

FPresenceAdminAPI& FRallyHereAPIAll::GetPresenceAdmin()
{
	return PresenceAdmin;
}

const FPresenceAdminAPI& FRallyHereAPIAll::GetPresenceAdmin() const
{
	return PresenceAdmin;
}

FQueuesAPI& FRallyHereAPIAll::GetQueues()
{
	return Queues;
}

const FQueuesAPI& FRallyHereAPIAll::GetQueues() const
{
	return Queues;
}

FRankAPI& FRallyHereAPIAll::GetRank()
{
	return Rank;
}

const FRankAPI& FRallyHereAPIAll::GetRank() const
{
	return Rank;
}

FRegionsAPI& FRallyHereAPIAll::GetRegions()
{
	return Regions;
}

const FRegionsAPI& FRallyHereAPIAll::GetRegions() const
{
	return Regions;
}

FReportsAPI& FRallyHereAPIAll::GetReports()
{
	return Reports;
}

const FReportsAPI& FRallyHereAPIAll::GetReports() const
{
	return Reports;
}

FSessionAuditAPI& FRallyHereAPIAll::GetSessionAudit()
{
	return SessionAudit;
}

const FSessionAuditAPI& FRallyHereAPIAll::GetSessionAudit() const
{
	return SessionAudit;
}

FSessionsAPI& FRallyHereAPIAll::GetSessions()
{
	return Sessions;
}

const FSessionsAPI& FRallyHereAPIAll::GetSessions() const
{
	return Sessions;
}

FSettingsAPI& FRallyHereAPIAll::GetSettings()
{
	return Settings;
}

const FSettingsAPI& FRallyHereAPIAll::GetSettings() const
{
	return Settings;
}

FTimeAPI& FRallyHereAPIAll::GetTime()
{
	return Time;
}

const FTimeAPI& FRallyHereAPIAll::GetTime() const
{
	return Time;
}

FUsersAPI& FRallyHereAPIAll::GetUsers()
{
	return Users;
}

const FUsersAPI& FRallyHereAPIAll::GetUsers() const
{
	return Users;
}
}
