#include <Servo.h>                           // Include servo library

Servo servoLeft;                             // Declare left servo signal
Servo servoRight;                            // Declare right servo signal

void setup()                                 // Built in initialization block
{
 servoLeft.attach(13);                      // Attach left signal to pin 13
 servoRight.attach(12);                     // Attach right signal to pin 12
 pinMode (9, OUTPUT);
 pinMode (11, OUTPUT); 
 pinMode (7, OUTPUT); 
}

void loop() {
   digitalWrite (11, HIGH);
    delay(300);
    digitalWrite (11, LOW);
    delay(300);
  // put your main code here, to run repeatedly:
  for (int turn = 0; turn <10; turn++){ // 0:00 - 0:15 
    servoLeft.write(120);
    servoRight.write(120);
    delay(500);
    servoLeft.writeMicroseconds(1000);
    servoRight.writeMicroseconds(1000);
    delay(500); 
 
  }   
    for (int turn = 0; turn <10; turn++){ // 0:15- 0:30
    servoLeft.write(120);
    servoRight.write(120);
    delay(500);
    servoLeft.writeMicroseconds(1000);
    servoRight.writeMicroseconds(1000);
    delay(500); 
   
    digitalWrite (9, HIGH);
    delay(300);
    digitalWrite (9, LOW);
    delay(300);
    digitalWrite (9, HIGH);
    delay(300);
    digitalWrite (9, LOW);
    delay(300);
    digitalWrite (7, HIGH);
    delay(300);
    digitalWrite (7, LOW);
    delay(300);
    }
   for (int light = 0; light <10; light++){
    digitalWrite (11, HIGH);
    delay(300);
    digitalWrite (11, LOW);
    delay(300);
    digitalWrite (11, HIGH);
    delay(300);
    digitalWrite (11, LOW);
    delay(300);
    digitalWrite (7, HIGH);
    delay(300);
    digitalWrite (7, LOW);
    delay(300);
    digitalWrite (7, HIGH);
    delay(300);
    digitalWrite (7, LOW);
    delay(300);
   }
}


