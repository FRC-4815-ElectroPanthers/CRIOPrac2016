#ifndef arcadeDrive_H
#define arcadeDrive_H

#include "../CommandBase.h"
#include "WPILib.h"
#include "Subsystems/Chassis.h"

class DriveArcadeThrust: public CommandBase
{
public:
	DriveArcadeThrust();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
