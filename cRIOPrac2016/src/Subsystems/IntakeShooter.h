#ifndef IntakeShooter_H
#define IntakeShooter_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

class IntakeShooter: public PIDSubsystem
{
	//VictorSP *rightWheel, *leftWheel;
	//CANTalon *arm;
	Servo *push;
	Encoder *LSEnc, *RSEnc;
	double const DISTANCE_PER_PULSE = 360/1024; //360 Degrees Per 1024 Pulses
	double const RAMP_UP_RATE = 6.0; //Voltage Ramp Up Per Sec
public:
	enum position {kStow, kBackShot, kFrontShot, kInOutTake};

	IntakeShooter();
	void Shoot();
	void Retract();
	void RightSpinUP();
	void LeftSpinUP();
	//void Intake();
	//void SpitOut();
	void MoveArmTo(position);
	void MoveArmTo(double);
	void MoveArmToJoystick(double);
	void MoveThrottle(double);
	double RightShooterSpeed();
	double LeftShooterSpeed();
	double ArmAngle();
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void InitDefaultCommand();
};

#endif
