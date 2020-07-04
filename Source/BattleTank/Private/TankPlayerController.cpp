// copyright zkc08 2020
// #include "BattleTanks.h"
#include "Tanks.h"
#include "TankPlayerController.h"

ATanks*  APlayerController::GetControlledTank() const
{
    return Cast<ATanks>(GetPawn());
}
