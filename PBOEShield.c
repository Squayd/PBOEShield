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
 {//constructor. Beeps if complete.
   servoLeft.attach(13);
   servoRight.attach(12);
   StartupBeep();
 }
 
 void PBOEShield::StartupBeep()
 {
   tone (4,1000,100);
   tone (4,2000,100);
   tone (4,3000,100);
 }