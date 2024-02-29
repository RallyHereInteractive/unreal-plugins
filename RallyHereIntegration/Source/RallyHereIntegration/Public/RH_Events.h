// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "Containers/Array.h"
#include "Containers/UnrealString.h"
#include "Misc/Optional.h"

#include "Analytics.h"
#include "Interfaces/IAnalyticsProvider.h"
#include "RH_Common.h"
#include "EventsAPI.h"

class UGameInstance;

//#include "RH_Events.generated.h"


/** @brief Namespace containing RallyHere GETS Standard Events wrappers*/
namespace RHStandardEvents
{
/** @defgroup Events RallyHere Events
 *  @{
 */

	// prefix used to pass custom data, will be stripped out by the default rally here event provider
	static FString CustomDataPrefix = TEXT("__CUSTOM_DATA__.");

	void RALLYHEREINTEGRATION_API CreateCustomDataAttributes(const TOptional<TMap<FString, FString>>& InCustomData, TArray<FAnalyticsEventAttribute>& Attributes);

	TSharedPtr<class IAnalyticsProvider> RALLYHEREINTEGRATION_API AutoCreateAnalyticsProvider();

	FORCEINLINE FJsonFragment JsonValueToFragment(const TSharedPtr<FJsonValue>& InJsonValue)
	{
		FString ValueString;
		URHAPI_JsonObjectBlueprintLibrary::FRHAPI_JsonObjectToString(InJsonValue->AsObject(), ValueString);
		return FJsonFragment(MoveTemp(ValueString));
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

		/** @brief automaticly harvest data and emit the event */
		static void RALLYHEREINTEGRATION_API AutoEmit(IAnalyticsProvider* Provider, UGameInstance* pGameInstance);

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
		TOptional<float> DurationSeconds;

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
			const TOptional<float>& InDurationSeconds,
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

		/** @brief automaticly harvest data and emit the event */
		static void RALLYHEREINTEGRATION_API AutoEmit(IAnalyticsProvider* Provider, class UGameInstance* pGameInstance);

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

		/** @brief Whether or not the join was an overall success. */
		bool IsSuccess;

		/** @brief The session_id of the instance the player is attempting to join */
		TOptional<FString> SessionId;

		/** @brief The instance_id of the instance the player is attempting to join */
		TOptional<FString> InstanceId;

		/** @brief The reason for the failure to join the instance. */
		TOptional<FString> Reason;

		/** @brief custom data fields (will be auto-prefixed with custom data prefix) */
		TOptional<TMap<FString, FString>> CustomData;

		FInstanceJoinCompleteEvent()
			: IsSuccess(false)
			, SessionId()
			, InstanceId()
			, Reason()
			, CustomData()
		{
		}

		void EmitTo(IAnalyticsProvider* Provider) const
		{
			Emit(Provider, IsSuccess, SessionId, InstanceId, Reason, CustomData);
		}

		static void Emit(
			IAnalyticsProvider* Provider,
			bool InIsSuccess,
			const TOptional<FString>& InSessionId,
			const TOptional<FString>& InInstanceId,
			const TOptional<FString>& InReason,
			const TOptional<TMap<FString, FString>>& InCustomData = TOptional<TMap<FString, FString>>()
		)
		{
			check(Provider != nullptr);
			TArray<FAnalyticsEventAttribute> Attributes;

			Attributes.Add(FAnalyticsEventAttribute(TEXT("is_success"), InIsSuccess));

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
	* rh.instance_hello_received
	* @brief This event is triggered when the host detects a hello signal from a player / game client attempting to connect to it.
	*/
	struct FInstanceHelloReceivedEvent
	{
		static FString GetEventName() { return TEXT("rh.instance_hello_received"); }

		// Attributes

		/** @brief The session_id of the instance the player is attempting to join */
		TOptional<FString> SessionId;

		/** @brief The instance_id of the instance the player is attempting to join */
		TOptional<FString> InstanceId;

		/** @brief The user id of the instance the player is attempting to join */
		TOptional<FGuid> UserId;

		/** @brief The incoming IP Address the connection is originating from */
		TOptional<FString> IpAddress;

		/** @brief custom data fields (will be auto-prefixed with custom data prefix) */
		TOptional<TMap<FString, FString>> CustomData;

		FInstanceHelloReceivedEvent()
			: SessionId()
			, InstanceId()
			, UserId()
			, IpAddress()
			, CustomData()
		{
		}

		void EmitTo(IAnalyticsProvider* Provider) const
		{
			Emit(Provider, SessionId, InstanceId, UserId, IpAddress, CustomData);
		}

		static void Emit(
			IAnalyticsProvider* Provider,
			const TOptional<FString>& InSessionId,
			const TOptional<FString>& InInstanceId,
			const TOptional<FGuid>& InUserId,
			const TOptional<FString>& InIpAddress,
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
			if (InUserId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("user_id"), InUserId.GetValue().ToString(EGuidFormats::DigitsWithHyphens)));
			}
			if (InIpAddress.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("ip_address"), InIpAddress.GetValue()));
			}

