# Guildline for the Task Booklet

Student may follow this guildline to prepare your report.

# Activity 1

## Task planning and system design changes

- [ ] C.P10: Prepare a project plan at the start of the process that covers the key activities.

- A simple project plan was prepared, only cover the key activities without details explanation
  
  - **Suggestion on this requirement:**
  
  - **A short project time plan/Gantt chart**
    The task planning should monitor your progress throughout the rest of the task and make any adjustments as required.

# Individual testing of the components

You are required to write individual code for each component, and testing their performance in the report (Activity 4).

## 1. Blinking LED

### Libraries

- <YCI_Arduino.h>

Arduino libraries or YCI libraries from the teaching material are used for LED blinking.

### Pin out

Connect the traffic light/standalone LED by the pin out below (or equivalence)

| Traffic Light/ LED | Arduino |
| ------------------ | ------- |
| GND                | GND     |
| R                  | 11      |
| Y                  | 10      |
| G                  | 9       |

### Coding example

#### Simple version

Coding example using basic setup (Suggested)

```cpp
// Libraries
// In this example, no library is used.

// Variables
int ledPin_red = 9;

// Setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED as an output.
  pinMode(ledPin_red, OUTPUT);
}

// The loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin_red, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);            // wait for a second
  digitalWrite(ledPin_red, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);            // wait for a second
}
```

#### Class Implementation

Coding example using class (Advanced)

```cpp
// Libraries
#include <YCI_Arduino.h>

// Variables
LED redLED(11);
LED yellowLED(10);
LED greenLED(9);

// Setup function
void setup()
{
  Serial.begin(9600); // open the serial port at 9600 bps:
}

// Loop function
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

- <YCI_Arduino.h>

Arduino libraries or YCI libraries from the teaching material are used for de-bouncing.

### Pin out

Connect the push button by the pin out below (or equivalence)

| Push button | Arduino |
| ----------- | ------- |
| OUT         | 8       |
| VCC         | 5V      |
| GND         | GND     |

### Coding example

#### Simple version

Coding example using basic setup of pin mode and digitalRead function. However, de-bounding and changes of state are not considered.

```cpp
// Libraries
#include <YCI_Arduino.h>

// Variables
int ledPin_red = 9;
int ledPin_yellow = 10;

int button1= 2;
int button2= 3;

// Setup function
void setup(){
  Serial.begin(9600); // Open the serial port for de-bugging

  pinMode(ledPin_red, OUTPUT); // initialize digital pin LED as an output.
  pinMode(ledPin_yellow, OUTPUT);

  pinMode(button1, INPUT); // initialize digital pin Button as an input.
  pinMode(button2, INPUT);
}

// Loop function
void loop(){

  byte buttonState1 = digitalRead(button1);
  byte buttonState2 = digitalRead(button2);

  // To check the functionality of button 1.
  if (buttonState1 == LOW){
    Serial.println("Button 1 is pressed ");
    digitalWrite(ledPin_red, HIGH);  // turn the LED on
    delay(1000);
  }
  else{
    Serial.println("Button 1 is NOT pressed ");
    digitalWrite(ledPin_red, LOW);   // turn the LED off
    delay(1000);
  }
  // To check the functionality of button 2.
  if (buttonState2 == LOW){
    Serial.println("Button 2 is pressed ");
    digitalWrite(ledPin_yellow , HIGH);   // turn the LED on
    delay(1000);
  }
  else{
    Serial.println("Button 2 is NOT pressed ");
    digitalWrite(ledPin_yellow , LOW);   // turn the LED off
    delay(1000);
  }
}
```

#### Class Implementation

Coding example using class (Advanced)

This version is **suggested** since debouncing is used for the push button. In addition, the function will update the button status by continuously polling the state.

```cpp
// Libraries
#include <YCI_Arduino.h>

// Variables
int ledPin_red = 9;
int ledPin_yellow = 10;

ButtonWithDebounce button1(2);
ButtonWithDebounce button2(3);

// Setup function
void setup(){
  Serial.begin(9600); // Open the serial port for de-bugging

  pinMode(ledPin_red, OUTPUT); // initialize digital pin LED as an output.
  pinMode(ledPin_yellow, OUTPUT);
}

// Loop function
void loop(){

  // To check the functionality of button 1.
  if (button1.isPressed()){
    Serial.println("Button 1 is pressed ");
    digitalWrite(ledPin_red, HIGH);  // turn the LED on
    delay(1000);
  }
  else{
    Serial.println("Button 1 is NOT pressed ");
    digitalWrite(ledPin_red, LOW);   // turn the LED off
    delay(1000);
  }
  // To check the functionality of button 2.
  if (button2.isPressed()){
    Serial.println("Button 2 is pressed ");
    digitalWrite(ledPin_yellow , HIGH);   // turn the LED on
    delay(1000);
  }
  else{
    Serial.println("Button 2 is NOT pressed ");
    digitalWrite(ledPin_yellow , LOW);   // turn the LED off
    delay(1000);
  }
}
```

### Expected output

When button 1 is pressed, the LED will turn on.

## 3. Relay

### Libraries

- <YCI_Arduino.h>

Basic libraries from the teaching material are used for debouncing.

### Pin out

Connect the push button by the pin out below (or equivalence)

| Push button | Arduino |
| ----------- | ------- |
| VCC         | 5V      |
| GND         | GND     |
| IN          | 12      |

### Coding example

```cpp
#include <YCI_Arduino.h>

int relay_pin = 12;

ButtonWithDebounce button1(4);

void setup() {
  Serial.begin(9600);
  pinMode(relay_pin, OUTPUT);
}

void loop() {
  if (button1.isPressed()) {
    Serial.println("The relay is ON.");
    digitalWrite(relay_pin,HIGH);

  } else {
    Serial.println("The relay is OFF.");
    digitalWrite(relay_pin,LOW);
  }
}
```

### Expected output

When button 1 is pressed, the relay will turn on and vice versa.

## 4. Temperature sensor (DHT11)

### Libraries

- <DHT11.h>

DHT libraries are used. To use the libraries, in the Arduino IDE, click on the 

`Sketch > Include Library > Manage libraries... `

Under the library Manager, search the `DHT` library. And you will find the `DHT sensor library by Adafruit`. Install the library version 1.4.4 or above by a simply click.

### Pin out

Connect the push button by the pin out below (or equivalence)

| DHT11    | Arduino |
| -------- | ------- |
| S (Data) | 5       |
| 5V       | 5V      |
| GND      | GND     |

### Coding example

```cpp
#include <DHT.h>

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

## Finally. Assembled system

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
