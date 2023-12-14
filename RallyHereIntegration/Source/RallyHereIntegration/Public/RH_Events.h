// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "Containers/Array.h"
#include "Containers/UnrealString.h"
#include "Misc/Optional.h"

#include "Interfaces/IAnalyticsProvider.h"
#include "RH_Common.h"
#include "EventsAPI.h"

//#include "RH_Events.generated.h"

/** @defgroup Events RallyHere Events
 *  @{
 */

namespace RHStandardEvents
{
	// prefix used to pass custom data, will be stripped out by the default rally here event provider
	static FString CustomDataPrefix = TEXT("__CUSTOM_DATA__.");

	FORCEINLINE void CreateCustomDataAttributes(const TOptional<TMap<FString, FString>>& InCustomData, TArray<FAnalyticsEventAttribute>& Attributes)
	{
		if (InCustomData.IsSet())
		{
			for (const auto& Pair : InCustomData.GetValue())
			{
				Attributes.Add(FAnalyticsEventAttribute(CustomDataPrefix + Pair.Key, Pair.Value));
			}
		}
	}

	// Event definitions

	/**
	* rh.correlation_start
	* @brief Event that is triggered at the start of the application and when we have generated a correlation_id to track events.
	*/
	struct FCorrelationStartEvent
	{
		static FString GetEventName() { return TEXT("rh.correlation_start"); }

		// Attributes

		/** @brief Used for tracking platform enumerations.List of possible values */
		FString PlatformName;

		/** @brief The build version of the client */
		FString ClientBuildVersion;

		/** @brief The version of the engine */
		FString EngineVersion;

		/** @brief The version of the integration plugin */
		FString IntegrationPluginVersion;

		/** @brief The client timestamp when the event was triggered */
		FString ClientTimestamp;

		/** @brief The client's estimated server timestamp when the event was triggered */
		TOptional<FString> ServerTimestamp;

		/** @brief The command line arguments passed to the client */
		TOptional<FString> CommandLineArg;

		/** @brief Whether the client is running in editor mode */
		TOptional<bool> IsEditor;

		/** @brief The mode the client is running in */
		TOptional<FString> Mode;

		/** @brief custom data fields (will be auto-prefixed with custom data prefix) */
		TOptional<TMap<FString, FString>> CustomData;

		FCorrelationStartEvent()
			: PlatformName()
			, ClientBuildVersion()
			, EngineVersion()
			, IntegrationPluginVersion()
			, ClientTimestamp()
			, ServerTimestamp()
			, CommandLineArg()
			, IsEditor()
			, Mode()
			, CustomData()
		{
		}

		void EmitTo(IAnalyticsProvider* Provider) const
		{
			Emit(Provider, PlatformName, ClientBuildVersion, EngineVersion, IntegrationPluginVersion, ClientTimestamp, ServerTimestamp, CommandLineArg, IsEditor, Mode, CustomData);
		}

