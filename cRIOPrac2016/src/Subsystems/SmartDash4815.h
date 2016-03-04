#ifndef SmartDash4815_H
#define SmartDash4815_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class SmartDash4815: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	SmartDash4815();
	void InitDefaultCommand();
};

#endif
