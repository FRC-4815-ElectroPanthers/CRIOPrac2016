#ifndef DriveTurn_H
#define DriveTurn_H

#include "../CommandBase.h"
#include "WPILib.h"

class DriveTurn: public CommandBase
{
	double driveTo;
	bool timed = false;
public:
	DriveTurn(double);
	DriveTurn(double, double);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
