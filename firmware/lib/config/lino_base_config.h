#ifndef LINO_BASE_CONFIG_H
#define LINO_BASE_CONFIG_H

#define LINO_BASE ACKERMANN       // Car-like steering robot w/ 2 motors
#define USE_L298_DRIVER
#define USE_GY85_IMU

#define DEBUG 1

#define K_P 0.6 // P constant
#define K_I 0.3 // I constant
#define K_D 0.5 // D constant

//define your robot' specs here
#define MAX_RPM 330               // motor's maximum RPM
#define COUNTS_PER_REV 1550       // wheel encoder's no of ticks per rev
#define WHEEL_DIAMETER 0.10       // wheel's diameter in meters
#define PWM_BITS 8                // PWM Resolution of the microcontroller
#define LR_WHEELS_DISTANCE 0.235  // distance between left and right wheels
#define FR_WHEELS_DISTANCE 0.30   // distance between front and rear wheels. Ignore this if you're on 2WD/ACKERMANN
#define MAX_STEERING_ANGLE 0.415  // max steering angle. This only applies to Ackermann steering

/*
ROBOT ORIENTATION
         FRONT
     Servo Motor  (ACKERMANN)
    MOTOR1  MOTOR2
         BACK
*/

/// ENCODER PINS
#define MOTOR1_ENCODER_A A1
#define MOTOR1_ENCODER_B A0 

#define MOTOR2_ENCODER_A A3
#define MOTOR2_ENCODER_B A2 

//MOTOR PINS
#ifdef USE_L298_DRIVER
  #define MOTOR_DRIVER L298

  #define MOTOR1_PWM 2
  #define MOTOR1_IN_A 3
  #define MOTOR1_IN_B 18

  #define MOTOR2_PWM 5
  #define MOTOR2_IN_A 16
  #define MOTOR2_IN_B 4

  #define PWM_MAX pow(2, PWM_BITS) - 1
  #define PWM_MIN -PWM_MAX
#endif 

#define STEERING_PIN 7

#endif
