#include <Servo.h>

Servo servoRight;
Servo servoLeft;

void setup() {
  // put your setup code here, to run once:
  servoLeft.attach(12);
  servoRight.attach(13);
}

void loop() {
  forward(1000);
  turnLeft(500);
  backward(1000);
  turnRight(500);
  stopnow();
  delay(2000);
}

void stopnow(){
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
}

void turnLeft(int time)                      // Left turn function
{
  servoLeft.writeMicroseconds(1300);         // Left wheel clockwise
  servoRight.writeMicroseconds(1300);        // Right wheel clockwise
  delay(time);                               // Maneuver for time ms
}


void turnRight(int time)                     // Right turn function
{
  servoLeft.writeMicroseconds(1700);         // Left wheel counterclockwise
  servoRight.writeMicroseconds(1700);        // Right wheel counterclockwise
  delay(time);                               // Maneuver for time ms
}

void backward(int time)                      // Backward function
{
  servoLeft.writeMicroseconds(1300);         // Left wheel clockwise
  servoRight.writeMicroseconds(1700);        // Right wheel counterclockwise
  delay(time);                               // Maneuver for time ms
}

void forward(int time)                     // Forward function
{
  servoLeft.writeMicroseconds(1700);         // Left wheel counterclockwise
  servoRight.writeMicroseconds(1300);        // Right wheel clockwise
  delay(time);                               // Maneuver for time ms
}
