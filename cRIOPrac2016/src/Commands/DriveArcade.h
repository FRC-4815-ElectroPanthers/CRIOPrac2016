#ifndef arcadeDrive_H
#define arcadeDrive_H

#include "../CommandBase.h"
#include <Commands/Command.h>
#include "WPILib.h"

class DriveArcade: public CommandBase
{
	float xDirc, yDirc;
public:
	DriveArcade(float, float);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