		static void Emit(
			IAnalyticsProvider* Provider,
			const FString& InPlatformName,
			const FString& InClientBuildVersion,
			const FString& InEngineVersion,
			const FString& InIntegrationPluginVersion,
			const FString& InClientTimestamp,
			const TOptional<FString>& InServerTimestamp,
			const TOptional<FString>& InCommandLineArg,
			TOptional<bool> InIsEditor,
			const TOptional<FString>& InMode,
			const TOptional<TMap<FString, FString>>& InCustomData = TOptional<TMap<FString, FString>>()
		)
		{
			check(Provider != nullptr);
			TArray<FAnalyticsEventAttribute> Attributes;

			Attributes.Add(FAnalyticsEventAttribute(TEXT("platform_name"), InPlatformName));
			Attributes.Add(FAnalyticsEventAttribute(TEXT("client_build_version"), InClientBuildVersion));
			Attributes.Add(FAnalyticsEventAttribute(TEXT("engine_version"), InEngineVersion));
			Attributes.Add(FAnalyticsEventAttribute(TEXT("integration_plugin_version"), InIntegrationPluginVersion));
			Attributes.Add(FAnalyticsEventAttribute(TEXT("client_timestamp"), InClientTimestamp));

			if (InServerTimestamp.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("server_timestamp"), InServerTimestamp.GetValue()));
			}
			if (InCommandLineArg.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("command_line_arg"), InCommandLineArg.GetValue()));
			}
			if (InIsEditor.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("is_editor"), InIsEditor.GetValue()));
			}
			if (InMode.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("mode"), InMode.GetValue()));
			}

			CreateCustomDataAttributes(InCustomData, Attributes);

			Provider->RecordEvent(GetEventName(), Attributes);
		}
	};

	/**
	* rh.correlation_end
	* @brief This event is triggered to mark the end of tracking events. Typically triggered when the client gracefully is closed.
	*/
	struct FCorrelationEndEvent
	{
		static FString GetEventName() { return TEXT("rh.correlation_end"); }


		// Attributes
		/** @brief The reason for the correlation to end */
		TOptional<FString> Reason;

		/** @brief The duration of the correlation */
		TOptional<int32> DurationSeconds;

		/** @brief custom data fields (will be auto-prefixed with custom data prefix) */
		TOptional<TMap<FString, FString>> CustomData;

		FCorrelationEndEvent()
			: Reason()
			, DurationSeconds()
			, CustomData()
		{
		}

		void EmitTo(IAnalyticsProvider* Provider) const
		{
			Emit(Provider, Reason, DurationSeconds, CustomData);
		}

		static void Emit(
			IAnalyticsProvider* Provider,
			const TOptional<FString>& InReason,
			const TOptional<int32>& InDurationSeconds,
			const TOptional<TMap<FString, FString>>& InCustomData = TOptional<TMap<FString, FString>>()
		)
		{
			check(Provider != nullptr);
			TArray<FAnalyticsEventAttribute> Attributes;

			if (InReason.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("reason"), InReason.GetValue()));
			}
			if (InDurationSeconds.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("duration_seconds"), InDurationSeconds.GetValue()));
			}

			CreateCustomDataAttributes(InCustomData, Attributes);

			Provider->RecordEvent(GetEventName(), Attributes);
		}		
	};

	/**
	* rh.client_device
	* @brief Records the first time a user launches an app and when device information changes.
	*/
	struct FClientDeviceEvent
	{
		static FString GetEventName() { return TEXT("rh.client_device"); }
		
		// Attributes

		/** @brief The type of CPU */
		TOptional<FString> CpuType;

		/** @brief The number of logical CPU cores */
		TOptional<int32> CpuCores;

		/** @brief The reference of the GPU(brand name and model) */
		TOptional<FString> GpuType;

		/** @brief Maximum known number of height pixels(dpi) */
		TOptional<int32> ScreenHeight;

		/** @brief Maximum known number of width pixels(dpi) */
		TOptional<int32> ScreenWidth;

		/** @brief Size of the RAM on the device in megabytes */
		TOptional<int32> RamTotal;

		/** @brief Size of the available RAM on the device in megabytes */
		TOptional<int32> RamAvailable;

		/** @brief This is the IP of the game client */
		TOptional<FString> Ip;

		/** @brief This will be then platform the game client is running on */
		TOptional<FString> DeviceType;

		/** @brief custom data fields (will be auto-prefixed with custom data prefix) */
		TOptional<TMap<FString, FString>> CustomData;

		FClientDeviceEvent()
			: CpuType()
			, CpuCores()
			, GpuType()
			, ScreenHeight()
			, ScreenWidth()
			, RamTotal()
			, RamAvailable()
			, Ip()
			, DeviceType()
			, CustomData()
		{
		}

		void EmitTo(IAnalyticsProvider* Provider) const
		{
			Emit(Provider, CpuType, CpuCores, GpuType, ScreenHeight, ScreenWidth, RamTotal, RamAvailable, Ip, DeviceType, CustomData);
		}

		static void Emit(
			IAnalyticsProvider* Provider,
			const TOptional<FString>& InCpuType,
			const TOptional<int32>& InCpuCores,
			const TOptional<FString>& InGpuType,
			const TOptional<int32>& InScreenHeight,
			const TOptional<int32>& InScreenWidth,
			const TOptional<int32>& InRamTotal,
			const TOptional<int32>& InRamAvailable,
			const TOptional<FString>& InIp,
			const TOptional<FString>& InDeviceType,
			const TOptional<TMap<FString, FString>>& InCustomData = TOptional<TMap<FString, FString>>()
		)
		{
			check(Provider != nullptr);
			TArray<FAnalyticsEventAttribute> Attributes;

			if (InCpuType.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("cpu_type"), InCpuType.GetValue()));
			}
			if (InCpuCores.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("cpu_cores"), InCpuCores.GetValue()));
			}
			if (InGpuType.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("gpu_type"), InGpuType.GetValue()));
			}
			if (InScreenHeight.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("screen_height"), InScreenHeight.GetValue()));
			}
			if (InScreenWidth.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("screen_width"), InScreenWidth.GetValue()));
			}
			if (InRamTotal.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("ram_total"), InRamTotal.GetValue()));
			}
			if (InRamAvailable.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("ram_available"), InRamAvailable.GetValue()));
			}
			if (InIp.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("ip"), InIp.GetValue()));
			}
			if (InDeviceType.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("device_type"), InDeviceType.GetValue()));
			}

			CreateCustomDataAttributes(InCustomData, Attributes);

			Provider->RecordEvent(GetEventName(), Attributes);
		}
	};

	/**
	* rh.instance_join_start
	* @brief This event is triggered when the player / game client has an instance to connect to and has started the process to connect to it.
	*/
	struct FInstanceJoinStartEvent
	{
		static FString GetEventName() { return TEXT("rh.instance_join_start"); }

		// Attributes

		/** @brief The session_id of the instance the player is attempting to join */
		TOptional<FString> SessionId;

		/** @brief The instance_id of the instance the player is attempting to join */
		TOptional<FString> InstanceId;

		/** @brief The connection string of the instance the player is attempting to join */
		TOptional<FString> ConnectionString;

		/** @brief custom data fields (will be auto-prefixed with custom data prefix) */
		TOptional<TMap<FString, FString>> CustomData;

		FInstanceJoinStartEvent()
			: SessionId()
			, InstanceId()
			, ConnectionString()
			, CustomData()
		{
		}

		void EmitTo(IAnalyticsProvider* Provider) const
		{
			Emit(Provider, SessionId, InstanceId, ConnectionString, CustomData);
		}

		static void Emit(
			IAnalyticsProvider* Provider,
			const TOptional<FString>& InSessionId,
			const TOptional<FString>& InInstanceId,
			const TOptional<FString>& InConnectionString,
			const TOptional<TMap<FString, FString>>& InCustomData = TOptional<TMap<FString, FString>>()
		)
		{
			check(Provider != nullptr);
			TArray<FAnalyticsEventAttribute> Attributes;

			if (InSessionId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("session_id"), InSessionId.GetValue()));
			}
			if (InInstanceId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("instance_id"), InInstanceId.GetValue()));
			}
			if (InConnectionString.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("connection_string"), InConnectionString.GetValue()));
			}

			CreateCustomDataAttributes(InCustomData, Attributes);

			Provider->RecordEvent(GetEventName(), Attributes);
		}

	};

	/**
	* rh.instnace_join_complete
	* @brief This event is triggered when the player / game client has attempted to connect to the instance.This event will capture both the success and the failure to connect to an instance.
	*/
	struct FInstanceJoinCompleteEvent
	{
		static FString GetEventName() { return TEXT("rh.instance_join_complete"); }

		// Attributes

		/** @brief The session_id of the instance the player is attempting to join */
		TOptional<FString> SessionId;

		/** @brief The instance_id of the instance the player is attempting to join */
		TOptional<FString> InstanceId;

		/** @brief Whether or not the join was an overall success. */
		TOptional<bool> IsSuccess;

		/** @brief The reason for the failure to join the instance. */
		TOptional<FString> Reason;

		/** @brief custom data fields (will be auto-prefixed with custom data prefix) */
		TOptional<TMap<FString, FString>> CustomData;

		FInstanceJoinCompleteEvent()
			: SessionId()
			, InstanceId()
			, IsSuccess()
			, Reason()
			, CustomData()
		{
		}

		void EmitTo(IAnalyticsProvider* Provider) const
		{
			Emit(Provider, SessionId, InstanceId, IsSuccess, Reason, CustomData);
		}

		static void Emit(
			IAnalyticsProvider* Provider,
			const TOptional<FString>& InSessionId,
			const TOptional<FString>& InInstanceId,
			const TOptional<bool>& InIsSuccess,
			const TOptional<FString>& InReason,
			const TOptional<TMap<FString, FString>>& InCustomData = TOptional<TMap<FString, FString>>()
		)
		{
			check(Provider != nullptr);
			TArray<FAnalyticsEventAttribute> Attributes;

			if (InSessionId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("session_id"), InSessionId.GetValue()));
			}
			if (InInstanceId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("instance_id"), InInstanceId.GetValue()));
			}
			if (InIsSuccess.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("is_success"), InIsSuccess.GetValue()));
			}
			if (InReason.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("reason"), InReason.GetValue()));
			}

			CreateCustomDataAttributes(InCustomData, Attributes);

			Provider->RecordEvent(GetEventName(), Attributes);
		}	
	};

	/**
	* rh.instance_left
	* @brief This event is triggered when a player / game client has disconnected from the instance.
	*/
	struct FInstanceLeftEvent
	{
		static FString GetEventName() { return TEXT("rh.instance_left"); }
		
		// Attributes

		/** @brief The session_id of the instance the player is leaving */
		TOptional<FString> SessionId;

		/** @brief The instance_id of the instance the player is leaving */
		TOptional<FString> InstanceId;

		/** @brief The reason for the player leaving the instance */
		TOptional<FString> Reason;

		/** @brief custom data fields (will be auto-prefixed with custom data prefix) */
		TOptional<TMap<FString, FString>> CustomData;

		FInstanceLeftEvent()
			: SessionId()
			, InstanceId()
			, Reason()
			, CustomData()
		{
		}

		void EmitTo(IAnalyticsProvider* Provider) const
		{
			Emit(Provider, SessionId, InstanceId, Reason, CustomData);
		}

		static void Emit(
			IAnalyticsProvider* Provider,
			const TOptional<FString>& InSessionId,
			const TOptional<FString>& InInstanceId,
			const TOptional<FString>& InReason,
			const TOptional<TMap<FString, FString>>& InCustomData = TOptional<TMap<FString, FString>>()
		)
		{
			check(Provider != nullptr);
			TArray<FAnalyticsEventAttribute> Attributes;

			if (InSessionId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("session_id"), InSessionId.GetValue()));
			}
			if (InInstanceId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("instance_id"), InInstanceId.GetValue()));
			}
			if (InReason.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("reason"), InReason.GetValue()));
			}

			CreateCustomDataAttributes(InCustomData, Attributes);

			Provider->RecordEvent(GetEventName(), Attributes);
		}
	};

	/**
	* rh.login_start
	* @brief This event is triggered at the start of the client login process.
	*/
	struct FLoginStartEvent
	{
		static FString GetEventName() { return TEXT("rh.login_start"); }
		
		// Attributes

		/** @brief Platform username / gamertag of the player. */
		TOptional<FString> PlatformDisplayName;

		/** @brief custom data fields (will be auto-prefixed with custom data prefix) */
		TOptional<TMap<FString, FString>> CustomData;

		FLoginStartEvent()
			: PlatformDisplayName()
			, CustomData()
		{
		}

		void EmitTo(IAnalyticsProvider* Provider) const
		{
			Emit(Provider, PlatformDisplayName, CustomData);
		}

		static void Emit(
			IAnalyticsProvider* Provider,
			const TOptional<FString>& InPlatformDisplayName,
			const TOptional<TMap<FString, FString>>& InCustomData = TOptional<TMap<FString, FString>>()
		)
		{
			check(Provider != nullptr);
			TArray<FAnalyticsEventAttribute> Attributes;

			if (InPlatformDisplayName.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("platform_display_name"), InPlatformDisplayName.GetValue()));
			}

			CreateCustomDataAttributes(InCustomData, Attributes);

			Provider->RecordEvent(GetEventName(), Attributes);
		}
	};

	/**
	* rh.login_complete
	* @brief This event is triggered when the login process has completed.This event is meant to capture both successful and failed login attempts.
	*/
	struct FLoginCompleteEvent
	{
		static FString GetEventName() { return TEXT("rh.login_complete"); }

		// Attributes

		/** @brief Platform UserId of the player */
		FString PlatformUserId;

		/** @brief Platform Id of the player */
		FString PlatformId;

		/** @brief The status of the login attempt */
		FString Status;

		/** @brief Platform username / gamertag of the player */
		TOptional<FString> PlatformDisplayName;

		/** @brief PersonId of the player */
		TOptional<FString> PersonId;

		/** @brief The reason for the failure to login */
		TOptional<FString> Reason;

		/** @brief The duration of the login process */
		TOptional<int32> DurationSeconds;

		/** @brief The timestamp when the login process was submitted to the RH API */
		TOptional<FString> SubmitTimestamp;

		/** @brief The timestamp when the login process was completed */
		TOptional<FString> PlatformLoginCompleteTimestamp;

		/** @brief custom data fields (will be auto-prefixed with custom data prefix) */
		TOptional<TMap<FString, FString>> CustomData;

		FLoginCompleteEvent()
			: PlatformUserId()
			, PlatformId()
			, Status()
			, PlatformDisplayName()
			, PersonId()
			, Reason()
			, DurationSeconds()
			, SubmitTimestamp()
			, PlatformLoginCompleteTimestamp()
			, CustomData()
		{
		}

		void EmitTo(IAnalyticsProvider* Provider) const
		{
			Emit(Provider, PlatformUserId, PlatformId, Status, PlatformDisplayName, PersonId, Reason, DurationSeconds, SubmitTimestamp, PlatformLoginCompleteTimestamp, CustomData);
		}

		static void Emit(
			IAnalyticsProvider* Provider,
			const FString& InPlatformUserId,
			const FString& InPlatformId,
			const FString& InStatus,
			const TOptional<FString>& InPlatformDisplayName,
			const TOptional<FString>& InPersonId,
			const TOptional<FString>& InReason,
			const TOptional<int32>& InDurationSeconds,
			const TOptional<FString>& InSubmitTimestamp,
			const TOptional<FString>& InPlatformLoginCompleteTimestamp,
			const TOptional<TMap<FString, FString>>& InCustomData = TOptional<TMap<FString, FString>>()
		)
		{
			check(Provider != nullptr);
			TArray<FAnalyticsEventAttribute> Attributes;

			Attributes.Add(FAnalyticsEventAttribute(TEXT("platform_user_id"), InPlatformUserId));
			Attributes.Add(FAnalyticsEventAttribute(TEXT("platform_id"), InPlatformId));
			Attributes.Add(FAnalyticsEventAttribute(TEXT("status"), InStatus));

			if (InPlatformDisplayName.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("platform_display_name"), InPlatformDisplayName.GetValue()));
			}
			if (InPersonId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("person_id"), InPersonId.GetValue()));
			}
			if (InReason.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("reason"), InReason.GetValue()));
			}
			if (InDurationSeconds.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("duration_seconds"), InDurationSeconds.GetValue()));
			}
			if (InSubmitTimestamp.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("submit_timestamp"), InSubmitTimestamp.GetValue()));
			}
			if (InPlatformLoginCompleteTimestamp.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("platform_login_complete_timestamp"), InPlatformLoginCompleteTimestamp.GetValue()));
			}

			CreateCustomDataAttributes(InCustomData, Attributes);

			Provider->RecordEvent(GetEventName(), Attributes);
		}

	};

	/**
	* rh.objective_progress
	* @brief This event is meant to be triggered when a player has earned progress on an objective.The RHIntegration Plugin will not automatically trigger this, but this event is something that RallyHere will process and have an understanding of the data.
	*/
	struct FObjectiveProgressEvent
	{
		static FString GetEventName() { return TEXT("rh.objective_progress"); }

		// Attributes

		/** @brief A "bigger.smaller.smallest.tiny" formatted string.For example, in a UI element specification, this could be "hud.minimap.expandButton" */
		FString Category;

		/** @brief Generic status */
		FString Status;

		/** @brief Generic context, possibly escaped JSON */
		TOptional<FString> Context;

		/** @brief Vendor loot table ID for vendors */
		TOptional<int32> VendorId;
		
		/** @brief Identifier of the entry in the loot table */
		TOptional<int32> LootTableItemId;

		/** @brief Specific Item ID */
		TOptional<int32> ItemId;

		/** @brief The quantity value before the progression event */
		TOptional<int32> StartProgress;

		/** @brief The quantity value after the progression event */
		TOptional<int32> EndProgress;

		/** @brief Identifier for the authentication provider */
		TOptional<int32> ProviderId;

		/** @brief Order reference ID */
		TOptional<FString> OrderRefId;

		/** @brief Order identifier */
		TOptional<FString> OrderId;

		/** @brief Order entry identifier */
		TOptional<FString> OrderEntryId;

		/** @brief Generic description string */
		TOptional<FString> Description;

		/** @brief custom data fields (will be auto-prefixed with custom data prefix) */
		TOptional<TMap<FString, FString>> CustomData;

		FObjectiveProgressEvent()
			: Category()
			, Status()
			, Context()
			, VendorId()
			, LootTableItemId()
			, ItemId()
			, StartProgress()
			, EndProgress()
			, ProviderId()
			, OrderRefId()
			, OrderId()
			, OrderEntryId()
			, Description()
			, CustomData()
		{
		}

		void EmitTo(IAnalyticsProvider* Provider) const
		{
			Emit(Provider, Category, Status, Context, VendorId, LootTableItemId, ItemId, StartProgress, EndProgress, ProviderId, OrderRefId, OrderId, OrderEntryId, Description, CustomData);
		}

		static void Emit(
			IAnalyticsProvider* Provider,
			const FString& InCategory,
			const FString& InStatus,
			const TOptional<FString>& InContext,
			const TOptional<int32>& InVendorId,
			const TOptional<int32>& InLootTableItemId,
			const TOptional<int32>& InItemId,
			const TOptional<int32>& InStartProgress,
			const TOptional<int32>& InEndProgress,
			const TOptional<int32>& InProviderId,
			const TOptional<FString>& InOrderRefId,
			const TOptional<FString>& InOrderId,
			const TOptional<FString>& InOrderEntryId,
			const TOptional<FString>& InDescription,
			const TOptional<TMap<FString, FString>>& InCustomData = TOptional<TMap<FString, FString>>()
		)
		{
			check(Provider != nullptr);
			TArray<FAnalyticsEventAttribute> Attributes;

			Attributes.Add(FAnalyticsEventAttribute(TEXT("category"), InCategory));
			Attributes.Add(FAnalyticsEventAttribute(TEXT("status"), InStatus));

			if (InContext.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("context"), InContext.GetValue()));
			}
			if (InVendorId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("vendor_id"), InVendorId.GetValue()));
			}
			if (InLootTableItemId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("loot_table_item_id"), InLootTableItemId.GetValue()));
			}
			if (InItemId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("item_id"), InItemId.GetValue()));
			}
			if (InStartProgress.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("start_progress"), InStartProgress.GetValue()));
			}
			if (InEndProgress.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("end_progress"), InEndProgress.GetValue()));
			}
			if (InProviderId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("provider_id"), InProviderId.GetValue()));
			}
			if (InOrderRefId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("order_ref_id"), InOrderRefId.GetValue()));
			}
			if (InOrderId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("order_id"), InOrderId.GetValue()));
			}
			if (InOrderEntryId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("order_entry_id"), InOrderEntryId.GetValue()));
			}
			if (InDescription.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("description"), InDescription.GetValue()));
			}

			CreateCustomDataAttributes(InCustomData, Attributes);

			Provider->RecordEvent(GetEventName(), Attributes);
		}
	};

	/**
	* rh.player_game_result
	* @brief This event is meant to capture high level information about a completed match.The RHIntegration Plugin will not automatically trigger this, but this event is something that RallyHere will process and have an understanding of the data.
	*/
	struct FPlayerGameResultEvent
	{
		static FString GetEventName() { return TEXT("rh.player_game_result"); }

		// Attributes

		/** The placement of the player in the game */
		TOptional<int32> Placement;

		/** The session_id of the game */
		TOptional<FString> GameSessionId;

		/** The instance_id of the game within the session */
		TOptional<FString> InstanceId;

		/** The duration of the game in seconds */
		TOptional<int32> DurationSeconds;

		/** The team_id of the player */
		TOptional<FString> TeamId;

		/** The round of the game */
		TOptional<FString> Round;

		/** The session_id of the party the player is in */
		TOptional<FString> PartySessionId;

		/** Whether the player was kicked for being AFK */
		TOptional<bool> IsAfkKicked;

		/** Whether the player was backfilled into the game */
		TOptional<bool> WasBackfilled;

		/** The primary input type of the player */
		TOptional<FString> PrimaryInputType;

		/** @brief custom data fields (will be auto-prefixed with custom data prefix) */
		TOptional<TMap<FString, FString>> CustomData;

		FPlayerGameResultEvent()
			: Placement()
			, GameSessionId()
			, InstanceId()
			, DurationSeconds()
			, TeamId()
			, Round()
			, PartySessionId()
			, IsAfkKicked()
			, WasBackfilled()
			, PrimaryInputType()
			, CustomData()
		{
		}

		void EmitTo(IAnalyticsProvider* Provider) const
		{
			Emit(Provider, Placement, GameSessionId, InstanceId, DurationSeconds, TeamId, Round, PartySessionId, IsAfkKicked, WasBackfilled, PrimaryInputType, CustomData);
		}

		static void Emit(
			IAnalyticsProvider* Provider,
			const TOptional<int32>& InPlacement,
			const TOptional<FString>& InGameSessionId,
			const TOptional<FString>& InInstanceId,
			const TOptional<int32>& InDurationSeconds,
			const TOptional<FString>& InTeamId,
			const TOptional<FString>& InRound,
			const TOptional<FString>& InPartySessionId,
			const TOptional<bool>& InIsAfkKicked,
			const TOptional<bool>& InWasBackfilled,
			const TOptional<FString>& InPrimaryInputType,
			const TOptional<TMap<FString, FString>>& InCustomData = TOptional<TMap<FString, FString>>()
		)
		{
			check(Provider != nullptr);
			TArray<FAnalyticsEventAttribute> Attributes;

			if (InPlacement.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("placement"), InPlacement.GetValue()));
			}
			if (InGameSessionId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("game_session_id"), InGameSessionId.GetValue()));
			}
			if (InInstanceId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("instance_id"), InInstanceId.GetValue()));
			}
			if (InDurationSeconds.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("duration_seconds"), InDurationSeconds.GetValue()));
			}
			if (InTeamId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("team_id"), InTeamId.GetValue()));
			}
			if (InRound.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("round"), InRound.GetValue()));
			}
			if (InPartySessionId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("party_session_id"), InPartySessionId.GetValue()));
			}
			if (InIsAfkKicked.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("is_afk_kicked"), InIsAfkKicked.GetValue()));
			}
			if (InWasBackfilled.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("was_backfilled"), InWasBackfilled.GetValue()));
			}
			if (InPrimaryInputType.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("primary_input_type"), InPrimaryInputType.GetValue()));
			}

			CreateCustomDataAttributes(InCustomData, Attributes);

			Provider->RecordEvent(GetEventName(), Attributes);
		}
		
	};

	/**
	* rh.platform_purchase
	* @brief This event is triggered when processing of a real money purchase has been completed.
	*/
	struct FPlatformPurchaseEvent
	{
		static FString GetEventName() { return TEXT("rh.platform_purchase"); }
		
		/** @brief A structure containing checkout data for a platform purchase */
		struct FCheckoutData
		{
			/** The displayed price for the purchase */
			TOptional<FString> DisplayedPrice;

			/** The numeric price for the purchase */
			TOptional<float> NumericPrice;

			/** The displayed presale price for the purchase */
			TOptional<FString> DisplayedPresalePrice;

			/** The numeric presale price for the purchase */
			TOptional<float> NumericPresalePrice;

			/** The currency code for the purchase */
			TOptional<FString> CurrencyCode;

			/** The SKU for the purchase */
			TOptional<FString> Sku;

			/** The platform for the purchase */
			TOptional<FString> Platform;

			/** @brief Converts the checkout data to a JSON string */
			FString ToJson() const
			{
				FString JsonData;

				JsonData += TEXT("{");

				if (DisplayedPrice.IsSet())
				{
					JsonData += FString::Printf(TEXT("\"displayed_price\": \"%s\", "), *DisplayedPrice.GetValue());
				}
				if (NumericPrice.IsSet())
				{
					JsonData += FString::Printf(TEXT("\"numeric_price\": %f, "), NumericPrice.GetValue());
				}
				if (DisplayedPresalePrice.IsSet())
				{
					JsonData += FString::Printf(TEXT("\"displayed_presale_price\": \"%s\", "), *DisplayedPresalePrice.GetValue());
				}
				if (NumericPresalePrice.IsSet())
				{
					JsonData += FString::Printf(TEXT("\"numeric_presale_price\": %f, "), NumericPresalePrice.GetValue());
				}
				if (CurrencyCode.IsSet())
				{
					JsonData += FString::Printf(TEXT("\"currency_code\": \"%s\", "), *CurrencyCode.GetValue());
				}
				if (Sku.IsSet())
				{
					JsonData += FString::Printf(TEXT("\"sku\": \"%s\", "), *Sku.GetValue());
				}
				if (Platform.IsSet())
				{
					JsonData += FString::Printf(TEXT("\"platform\": \"%s\""), *Platform.GetValue());
				}

				JsonData += TEXT("}");

				return JsonData;
			}

		};

		/** @brief A structure containing individual receipt offer data for a platform purchase */
		struct FReceiptOfferData
		{
			/** The namespace for the receipt */
			TOptional<FString> Namespace;

			/** The sku for the receipt */
			TOptional<FString> Sku;

			/** The quantity of the receipt */
			TOptional<int32> Quantity;

			/** The list of entitlements from the receipt */
			TOptional<TArray<FString>> EntitlementIds;

			/** @brief Converts the receipt offer data to a JSON string */
			FString ToJson() const
			{
				FString JsonData;

				JsonData += TEXT("{");

				if (Namespace.IsSet())
				{
					JsonData += FString::Printf(TEXT("\"namespace\": \"%s\", "), *Namespace.GetValue());
				}
				if (Sku.IsSet())
				{
					JsonData += FString::Printf(TEXT("\"sku\": \"%s\", "), *Sku.GetValue());
				}
				if (Quantity.IsSet())
				{
					JsonData += FString::Printf(TEXT("\"quantity\": %d, "), Quantity.GetValue());
				}
				if (EntitlementIds.IsSet())
				{
					JsonData += TEXT("\"entitlement_ids\": [");
					for (int32 i = 0; i < EntitlementIds.GetValue().Num(); ++i)
					{
						JsonData += FString::Printf(TEXT("\"%s\""), *EntitlementIds.GetValue()[i]);
						if (i < EntitlementIds.GetValue().Num() - 1)
						{
							JsonData += TEXT(", ");
						}
					}
					JsonData += TEXT("], ");
				}

				JsonData += TEXT("}");

				return JsonData;
			}
		};

		/** @brief A structure containing receipt data for a platform purchase */
		struct FReceiptData
		{
			/** The transaction id for the receipt */
			TOptional<FString> TransactionId;

			/** List of the receipt offers */
			TArray<FReceiptOfferData> ReceiptOffers;

			/** @brief Converts the receipt data to a JSON string */
			FString ToJson() const
			{
				FString JsonData;

				JsonData += TEXT("{");

				if (TransactionId.IsSet())
				{
					JsonData += FString::Printf(TEXT("\"transaction_id\": \"%s\", "), *TransactionId.GetValue());
				}
				if (ReceiptOffers.Num() > 0)
				{
					JsonData += TEXT("\"receipt_offers\": [");
					for (int32 i = 0; i < ReceiptOffers.Num(); ++i)
					{
						JsonData += ReceiptOffers[i].ToJson();
						if (i < ReceiptOffers.Num() - 1)
						{
							JsonData += TEXT(", ");
						}
					}
					JsonData += TEXT("], ");
				}

				JsonData += TEXT("}");

				return JsonData;
			}
		};

		/** The checkout data for the purchase */
		FCheckoutData CheckoutData;

		/** The receipt data for the purchase */
		FReceiptData ReceiptData;

		/** The state of the purchase */
		FString State;

		/** @brief custom data fields (will be auto-prefixed with custom data prefix) */
		TOptional<TMap<FString, FString>> CustomData;

		FPlatformPurchaseEvent()
			: CheckoutData()
			, ReceiptData()
			, State()
			, CustomData()
		{
		}

		void EmitTo(IAnalyticsProvider* Provider) const
		{
			Emit(Provider, CheckoutData, ReceiptData, State, CustomData);
		}

		static void Emit(
			IAnalyticsProvider* Provider,
			const FCheckoutData& InCheckoutData,
			const FReceiptData& InReceiptData,
			const FString& InState,
			const TOptional<TMap<FString, FString>>& InCustomData = TOptional<TMap<FString, FString>>()
		)
		{
			check(Provider != nullptr);
			TArray<FAnalyticsEventAttribute> Attributes;

			Attributes.Add(FAnalyticsEventAttribute(TEXT("checkout_data"), InCheckoutData.ToJson()));
			Attributes.Add(FAnalyticsEventAttribute(TEXT("receipt_data"), InReceiptData.ToJson()));
			Attributes.Add(FAnalyticsEventAttribute(TEXT("state"), InState));

			CreateCustomDataAttributes(InCustomData, Attributes);

			Provider->RecordEvent(GetEventName(), Attributes);
		}
	};



	/**
	* @brief This is a wrapper for providing custom event data
	*/
	struct FCustomEvent
	{
		// Attributes

		/** @brief Name of the event */
		FString EventName;

		/** @brief Attribute list */
		TArray<FAnalyticsEventAttribute> Attributes;

		/** @brief custom data fields (will be auto-prefixed with custom data prefix) */
		TOptional<TMap<FString, FString>> CustomData;

		FCustomEvent()
			: EventName()
			, Attributes()
			, CustomData()
		{
		}

		void EmitTo(IAnalyticsProvider* Provider) const
		{
			Emit(Provider, EventName, Attributes, CustomData);
		}

		static void Emit(
			IAnalyticsProvider* Provider,
			const FString& InEventName,
			const TArray<FAnalyticsEventAttribute>& InAttributes,
			const TOptional<TMap<FString, FString>>& InCustomData = TOptional<TMap<FString, FString>>()
		)
		{
			check(Provider != nullptr);
			TArray<FAnalyticsEventAttribute> Attributes = InAttributes;

			CreateCustomDataAttributes(InCustomData, Attributes);

			Provider->RecordEvent(InEventName, Attributes);
		}
	};
}

/**
 *	@}
 */