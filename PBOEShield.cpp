/*
 * Arduino library for interacting with the Parallax Board of Education Shield
 *
 * William Carroll
 * https://github.com/squayd
 * Begun 27 September 2016
 * 
 * www.parallax.com/BOEShield
 *
 * Source
 */
 #include <PBOEShield.h>
 
 PBOEShield::PBOEShield()
 {//constructor.
 }
 
 bool PBOEShield::begin()
 {
    servoLeft.attach(13);
    servoRight.attach(12);
    stopMoving();
    startupBeep();
    return true;
 }
 
 void PBOEShield::startupBeep()
 {
   tone (4,2000,100);
   delay(100);
   tone (4,2500,100);
   delay(100);
   tone (4,3000,100);
   delay(100);
 }
 
 void PBOEShield::stopMoving()
 {
   servoLeft.writeMicroseconds(1500);
   servoRight.writeMicroseconds(1500);
 }