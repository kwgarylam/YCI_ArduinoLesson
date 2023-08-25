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

```
#include <YCI_Arduino.h>

LED redLED(11);
LED yellowLED(10);
LED greenLED(9);

void setup()
{
  Serial.begin(9600); // open the serial port at 9600 bps:
}

void loop()
{
  //Green LED
  Serial.println("Demonstration of greenLED");
  greenLED.on(); //Turn the LED on
  delay(500);
  greenLED.off(); //Turn the LED off

  //Yellow LED
  Serial.println("Demonstration of yellowLED");
  yellowLED.on();
  delay(500);
  yellowLED.off();

  //Red LED
  Serial.println("Demonstration of redLED");
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
| OUT         | 8       |
| VCC         | 5V      |
| GND         | GND     |

### Coding example

```
#include <YCI_Arduino.h>

LED redLED(11);

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
}
```

### Expected output

When button 1 is pressed, the LED will turn on.

## 3. Relay

### Libraries

Basic libraries from the teaching material are used.

- YCI_Arduino.h

### Pin out

Connect the push button by the pin out below (or equivalence)

| Push button | Arduino |
| ----------- | ------- |
| VCC         | 5V      |
| GND         | GND     |
| IN          | 12      |

### Coding example

```
#include <YCI_Arduino.h>

LED redLED(11);
ButtonWithDebounce button1(4);

int relay_pin = 12;

void setup() {
  pinMode(relay_pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (button1.isPressed()) {
    Serial.println("Button 1 is pressed");
    redLED.on();
    digitalWrite(relay_pin,HIGH);

  } else {
    Serial.println("Button 1 is NOT pressed");
    redLED.off();
    digitalWrite(relay_pin,LOW);
  }
}
```

### Expected output

When button 1 is pressed, the relay will turn on.

## 4. Temperature sensor (DHT11)

### Libraries

DHT libraries are used. To use the libraries, in the Arduino IDE, click on the 

- DHT11.h

### Pin out

Connect the push button by the pin out below (or equivalence)

| DHT11    | Arduino |
| -------- | ------- |
| S (Data) | 5       |
| 5V       | 5V      |
| GND      | GND     |

### Coding example

```
#include <YCI_Arduino.h>
#include <DHT.h>

//System pinout
//S -> Pin8
//5V -> 5V
//GND -> GND
#define dhtPin 5  //Data pin for the temperature sensor
#define dhtType DHT11 //Using DHT11

DHT dht(dhtPin, dhtType); // Initialize DHT sensor

//System variables
float h;
float t;

void setup()
{
  Serial.begin(9600); // open the serial port at 9600 bps:
  dht.begin(); //Initialize the sensor
}

void loop()
{
  h = dht.readHumidity();
  t = dht.readTemperature();

  if (isnan(h) || isnan(t)){ //If the value is not a number
    Serial.println("Error in getting DHT data");
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println("C");

}
```

### Expected output

When the finger is touching the sensor, the temperature will rise up.

## Assembled system

When we combine all the components together, we need to defind the pinout again.

### Pin out

| IO Devices         | <->       | Arduino |
| ------------------ | --------- | ------- |
| Button 1 (Cold)    | <-Input   | 8       |
| Button 2 (Hot)     | <-Input   | 7       |
| Button 3 (Control) | <-Input   | 6       |
| Temperature Sensor | <-Input   | 5       |
| Relay (Motor)      | Output -> | 12      |
| Traffic (Red)      | Output -> | 11      |
| Traffic (Yellow)   | Output -> | 10      |
| Traffic (Green)    | Output -> | 9       |
