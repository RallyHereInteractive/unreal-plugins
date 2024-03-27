#include "CoreMinimal.h"
#include "RallyHereAPIAll.h"

namespace RallyHereAPI
{

FRallyHereAPIAll::FRallyHereAPIAll()
	: DummyValue(0)
	, Ad(MakeShareable(new FAdAPI()))
	, Auth(MakeShareable(new FAuthAPI()))
	, BlockedV1(MakeShareable(new FBlockedV1API()))
	, BlockedV2(MakeShareable(new FBlockedV2API()))
	, Catalog(MakeShareable(new FCatalogAPI()))
	, Config(MakeShareable(new FConfigAPI()))
	, ConfigurationV1(MakeShareable(new FConfigurationV1API()))
	, Custom(MakeShareable(new FCustomAPI()))
	, Entitlements(MakeShareable(new FEntitlementsAPI()))
	, Environment(MakeShareable(new FEnvironmentAPI()))
	, Events(MakeShareable(new FEventsAPI()))
	, FriendsV1(MakeShareable(new FFriendsV1API()))
	, FriendsV2(MakeShareable(new FFriendsV2API()))
	, InstanceNotification(MakeShareable(new FInstanceNotificationAPI()))
	, Inventory(MakeShareable(new FInventoryAPI()))
	, KeyClaims(MakeShareable(new FKeyClaimsAPI()))
	, KeyEntitlements(MakeShareable(new FKeyEntitlementsAPI()))
	, Marketing(MakeShareable(new FMarketingAPI()))
	, Match(MakeShareable(new FMatchAPI()))
	, PlayerIdNotification(MakeShareable(new FPlayerIdNotificationAPI()))
	, PlayerNotification(MakeShareable(new FPlayerNotificationAPI()))
	, Presence(MakeShareable(new FPresenceAPI()))
	, PresenceAdmin(MakeShareable(new FPresenceAdminAPI()))
	, Queues(MakeShareable(new FQueuesAPI()))
	, Rank(MakeShareable(new FRankAPI()))
	, Regions(MakeShareable(new FRegionsAPI()))
	, Reports(MakeShareable(new FReportsAPI()))
	, SessionAudit(MakeShareable(new FSessionAuditAPI()))
	, Sessions(MakeShareable(new FSessionsAPI()))
	, Settings(MakeShareable(new FSettingsAPI()))
	, Time(MakeShareable(new FTimeAPI()))
	, Users(MakeShareable(new FUsersAPI()))

{
	AllAPIs.Add(Ad);
	AllAPIs.Add(Auth);
	AllAPIs.Add(BlockedV1);
	AllAPIs.Add(BlockedV2);
	AllAPIs.Add(Catalog);
	AllAPIs.Add(Config);
	AllAPIs.Add(ConfigurationV1);
	AllAPIs.Add(Custom);
	AllAPIs.Add(Entitlements);
	AllAPIs.Add(Environment);
	AllAPIs.Add(Events);
	AllAPIs.Add(FriendsV1);
	AllAPIs.Add(FriendsV2);
	AllAPIs.Add(InstanceNotification);
	AllAPIs.Add(Inventory);
	AllAPIs.Add(KeyClaims);
	AllAPIs.Add(KeyEntitlements);
	AllAPIs.Add(Marketing);
	AllAPIs.Add(Match);
	AllAPIs.Add(PlayerIdNotification);
	AllAPIs.Add(PlayerNotification);
	AllAPIs.Add(Presence);
	AllAPIs.Add(PresenceAdmin);
	AllAPIs.Add(Queues);
	AllAPIs.Add(Rank);
	AllAPIs.Add(Regions);
	AllAPIs.Add(Reports);
	AllAPIs.Add(SessionAudit);
	AllAPIs.Add(Sessions);
	AllAPIs.Add(Settings);
	AllAPIs.Add(Time);
	AllAPIs.Add(Users);
}

TArray<TSharedRef<FAPI>> FRallyHereAPIAll::GetAllAPIs() const
{
	return AllAPIs;
}

TSharedRef<FAdAPI> FRallyHereAPIAll::GetAd()
{
	return Ad;
}

const TSharedRef<FAdAPI> FRallyHereAPIAll::GetAd() const
{
	return Ad;
}

TSharedRef<FAuthAPI> FRallyHereAPIAll::GetAuth()
{
	return Auth;
}

const TSharedRef<FAuthAPI> FRallyHereAPIAll::GetAuth() const
{
	return Auth;
}

TSharedRef<FBlockedV1API> FRallyHereAPIAll::GetBlockedV1()
{
	return BlockedV1;
}

const TSharedRef<FBlockedV1API> FRallyHereAPIAll::GetBlockedV1() const
{
	return BlockedV1;
}

TSharedRef<FBlockedV2API> FRallyHereAPIAll::GetBlockedV2()
{
	return BlockedV2;
}

const TSharedRef<FBlockedV2API> FRallyHereAPIAll::GetBlockedV2() const
{
	return BlockedV2;
}

TSharedRef<FCatalogAPI> FRallyHereAPIAll::GetCatalog()
{
	return Catalog;
}

const TSharedRef<FCatalogAPI> FRallyHereAPIAll::GetCatalog() const
{
	return Catalog;
}

TSharedRef<FConfigAPI> FRallyHereAPIAll::GetConfig()
{
	return Config;
}

const TSharedRef<FConfigAPI> FRallyHereAPIAll::GetConfig() const
{
	return Config;
}

TSharedRef<FConfigurationV1API> FRallyHereAPIAll::GetConfigurationV1()
{
	return ConfigurationV1;
}

const TSharedRef<FConfigurationV1API> FRallyHereAPIAll::GetConfigurationV1() const
{
	return ConfigurationV1;
}

TSharedRef<FCustomAPI> FRallyHereAPIAll::GetCustom()
{
	return Custom;
}

const TSharedRef<FCustomAPI> FRallyHereAPIAll::GetCustom() const
{
	return Custom;
}

TSharedRef<FEntitlementsAPI> FRallyHereAPIAll::GetEntitlements()
{
	return Entitlements;
}

const TSharedRef<FEntitlementsAPI> FRallyHereAPIAll::GetEntitlements() const
{
	return Entitlements;
}

TSharedRef<FEnvironmentAPI> FRallyHereAPIAll::GetEnvironment()
{
	return Environment;
}

const TSharedRef<FEnvironmentAPI> FRallyHereAPIAll::GetEnvironment() const
{
	return Environment;
}

TSharedRef<FEventsAPI> FRallyHereAPIAll::GetEvents()
{
	return Events;
}

const TSharedRef<FEventsAPI> FRallyHereAPIAll::GetEvents() const
{
	return Events;
}

TSharedRef<FFriendsV1API> FRallyHereAPIAll::GetFriendsV1()
{
	return FriendsV1;
}

const TSharedRef<FFriendsV1API> FRallyHereAPIAll::GetFriendsV1() const
{
	return FriendsV1;
}

TSharedRef<FFriendsV2API> FRallyHereAPIAll::GetFriendsV2()
{
	return FriendsV2;
}

const TSharedRef<FFriendsV2API> FRallyHereAPIAll::GetFriendsV2() const
{
	return FriendsV2;
}

TSharedRef<FInstanceNotificationAPI> FRallyHereAPIAll::GetInstanceNotification()
{
	return InstanceNotification;
}

const TSharedRef<FInstanceNotificationAPI> FRallyHereAPIAll::GetInstanceNotification() const
{
	return InstanceNotification;
}

TSharedRef<FInventoryAPI> FRallyHereAPIAll::GetInventory()
{
	return Inventory;
}

const TSharedRef<FInventoryAPI> FRallyHereAPIAll::GetInventory() const
{
	return Inventory;
}

TSharedRef<FKeyClaimsAPI> FRallyHereAPIAll::GetKeyClaims()
{
	return KeyClaims;
}

const TSharedRef<FKeyClaimsAPI> FRallyHereAPIAll::GetKeyClaims() const
{
	return KeyClaims;
}

TSharedRef<FKeyEntitlementsAPI> FRallyHereAPIAll::GetKeyEntitlements()
{
	return KeyEntitlements;
}

const TSharedRef<FKeyEntitlementsAPI> FRallyHereAPIAll::GetKeyEntitlements() const
{
	return KeyEntitlements;
}

TSharedRef<FMarketingAPI> FRallyHereAPIAll::GetMarketing()
{
	return Marketing;
}

const TSharedRef<FMarketingAPI> FRallyHereAPIAll::GetMarketing() const
{
	return Marketing;
}

TSharedRef<FMatchAPI> FRallyHereAPIAll::GetMatch()
{
	return Match;
}

const TSharedRef<FMatchAPI> FRallyHereAPIAll::GetMatch() const
{
	return Match;
}

TSharedRef<FPlayerIdNotificationAPI> FRallyHereAPIAll::GetPlayerIdNotification()
{
	return PlayerIdNotification;
}

const TSharedRef<FPlayerIdNotificationAPI> FRallyHereAPIAll::GetPlayerIdNotification() const
{
	return PlayerIdNotification;
}

TSharedRef<FPlayerNotificationAPI> FRallyHereAPIAll::GetPlayerNotification()
{
	return PlayerNotification;
}

const TSharedRef<FPlayerNotificationAPI> FRallyHereAPIAll::GetPlayerNotification() const
{
	return PlayerNotification;
}

TSharedRef<FPresenceAPI> FRallyHereAPIAll::GetPresence()
{
	return Presence;
}

const TSharedRef<FPresenceAPI> FRallyHereAPIAll::GetPresence() const
{
	return Presence;
}

TSharedRef<FPresenceAdminAPI> FRallyHereAPIAll::GetPresenceAdmin()
{
	return PresenceAdmin;
}

const TSharedRef<FPresenceAdminAPI> FRallyHereAPIAll::GetPresenceAdmin() const
{
	return PresenceAdmin;
}

TSharedRef<FQueuesAPI> FRallyHereAPIAll::GetQueues()
{
	return Queues;
}

const TSharedRef<FQueuesAPI> FRallyHereAPIAll::GetQueues() const
{
	return Queues;
}

TSharedRef<FRankAPI> FRallyHereAPIAll::GetRank()
{
	return Rank;
}

const TSharedRef<FRankAPI> FRallyHereAPIAll::GetRank() const
{
	return Rank;
}

TSharedRef<FRegionsAPI> FRallyHereAPIAll::GetRegions()
{
	return Regions;
}

const TSharedRef<FRegionsAPI> FRallyHereAPIAll::GetRegions() const
{
	return Regions;
}

TSharedRef<FReportsAPI> FRallyHereAPIAll::GetReports()
{
	return Reports;
}

const TSharedRef<FReportsAPI> FRallyHereAPIAll::GetReports() const
{
	return Reports;
}

TSharedRef<FSessionAuditAPI> FRallyHereAPIAll::GetSessionAudit()
{
	return SessionAudit;
}

const TSharedRef<FSessionAuditAPI> FRallyHereAPIAll::GetSessionAudit() const
{
	return SessionAudit;
}

TSharedRef<FSessionsAPI> FRallyHereAPIAll::GetSessions()
{
	return Sessions;
}

const TSharedRef<FSessionsAPI> FRallyHereAPIAll::GetSessions() const
{
	return Sessions;
}

TSharedRef<FSettingsAPI> FRallyHereAPIAll::GetSettings()
{
	return Settings;
}

const TSharedRef<FSettingsAPI> FRallyHereAPIAll::GetSettings() const
{
	return Settings;
}

TSharedRef<FTimeAPI> FRallyHereAPIAll::GetTime()
{
	return Time;
}

const TSharedRef<FTimeAPI> FRallyHereAPIAll::GetTime() const
{
	return Time;
}

TSharedRef<FUsersAPI> FRallyHereAPIAll::GetUsers()
{
	return Users;
}

const TSharedRef<FUsersAPI> FRallyHereAPIAll::GetUsers() const
{
	return Users;
}
}
