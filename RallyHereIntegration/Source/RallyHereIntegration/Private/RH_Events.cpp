// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RH_Events.h"

#include "Interfaces/IPluginManager.h"
#include "Engine/GameViewportClient.h"
#include "Engine/GameInstance.h"
#include "Engine/Engine.h"
#include "HAL/PlatformMemoryHelpers.h"
#include "Analytics.h"
#include "Interfaces/IAnalyticsProvider.h"
#include "Misc/EngineVersion.h"
#include "Misc/App.h"
#include "Misc/CommandLine.h"

#include "RallyHereIntegrationModule.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_ConfigSubsystem.h"

namespace RHStandardEvents
{
	void CreateCustomDataAttributes(const TOptional<TMap<FString, FString>>& InCustomData, TArray<FAnalyticsEventAttribute>& Attributes)
	{
		if (InCustomData.IsSet())
		{
			for (const auto& Pair : InCustomData.GetValue())
			{
				Attributes.Add(FAnalyticsEventAttribute(CustomDataPrefix + Pair.Key, Pair.Value));
			}
		}
	}

	TSharedPtr<class IAnalyticsProvider> AutoCreateAnalyticsProvider()
	{
		return FAnalytics::Get().GetDefaultConfiguredProvider();
	}

	void FCorrelationStartEvent::AutoEmit(IAnalyticsProvider* Provider, UGameInstance* pGameInstance)
	{
		FCorrelationStartEvent CorrelationStartEvent;

		CorrelationStartEvent.PlatformName = FPlatformProperties::IniPlatformName();
		CorrelationStartEvent.ClientBuildVersion = FApp::GetBuildVersion();
		CorrelationStartEvent.EngineVersion = FEngineVersion::Current().ToString(EVersionComponent::Patch);

		auto RHIntegrationPlugin = IPluginManager::Get().FindPlugin(TEXT("RallyHereIntegration"));
		if (RHIntegrationPlugin != nullptr)
		{
			const auto& Descriptor = RHIntegrationPlugin->GetDescriptor();
			CorrelationStartEvent.IntegrationPluginVersion = Descriptor.VersionName;
		}

		if (pGameInstance != nullptr)
		{
			auto pGISubsystem = pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
			if (pGISubsystem != nullptr)
			{
				const auto& TimeCache = pGISubsystem->GetConfigSubsystem()->GetServerTimeCache();
				FDateTime ServerTime;
				if (TimeCache.GetServerTime(ServerTime))
				{
					CorrelationStartEvent.ServerTimestamp = ServerTime.ToIso8601();;
				}
			}
		}
		CorrelationStartEvent.ClientTimestamp = FRH_ServerTimeCache::GetLocalTime().ToIso8601();
		CorrelationStartEvent.CommandLineArg = FCommandLine::Get();
		CorrelationStartEvent.IsEditor = GEngine != nullptr ? GEngine->IsEditor() : GIsEditor;
		CorrelationStartEvent.Mode = FGenericPlatformMisc::GetEngineMode();


		CorrelationStartEvent.EmitTo(Provider);
	}

	void FClientDeviceEvent::AutoEmit(IAnalyticsProvider* Provider, UGameInstance* pGameInstance)
	{
		FClientDeviceEvent ClientDeviceEvent;

		ClientDeviceEvent.CpuType = FPlatformMisc::GetCPUBrand();
		ClientDeviceEvent.CpuCores = FPlatformMisc::NumberOfCores();
		ClientDeviceEvent.GpuType = FPlatformMisc::GetPrimaryGPUBrand();

		if (pGameInstance != nullptr)
		{
			const auto GameViewportClient = pGameInstance->GetGameViewportClient();
			if (GameViewportClient != nullptr)
			{
				FVector2D ViewportSize;
				GameViewportClient->GetViewportSize(ViewportSize);
				ClientDeviceEvent.ScreenHeight = ViewportSize.Y;
				ClientDeviceEvent.ScreenWidth = ViewportSize.X;
			}
		}

		{
			FPlatformMemoryStats MemoryStats = PlatformMemoryHelpers::GetFrameMemoryStats();
			ClientDeviceEvent.RamTotal = MemoryStats.TotalPhysicalGB;
			ClientDeviceEvent.RamAvailable = ((float)MemoryStats.AvailablePhysical) / (1024.f * 1024.f * 1024.f);
		}

		//ClientDeviceEvent.Ip;
		ClientDeviceEvent.DeviceType = FPlatformProperties::PlatformName();

		ClientDeviceEvent.EmitTo(Provider);

	}

