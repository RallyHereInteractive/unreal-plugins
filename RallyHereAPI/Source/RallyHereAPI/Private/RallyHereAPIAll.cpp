#include "RallyHereAPIAll.h"

namespace RallyHereAPI
{

FRallyHereAPIAll::FRallyHereAPIAll()
	: DummyValue(0)
	, Ad(MakeShareable(new FAdAPI()))
	, Auth(MakeShareable(new FAuthAPI()))
	, Catalog(MakeShareable(new FCatalogAPI()))
	, Config(MakeShareable(new FConfigAPI()))
	, Custom(MakeShareable(new FCustomAPI()))
	, Deserter(MakeShareable(new FDeserterAPI()))
	, Entitlements(MakeShareable(new FEntitlementsAPI()))
	, Events(MakeShareable(new FEventsAPI()))
	, RemoteFile(MakeShareable(new FRemoteFileAPI()))
	, Friends(MakeShareable(new FFriendsAPI()))
	, Inventory(MakeShareable(new FInventoryAPI()))
	, KeyClaims(MakeShareable(new FKeyClaimsAPI()))
	, Match(MakeShareable(new FMatchAPI()))
	, Notification(MakeShareable(new FNotificationAPI()))
	, PEX(MakeShareable(new FPEXAPI()))
	, Presence(MakeShareable(new FPresenceAPI()))
	, PresenceAdmin(MakeShareable(new FPresenceAdminAPI()))
	, Rank(MakeShareable(new FRankAPI()))
	, Reports(MakeShareable(new FReportsAPI()))
	, Sessions(MakeShareable(new FSessionsAPI()))
	, Settings(MakeShareable(new FSettingsAPI()))
	, Users(MakeShareable(new FUsersAPI()))

{
	AllAPIs.Add(Ad);
	AllAPIs.Add(Auth);
	AllAPIs.Add(Catalog);
	AllAPIs.Add(Config);
	AllAPIs.Add(Custom);
	AllAPIs.Add(Deserter);
	AllAPIs.Add(Entitlements);
	AllAPIs.Add(Events);
	AllAPIs.Add(RemoteFile);
	AllAPIs.Add(Friends);
	AllAPIs.Add(Inventory);
	AllAPIs.Add(KeyClaims);
	AllAPIs.Add(Match);
	AllAPIs.Add(Notification);
	AllAPIs.Add(PEX);
	AllAPIs.Add(Presence);
	AllAPIs.Add(PresenceAdmin);
	AllAPIs.Add(Rank);
	AllAPIs.Add(Reports);
	AllAPIs.Add(Sessions);
	AllAPIs.Add(Settings);
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

TSharedRef<FCustomAPI> FRallyHereAPIAll::GetCustom()
{
	return Custom;
}

const TSharedRef<FCustomAPI> FRallyHereAPIAll::GetCustom() const
{
	return Custom;
}

TSharedRef<FDeserterAPI> FRallyHereAPIAll::GetDeserter()
{
	return Deserter;
}

const TSharedRef<FDeserterAPI> FRallyHereAPIAll::GetDeserter() const
{
	return Deserter;
}

TSharedRef<FEntitlementsAPI> FRallyHereAPIAll::GetEntitlements()
{
	return Entitlements;
}

const TSharedRef<FEntitlementsAPI> FRallyHereAPIAll::GetEntitlements() const
{
	return Entitlements;
}

TSharedRef<FEventsAPI> FRallyHereAPIAll::GetEvents()
{
	return Events;
}

const TSharedRef<FEventsAPI> FRallyHereAPIAll::GetEvents() const
{
	return Events;
}

TSharedRef<FRemoteFileAPI> FRallyHereAPIAll::GetRemoteFile()
{
	return RemoteFile;
}

const TSharedRef<FRemoteFileAPI> FRallyHereAPIAll::GetRemoteFile() const
{
	return RemoteFile;
}

TSharedRef<FFriendsAPI> FRallyHereAPIAll::GetFriends()
{
	return Friends;
}

const TSharedRef<FFriendsAPI> FRallyHereAPIAll::GetFriends() const
{
	return Friends;
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

TSharedRef<FMatchAPI> FRallyHereAPIAll::GetMatch()
{
	return Match;
}

const TSharedRef<FMatchAPI> FRallyHereAPIAll::GetMatch() const
{
	return Match;
}

TSharedRef<FNotificationAPI> FRallyHereAPIAll::GetNotification()
{
	return Notification;
}

const TSharedRef<FNotificationAPI> FRallyHereAPIAll::GetNotification() const
{
	return Notification;
}

TSharedRef<FPEXAPI> FRallyHereAPIAll::GetPEX()
{
	return PEX;
}

const TSharedRef<FPEXAPI> FRallyHereAPIAll::GetPEX() const
{
	return PEX;
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

TSharedRef<FRankAPI> FRallyHereAPIAll::GetRank()
{
	return Rank;
}

const TSharedRef<FRankAPI> FRallyHereAPIAll::GetRank() const
{
	return Rank;
}

TSharedRef<FReportsAPI> FRallyHereAPIAll::GetReports()
{
	return Reports;
}

const TSharedRef<FReportsAPI> FRallyHereAPIAll::GetReports() const
{
	return Reports;
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

TSharedRef<FUsersAPI> FRallyHereAPIAll::GetUsers()
{
	return Users;
}

const TSharedRef<FUsersAPI> FRallyHereAPIAll::GetUsers() const
{
	return Users;
}
}
