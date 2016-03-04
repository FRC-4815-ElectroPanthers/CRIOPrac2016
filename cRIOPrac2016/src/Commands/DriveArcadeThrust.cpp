#include <Commands/DriveArcadeThrust.h>

DriveArcadeThrust::DriveArcadeThrust()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(CommandBase::drivetrain);
}

// Called just before this Command runs the first time
void DriveArcadeThrust::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void DriveArcadeThrust::Execute()
{
	CommandBase::drivetrain->ArcadeDriveThrust(oi->drive->GetRawAxis(0), oi->drive->GetRawAxis(3)+1.0,-1*oi->drive->GetRawAxis(4)+1.0 );
}

// Make this return true when this Command no longer needs to run execute()
bool DriveArcadeThrust::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void DriveArcadeThrust::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveArcadeThrust::Interrupted()
{

}
