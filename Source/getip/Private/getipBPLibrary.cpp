// Copyright Epic Games, Inc. All Rights Reserved.

#include "getipBPLibrary.h"
#include "getip.h"
#include "Engine/NetConnection.h"
#include "Engine/DemoNetConnection.h"
#include <SocketSubsystem.h>
#include <IPAddress.h>
#include "GenericPlatform/GenericPlatformMisc.h"
#include "Containers/UnrealString.h"
#include <string>


UgetipBPLibrary::UgetipBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void UgetipBPLibrary::getipSampleFunction(FString& ip, FString& MacAddress, FString& UniqueDeviceId, FString& LoginId)
{
	
	
	bool canBind = false;
	TSharedRef<FInternetAddr> localIp = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->GetLocalHostAddr(*GLog, canBind);
	ip = (localIp->IsValid() ? localIp->ToString(false) : "");
	MacAddress = FGenericPlatformMisc::GetMacAddressString();
	UniqueDeviceId = FGenericPlatformMisc::GetDeviceId();
	LoginId = FGenericPlatformMisc::GetLoginId();

	}


