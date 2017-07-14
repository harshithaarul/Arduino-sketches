#include <Servo.h>                           // Include servo library

Servo servoLeft;                             // Declare left servo signal
Servo servoRight;                            // Declare right servo signal

void setup()                                 // Built in initialization block
{
 servoLeft.attach(13);                      // Attach left signal to pin 13
 servoRight.attach(12);                     // Attach right signal to pin 12
}

void loop() {
  // put your main code here, to run repeatedly:
//servoLeft.writeMicroseconds(1500);
//servoRight.writeMicroseconds(1200);
//delay(2000);
servoLeft.write(120);
servoRight.write(120);
delay(500);
servoLeft.writeMicroseconds(1000);
servoRight.writeMicroseconds(1000);
delay(500);

}
