/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

int blinkB[15] = {1000, 900, 750, 600, 500, 250, 125, 72, 36, 18, 9, 5, 2, 0};
int count = 0;
int ledPin = 11;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  if(count == 15) count = 0;
  blinkPerSec(blinkB[count++]);
}

void blinkPerSec(int blinkB) {
      analogWrite(ledPin, blinkB);   // turn the LED on (HIGH is the voltage level)
      delay(50);                       // wait for 50 m-second
}
