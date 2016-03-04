#ifndef DriveArcadeJoystick_H
#define DriveArcadeJoystick_H

#include "../CommandBase.h"
#include <Commands/Command.h>
#include "WPILib.h"

class DriveArcadeJoystick: public CommandBase
{
	Timer *t;
	double sensativity;
public:
	DriveArcadeJoystick();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
