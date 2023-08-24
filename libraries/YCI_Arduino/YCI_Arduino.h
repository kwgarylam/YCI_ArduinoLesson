/*
  YCI_Arduino.h - Library for BTEC Unit 6 - Microcontroller Systems.

  A list of general functions that learnt during the course are included in this library.

  Created by    Gary Lam, Aug, 2023
  Updated by    Gary Lam, Aug, 2023

  https://www.vtc.edu.hk/vb/

*/

#ifndef YCI_Arduino_h
#define YCI_Arduino_h

#include "Arduino.h"                //Arduino’s built-in functions

class LED {
  public:
    LED(int pin);

    void begin();
    void dot();
    void dash();
    void on();
    void off();
    
  private:
    int _pin;
    
};

class ButtonWithDebounce {
  public:
    ButtonWithDebounce(int pin);

    unsigned long lastDebounceTime;
    unsigned long debounceDelay;

    void begin();
    void update();
    byte getState();
    bool isPressed();
    
  private:
    byte _pin;
    byte _state;
    byte _lastReading;
    
};

#endif