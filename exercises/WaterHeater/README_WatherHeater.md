# Individual testing of the components

You are required to write individual code for each component, and testing their performance in the report (Activity 4).

## 1. Blinking LED

### Libraries

Basic libraries from the teaching material are used.

- YCI_Arduino.h

### Pin out

Connect the traffic light/standalone LED by the pin out below (or equivalence)

| Traffic Light/ LED | Arduino |
| ------------------ | ------- |
| GND                | GND     |
| R                  | 11      |
| Y                  | 10      |
| G                  | 9       |

### Coding example

```arduino
#include <YCI_Arduino.h>

LED redLED(11);
LED yellowLED(10);
LED greenLED(9);

void setup()
{
  Serial.begin(9600); // open the serial port at 9600 bps:

  greenLED.begin();
  yellowLED.begin();
  redLED.begin();
}

void loop()
{
  //Green LED
  Serial.println("Demonstration of greenLED");
  greenLED.dot(); //A short blink of the LED
  greenLED.dash(); //A long blink of the LED

  greenLED.on(); //Turn the LED on
  delay(500);
  greenLED.off(); //Turn the LED off

  //Yellow LED
  Serial.println("Demonstration of yellowLED");
  yellowLED.dot();
  yellowLED.dash();

  yellowLED.on();
  delay(500);
  yellowLED.off();

  //Red LED
  Serial.println("Demonstration of redLED");
  redLED.dot();
  redLED.dash();

  redLED.on();
  delay(500);
  redLED.off();

}
```

### Expected output

The LED will flash one by one with the pattern dot, dash, on and off.

## 2. Arduino Push Button

### Libraries

Basic libraries from the teaching material are used.

- YCI_Arduino.h

### Pin out

Connect the push button by the pin out below (or equivalence)

| Push button | Arduino |
| ----------- | ------- |
| OUT         | 9       |
| VCC         | 5V      |
| GND         | GND     |

### Coding example

```arduino
#include <YCI_Arduino.h>

LED redLED(9);

ButtonWithDebounce button1(4);

void setup(){
  Serial.begin(9600); // open the serial port at 9600 bps:
}

void loop(){
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
```

### Expected output

When button 1 is pressed, the LED will turn on.


