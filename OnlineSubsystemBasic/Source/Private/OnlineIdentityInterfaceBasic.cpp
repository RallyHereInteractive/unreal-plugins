#include "OnlineIdentityInterfaceBasic.h"
#include "OnlineSubsystemBasic.h"
#include "OnlineSubsystemBasicTypes.h"
#include "OnlineSubsystemBasicPrivate.h"
#include "OnlineError.h"
#include "Misc/CommandLine.h"
#include "Misc/FileHelper.h"
#include "Runtime/Launch/Resources/Version.h"

FOnlineIdentityBasic::FOnlineIdentityBasic(FOnlineSubsystemBasic* InSubsystem) :
    Subsystem(InSubsystem),
    TokenExpirationTimer{}
{
}

FOnlineIdentityBasic::~FOnlineIdentityBasic()
{
}

TSharedPtr<FUserOnlineAccount> FOnlineIdentityBasic::GetUserAccount(const FUniqueNetId& UserId) const
{
    //@todo - not implemented
    return nullptr;
}

TArray<TSharedPtr<FUserOnlineAccount> > FOnlineIdentityBasic::GetAllUserAccounts() const
{
    //@todo - not implemented
    return TArray<TSharedPtr<FUserOnlineAccount> >();
}

bool FOnlineIdentityBasic::Login(int32 LocalUserNum, const FOnlineAccountCredentials& AccountCredentials)
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

	if (AccountCredentials.Token.IsEmpty())
	{
		FString ErrorStr = TEXT("Invalid Password");
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
	hrUser.AuthToken = FString::Printf(TEXT("%s:%s"), *AccountCredentials.Id, *AccountCredentials.Token);
    hrUser.Id = CreateUniquePlayerId(hrUser.UserName);

    TriggerOnLoginCompleteDelegates(LocalUserNum, true, *hrUser.Id, FString());

    return true;
}

bool FOnlineIdentityBasic::Logout(int32 LocalUserNum)
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

bool FOnlineIdentityBasic::AutoLogin(int32 LocalUserNum)
{
    FString TypeStr, LoginStr, PasswordStr;
    FParse::Value(FCommandLine::Get(), TEXT("AUTH_TYPE="), TypeStr);
    FParse::Value(FCommandLine::Get(), TEXT("AUTH_LOGIN="), LoginStr);
    FParse::Value(FCommandLine::Get(), TEXT("AUTH_PASSWORD="), PasswordStr);

	// allow a credential file so that secrets do not need to be passed on the commandline
	FString credFile;
	if (FParse::Value(FCommandLine::Get(), TEXT("rhcredentialsfile="), credFile))
	{
		TArray<FString> FileContentLines;
		if (FFileHelper::LoadFileToStringArray(FileContentLines, *credFile))
		{
			if (FileContentLines.Num() >= 2)
			{
				//First line is username
				UE_LOG_ONLINE_IDENTITY(Log, TEXT("Loaded credentials from file"));
				LoginStr = FileContentLines[0];
				PasswordStr = FileContentLines[1];
			}
		}
	}

    return Login(LocalUserNum, FOnlineAccountCredentials(TypeStr, LoginStr, PasswordStr));
}

ELoginStatus::Type FOnlineIdentityBasic::GetLoginStatus(int32 LocalUserNum) const
{
    if (auto hrUser = Users.Find(LocalUserNum))
    {
        return hrUser->GetLoginStatus();
    }

    return ELoginStatus::NotLoggedIn;
}

ELoginStatus::Type FOnlineIdentityBasic::GetLoginStatus(const FUniqueNetId& UserId) const
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

FUniqueNetIdPtr FOnlineIdentityBasic::GetUniquePlayerId(int32 LocalUserNum) const
{
    if (auto hrUser = Users.Find(LocalUserNum))
    {
        return hrUser->Id;
    }
    return nullptr;
}

FUniqueNetIdPtr FOnlineIdentityBasic::CreateUniquePlayerId(uint8* Bytes, int32 Size)
{
    if (Bytes && Size > 0)
    {
        FString StrId(Size, (TCHAR*)Bytes);
        return FUniqueNetIdString::Create(StrId, BASIC_SUBSYSTEM);
    }
    return nullptr;
}

FUniqueNetIdPtr FOnlineIdentityBasic::CreateUniquePlayerId(const FString& Str)
{
	return FUniqueNetIdString::Create(Str, BASIC_SUBSYSTEM);
}

FUniqueNetIdPtr FOnlineIdentityBasic::CreateEmptyPlayerId()
{
	return FUniqueNetIdString::Create(FString(), BASIC_SUBSYSTEM);
}

FString FOnlineIdentityBasic::GetPlayerNickname(int32 LocalUserNum) const
{
    if (auto hrUser = Users.Find(LocalUserNum))
    {
        return hrUser->UserName;
    }
    return FString();
}

FString FOnlineIdentityBasic::GetPlayerNickname(const FUniqueNetId& UserId) const
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
FString FOnlineIdentityBasic::GetAuthToken(int32 LocalUserNum) const
{
    if (auto hrUser = Users.Find(LocalUserNum))
    {
        return hrUser->AuthToken;
    }
    return FString();

}

void FOnlineIdentityBasic::RevokeAuthToken(const FUniqueNetId& UserId, const FOnRevokeAuthTokenCompleteDelegate& Delegate)
{
    UE_LOG_ONLINE_IDENTITY(Display, TEXT("FOnlineIdentityBasic::RevokeAuthToken not implemented"));
    TSharedRef<const FUniqueNetId> UserIdRef(UserId.AsShared());
    Subsystem->ExecuteNextTick([UserIdRef, Delegate]()
    {
        Delegate.ExecuteIfBound(*UserIdRef, FOnlineError(FString(TEXT("RevokeAuthToken not implemented"))));
    });
}

void FOnlineIdentityBasic::GetUserPrivilege(const FUniqueNetId& UserId, EUserPrivileges::Type Privilege, const FOnGetUserPrivilegeCompleteDelegate& Delegate)
{
    Delegate.ExecuteIfBound(UserId, Privilege, (uint32)EPrivilegeResults::NoFailures);
}

FPlatformUserId FOnlineIdentityBasic::GetPlatformUserIdFromUniqueNetId(const FUniqueNetId& UniqueNetId) const
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

FString FOnlineIdentityBasic::GetAuthType() const
{
    return TEXT("Basic");
}

ELoginStatus::Type FOnlineIdentityBasic::BasicUser::GetLoginStatus() const
{
    if (Id && Id->IsValid())
    {
        return ELoginStatus::Type::LoggedIn;
    }
    return ELoginStatus::Type::NotLoggedIn;
}

void FOnlineIdentityBasic::Tick(float DeltaTime)
{

}

void FOnlineIdentityBasic::GetLinkedAccountAuthToken(int32 LocalUserNum, const FOnGetLinkedAccountAuthTokenCompleteDelegate& Delegate) const
{
	FExternalAuthToken AuthToken;
	AuthToken.TokenString = GetAuthToken(LocalUserNum);
	Delegate.ExecuteIfBound(LocalUserNum, AuthToken.HasTokenString(), AuthToken);
}