			CreateCustomDataAttributes(InCustomData, Attributes);

			Provider->RecordEvent(GetEventName(), Attributes);
		}

	};

	/**
	* rh.instance_login_received
	* @brief This event is triggered when the host receives a login signal from a player / game client attempting to connect to it.
	*/
	struct FInstanceLoginReceivedEvent
	{
		static FString GetEventName() { return TEXT("rh.instance_login_received"); }

		// Attributes

		bool IsSuccess;

		/** @brief The session_id of the instance the player is attempting to join */
		TOptional<FString> SessionId;

		/** @brief The instance_id of the instance the player is attempting to join */
		TOptional<FString> InstanceId;

		/** @brief The user id of the instance the player is attempting to join */
		TOptional<FGuid> UserId;

		/** @brief Platform UserId of the player */
		TOptional<FString> PlatformUserId;

		/** @brief Platform Id of the player */
		TOptional<FString> PlatformId;

		/** @brief The connection string the player is attempting to join with */
		TOptional<FString> ConnectionString;

		struct FSplitJoinInfo
		{
			/** @brief the parent user id for this split connection */
			TOptional<FGuid> ParentUserId;

			/** @brief the player index for this split connection */
			TOptional<int32> PlayerIndex;

			/** @brief Converts the receipt data to a JSON value */
			TSharedRef<FJsonValue> ToJsonValue() const;

			FSplitJoinInfo()
				: ParentUserId()
				, PlayerIndex()
			{
			}

			FSplitJoinInfo(TOptional<FGuid> InParentUserId, TOptional<int32> InPlayerIndex)
				: ParentUserId(InParentUserId)
				, PlayerIndex(InPlayerIndex)
			{
			}
		};

		/** @brief the split join info for this connection */
		TOptional<FSplitJoinInfo> SplitJoinInfo;

		/** @brief custom data fields (will be auto-prefixed with custom data prefix) */
		TOptional<TMap<FString, FString>> CustomData;

		FInstanceLoginReceivedEvent()
			: IsSuccess(false)
			, SessionId()
			, InstanceId()
			, UserId()
			, PlatformUserId()
			, PlatformId()
			, ConnectionString()
			, SplitJoinInfo()
			, CustomData()
		{
		}

		void EmitTo(IAnalyticsProvider* Provider) const
		{
			Emit(Provider, IsSuccess, SessionId, InstanceId, UserId, PlatformUserId, PlatformId, ConnectionString, SplitJoinInfo, CustomData);
		}

		static void Emit(
			IAnalyticsProvider* Provider,
			bool InIsSuccess,
			const TOptional<FString>& InSessionId,
			const TOptional<FString>& InInstanceId,
			const TOptional<FGuid>& InUserId,
			const TOptional<FString>& InPlatformUserId,
			const TOptional<FString>& InPlatformId,
			const TOptional<FString>& InConnectionString,
			const TOptional<FSplitJoinInfo>& InSplitJoinInfo,
			const TOptional<TMap<FString, FString>>& InCustomData = TOptional<TMap<FString, FString>>()
		)
		{
			check(Provider != nullptr);

			TArray<FAnalyticsEventAttribute> Attributes;

			Attributes.Add(FAnalyticsEventAttribute(TEXT("is_success"), InIsSuccess));

			if (InSessionId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("session_id"), InSessionId.GetValue()));
			}
			if (InInstanceId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("instance_id"), InInstanceId.GetValue()));
			}
			if (InUserId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("user_id"), InUserId.GetValue().ToString(EGuidFormats::DigitsWithHyphens)));
			}
			if (InPlatformUserId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("platform_user_id"), InPlatformUserId.GetValue()));
			}
			if (InPlatformId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("platform_id"), InPlatformId.GetValue()));
			}
			if (InConnectionString.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("connection_string"), InConnectionString.GetValue()));
			}
			if (InSplitJoinInfo.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("split_join_info"), JsonValueToFragment(InSplitJoinInfo.GetValue().ToJsonValue())));
			}

			CreateCustomDataAttributes(InCustomData, Attributes);

			Provider->RecordEvent(GetEventName(), Attributes);
		}
	};


	/**
	* rh.instance_join_received
	* @brief This event is triggered when the host receives a join signal from a player / game client attempting to connect to it.
	*/
	struct FInstanceJoinReceivedEvent
	{
		static FString GetEventName() { return TEXT("rh.instance_join_received"); }

		// Attributes

		bool IsSuccess;

		/** @brief The session_id of the instance the player is attempting to join */
		TOptional<FString> SessionId;

		/** @brief The instance_id of the instance the player is attempting to join */
		TOptional<FString> InstanceId;

		/** @brief The user id of the instance the player is attempting to join */
		TOptional<FGuid> UserId;

		/** @brief custom data fields (will be auto-prefixed with custom data prefix) */
		TOptional<TMap<FString, FString>> CustomData;

		FInstanceJoinReceivedEvent()
			: IsSuccess(false)
			, SessionId()
			, InstanceId()
			, UserId()
			, CustomData()
		{
		}

		void EmitTo(IAnalyticsProvider* Provider) const
		{
			Emit(Provider, IsSuccess, SessionId, InstanceId, UserId, CustomData);
		}

		static void Emit(
			IAnalyticsProvider* Provider,
			bool InIsSuccess,
			const TOptional<FString>& InSessionId,
			const TOptional<FString>& InInstanceId,
			const TOptional<FGuid>& InUserId,
			const TOptional<TMap<FString, FString>>& InCustomData = TOptional<TMap<FString, FString>>()
		)
		{
			check(Provider != nullptr);

			TArray<FAnalyticsEventAttribute> Attributes;

			Attributes.Add(FAnalyticsEventAttribute(TEXT("is_success"), InIsSuccess));

			if (InSessionId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("session_id"), InSessionId.GetValue()));
			}
			if (InInstanceId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("instance_id"), InInstanceId.GetValue()));
			}
			if (InUserId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("user_id"), InUserId.GetValue().ToString(EGuidFormats::DigitsWithHyphens)));
			}

			CreateCustomDataAttributes(InCustomData, Attributes);

			Provider->RecordEvent(GetEventName(), Attributes);
		}
	};


	/**
	* rh.instance_client_disconnect
	* @brief This event is triggered when the host detects a client disconnection (either caused by it, or by the client).
	*/
	struct FInstanceClientDisconnectEvent
	{
		static FString GetEventName() { return TEXT("rh.instance_client_disconnect"); }

		// Attributes

		/** @brief The session_id of the session */
		TOptional<FString> SessionId;

		/** @brief The instance_id of the instance */
		TOptional<FString> InstanceId;

		/** @brief The user id of the instance the player disconnecting */
		TOptional<FGuid> UserId;

		/** @brief The reason for the disconnect, if known */
		TOptional<FString> Reason;

		/** @brief custom data fields (will be auto-prefixed with custom data prefix) */
		TOptional<TMap<FString, FString>> CustomData;

		FInstanceClientDisconnectEvent()
			: SessionId()
			, InstanceId()
			, UserId()
			, Reason()
			, CustomData()
		{
		}

		void EmitTo(IAnalyticsProvider* Provider) const
		{
			Emit(Provider, SessionId, InstanceId, UserId, Reason, CustomData);
		}

		static void Emit(
			IAnalyticsProvider* Provider,
			const TOptional<FString>& InSessionId,
			const TOptional<FString>& InInstanceId,
			const TOptional<FGuid>& InUserId,
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
			if (InUserId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("user_id"), InUserId.GetValue().ToString(EGuidFormats::DigitsWithHyphens)));
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
		TOptional<float> DurationSeconds;

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
			const TOptional<float>& InDurationSeconds,
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

		/** @brief Vendor ID for the order */
		TOptional<FString> VendorId;
		
		/** @brief Loot ID for the order */
		TOptional<FString> LootId;

		/** @brief Specific Item ID */
		TOptional<FString> ItemId;

		/** @brief The quantity value before the progression event */
		TOptional<int32> StartProgress;

		/** @brief The quantity value after the progression event */
		TOptional<int32> EndProgress;

		/** @brief Identifier for the authentication provider */
		TOptional<FString> ProviderId;

		/** @brief Order reference ID */
		TOptional<FString> OrderRefId;

		/** @brief Order identifier */
		TOptional<FString> OrderId;

		/** @brief Order entry identifier */
		TOptional<FString> OrderEntryId;

		/** @brief Generic description string */
		TOptional<FString> Description;

		/** @brief A SessionID to be associated with this event (ex: for gameplay rewards) */
		TOptional<FString> SessionId;

		/** @brief A InstanceId to be associated with this event (ex: for gameplay rewards) */
		TOptional<FString> InstanceId;

		/** @brief custom data fields (will be auto-prefixed with custom data prefix) */
		TOptional<TMap<FString, FString>> CustomData;

		FObjectiveProgressEvent()
			: Category()
			, Status()
			, Context()
			, VendorId()
			, LootId()
			, ItemId()
			, StartProgress()
			, EndProgress()
			, ProviderId()
			, OrderRefId()
			, OrderId()
			, OrderEntryId()
			, Description()
			, SessionId()
			, InstanceId()
			, CustomData()
		{
		}

		void EmitTo(IAnalyticsProvider* Provider) const
		{
			Emit(Provider, Category, Status, Context, VendorId, LootId, ItemId, StartProgress, EndProgress, ProviderId, OrderRefId, OrderId, OrderEntryId, Description, SessionId, InstanceId, CustomData);
		}

		static void Emit(
			IAnalyticsProvider* Provider,
			const FString& InCategory,
			const FString& InStatus,
			const TOptional<FString>& InContext,
			const TOptional<FString>& InVendorId,
			const TOptional<FString>& InLootId,
			const TOptional<FString>& InItemId,
			const TOptional<int32>& InStartProgress,
			const TOptional<int32>& InEndProgress,
			const TOptional<FString>& InProviderId,
			const TOptional<FString>& InOrderRefId,
			const TOptional<FString>& InOrderId,
			const TOptional<FString>& InOrderEntryId,
			const TOptional<FString>& InDescription,
			const TOptional<FString>& InSessionId,
			const TOptional<FString>& InInstanceId,
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
			if (InLootId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("loot_id"), InLootId.GetValue()));
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
			if (InSessionId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("session_id"), InSessionId.GetValue()));
			}
			if (InInstanceId.IsSet())
			{
				Attributes.Add(FAnalyticsEventAttribute(TEXT("instance_id"), InInstanceId.GetValue()));
			}

			CreateCustomDataAttributes(InCustomData, Attributes);

			Provider->RecordEvent(GetEventName(), Attributes);
		}
	};

	/**
	* rh.player_game_result
	* @brief This event is meant to capture high level information about a completed match.
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
		TOptional<float> DurationSeconds;

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
			const TOptional<float>& InDurationSeconds,
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

			/** @brief Converts the receipt data to a JSON value */
			TSharedRef<FJsonValue> ToJsonValue() const;

			FCheckoutData()
				: DisplayedPrice()
				, NumericPrice()
				, DisplayedPresalePrice()
				, NumericPresalePrice()
				, CurrencyCode()
				, Sku()
				, Platform()
			{
			}

			FCheckoutData(TOptional<FString> InDisplayedPrice, TOptional<float> InNumericPrice, TOptional<FString> InDisplayedPresalePrice, TOptional<float> InNumericPresalePrice, TOptional<FString> InCurrencyCode, TOptional<FString> InSku, TOptional<FString> InPlatform)
				: DisplayedPrice(InDisplayedPrice)
				, NumericPrice(InNumericPrice)
				, DisplayedPresalePrice(InDisplayedPresalePrice)
				, NumericPresalePrice(InNumericPresalePrice)
				, CurrencyCode(InCurrencyCode)
				, Sku(InSku)
				, Platform(InPlatform)
			{
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

			/** @brief Converts the receipt data to a JSON value */
			TSharedRef<FJsonValue> ToJsonValue() const;

			FReceiptOfferData()
				: Namespace()
				, Sku()
				, Quantity()
				, EntitlementIds()
			{
			}

			FReceiptOfferData(TOptional<FString> InNamespace, TOptional<FString> InSku, TOptional<int32> InQuantity, TOptional<TArray<FString>> InEntitlementIds)
				: Namespace(InNamespace)
				, Sku(InSku)
				, Quantity(InQuantity)
				, EntitlementIds(InEntitlementIds)
			{
			}
		};

		/** @brief A structure containing receipt data for a platform purchase */
		struct FReceiptData
		{
			/** The transaction id for the receipt */
			TOptional<FString> TransactionId;

			/** List of the receipt offers */
			TArray<FReceiptOfferData> ReceiptOffers;

			/** @brief Converts the receipt data to a JSON value */
			TSharedRef<FJsonValue> ToJsonValue() const;

			FReceiptData()
				: TransactionId()
				, ReceiptOffers()
			{
			}

			FReceiptData(TOptional<FString> InTransactionId, TArray<FReceiptOfferData> InReceiptOffers)
				: TransactionId(InTransactionId)
				, ReceiptOffers(InReceiptOffers)
			{
			}
		};

		/** The checkout data for the purchase */
		FCheckoutData Checkout;

		/** The receipt data for the purchase */
		FReceiptData Receipt;

		/** The state of the purchase */
		FString State;

		/** @brief custom data fields (will be auto-prefixed with custom data prefix) */
		TOptional<TMap<FString, FString>> CustomData;

		FPlatformPurchaseEvent()
			: Checkout()
			, Receipt()
			, State()
			, CustomData()
		{
		}

		void EmitTo(IAnalyticsProvider* Provider) const
		{
			Emit(Provider, Checkout, Receipt, State, CustomData);
		}

		static void Emit(
			IAnalyticsProvider* Provider,
			const FCheckoutData& InCheckout,
			const FReceiptData& InReceipt,
			const FString& InState,
			const TOptional<TMap<FString, FString>>& InCustomData = TOptional<TMap<FString, FString>>()
		)
		{
			check(Provider != nullptr);
			TArray<FAnalyticsEventAttribute> Attributes;

			Attributes.Add(FAnalyticsEventAttribute(TEXT("checkout"), JsonValueToFragment(InCheckout.ToJsonValue())));
			Attributes.Add(FAnalyticsEventAttribute(TEXT("receipt"), JsonValueToFragment(InReceipt.ToJsonValue())));
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

	/**
	 *	@}
	 */
}