	TSharedRef<FJsonValue> FInstanceLoginReceivedEvent::FSplitJoinInfo::ToJsonValue() const
	{
		auto JsonData = MakeShared<FJsonObject>();

		if (ParentUserId.IsSet())
		{
			JsonData->SetStringField(TEXT("parent_user_id"), ParentUserId.GetValue().ToString(EGuidFormats::DigitsWithHyphens));
		}

		if (PlayerIndex.IsSet())
		{
			JsonData->SetNumberField(TEXT("player_index"), PlayerIndex.GetValue());
		}

		return MakeShared<FJsonValueObject>(JsonData);
	}

	TSharedRef<FJsonValue> FPlatformPurchaseEvent::FCheckoutData::ToJsonValue() const
	{
		auto JsonData = MakeShared<FJsonObject>();
				
		if (DisplayedPrice.IsSet())
		{
			JsonData->SetStringField(TEXT("displayed_price"), DisplayedPrice.GetValue());
		}
		if (NumericPrice.IsSet())
		{
			JsonData->SetNumberField(TEXT("numeric_price"), NumericPrice.GetValue());
		}
		if (DisplayedPresalePrice.IsSet())
		{
			JsonData->SetStringField(TEXT("displayed_presale_price"), DisplayedPresalePrice.GetValue());
		}
		if (NumericPresalePrice.IsSet())
		{
			JsonData->SetNumberField(TEXT("numeric_presale_price"), NumericPresalePrice.GetValue());
		}
		if (CurrencyCode.IsSet())
		{
			JsonData->SetStringField(TEXT("currency_code"), CurrencyCode.GetValue());
		}
		if (Sku.IsSet())
		{
			JsonData->SetStringField(TEXT("sku"), Sku.GetValue());
		}
		if (Platform.IsSet())
		{
			JsonData->SetStringField(TEXT("platform"), Platform.GetValue());
		}

		return MakeShared<FJsonValueObject>(JsonData);
	}

	TSharedRef<FJsonValue> FPlatformPurchaseEvent::FReceiptOfferData::ToJsonValue() const
	{
		auto JsonData = MakeShared<FJsonObject>();

		if (Namespace.IsSet())
		{
			JsonData->SetStringField(TEXT("namespace"), Namespace.GetValue());
		}
		if (Sku.IsSet())
		{
			JsonData->SetStringField(TEXT("sku"), Sku.GetValue());
		}
		if (Quantity.IsSet())
		{
			JsonData->SetNumberField(TEXT("quantity"), Quantity.GetValue());
		}
		if (EntitlementIds.IsSet())
		{
			TArray<TSharedPtr<FJsonValue>> EntitlementIdJsonValues;
			const auto& EntitlementIdRef = EntitlementIds.GetValue();
			for (int32 i = 0; i < EntitlementIdRef.Num(); ++i)
			{
				EntitlementIdJsonValues.Add(MakeShareable(new FJsonValueString(EntitlementIdRef[i])));
			}

			JsonData->SetArrayField(TEXT("entitlement_ids"), EntitlementIdJsonValues);
		}

		return MakeShared<FJsonValueObject>(JsonData);
	}

	TSharedRef<FJsonValue> FPlatformPurchaseEvent::FReceiptData::ToJsonValue() const
	{
		auto JsonData = MakeShared<FJsonObject>();

		if (TransactionId.IsSet())
		{
			JsonData->SetStringField(TEXT("transaction_id"), TransactionId.GetValue());
		}
		if (ReceiptOffers.Num() > 0)
		{
			TArray<TSharedPtr<FJsonValue>> ReceiptOfferJsonValues;
			for (int32 i = 0; i < ReceiptOffers.Num(); ++i)
			{
				ReceiptOfferJsonValues.Add(ReceiptOffers[i].ToJsonValue());
			}

			JsonData->SetArrayField(TEXT("receipt_offers"), ReceiptOfferJsonValues);
		}

		return MakeShared<FJsonValueObject>(JsonData);
	}
}

