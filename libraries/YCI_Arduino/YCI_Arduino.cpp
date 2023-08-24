/*
  YCI_Arduino.h - Library for BTEC Unit 6 - Microcontroller Systems.

  A list of general functions that learnt during the course are included in this library.

  Created by    Gary Lam, Aug, 2023
  Updated by    Gary Lam, Aug, 2023

  https://www.vtc.edu.hk/vb/

*/

#include "YCI_Arduino.h"


/* START of LED */
LED::LED(int pin)
{
  _pin = pin;

  LED::begin();
}

void LED::begin()
{
  pinMode(_pin, OUTPUT);
}

void LED::on()
{
  digitalWrite(_pin, HIGH);
}

void LED::off()
{
  digitalWrite(_pin, LOW);
}

void LED::dot()
{
  digitalWrite(_pin, HIGH);
  delay(250);
  digitalWrite(_pin, LOW);
  delay(250);  
}

void LED::dash()
{
  digitalWrite(_pin, HIGH);
  delay(1000);
  digitalWrite(_pin, LOW);
  delay(250);
}

/* END of LED */

/* START of ButtonWithDebounce */
ButtonWithDebounce::ButtonWithDebounce(int pin)
{
  lastDebounceTime = 0;
  debounceDelay = 50;
  _pin = pin;

  ButtonWithDebounce::begin();
}

void ButtonWithDebounce::begin()
{
  pinMode(_pin, INPUT);
  ButtonWithDebounce::update();
}

void ButtonWithDebounce::update()
{
  byte newReading = digitalRead(_pin);

  if (newReading != _lastReading) {
    lastDebounceTime = millis();
    }

  if (millis() - lastDebounceTime > debounceDelay) {
    // Update the 'state' attribute only if debounce is checked
    _state = newReading;
    }

  _lastReading = newReading;

}

byte ButtonWithDebounce::getState()
{
  ButtonWithDebounce::update();
  return _state;
}

bool ButtonWithDebounce::isPressed()
{
  return (ButtonWithDebounce::getState() == LOW);
}
/* END of ButtonWithDebounce */
