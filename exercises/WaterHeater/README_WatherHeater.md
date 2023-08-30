# Guildline for the Task Booklet

Student may follow this guildline to prepare your report.

## Activity 1

### Task planning and system design changes

- [ ] C.P10: Prepare a project plan at the start of the process that covers the key activities.

A simple project plan was prepared, only cover the key activities without details explanation

- The task planning should monitor your progress throughout the rest of the task and make any adjustments as required.

---

#### **Examples:**

**A short project time plan/Gantt chart**

![GanttChart](https://github.com/kwgarylam/YCI_ArduinoLesson/blob/main/misc/figures/GanttChart.PNG?raw=true)

| Activities     | Tasks                                                                                                                                                                                                                               |
| -------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Activity 1** | **Task planning and system design changes**                                                                                                                                                                                         |
| Task details:  | Create a Gantt chart to manage the time for the upcoming tasks                                                                                                                                                                      |
| **Activity 2** | **Analysis of the brief**                                                                                                                                                                                                           |
| Task details:  | Prepare a technical specification that aligns with the user requirements and a test plan to check the functionality of the system.                                                                                                  |
| **Activity 3** | **System design**                                                                                                                                                                                                                   |
| Task details:  | Select input and output devices for the microcontroller system. Create a circuit diagram using circuit drawing software and construct a flow chart to outline the system's function, input and output processes, and control logic. |
| **Activity 4** | **System assembly and programming**                                                                                                                                                                                                 |
| Task details:  | Compile a test list for input and output devices with photos and screenshots of the program as evidence. After testing each component, begin programming with clear annotations for future updates.                                 |
| **Activity 5** | **System testing and result analysis**                                                                                                                                                                                              |
| Task details:  | Test the program and system based on the established test plan from activity 2 and record the results.                                                                                                                              |
| **Activity 6** | **System in operation**                                                                                                                                                                                                             |
| Task details:  | Create a Gantt chart to manage the time for the upcoming tasks                                                                                                                                                                      |

---

#### Logbook for activity 1

- [ ] C.P11: Describe the key changes made to the microcontroller system during the development process.

Description on key changes of the microcontroller could be found in the logbook. 1/5

1. What I have done this session:
   Disribe what you have done in this session. (At least 3 sentences)
2. Issues encountered in this session and solutions with justification:
   Describe the problem you encountered.
   Describe the solution you proposed.

---

## Activity 2

### Analysis of the brief

- [ ] A.P1: Interpret the brief into a limited number of operational requirements that partially meet the brief.

A set of technical specification was produced and meet some elements of the brief.

- By interpreting the client brief into operational requirements, prepare a technical specification for a user-friendly system that can handle some unexpected events.(At least 2 - 3 paragraphs)

---

#### **Examples:**

**Technical Specification:**

The car pressure washer system will be designed to indicate the selected option (cold rinse or hot wash), operate the DC motor for up to 10 seconds for the cold rinse option when the spray lever is pressed, indicate when the hot water has reached a minimum temperature (37.C), and operate the DC motor for up to 10 seconds for the hot wash option after the minimum temperature (37.C) is reached and when the spray lever is pressed.

The system must indicate if a cold rinse (Option 1) or a hot wash (Option 2) has been selected by the user. The DC motor should operate for up to 10 seconds when the spray control lever is pressed for the cold rinse option. If the control lever is released, the DC motor will stop.

The system must indicate when the hot water has reached a minimum temperature (37.C). The DC motor should operate for up to 10 seconds for the hot wash option after the minimum temperature (37.C) is reached. If the control lever is released, the DC motor will stop. As the operation and testing of the prototype system does not require the use of heating elements, it is assumed that the heating element can maintain water temperature once it reaches 37.C. No additional control will be added for the heating element, instead a temperature sensor. 

---

- [ ] A.P2: Produce a test plan that demonstrates a limited understanding of the system.

A test plan was produced and the test plan demonstrated some understanding of the system.

- Prepare a test plan to check the functionality of the final solution against the technical specification and include some unexpected events

---

#### **Examples:**

**Test Plan Template** (3 - 5 tests)

| Test number | Purpose of the test                                          | Test condition                                                                     | Expected result                                                                            |
| ----------- | ------------------------------------------------------------ | ---------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------ |
| 001         | Testing the cold rinse (Option 1) is selected.               | Press the push button of the cold rinse (Option 1).                                | The LED of cold water will turn on to indicate that cold rinse (Option 1) is selected.     |
| 002         | Testing the hot water(Option 2) is selected.                 | Press the push button of the hot water(Option 2).                                  | The LED of hot water will turn on to indicate that hot water(Option 2) is selected.        |
| 003         | Testing the operation of DC motor when Option 1 is selected. | When option 1 is selected, press the control lever for few seconds and release it. | The motor should pump cold water through the spray lance until the control lever released. |
| 004         | Testing the hot water temperature indicator                  | The temperature of the hot water reached 37.C.                                     | The indicator (Heater) is turned on when hot water reached 37.C.                           |
| 005         | Testing the operation of DC motor when Option 2 is selected. | When option 2 is selected, press the control lever for few seconds and release it. | ...                                                                                        |
| And more... | ...                                                          | ...                                                                                | ...                                                                                        |

---

#### Logbook for activity 2

- [ ] C.P11: Describe the key changes made to the microcontroller system during the development process.

Description on key changes of the microcontroller could be found in the logbook. 2/5

1. What I have done this session:
   Disribe what you have done in this session. (At least 3 sentences)
2. Issues encountered in this session and solutions with justification:
   Describe the problem you encountered.
   Describe the solution you proposed.

## Activity 3

### System design

- [ ] A.P3: Select appropriate input and output devices for some of the operational requirements.

Input devices and output devices are selected with justification for most of the operational requirements in activity 3

- [ ] A.P4: Describe the function of some appropriate input and output hardware devices.

Description of some appropriate could be found in activity 3.

- The selection and justification of suitable input and output devices
- A description of the system design covering input and output devices and microcontroller connections

---

#### **Examples:**

**Selection of Appropriate Hardware:**

**Input devices:**
Two-position Selector switch: 
A two-position selector switch is used to select between two options, a cold rinse (Option 1) or hot wash (Option 2). When the switch is turned to a particular position, it completes the circuit by contacting the corresponding contact blocks, allowing current to flow through the circuit.

Push button: 
A push button serves as the activator for the spray system, allowing for easy and precise control over its operation. When a push button is pressed, it completes an electrical circuit, and sends a signal to the microcontroller, which can operate the DC motor.

Water temperature sensor:
A water temperature sensor connected to microcontroller is used to monitor the temperature of water. The microcontroller receives signals from the sensor and processes them to determine the temperature of the water.

Environmental temperature sensor:
An environmental temperature sensor connected to microcontroller is used to monitor the temperature of environment. The microcontroller receives signals from the sensor and processes them to determine the temperature of the environment.

**Output devices:**
DC motor:
A DC motor is used to power water pumps. It is operated by a signal sent from a microcontroller. The microcontroller processes the signal and sends a command to the motor driver circuit to convert the signal into a current that powers the motor.

LED: 
A traffic light LED serves as a system indicator, lighting up when receiving a signal from the microcontroller that indicates the selection of cold, hot water and the water temperature has reached 37.C. 

---

- [ ] A.P5: Produce an outline design for the program structure considering some key operational requirements.

A flow chart for key operational structure were prepared for system programming.

- A plan for the program structure detailing key system operations.

---

#### **Examples:**

Flow chart for the system:

![FlowChart](https://github.com/kwgarylam/YCI_ArduinoLesson/blob/main/misc/figures/flowchart.png?raw=true)

The above diagram is a flow chart to visualise the steps of the program / system in a sequential order. As a result, the consumer can read and understand program in a simpler way.

Additionally, a flow chart can be a checklist to ensure there are no missing components in the system. In other words, the flow chart can help to meet the user requirement with nothing left, providing a satisfied system for the consumer.

---

#### Logbook for activity 3

- [ ] C.P11: Describe the key changes made to the microcontroller system during the development process.

Description on key changes of the microcontroller could be found in the logbook. 3/5

1. What I have done this session:
   Disribe what you have done in this session. (At least 3 sentences)
2. Issues encountered in this session and solutions with justification:
   Describe the problem you encountered.
   Describe the solution you proposed.

---

## Activity 4

### System assembly and programming

Individual testing of each component with code and photos.

You are required to write individual code for each component, and testing their performance in the report.

- [ ] A.P7: Create a program using simple and mostly appropriate constructs and techniques.

A program was created to solve the problem using mainly simple constructs.

- [ ] A.P8: Test specific parts of the microcontroller system during the development process to determine if they function as intended.

Some photos of testing specific parts of the microcontroller was shown in the development state of the system in activity 4

- [ ] A.P9: Annotate the program to demonstrate some understanding of key areas of the program.

Some key area of the program were annotated that demonstrate some understanding of key areas of the problem.

- producing the software program and annotating the code
- the assembly of any hardware (if required)
- refining the system so that it operates as expected and can handle some unexpected events

---

#### **Examples:**

Testing of Individual Components

1. Traffic Light LED

**Pin out**

The traffic light are connected by the pin out below: (M4)

| Traffic Light/ LED | Arduino |
| ------------------ | ------- |
| GND                | GND     |
| R                  | 11      |
| Y                  | 10      |
| G                  | 9       |

**Coding**

- Example 1
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

- Example 2
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

**Expected output**

![Testing_LED](https://github.com/kwgarylam/YCI_ArduinoLesson/blob/main/misc/figures/traffic.PNG?raw=true)

The LEDs will flash one by one with the pattern on and off.

2. Push Button

**Pin out**
Push buttons are connected by the pin out below: (M4)

| Push button | Arduino |
| ----------- | ------- |
| OUT         | 8       |
| VCC         | 5V      |
| GND         | GND     |

**Coding example**

- Example 1 (Simple version)
- Coding example using basic setup of pin mode and digitalRead function. However, de-bounding and changes of state are not considered.

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

- Example 2 (Class Implementation)
- Coding example using class (Advanced)
- This version is **suggested** since debouncing is used for the push button. In addition, the function will update the button status by continuously polling the state.

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

**Expected output**

![Testing_Button](https://github.com/kwgarylam/YCI_ArduinoLesson/blob/main/misc/figures/button.PNG?raw=true)

When button 1 is pressed, the LED will turn on.

3. Relay

**Pin out**

Connect the push button by the pin out below: (M4)

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

---

#### Logbook for activity 4

- [ ] C.P11: Describe the key changes made to the microcontroller system during the development process.

Description on key changes of the microcontroller could be found in the logbook. 4/5

1. What I have done this session:
   Disribe what you have done in this session. (At least 3 sentences)
2. Issues encountered in this session and solutions with justification:
   Describe the problem you encountered.
   Describe the solution you proposed.

## Activity 5

### System testing and results analysis

- [ ] B.P6: Assemble the input and output devices to a microcontroller.

Input and output devices were assembled into the microcontroller system which is shown in the video recording and section of activity 4 and 5.

- Test the system using the test plan (from Activity 2) and include some unexpected events.
- Record the outcome of each test in the template provided.
- Analyse the test results and evaluate the system for conformance against the client brief.

#### **Examples:**

![Assembly](https://github.com/kwgarylam/YCI_ArduinoLesson/blob/main/misc/figures/assembly.PNG?raw=true)

I assembly them together by wire, 3 buttons, 1 led traffic light led , 1
temperature sensor and 1 relay. I also label them as well for easier to recognise, to prevent less accident because of wrong input, this become more user-friendly and more safety.

Circuit Connection: (M4)

When we combine all the components together, we defind the pinout again.

| I/O Devices        | <In/Output> | Arduino |
| ------------------ | ----------- | ------- |
| Button 1 (Cold)    | <-Input     | 8       |
| Button 2 (Hot)     | <-Input     | 7       |
| Button 3 (Control) | <-Input     | 6       |
| Temperature Sensor | <-Input     | 5       |
| Relay (Motor)      | Output ->   | 12      |
| Traffic (Red)      | Output ->   | 11      |
| Traffic (Yellow)   | Output ->   | 10      |
| Traffic (Green)    | Output ->   | 9       |

The above is a listing of IO pin for each IO devices. This can reassure that the system is being placed / inserted at the correct position. Also, it will help effectively identifying the problem later in the program integration, where the wrong IO pin device can be quickly identified.

---

- [ ] C.P12: Describe the test results without linking the test outcome to the requirements of client brief.

The test results was described however with no or weak linking of the test outcome to the requirements of client brief.

---

Test Plan Template:



Activity 2(Expected)                                 --->                            Activity 5(Actual)

| Test number | Purpose of the test                                          | Test condition                                                                     | Expected result                                                                            | Actual result                                                             | Comments and justification                                                             |
| ----------- | ------------------------------------------------------------ | ---------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------ | ------------------------------------------------------------------------- | -------------------------------------------------------------------------------------- |
| 001         | Testing the cold rinse (Option 1) is selected.               | Press the push button of the cold rinse (Option 1).                                | The LED of cold water will turn on to indicate that cold rinse (Option 1) is selected.     | The LED for cold water is turned on when the cold rinse button is pressed | The actual result matches the expected result. The signal for cold rinse is activated. |
| 002         | Testing the hot water(Option 2) is selected.                 | Press the push button of the hot water(Option 2).                                  | The LED of hot water will turn on to indicate that hot water(Option 2) is selected.        |                                                                           |                                                                                        |
| 003         | Testing the operation of DC motor when Option 1 is selected. | When option 1 is selected, press the control lever for few seconds and release it. | The motor should pump cold water through the spray lance until the control lever released. |                                                                           |                                                                                        |
| 004         | Testing the hot water temperature indicator                  | The temperature of the hot water reached 37.C.                                     | The indicator (Heater) is turned on when hot water reached 37.C.                           |                                                                           |                                                                                        |
| 005         | Testing the operation of DC motor when Option 2 is selected. | When option 2 is selected, press the control lever for few seconds and release it. | ...                                                                                        |                                                                           |                                                                                        |

---

#### Logbook for activity 5

- [ ] C.P11: Describe the key changes made to the microcontroller system during the development process.

Description on key changes of the microcontroller could be found in the logbook. 5/5

1. What I have done this session:
   Disribe what you have done in this session. (At least 3 sentences)
2. Issues encountered in this session and solutions with justification:
   Describe the problem you encountered.
   Describe the solution you proposed.

---

## Activity 6

System in operation

- [ ] C.P13: Produce a recording of a partially functioning microcontroller system that meets some of the requirements of the brief.

A video was produced and recorded a partially functioning microcontroller system that meets some of the requirements.

- your name, learner registration number and centre number at the start
- a commentary explaining the operation of the user-friendly system and how its behaviour is linked with your chosen hardware and software program
- recorded evidence of the outcome from suitable tests including some unexpected events(from Activity 5)

Save the file in .mp4 format, for example:
AY2324_L3U6_StudentID_YourName.mp4

---

#### **Examples:**

![Assembly](https://github.com/kwgarylam/YCI_ArduinoLesson/blob/main/misc/figures/videoDemo.gif?raw=true)
