#include <YCI_Arduino.h>

Class1 greenLED(9);
Class1 yellowLED(10);
Class2 redLED(11);

void setup()
{
  Serial.begin(9600); // open the serial port at 9600 bps:

  greenLED.begin();
  yellowLED.begin();
  redLED.begin();
}

void loop()
{
  Serial.println("Demonstration of class 1");
  greenLED.dot(); greenLED.dot(); greenLED.dot();
  greenLED.dash(); greenLED.dash(); greenLED.dash();
  greenLED.dot(); greenLED.dot(); greenLED.dot();
  delay(500);

  Serial.println("Demonstration of class 2");
  yellowLED.dot(); yellowLED.dot(); yellowLED.dot();
  yellowLED.dash(); yellowLED.dash(); yellowLED.dash();
  yellowLED.dot(); yellowLED.dot(); yellowLED.dot();
  delay(500);

  Serial.println("Demonstration of class 3");
  redLED.dot(); redLED.dot(); redLED.dot();
  redLED.dash(); redLED.dash(); redLED.dash();
  redLED.dot(); redLED.dot(); redLED.dot();
  delay(500);

}
