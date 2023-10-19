#include "OnlineIdentityInterfaceAnon.h"
#include "OnlineSubsystemAnon.h"
#include "OnlineSubsystemAnonTypes.h"
#include "OnlineSubsystemAnonPrivate.h"
#include "OnlineError.h"
#include "Misc/CommandLine.h"
#include "Runtime/Launch/Resources/Version.h"

FOnlineIdentityAnon::FOnlineIdentityAnon(FOnlineSubsystemAnon* InSubsystem) :
    Subsystem(InSubsystem),
    TokenExpirationTimer{}
{
}

FOnlineIdentityAnon::~FOnlineIdentityAnon()
{
}

TSharedPtr<FUserOnlineAccount> FOnlineIdentityAnon::GetUserAccount(const FUniqueNetId& UserId) const
{
    //@todo - not implemented
    return nullptr;
}

TArray<TSharedPtr<FUserOnlineAccount> > FOnlineIdentityAnon::GetAllUserAccounts() const
{
    //@todo - not implemented
    return TArray<TSharedPtr<FUserOnlineAccount> >();
}

bool FOnlineIdentityAnon::Login(int32 LocalUserNum, const FOnlineAccountCredentials& AccountCredentials)
{
    auto& hrUser = Users.FindOrAdd(LocalUserNum);

    if (AccountCredentials.Id.IsEmpty())
    {
        FString ErrorStr = TEXT("Invalid User Name");
        UE_LOG_ONLINE_IDENTITY(Warning, TEXT("Failed login. %s"), *ErrorStr);
		auto EmptyId = CreateEmptyPlayerId();
        TriggerOnLoginCompleteDelegates(LocalUserNum, false, *(EmptyId.Get()), ErrorStr);
        return false;
    }

    if (hrUser.bOperationInProgress)
    {
        FString ErrorStr = TEXT("login already in progress");
        UE_LOG_ONLINE_IDENTITY(Warning, TEXT("Failed login. %s"), *ErrorStr);
		auto EmptyId = CreateEmptyPlayerId();
        TriggerOnLoginCompleteDelegates(LocalUserNum, false, *(EmptyId.Get()), ErrorStr);
        return false;
    }
    hrUser.bOperationInProgress = true;

    if (hrUser.GetLoginStatus() == ELoginStatus::LoggedIn)
    {
        if (hrUser.UserName == AccountCredentials.Id)
        {
            hrUser.bOperationInProgress = false;
            TriggerOnLoginChangedDelegates(LocalUserNum);
            TriggerOnLoginCompleteDelegates(LocalUserNum, true, *hrUser.Id, TEXT(""));
            return true;
        }
        else
        {
            Logout(LocalUserNum);
        }
    }

    hrUser.bOperationInProgress = false;
    hrUser.UserName = AccountCredentials.Id;
    hrUser.Id = CreateUniquePlayerId(hrUser.UserName);

    TriggerOnLoginCompleteDelegates(LocalUserNum, true, *hrUser.Id, FString());

    return true;
}

bool FOnlineIdentityAnon::Logout(int32 LocalUserNum)
{
    auto hrUser = Users.Find(LocalUserNum);
    if (!hrUser)
    {
        UE_LOG_ONLINE_IDENTITY(Warning, TEXT("Failed logout. User not found %d"), LocalUserNum);
        TriggerOnLogoutCompleteDelegates(LocalUserNum, false);
        return false;
    }

    if (hrUser->bOperationInProgress)
    {
        UE_LOG_ONLINE_IDENTITY(Warning, TEXT("Failed logout. Operation already in progress %d"), LocalUserNum);
        TriggerOnLogoutCompleteDelegates(LocalUserNum, false);
        return false;
    }
    hrUser->bOperationInProgress = true;

    if (hrUser->GetLoginStatus() == ELoginStatus::NotLoggedIn)
    {
        hrUser->bOperationInProgress = false;
        UE_LOG_ONLINE_IDENTITY(Warning, TEXT("Failed logout. User Already Logged out %d"), LocalUserNum);
        TriggerOnLogoutCompleteDelegates(LocalUserNum, false);
        return false;
    }

    hrUser->bOperationInProgress = false;
    hrUser->Id = nullptr;
    hrUser->UserName.Empty();
    TriggerOnLogoutCompleteDelegates(LocalUserNum, true);
    UE_LOG_ONLINE_IDENTITY(Log, TEXT("Logout Triggered for %d"), LocalUserNum);
    return true;
}

bool FOnlineIdentityAnon::AutoLogin(int32 LocalUserNum)
{
    FString TypeStr, LoginStr, PasswordStr;
    FParse::Value(FCommandLine::Get(), TEXT("AUTH_TYPE="), TypeStr);
    FParse::Value(FCommandLine::Get(), TEXT("AUTH_LOGIN="), LoginStr);
    FParse::Value(FCommandLine::Get(), TEXT("AUTH_PASSWORD="), PasswordStr);
    return Login(LocalUserNum, FOnlineAccountCredentials(TypeStr, LoginStr, PasswordStr));
}

