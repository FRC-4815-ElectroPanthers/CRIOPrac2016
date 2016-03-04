#include "CommandBase.h"
#include "Commands/Scheduler.h"
#include "Subsystems/Chassis.h"
#include "Subsystems/IntakeShooter.h"

// Initialize a single static instance of all of your subsystems to NULL
Chassis* CommandBase::drivetrain = NULL;
OI* CommandBase::oi = NULL;
IntakeShooter* CommandBase::shooter = NULL;

CommandBase::CommandBase(char const *name) :
		Command(name)
{
}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	// Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	drivetrain = new Chassis();

	oi = new OI();

	shooter = new IntakeShooter();
}
