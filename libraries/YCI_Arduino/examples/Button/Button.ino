#include <YCI_Arduino.h>

MorseLED greenLED(11);
MorseLED yellowLED(10);
MorseLED redLED(9);

ButtonWithDebounce button1(4);

void setup()
{
  Serial.begin(9600); // open the serial port at 9600 bps:

}

void loop()
{

  if (button1.isPressed()){
    Serial.println("Button 1 is pressed ");
    redLED.on();
    delay(50);
  }
  else{
    Serial.println("Button 1 is NOT pressed ");
    redLED.off();
    delay(50);
  }

  




}
