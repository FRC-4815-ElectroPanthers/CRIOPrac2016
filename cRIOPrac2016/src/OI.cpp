#include "OI.h"

OI::OI()
{
	// Process operator interface input here.
	drive = new Joystick(0);
	operate = new Joystick(1);

}
