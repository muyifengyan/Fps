// Copyright Epic Games, Inc. All Rights Reserved.

#include "AsstTencentGameMode.h"
#include "AsstTencentCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAsstTencentGameMode::AAsstTencentGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
