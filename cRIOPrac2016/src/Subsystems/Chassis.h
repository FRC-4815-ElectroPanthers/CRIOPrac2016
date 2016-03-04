#ifndef Chassis_H
#define Chassis_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"
#include "../RobotMap.h"

class Chassis: public PIDSubsystem
{
private:
	Talon *frontRight, *backRight, *frontLeft, *backLeft;
	Encoder *right; //*leftFront;
	//ADXRS450_Gyro *gyro;
	double const DISTANCE_PER_PULSE = PI/8192;

public:
	enum PIDSensor {encoder_t, gyro_t} sensor;

	Chassis();
	void ArcadeDrive(float, float);
	void ArcadeDriveThrust(float, float, float);
	double GetSpeed();
	double GetDistanceTravel();
	void ResetEncoder();
	void CalibrateGyro();
	void ResetGyro();
	double GetYaw();
	void SourcePID(PIDSensor);
	void Report();
	bool PIDdone();
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void InitDefaultCommand();
};

#endif
