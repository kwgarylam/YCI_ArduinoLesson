# Tutorial of the microcontroller system - L1

This page contains the basics of the Arduino.



### 1. LED/RGB LED

#### **Pin out**

The RGB LEDs are connected by the pin out below:

| Traffic Light/ LED | Arduino |
| ------------------ | ------- |
| GND                | GND     |
| R                  | 11      |
| Y                  | 10      |
| G                  | 9       |

#### **Coding example**

- Example 1
  Coding example using basic setup

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

#### **Expected output**

![Testing_LED](https://github.com/kwgarylam/YCI_ArduinoLesson/blob/main/misc/figures/traffic.PNG?raw=true)

The LEDs will flash one by one with the pattern on and off.

### 2. Push Button

#### **Pin out**
Push buttons are connected by the pin out below: (M4)

| Push button | Arduino |
| ----------- | ------- |
| OUT         | 8       |
| VCC         | 5V      |
| GND         | GND     |

#### **Coding example**

- Example 1 (Simple version)
- Coding example using basic setup of pin mode and digitalRead function. However, de-bounding and changes of state are not considered.

```cpp

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

- Example 2 (With deboncing)
- This version is **suggested** since debouncing is used for the push button. In addition, the function will update the button status by continuously polling the state.

```cpp
//Not yet completed
```

**Expected output**

![Testing_Button](https://github.com/kwgarylam/YCI_ArduinoLesson/blob/main/misc/figures/button.PNG?raw=true)

When button 1 is pressed, the LED will turn on.

3. Relay

**Pin out**

Connect the push button by the pin out below:

| Push button | Arduino |
| ----------- | ------- |
| VCC         | 5V      |
| GND         | GND     |
| IN          | 12      |

**Coding example**

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

**Expected output**

![Testing_Relay](https://github.com/kwgarylam/YCI_ArduinoLesson/blob/main/misc/figures/relay.PNG?raw=true)

When button 1 is pressed, the relay will turn on and vice versa.

4. Temperature sensor (DHT11)
- Libraries <DHT11.h>

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

![Testing_DHT11](https://github.com/kwgarylam/YCI_ArduinoLesson/blob/main/misc/figures/DHT11.PNG?raw=true)

When the finger is touching the sensor, the temperature will rise up.
