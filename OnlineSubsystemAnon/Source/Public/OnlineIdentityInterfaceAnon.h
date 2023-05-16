#pragma once

#include "CoreMinimal.h"
#include "Runtime/Launch/Resources/Version.h"
#if (ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 0)
	#include "Online/CoreOnline.h"
#else
	#include "UObject/CoreOnline.h"
#endif
#include "Interfaces/OnlineIdentityInterface.h"
#include "Containers/Map.h"

#ifndef WITH_HIREZ_ENGINE
#define WITH_HIREZ_ENGINE 0
#endif

class FOnlineSubsystemAnon;

class FOnlineIdentityAnon : public IOnlineIdentity
{
PACKAGE_SCOPE:
    FOnlineSubsystemAnon* Subsystem;

    FOnlineIdentityAnon(FOnlineSubsystemAnon* InSubsystem);

public:

    virtual ~FOnlineIdentityAnon();

    // IOnlineIdentity

    virtual bool Login(int32 LocalUserNum, const FOnlineAccountCredentials& AccountCredentials) override;
    virtual bool Logout(int32 LocalUserNum) override;
    virtual bool AutoLogin(int32 LocalUserNum) override;
    virtual TSharedPtr<FUserOnlineAccount> GetUserAccount(const FUniqueNetId& UserId) const override;
    virtual TArray<TSharedPtr<FUserOnlineAccount> > GetAllUserAccounts() const override;
    virtual TSharedPtr<const FUniqueNetId> GetUniquePlayerId(int32 LocalUserNum) const override;
    virtual TSharedPtr<const FUniqueNetId> CreateUniquePlayerId(uint8* Bytes, int32 Size) override;
    virtual TSharedPtr<const FUniqueNetId> CreateUniquePlayerId(const FString& Str) override;
    virtual ELoginStatus::Type GetLoginStatus(int32 LocalUserNum) const override;
    virtual ELoginStatus::Type GetLoginStatus(const FUniqueNetId& UserId) const override;
    virtual FString GetPlayerNickname(int32 LocalUserNum) const override;
    virtual FString GetPlayerNickname(const FUniqueNetId& UserId) const override;
    virtual FString GetAuthToken(int32 LocalUserNum) const override;
    virtual void RevokeAuthToken(const FUniqueNetId& UserId, const FOnRevokeAuthTokenCompleteDelegate& Delegate) override;
    virtual void GetUserPrivilege(const FUniqueNetId& UserId, EUserPrivileges::Type Privilege, const FOnGetUserPrivilegeCompleteDelegate& Delegate) override;
    virtual FPlatformUserId GetPlatformUserIdFromUniqueNetId(const FUniqueNetId& UniqueNetId) const override;
    virtual FString GetAuthType() const override;
#if WITH_HIREZ_ENGINE
    virtual bool DisconnectForcesLogoff() { return true; }; //$$ DLF: Add support for not logging off when disconnecting from certain OSS (such as Steam)
#endif

    void Tick(float DeltaTime);
private:
    struct AnonUser
    {
        TSharedPtr<const class FUniqueNetIdAnon> Id;
        FString UserName;
        bool bOperationInProgress;

        AnonUser() : Id{}, UserName{}, bOperationInProgress{} {}

        ELoginStatus::Type GetLoginStatus() const;
    };
    TMap<int32, AnonUser> Users;
    float TokenExpirationTimer;
};

typedef TSharedPtr<FOnlineIdentityAnon, ESPMode::ThreadSafe> FOnlineIdentityAnonPtr;
