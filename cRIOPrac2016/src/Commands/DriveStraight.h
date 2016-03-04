#ifndef DriveStraight_H
#define DriveStraight_H

#include "../CommandBase.h"
#include "WPILib.h"

class DriveStraight: public CommandBase
{
private:
	double setpoint;
	bool timed = false;
public:
	DriveStraight(double);
	DriveStraight(double, double);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
