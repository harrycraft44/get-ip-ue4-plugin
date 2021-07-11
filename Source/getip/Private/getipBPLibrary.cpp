// Copyright Epic Games, Inc. All Rights Reserved.

#include "getipBPLibrary.h"
#include "getip.h"
#include "Engine/NetConnection.h"
#include "Engine/DemoNetConnection.h"
#include <SocketSubsystem.h>
#include <IPAddress.h>

UgetipBPLibrary::UgetipBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

FString UgetipBPLibrary::getipSampleFunction()
{


	bool canBind = false;
	TSharedRef<FInternetAddr> localIp = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->GetLocalHostAddr(*GLog, canBind);
	return (localIp->IsValid() ? localIp->ToString(false) : "");
	
}

