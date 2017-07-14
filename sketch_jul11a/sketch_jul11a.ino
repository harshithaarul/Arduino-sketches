void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
int pattern[] = {4,13,7,10,10,7,13,4,4};
    pattern;
// loop through the entire pattern
  for (int count = 0; count <9; count++){
    // pattern {[count] gives me note in the pattern that i've counted up until now
    
 
     digitalWrite(pattern[count], HIGH);   
     delay((random(50,250)));              
     digitalWrite(pattern[count], LOW);
     delay((random(50,250)));
     }
     
     digitalWrite(4, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(13, HIGH);
    delay (random(50,250));
    digitalWrite(4, LOW);
    digitalWrite(7, LOW);
    digitalWrite(10, LOW);
    digitalWrite(13, LOW);
    delay (random(50,250));
/*

 digitalWrite(13, HIGH);   
  delay(random(100,500));              
  digitalWrite(13, LOW);
  delay(random(100,500));
  
  digitalWrite(8, HIGH);   
  delay(random(100,500));              
  digitalWrite(8, LOW);
  delay(random(100,500));
  
  digitalWrite(10, HIGH);   
  delay(random(100,500));              
  digitalWrite(10, LOW);
  delay(random(100,500));
  
   digitalWrite(5, HIGH);   
  delay(random(100,500));              
  digitalWrite(5, LOW);
  delay(random(100,500));
  */
}
