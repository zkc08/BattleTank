// copyright zkc08 2020

#include "BattleTank.h"
#include "TankPlayerController.h"

ATank*  APlayerController::GetControlledTank() const
{
    return cast<ATank>(GetPawn());
}
