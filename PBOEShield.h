/*
 * Arduino library for interacting with the Parallax Board of Education Shield
 *
 * William Carroll
 * https://github.com/squayd
 * Begun 27 September 2016
 * 
 * www.parallax.com/BOEShield
 * header
 */
 #ifndef _PBOESHIED_H_USED_
 #define _PBOESHIED_H_USED_
 
 #include "arduino.h"
 #include "Servo.h"
 
 class PBOEShield
{
  public:
    //functions
    PBOEShield();         //constructor
    bool begin();         //Start the servos and play a beep
    void startupBeep();   //Plays a little tune when startup is complete
    void stopMoving();    //Set servos to not turn
    //variables
  private:
    //functions
    //variables
    Servo servoLeft;      //servo for left wheel
    Servo servoRight;     //servo for right wheel
};
 
 #endif