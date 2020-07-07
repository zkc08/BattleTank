// copyright zkc08 2020

#pragma once

#include "Tanks.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
    private:
    ATanks* GetControlledTank() const;
    
};