#include "Misc/AutomationTest.h"

#if WITH_DEV_AUTOMATION_TESTS

// todo - move this somewhere more convenient
UWorld* RH_GetSimpleEngineAutomationTestGameWorld(const int32 TestFlags)
{
	// Accessing the game world is only valid for game-only 
	check((TestFlags & EAutomationTestFlags::ApplicationContextMask) == EAutomationTestFlags::ClientContext);
	check(GEngine->GetWorldContexts().Num() == 1);
	check(GEngine->GetWorldContexts()[0].WorldType == EWorldType::Game);

	return GEngine->GetWorldContexts()[0].World();
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FRH_GetsAutomationTestAll, "RHAutomation.Events.All", EAutomationTestFlags::ClientContext | EAutomationTestFlags::RequiresUser | EAutomationTestFlags::ProductFilter | EAutomationTestFlags::MediumPriority)

bool FRH_GetsAutomationTestAll::RunTest(const FString& Parameters)
{
	auto AnalyticsProvider = RHStandardEvents::AutoCreateAnalyticsProvider();
	UTEST_VALID(TEXT("AnalyticsProvider"), AnalyticsProvider);

	auto World = RH_GetSimpleEngineAutomationTestGameWorld(GetTestFlags());
	UTEST_NOT_NULL(TEXT("World"), World);

	auto GameInstance = World->GetGameInstance();
	UTEST_NOT_NULL(TEXT("GameInstance"), GameInstance);

	FDateTime AnalyticsStartTime = FDateTime::UtcNow();
	TMap<FString, FString> GenericCustomData;
	GenericCustomData.Add(TEXT("Test"), TEXT("Automation"));

	AnalyticsProvider->StartSession();

	// emit the auto correlation start event
	RHStandardEvents::FCorrelationStartEvent::AutoEmit(AnalyticsProvider.Get(), GameInstance);
	RHStandardEvents::FClientDeviceEvent::AutoEmit(AnalyticsProvider.Get(), GameInstance);

	{
		// common values for consistency across the entire run
		const FGuid UserIdGuid = FGuid::NewGuid();
		const FString UserId = UserIdGuid.ToString(EGuidFormats::DigitsWithHyphens);
		const FString UserIdPlatformId = EnumToString(ERHAPI_Platform::Anon);
		const FString UserIdPlatformUserId = UserId;
		const FString UserIdPlatformDisplayName = TEXT("TestUser");
		const FString UserIdPersonId = FGuid::NewGuid().ToString(EGuidFormats::DigitsWithHyphens);

		const FGuid UserId2Guid = FGuid::NewGuid();
		const FString UserId2 = UserId2Guid.ToString(EGuidFormats::DigitsWithHyphens);
		const FString UserId2PlatformId = EnumToString(ERHAPI_Platform::Anon);
		const FString UserId2PlatformUserId = UserId2;

		const FString SessionId = FGuid::NewGuid().ToString(EGuidFormats::DigitsWithHyphens);
		const FString InstanceId = FGuid::NewGuid().ToString(EGuidFormats::DigitsWithHyphens);
		const FString Reason = TEXT("TestReason");
		const FString LocalIp = TEXT("127.0.0.1");
		const FString ConnectionString = TEXT("TestConnectionString");
		const FString Status = TEXT("TestStatus");

		const FString VendorId = TEXT("0");
		const FString LootId = TEXT("0");
		const FString ItemId = TEXT("0");

		// set the user id
		AnalyticsProvider->SetUserID(UserId);

		// client instance events
		RHStandardEvents::FInstanceJoinStartEvent::Emit(AnalyticsProvider.Get(), SessionId, InstanceId, ConnectionString, GenericCustomData);
		RHStandardEvents::FInstanceJoinCompleteEvent::Emit(AnalyticsProvider.Get(), true, SessionId, InstanceId, Reason, GenericCustomData);
		RHStandardEvents::FInstanceLeftEvent::Emit(AnalyticsProvider.Get(), SessionId, InstanceId, Reason, GenericCustomData);

		// host instance events
		RHStandardEvents::FInstanceHelloReceivedEvent::Emit(AnalyticsProvider.Get(), SessionId, InstanceId, UserId2Guid, LocalIp, GenericCustomData);
		RHStandardEvents::FInstanceLoginReceivedEvent::Emit(AnalyticsProvider.Get(), true, SessionId, InstanceId, UserId2Guid, UserId2PlatformUserId, UserId2PlatformId, ConnectionString, RHStandardEvents::FInstanceLoginReceivedEvent::FSplitJoinInfo(UserId2Guid, 0), GenericCustomData);
		RHStandardEvents::FInstanceJoinReceivedEvent::Emit(AnalyticsProvider.Get(), true, SessionId, InstanceId, UserId2Guid, GenericCustomData);
		RHStandardEvents::FInstanceClientDisconnectEvent::Emit(AnalyticsProvider.Get(), SessionId, InstanceId, UserId2Guid, Reason, GenericCustomData);

		// login events
		RHStandardEvents::FLoginStartEvent::Emit(AnalyticsProvider.Get(), UserIdPlatformDisplayName, GenericCustomData);
		RHStandardEvents::FLoginCompleteEvent::Emit(AnalyticsProvider.Get(), UserIdPlatformUserId, UserIdPlatformId, Status, UserIdPlatformDisplayName,
			UserIdPersonId, Reason, 0.0f, AnalyticsStartTime.ToIso8601(), AnalyticsStartTime.ToIso8601(),
			GenericCustomData);

		// purchase events
		RHStandardEvents::FObjectiveProgressEvent::Emit(AnalyticsProvider.Get(), FString(TEXT("TestObjective")), Status, Reason, VendorId, LootId, ItemId, 0, 1, 
			FString(TEXT("TestProvider")), FString(TEXT("TestOrderRefId")), FString(TEXT("TestOrderId")), FString(TEXT("TestOrderEntryId")), FString(TEXT("TestDescription")), 
			SessionId, InstanceId,
			GenericCustomData);

		auto Checkout = RHStandardEvents::FPlatformPurchaseEvent::FCheckoutData(FString(TEXT("TestDisplayedPrice")), 5.f, FString(TEXT("TestDisplayedPresalePrice")), 10.f, FString(TEXT("TestCurrencyCode")), FString(TEXT("TestSku")), UserIdPlatformId);
		auto Receipt = RHStandardEvents::FPlatformPurchaseEvent::FReceiptData(FString(TEXT("TestTransactionId")), TArray<RHStandardEvents::FPlatformPurchaseEvent::FReceiptOfferData>());
		TArray<FString> EntitlementIds;
		EntitlementIds.Add(FString(TEXT("TestEntitlementId")));
		Receipt.ReceiptOffers.Add(RHStandardEvents::FPlatformPurchaseEvent::FReceiptOfferData(FString(TEXT("TestNamespace")), FString(TEXT("TestSku")), 1, EntitlementIds));
		RHStandardEvents::FPlatformPurchaseEvent::Emit(AnalyticsProvider.Get(), Checkout, Receipt, FString(TEXT("Complete")), GenericCustomData);

		// misc events
		RHStandardEvents::FPlayerGameResultEvent::Emit(AnalyticsProvider.Get(), 1, SessionId, InstanceId, 0, FString(TEXT("TestTeamId")), FString(TEXT("TestRound")), 
			SessionId, false, false, FString(TEXT("TestPrimaryInputType")),
			GenericCustomData);

		TArray<FAnalyticsEventAttribute> Attributes;
		Attributes.Add(FAnalyticsEventAttribute(TEXT("TestKey"), TEXT("TestValue")));
		RHStandardEvents::FCustomEvent::Emit(AnalyticsProvider.Get(), FString(TEXT("TestEvent")), Attributes, GenericCustomData);
	}

	// emit the correlation end event
	RHStandardEvents::FCorrelationEndEvent::Emit(AnalyticsProvider.Get(), FString(TEXT("End of Test")), (FDateTime::UtcNow() - AnalyticsStartTime).GetTotalSeconds(), GenericCustomData);

	// close the session to flush the events
	AnalyticsProvider->EndSession();
	AnalyticsProvider->FlushEvents();

	// clear out the provider pointer, which should run cleanup
	AnalyticsProvider.Reset();

	// todo - figure out way to evaluate if the events were sent correctly
	return true;
}

#endif