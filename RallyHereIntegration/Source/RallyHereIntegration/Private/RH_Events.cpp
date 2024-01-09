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