#include "WPILib.h"
#include "Commands/Command.h"
#include "CommandBase.h"
#include "IterativeRobot.h"
#include <Commands/DriveStraight.h>
#include <Commands/DriveArcade.h>
//#include <CameraServer.h>

/**
 * This starter template is for building a robot program from the
 * IterativeRobot base class.  This template does nothing - it merely
 * provides method stubs that you can use to begin your implementation.
 */
class CRIOPrac2016 : public IterativeRobot
{
private:
	Command *autonomousCommand;
	LiveWindow *lw;

public:
	CRIOPrac2016()
	{
		CommandBase::init();
		autonomousCommand = new DriveStraight(6); //6 ft
		lw = LiveWindow::GetInstance();
		CommandBase::drivetrain->CalibrateGyro();
		CommandBase::drivetrain->ResetEncoder();
	}

/**
 * Robot-wide initialization code should go here.
 *
 * Use this method for default Robot-wide initialization which will
 * be called when the robot is first powered on.  It will be called exactly 1 time.
 */
void RobotInit() {
}

/**
 * Initialization code for disabled mode should go here.
 *
 * Use this method for initialization code which will be called each time
 * the robot enters disabled mode.
 */
void DisabledInit() {

}

/**
 * Periodic code for disabled mode should go here.
 *
 * Use this method for code which will be called periodically at a regular
 * rate while the robot is in disabled mode.
 */
void DisabledPeriodic() {
	Scheduler::GetInstance()->Run();
}

/**
 * Initialization code for autonomous mode should go here.
 *
 * Use this method for initialization code which will be called each time
 * the robot enters autonomous mode.
 */
void AutonomousInit() {
	if (autonomousCommand != NULL)
				autonomousCommand->Start();
}

/**
 * Periodic code for autonomous mode should go here.
 *
 * Use this method for code which will be called periodically at a regular
 * rate while the robot is in autonomous mode.
 */
void AutonomousPeriodic() {
	Scheduler::GetInstance()->Run();
}

/**
 * Initialization code for teleop mode should go here.
 *
 * Use this method for initialization code which will be called each time
 * the robot enters teleop mode.
 */
void TeleopInit() {
	if (autonomousCommand != NULL)
				autonomousCommand->Cancel();
}

/**
 * Periodic code for teleop mode should go here.
 *
 * Use this method for code which will be called periodically at a regular
 * rate while the robot is in teleop mode.
 */
void TeleopPeriodic() {
	Scheduler::GetInstance()->Run();
}

/**
 * Initialization code for test mode should go here.
 *
 * Use this method for initialization code which will be called each time
 * the robot enters test mode.
 */
void TestInit() {
}

/**
 * Periodic code for test mode should go here.
 *
 * Use this method for code which will be called periodically at a regular
 * rate while the robot is in test mode.
 */
void TestPeriodic() {
	lw->Run();
}

};

/*
 * This macro invocation tells WPILib that the named class is your "main" robot class,
 * providing an entry point to your robot code.
 */
START_ROBOT_CLASS(CRIOPrac2016);

