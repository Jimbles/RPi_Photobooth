/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(31, OUTPUT);
  pinMode(33, OUTPUT);
  pinMode(35, OUTPUT);
  pinMode(37, OUTPUT);
  pinMode(39, OUTPUT);
  pinMode(41, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(31, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(33, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(35, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(37, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(39, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(41, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(31, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(33, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(35, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(37, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(39, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(41, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}
