// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "Runtime/Launch/Resources/Version.h"
#if (ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 0)
	#include "Online/CoreOnline.h"
#else
	#include "UObject/CoreOnline.h"
#endif
#include "Interfaces/OnlineIdentityInterface.h"
#include "OnlineSubsystemBasicPackage.h"
#include "Containers/Map.h"

class FOnlineSubsystemBasic;

class FOnlineIdentityBasic : public IOnlineIdentity
{
PACKAGE_SCOPE:
    FOnlineSubsystemBasic* Subsystem;

    FOnlineIdentityBasic(FOnlineSubsystemBasic* InSubsystem);

public:

    virtual ~FOnlineIdentityBasic();

    // IOnlineIdentity

    virtual bool Login(int32 LocalUserNum, const FOnlineAccountCredentials& AccountCredentials) override;
    virtual bool Logout(int32 LocalUserNum) override;
    virtual bool AutoLogin(int32 LocalUserNum) override;
    virtual TSharedPtr<FUserOnlineAccount> GetUserAccount(const FUniqueNetId& UserId) const override;
    virtual TArray<TSharedPtr<FUserOnlineAccount> > GetAllUserAccounts() const override;
    virtual FUniqueNetIdPtr GetUniquePlayerId(int32 LocalUserNum) const override;
    virtual FUniqueNetIdPtr CreateUniquePlayerId(uint8* Bytes, int32 Size) override;
    virtual FUniqueNetIdPtr CreateUniquePlayerId(const FString& Str) override;
    virtual ELoginStatus::Type GetLoginStatus(int32 LocalUserNum) const override;
    virtual ELoginStatus::Type GetLoginStatus(const FUniqueNetId& UserId) const override;
    virtual FString GetPlayerNickname(int32 LocalUserNum) const override;
    virtual FString GetPlayerNickname(const FUniqueNetId& UserId) const override;
    virtual FString GetAuthToken(int32 LocalUserNum) const override;
    virtual void RevokeAuthToken(const FUniqueNetId& UserId, const FOnRevokeAuthTokenCompleteDelegate& Delegate) override;
    virtual void GetUserPrivilege(const FUniqueNetId& UserId, EUserPrivileges::Type Privilege, const FOnGetUserPrivilegeCompleteDelegate& Delegate) override;
    virtual FPlatformUserId GetPlatformUserIdFromUniqueNetId(const FUniqueNetId& UniqueNetId) const override;
    virtual FString GetAuthType() const override;
	virtual void GetLinkedAccountAuthToken(int32 LocalUserNum, const FOnGetLinkedAccountAuthTokenCompleteDelegate& Delegate) const override;

	virtual FUniqueNetIdPtr CreateEmptyPlayerId(); // added for convenience

    void Tick(float DeltaTime);
private:
    struct BasicUser
    {
		FUniqueNetIdPtr Id;
        FString UserName;
		FString AuthToken;
        bool bOperationInProgress;

		BasicUser() : Id{}, UserName{}, AuthToken{}, bOperationInProgress {} {}

        ELoginStatus::Type GetLoginStatus() const;
    };
    TMap<int32, BasicUser> Users;
    float TokenExpirationTimer;
};

typedef TSharedPtr<FOnlineIdentityBasic, ESPMode::ThreadSafe> FOnlineIdentityBasicPtr;
