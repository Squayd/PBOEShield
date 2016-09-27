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
 
 #include<Servo.h>
 
 class PBOEShield
{
  public:
    //functions
    PBOEShield();         //constructor
    void StartupBeep();   //Plays a little tune when startup is complete
    //variables
  private:
    //functions
    //variables
    Servo servoLeft;      //servo for left wheel
    Servo servoRight;     //servo for right wheel
}
 
 #endif