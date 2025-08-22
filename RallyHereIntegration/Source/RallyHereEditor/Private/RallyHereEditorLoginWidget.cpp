// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RallyHereEditorLoginWidget.h"

#include "RallyHereDeveloperAPIAuthContext.h"
#include "Engine/Engine.h"
#include "RallyHereEditor.h"
#include "SWebBrowser.h"

//$$ MUL - Begin: Fix RH editor login
#include "HttpModule.h"
#include "EditorUtilitySubsystem.h"
#include "IWebBrowserCookieManager.h"
#include "WebBrowserModule.h"

#define LOCTEXT_NAMESPACE "RallyHereEditorLoginWidget"

SRallyHereEditorLoginWidget::SRallyHereEditorLoginWidget()
	: SCompoundWidget()
{
}

SRallyHereEditorLoginWidget::~SRallyHereEditorLoginWidget()
{
}
void SRallyHereEditorLoginWidget::Construct(const FArguments& InArgs, const TSharedRef<SDockTab>& ConstructUnderMajorTab, const TSharedPtr<SWindow>& ConstructUnderWindow)
{
	const URH_DevIntegrationSettings* Settings = GetDefault<URH_DevIntegrationSettings>();

	UE_LOG(LogRallyHereEditor, Log, TEXT("LogRallyHereEditor: InitialURL: %s"), *Settings->InitialLoginURL);

	ChildSlot
	[
		SNew(SWebBrowser)
		.InitialURL(Settings->InitialLoginURL)
		.ShowControls(false)
		.ShowAddressBar(false)
		.OnLoadUrl(this, &SRallyHereEditorLoginWidget::HandleClientId)
		.OnBeforeNavigation(this, &SRallyHereEditorLoginWidget::HandleToken)
	];
}

bool SRallyHereEditorLoginWidget::HandleToken(const FString& Url, const FWebNavigationRequest& Request)
{
	// Grab access token
	if (FString LoginCode = ParseValueFromUrl(Url, "code="); !LoginCode.IsEmpty())
	{
		const URH_DevIntegrationSettings* Settings = GetDefault<URH_DevIntegrationSettings>();
		const FRH_DevSandboxConfiguration* SandboxConfig = Settings->GetSandboxConfiguration(FRallyHereEditorModule::Get().GetSandboxId());
		const FDevAuthContextPtr AuthContext = FModuleManager::Get().LoadModuleChecked<FRallyHereEditorModule>(FRallyHereEditorModule::GetModuleName()).GetAuthContext();
		
		const FString ClientId = AuthContext->GetClientId();
		const FString InPayload = FString::Printf(TEXT("grant_type=authorization_code&client_id=%s&code=%s&redirect_uri=%s&audience=%s"), *ClientId, *LoginCode, *Settings->InitialLoginURL, *Settings->AuthTokenAudience);
		
		TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
		HttpRequest->SetVerb("POST");
		HttpRequest->SetURL(SandboxConfig->AuthUrl);
		HttpRequest->SetHeader(TEXT("content-type"), TEXT("application/x-www-form-urlencoded;charset=UTF-8"));
		HttpRequest->SetContentAsString(InPayload);
		HttpRequest->OnProcessRequestComplete().BindRaw(this, &SRallyHereEditorLoginWidget::GetAccessToken);
		return HttpRequest->ProcessRequest();
	}
	return false;
}

bool SRallyHereEditorLoginWidget::HandleClientId(const FString& Method, const FString& Url, FString& Response)
{
	// Save client Id
	if (Url.Contains("https://login.rallyhere.gg/authorize"))
	{
		if (FString ClientId = ParseValueFromUrl(Url, "client_id="); !ClientId.IsEmpty())
		{
			FDevAuthContextPtr AuthContext = FModuleManager::Get().LoadModuleChecked<FRallyHereEditorModule>(FRallyHereEditorModule::GetModuleName()).GetAuthContext();
			AuthContext->SetClientId(ClientId);
		}
	}
	return false;
}

void SRallyHereEditorLoginWidget::GetAccessToken(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded)
{
	if(bSucceeded && HttpResponse.IsValid())
	{
		FDevAuthContextPtr AuthContext = FModuleManager::Get().LoadModuleChecked<FRallyHereEditorModule>(FRallyHereEditorModule::GetModuleName()).GetAuthContext();
		if(AuthContext->AuthFromHttpResponse(HttpResponse))
		{
			CloseTab();
			FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("Login Succeeded", "Login Succeeded."));
		}
		else
		{
			CloseTab();
			FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("Login Failed", "Authentification has succeeded but we were unable to grab the access token from it."));
		}
	}
	else
	{
		CloseTab();
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("Login Failed", "The credntials were accepted but authentification has failed."));
	}
}

void SRallyHereEditorLoginWidget::CloseTab()
{
	if(!GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>()->CloseTabByID(devLoginTabName))
	{
		if(TSharedPtr<FTabManager> TabManager = FGlobalTabmanager::Get(); TabManager.IsValid())
		{
			if(const TSharedPtr<SDockTab> ExistingTab = TabManager->FindExistingLiveTab(devLoginTabName))
			{
				ExistingTab->RequestCloseTab();
			}
		}
	}
}

FString SRallyHereEditorLoginWidget::ParseValueFromUrl(const FString& Url, const FString& ValueName)
{
	const int32 ValueStartIndex = Url.Find(ValueName);
	if (ValueStartIndex > 0)
	{
		FString Value = Url.RightChop(ValueStartIndex + ValueName.Len());
		const int32 ValueEndIndex = Value.Find("&");
		if (ValueEndIndex > 0)
		{
			Value = Value.Left(ValueEndIndex);
		}
		return Value;
	}

	return "";
}
//$$ MUL - End: Fix RH editor login

#undef LOCTEXT_NAMESPACE