ELoginStatus::Type FOnlineIdentityAnon::GetLoginStatus(int32 LocalUserNum) const
{
    if (auto hrUser = Users.Find(LocalUserNum))
    {
        return hrUser->GetLoginStatus();
    }

    return ELoginStatus::NotLoggedIn;
}

ELoginStatus::Type FOnlineIdentityAnon::GetLoginStatus(const FUniqueNetId& UserId) const
{
    for (auto& hrUser : Users)
    {
        if (hrUser.Value.Id && *hrUser.Value.Id == UserId)
        {
            return hrUser.Value.GetLoginStatus();
        }
    }
    return ELoginStatus::NotLoggedIn;
}

FUniqueNetIdPtr FOnlineIdentityAnon::GetUniquePlayerId(int32 LocalUserNum) const
{
    if (auto hrUser = Users.Find(LocalUserNum))
    {
        return hrUser->Id;
    }
    return nullptr;
}

FUniqueNetIdPtr FOnlineIdentityAnon::CreateUniquePlayerId(uint8* Bytes, int32 Size)
{
    if (Bytes && Size > 0)
    {
        FString StrId(Size, (TCHAR*)Bytes);
        return FUniqueNetIdString::Create(StrId, ANON_SUBSYSTEM);
    }
    return nullptr;
}

FUniqueNetIdPtr FOnlineIdentityAnon::CreateUniquePlayerId(const FString& Str)
{
	return FUniqueNetIdString::Create(Str, ANON_SUBSYSTEM);
}

FUniqueNetIdPtr FOnlineIdentityAnon::CreateEmptyPlayerId()
{
	return FUniqueNetIdString::Create(FString(), ANON_SUBSYSTEM);
}

FString FOnlineIdentityAnon::GetPlayerNickname(int32 LocalUserNum) const
{
    if (auto hrUser = Users.Find(LocalUserNum))
    {
        return hrUser->UserName;
    }
    return FString();
}

FString FOnlineIdentityAnon::GetPlayerNickname(const FUniqueNetId& UserId) const
{
    for (auto& hrUser : Users)
    {
        if (hrUser.Value.Id && *hrUser.Value.Id == UserId)
        {
            return hrUser.Value.UserName;
        }
    }
    return FString();
}

/**
* Gets a user's platform specific authentication token to verify their identity
*
* @param LocalUserNum the controller number of the associated user
*
* @return String representing the authentication token
*/
FString FOnlineIdentityAnon::GetAuthToken(int32 LocalUserNum) const
{
    if (auto hrUser = Users.Find(LocalUserNum))
    {
        if (hrUser->Id)
        {
            return hrUser->Id->ToString();
        }
    }
    return FString();

}

void FOnlineIdentityAnon::RevokeAuthToken(const FUniqueNetId& UserId, const FOnRevokeAuthTokenCompleteDelegate& Delegate)
{
    UE_LOG_ONLINE_IDENTITY(Display, TEXT("FOnlineIdentityAnon::RevokeAuthToken not implemented"));
    TSharedRef<const FUniqueNetId> UserIdRef(UserId.AsShared());
    Subsystem->ExecuteNextTick([UserIdRef, Delegate]()
    {
        Delegate.ExecuteIfBound(*UserIdRef, FOnlineError(FString(TEXT("RevokeAuthToken not implemented"))));
    });
}

void FOnlineIdentityAnon::GetUserPrivilege(const FUniqueNetId& UserId, EUserPrivileges::Type Privilege, const FOnGetUserPrivilegeCompleteDelegate& Delegate)
{
    Delegate.ExecuteIfBound(UserId, Privilege, (uint32)EPrivilegeResults::NoFailures);
}

FPlatformUserId FOnlineIdentityAnon::GetPlatformUserIdFromUniqueNetId(const FUniqueNetId& UniqueNetId) const
{
    for (auto& hrUser : Users)
    {
        if (hrUser.Value.Id && *hrUser.Value.Id == UniqueNetId)
        {
#if (ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 0)
            return GetPlatformUserIdFromLocalUserNum(hrUser.Key);
#else
			return hrUser.Key;
#endif
        }
    }
    return PLATFORMUSERID_NONE;
}

FString FOnlineIdentityAnon::GetAuthType() const
{
    return TEXT("Anon");
}

ELoginStatus::Type FOnlineIdentityAnon::AnonUser::GetLoginStatus() const
{
    if (Id && Id->IsValid())
    {
        return ELoginStatus::Type::LoggedIn;
    }
    return ELoginStatus::Type::NotLoggedIn;
}

void FOnlineIdentityAnon::Tick(float DeltaTime)
{

}

void FOnlineIdentityAnon::GetLinkedAccountAuthToken(int32 LocalUserNum, const FOnGetLinkedAccountAuthTokenCompleteDelegate& Delegate) const
{
	FExternalAuthToken AuthToken;
	AuthToken.TokenString = GetAuthToken(LocalUserNum);
	Delegate.ExecuteIfBound(LocalUserNum, AuthToken.HasTokenString(), AuthToken);
}