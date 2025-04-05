/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground through 220 ohm resistor
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Button
*/

// constants won't change. They're used here to set pin numbers:
#include <Arduino.h>


const int buttonPin = 2;  // the number of the pushbutton pin
    // the number of the LED pin

// variables will change:
int buttonState;  // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(LED_BUILTIN, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}
void myloop(int time)
{
  for (int num; num<time; num++)
  {
    delay(1);
    if (digitalRead(buttonPin) == HIGH)
    {
      digitalWrite(LED_BUILTIN, LOW);  
      return;       // turn the LED off by making the voltage LOW  
    }
  }



}
void loop() {
  // read the state of the pushbutton value:


  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (digitalRead(buttonPin) == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
    delay(100);
    myloop(4000);
  }
}
