 
  int bellPin = 12;
  void setup(){
    pinMode(bellPin, OUTPUT);
  }
  void loop(){
    digitalWrite(bellPin, HIGH);
  
  tone(bellPin, 988, 250);
  delay(1000);
  tone(bellPin, 988, 250);
  delay(400);
  tone(bellPin, 880, 250);
  delay(400);
  tone(bellPin, 988, 250);
  delay(1000);
  
  tone(bellPin, 988, 250);
  delay(400);
  tone(bellPin, 880, 250);
  delay(400);
  tone(bellPin, 988, 250);
  delay(1000);
  
  tone(bellPin, 988, 250);
  delay(400);
  tone(bellPin, 880, 250);
  delay(400);
  tone(bellPin, 784, 1000);
  delay(1000);
  tone(bellPin, 880, 1000);
  delay(1000);
  //replays loop
  }
 
