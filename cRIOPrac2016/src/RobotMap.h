#ifndef ROBOTMAP_H
#define ROBOTMAP_H

#include "WPILib.h"

#define PI 3.14159
/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
//const int LEFTMOTOR = 1;
//const int RIGHTMOTOR = 2;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
//const int RANGE_FINDER_PORT = 1;
//const int RANGE_FINDER_MODULE = 1;

const uint32_t FRONTRIGHT = 3;
const uint32_t BACKRIGHT = 1;
const uint32_t FRONTLEFT = 2;
const uint32_t BACKLEFT = 0;
const uint32_t SERVO = 4;
const uint32_t RIGHTSHOOTER = 5;
const uint32_t LEFTSHOOTER = 6;

const uint32_t BR_ENC_A = 1;
const uint32_t BR_ENC_B = 2;
const uint32_t FL_ENC_A = 3;
const uint32_t FL_ENC_B = 4;
const uint32_t RS_ENC_A = 6;
const uint32_t RS_ENC_B = 7;
const uint32_t LS_ENC_A = 8;
const uint32_t LS_ENC_B = 9;

const int WHEEL_DIA = 8;
const int SHOOTER_DIA = 6;

#endif
