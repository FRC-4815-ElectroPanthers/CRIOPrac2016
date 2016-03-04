#include "IntakeShooter.h"
#include "../RobotMap.h"
#include "SmartDashboard/SmartDashboard.h"
#include "LiveWindow/LiveWindow.h"

IntakeShooter::IntakeShooter() :
		PIDSubsystem("IntakeShooter", 1.0, 0.0, 0.0)
{
	// Use these to get going:
	// SetSetpoint() -  Sets where the PID controller should move the system
	//                  to
	// Enable() - Enables the PID controller.

	//rightWheel = new VictorSP(RIGHTSHOOTER);
	//leftWheel = new VictorSP(LEFTSHOOTER);
	//arm = new CANTalon(1);//TODO: Go into RIO Webdash and change Talon ID
	push = new Servo(SERVO);

	RSEnc = new Encoder(RS_ENC_A, RS_ENC_B, false, Encoder::EncodingType::k4X);
	LSEnc = new Encoder(LS_ENC_A, LS_ENC_B, false, Encoder::EncodingType::k4X);

	RSEnc->SetDistancePerPulse(DISTANCE_PER_PULSE);
	LSEnc->SetDistancePerPulse(DISTANCE_PER_PULSE);

	/*
	arm->SetPosition(arm->GetPulseWidthPosition());

	arm->SetFeedbackDevice(CANTalon::CtreMagEncoder_Relative);
	arm->SetSensorDirection(false);

	arm->SetAllowableClosedLoopErr(0);
	arm->SetP(0.0);
	arm->SetI(0.0);
	arm->SetD(0.0);
	*/
}

void IntakeShooter::Shoot(){
	push->SetAngle(90);
}

void IntakeShooter::Retract(){
	push->SetAngle(0);
}

void IntakeShooter::RightSpinUP(){
	//rightWheel->Set(1.0);
}

void IntakeShooter::LeftSpinUP(){
	//leftWheel->Set(1.0);
}

/*
 *void IntakeShooter::Intake(){}
 *
 *void IntakeShooter::SpitOut(){}
 */

void IntakeShooter::MoveArmTo(position k){
	/*
	if(arm->GetControlMode() != CANSpeedController::kPosition){
		arm->SetControlMode(CANSpeedController::kPosition);
	}

	switch(k){
	case kStow:
		arm->Set(90);
		break;
	case kBackShot:
		arm->Set(45);
		break;
	case kFrontShot:
		arm->Set(135);
		break;
	case kInOutTake:
		arm ->Set(-45);
		break;
	}
	*/
}

void IntakeShooter::MoveArmTo(double angle){
	/*
	if(arm->GetControlMode() != CANSpeedController::kPosition){
			arm->SetControlMode(CANSpeedController::kPosition);
		}
	arm->Set(angle);
	*/
}

void IntakeShooter::MoveArmToJoystick(double input){
	/*
	if(arm->GetControlMode() != CANSpeedController::kPosition){
		arm->SetControlMode(CANSpeedController::kPosition);
	}
	arm->Set(input*360); //map joystick to degrees of rotation
	*/
}

void IntakeShooter::MoveThrottle(double throttle){
	/*
	if(arm->GetControlMode() != CANSpeedController::kPercentVbus){
		arm->SetVoltageRampRate(RAMP_UP_RATE);
		arm->SetControlMode(CANSpeedController::kPercentVbus);
	}
	arm->Set(throttle);
	*/
}

double IntakeShooter::RightShooterSpeed(){
	return RSEnc->GetRate();
}

double IntakeShooter::LeftShooterSpeed(){
	return LSEnc->GetRate();
}

double IntakeShooter::ArmAngle(){
	//return arm->GetPosition()*360;
	return 0;
}

double IntakeShooter::ReturnPIDInput()
{
	// Return your input value for the PID loop
	// e.g. a sensor, like a potentiometer:
	// yourPot->SetAverageVoltage() / kYourMaxVoltage;
	return (RightShooterSpeed() + LeftShooterSpeed())/2;
}

void IntakeShooter::UsePIDOutput(double output)
{
	// Use output to drive your system, like a motor
	// e.g. yourMotor->Set(output);
	//rightWheel->Set(output);
	//leftWheel->Set(output);
}

void IntakeShooter::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//setDefaultCommand(new MySpecialCommand());
}
