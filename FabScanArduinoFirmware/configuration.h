// FabScan - http://hci.rwth-aachen.de/fabscan
//
//  Created by Mario Lukas on 04/08/14.
//  Copyright 2014 Media Computing Group, RWTH Aachen University. All rights reserved.
//

//#define VERBOSE 0


#define VERSION        "v.20160523"

#ifndef CONFIGURATION_H
#define CONFIGURATION_H

// for use with Sanguinololu v1.2 and v1.3
//#define SANGUINOLOLU_V_1_2
#define BAUD_RATE 115200
#define LIGHT_PIN A1


#define FABSCAN_HAT_RIGHT_LASER 9
#define FABSCAN_HAT_LEFT_LASER 10

//Sanguinololu v1.3a
#ifdef SANGUINOLOLU_V_1_2
//Sanguinololu v1.3a
#define RIGHT_LASER_PIN 12 //Bed (1284p=p18
#define LEFT_LASER_PIN 13  //Hotend (1284p=p19)

#else

#define RIGHT_LASER_PIN A4
#define LEFT_LASER_PIN 9

#endif

#define NUMPIXELS 16

#define MICROSTEP   A5

#define MAX_FEEDRATE         (2000)
#define MIN_FEEDRATE         (1000)



// Set to 1 for plololu driver
// Set to 4 for silent step sticks
#define SCALER 4

#define STEPS_PER_TURN 3200
#define MAX_BUF        64

#ifdef SANGUINOLOLU_V_1_2
//Sanguinololu v1.3a
#define ENABLE_PIN_0  14
#define STEP_PIN_0    15
#define DIR_PIN_0     21

#else

//Stepper 1 as labeled on Shield, Turntable
#define ENABLE_PIN_0  2
#define STEP_PIN_0    3
#define DIR_PIN_0     4

#endif


/*************************************************
 * OPTIONAL STEPPERS
 **************************************************/

#ifdef SANGUINOLOLU_V_1_2
//Sanguinololu v1.3a
#define ENABLE_PIN_1  26
#define STEP_PIN_1    3
#define DIR_PIN_1     2

#else

//Stepper 2, Laser Stepper
#define ENABLE_PIN_1  5
#define STEP_PIN_1    6
#define DIR_PIN_1     7

#endif

/**********************************************
 * STEPPER DEFINES FOR SELECTION
 ***********************************************/
#define LASER_STEPPER        11  //0xb
#define TURNTABLE_STEPPER    10  //0xa

#endif
