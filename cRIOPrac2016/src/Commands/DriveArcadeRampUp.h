#ifndef DriveArcadeRampUp_H
#define DriveArcadeRampUp_H

#include "../CommandBase.h"
#include "WPILib.h"

class DriveArcadeRampUp: public CommandBase
{
	double CurrentXVal, PrevXVal,CurrentYVal, PrevYVal, DeltaX, DeltaY,
		   Xout, Yout;
	double const RAMP = 8.0;
public:
	DriveArcadeRampUp();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
