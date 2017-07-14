void setup() {
  // put your setup code here, to run once:
  // setup pin for each "note" of twinkle twinkle little star
      pinMode(1, OUTPUT); // twinkle
      pinMode(4, OUTPUT);// twinkle
      pinMode(7, OUTPUT);// little
      pinMode(10, OUTPUT);//star
}

void loop() {
  // put your main code here, to run repeatedly:
  // let's set up an array for our pattern
  int pattern[] = {1,1,4,4,7,7,10}; // which LED's to turn on in sequence. 

  // loop through the entire pattern
  for (int count = 0; count <5; count++){
    // pattern {[count] gives me note in the pattern that i've counted up until now
     digitalWrite(pattern[count], HIGH);   
     delay(1000);              
     digitalWrite(pattern[count], LOW);
     delay(1000);
     }
 /* 
  // play the first note twice
    for (int count1 = 0; count1 <2; count1++){
     digitalWrite(1, HIGH);   
     delay(1000);              
     digitalWrite(1, LOW);
     delay(1000);
    }
  // play the second note twice
    for (int count2 = 0; count2 <2; count2++){  
     digitalWrite(4, HIGH);   
     delay(1000);              
     digitalWrite(4, LOW);
     delay(1000); 
    }
  // play the third note twice
    for (int count3 = 0; count3 <2; count3++){  
     digitalWrite(7, HIGH);   
     delay(1000);              
     digitalWrite(7, LOW);
     delay(1000); 
    }
  // play the fourth note once
     digitalWrite(10, HIGH);   
     delay(1000);              
     digitalWrite(10, LOW);
     delay(1000);   
*/
 }

