// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

// Forward declartion file for types needed by headers for RH_GameHostAdapter.h

typedef enum { RH_STATUS_OK } RallyHereStatusCode;

struct RallyHereGameInstanceAdapter;
typedef RallyHereGameInstanceAdapter* RallyHereGameInstanceAdapterPtr;
struct RallyHereStringMap;
typedef RallyHereStringMap* RallyHereStringMapPtr;

typedef enum RallyHereLogLevel
{
	RH_LOG_LEVEL_ERROR,
	RH_LOG_LEVEL_INFO,
	RH_LOG_LEVEL_DEBUG,
	RH_LOG_LEVEL_TRACE
} RallyHereLogLevel;

typedef void (*RallyHereLogCallback)(RallyHereLogLevel level, const char* message, size_t messagen, void* user_data);
typedef void (*RallyHereOnAllocatedCallback)(RallyHereStringMapPtr allocation_info, const RallyHereStatusCode& code,
                                             void* user_data);

struct RallyHereGameInstanceAdapterDeleter
{
	void operator()(RallyHereGameInstanceAdapterPtr adapter);
};

/** @ingroup GameHostProviderInterface
 *  @{
 */

/** Structure used for reporting base level stats to GameHostAdapter */
typedef struct {
	/** Name of the server */
	const char* name;
	/** Map the server is running */
	const char* map;
	/** Folder containing the game files */
	const char* folder;
	/** Name of the game */
	const char* game;
	/** Numeric ID of the game. Potentially the Steam App ID */
	int32_t id;
	/** Number of players currently on the server */
	uint8_t players;
	/** Maximum number of players the server can hold */
	uint8_t max_players;
	/** Number of bots on the server */
	uint8_t bots;
	/** Type of server. Currently 'd' for dedicated, 'l' for listen, 'p' for SourceTV */
	uint8_t server_type;
	/** Environment the server is running in. Currently 'w' for Windows, 'l' for Linux, 'm' for Mac */
	uint8_t environment;
	/** Visibility of the server. Currently '0' for public and '1' for private */
	uint8_t visibility;
	/** Anti-cheat running on the server. Currently '0' for unsecured, '1' for secured */
	uint8_t anticheat;
	/** Version of the game installed on the server */
	const char* version;
} RallyHereStatsBase;

/** Control structure for RallyHereStatsBase specifying which data was provided */
typedef struct {
	bool set_name : 1;
	bool set_map : 1;
	bool set_folder : 1;
	bool set_game : 1;
	bool set_id : 1;
	bool set_players : 1;
	bool set_max_players : 1;
	bool set_bots : 1;
	bool set_server_type : 1;
	bool set_environment : 1;
	bool set_visibility : 1;
	bool set_anticheat : 1;
	bool set_version : 1;
} RallyHereStatsBaseProvided;

/** @} */