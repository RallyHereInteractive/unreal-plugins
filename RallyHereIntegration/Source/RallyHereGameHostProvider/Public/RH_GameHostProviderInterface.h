// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "Logging/LogMacros.h"

RALLYHEREGAMEHOSTPROVIDER_API DECLARE_LOG_CATEGORY_EXTERN(LogRHGameHostProvider, Log, All);

/** @defgroup GameHostProviderInterface Interface for providing hosting for game servers
 *  @{
 */

/** Allocation status provided when game host provider returns an allocation result */
enum class ERH_AllocationStatus : uint8
{
	/** Allocation failed */
	Failed,
	/** Allocation timed out */
	TimedOut,
	/** Allocation request was cancelled */
	Cancelled,
	/** Allocation was successful */
	Success
};

/** Allocation status provided when game host provider returns an allocation result */
struct FRH_GameHostAllocationInfo
{
	/** SessionId, if known */
	TOptional<FString> SessionId;
	/** AllocationId, if known (generally required) */
	TOptional<FString> AllocationId;
	/** Public Host Address, if known */
	TOptional<FString> PublicHost;
	/** Public Port, if known */
	TOptional<FString> PublicPort;

	/** @brief Whether the allocation info is valid for allocation workflows */
	FORCEINLINE bool IsValidForAllocation() const
	{
		// allocations must have a valid allocation id AND a public host to advertise with
		return AllocationId.IsSet() && PublicHost.IsSet();
	}
	/** @brief Whether the allocation info is valid for reservation workflows */
	FORCEINLINE bool IsValidForReservation() const
	{
		// reservations must have a session id AND a public host to advertise with
		return PublicHost.IsSet();
	}
};

/** Structure containing stats used by OnProviderStats callback, which needs to be filled out for hosting provider health checks and metrics */
struct FRH_GameHostProviderStats
{
	/** Map Name, if known */
	TOptional<FString> Map;
	/** GameMode Name, if known */
	TOptional<FString> GameMode;
	/** Player Count, if known */
	TOptional<uint32> PlayerCount;
	/** Max Player Count, if known */
	TOptional<uint32> MaxPlayerCount;
	/** Bot (AI player) Count, if known */
	TOptional<uint32> BotCount;
	/** Whether the server is private or public is enabled, if known */
	TOptional<bool> Private;
	/** Whether anti cheat is enabled, if known */
	TOptional<bool> AntiCheatEnabled;
	/** Whether the server is healthy, if known */
	TOptional<bool> Healthy;
	/** What build version to report the server is using, if known */
	TOptional<FString> BuildVersion;
	/** What session compatibility version to report the server is using, if known */
	TOptional<FString> SessionCompatibilityVersion;

	FRH_GameHostProviderStats()
	{
	}
};

/** @} */

// completion callbacks
DECLARE_DELEGATE_OneParam(FRH_GameHostProviderOnProviderConnectComplete, bool /*bSuccess*/);
DECLARE_DELEGATE_OneParam(FRH_GameHostProviderOnProviderRegisterComplete, bool /*bSuccess*/);
DECLARE_DELEGATE_TwoParams(FRH_GameHostProviderOnProviderReservationComplete, bool /*bSuccess*/, const FRH_GameHostAllocationInfo& /*ReservationInfo*/);
DECLARE_DELEGATE_OneParam(FRH_GameHostProviderOnProviderSelfAllocateComplete, bool /*bSuccess*/);
DECLARE_DELEGATE_TwoParams(FRH_GameHostProviderOnProviderAllocationComplete, ERH_AllocationStatus /*Status*/, const FRH_GameHostAllocationInfo& /*AllocationInfo*/);

// stats callback
DECLARE_DELEGATE_OneParam(FRH_GameHostProviderStatsRequested, FRH_GameHostProviderStats& /*Stats*/);

// shutdown callbacks
DECLARE_DELEGATE(FRH_GameHostProviderOnProviderSoftStopRequested);
DECLARE_DELEGATE(FRH_GameHostProviderOnProviderHardStopRequested);

/** @ingroup GameHostProviderInterface
 *  @{
 */

/** Interface class that provides an interface for interacting with hosting providers */
class RALLYHEREGAMEHOSTPROVIDER_API IRH_GameHostProviderInterface
{
public:
	IRH_GameHostProviderInterface(const FString& Commandline) {}
	virtual ~IRH_GameHostProviderInterface() {}

	// NOTE - the following must be defined as a static function to use the Create() helper below
	static bool IsAvailable() { return false; }

	/** @brief Gets whether this provider object is in a valid state */
	virtual bool IsValid() const = 0;

	/** @brief Asynchronous connect to the provider, triggers OnProviderConnectComplete upon completion */
	virtual void BeginConnecting() = 0;

	/** @brief Asynchronous register with the provider for hosting non-self-allocating allocated servers, triggers OnProviderRegisterComplete upon completion, and OnProviderAllocationComplete once an allocation has been created */
	virtual void BeginRegister() = 0;

	/** @brief Asynchronous reservation creation for self-allocating servers, triggers OnProviderReservationComplete upon completion */
	virtual void BeginReservation() = 0;
	/** @brief Asynchronous creation an allocation with the provider for self-allocating servers, triggers OnProviderSelfAllocateComplete upon completion */
	virtual void BeginSelfAllocate() = 0;

	/** @brief Notify the provider that the game process initiated a soft stop on its own (this may end up calling the soft stop callback!) */
	virtual void NotifySoftStopRequested() = 0;

	template<typename ProviderType>
	static ProviderType* Create(const FString& Commandline)
	{
		if (!ProviderType::IsAvailable())
		{
			UE_LOG(LogRHGameHostProvider, Warning, TEXT("[%s] - provider not available"), ANSI_TO_TCHAR(__FUNCTION__));

			return nullptr;
		}

		auto* Provider = new ProviderType(Commandline);
		if (Provider && Provider->IsValid())
		{
			return Provider;
		}

		delete Provider;
		return nullptr;
	}

	/** Callback when connection from BeginConnecting() is complete */
	FRH_GameHostProviderOnProviderConnectComplete OnProviderConnectComplete;
	/** Callback when registration from BeginRegister() is complete */
	FRH_GameHostProviderOnProviderRegisterComplete OnProviderRegisterComplete;
	/** Callback when allocation from an allocation has completed and provided hosting information */
	FRH_GameHostProviderOnProviderAllocationComplete OnProviderAllocationComplete;

	/** Callback when reservation from BeginReservation() is complete */
	FRH_GameHostProviderOnProviderReservationComplete OnProviderReservationComplete;
	/** Callback when allocation from BeginSelfAllocate() is complete */
	FRH_GameHostProviderOnProviderSelfAllocateComplete OnProviderSelfAllocateComplete;

	/** Callback when the provider wants to collect stats */
	FRH_GameHostProviderStatsRequested OnProviderStats;

	/** Callback when the provider has requested a soft stop of the server */
	FRH_GameHostProviderOnProviderSoftStopRequested OnProviderSoftStopRequested;
	/** Callback when the provider has requested a hard stop of the server (such as when the provider has entered an invalid and fatal state */
	FRH_GameHostProviderOnProviderHardStopRequested OnProviderHardStopRequested;
};

/** @} */