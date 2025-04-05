# ESP32_LED_Control_Task_3_Team_Based
## Objective
This project demonstrates basic hardware programming with the ESP32 microcontroller to control LEDs using different methods, including blinking, fading, push-button control, and light-dependent control through an LDR (Light Dependent Resistor). The project involves using the Arduino IDE for programming the ESP32 and setting up different circuits for each task.

## Tasks
### Task 1: Blinking LED on ESP32
#### Requirements:
ESP32

LED

330-ohm resistor

Breadboard

Jumper wires

#### Deliverables:
Source code for blinking an LED

Circuit schematic

Video demonstration

#### Description:
Control an LED to blink at regular intervals using the ESP32. This will involve setting up the ESP32 with the Arduino IDE, wiring an LED through a resistor to the ESP32, and programming it to turn on and off repeatedly.

### Task 2: Fading LED on ESP32
#### Requirements:
ESP32

LED

330-ohm resistor

Breadboard

Jumper wires

#### Deliverables:
Source code for fading an LED

Circuit schematic

Video demonstration

#### Description:
Gradually change the brightness of an LED using the ESP32's PWM capabilities. This task requires programming the ESP32 to adjust the LED brightness using analog output.

### Task 3: Push Button Controlled LED on ESP32
#### Requirements:
ESP32

LED

Push button

330-ohm resistor

10k-ohm resistor

Breadboard

Jumper wires

#### Deliverables:
Source code for a push-button controlled LED

Circuit schematic

Video demonstration

#### Description:
Use a push button to control an LED. This involves setting up a simple circuit with a button and programming the ESP32 to turn an LED on when the button is pressed.

### Task 4: LDR Light Sensor Controlled LED on ESP32
#### Requirements:
ESP32

LED

LDR (Light Dependent Resistor)

330-ohm resistor

10k-ohm resistor (for LDR voltage divider)

Breadboard

Jumper wires

#### Deliverables:
Source code for an LDR-controlled LED

Circuit schematic

Video demonstration

#### Description:
Use an LDR light sensor to control an LED. This project involves creating a circuit that uses the LDR to detect light levels and turns the LED on when it gets dark. The task includes setting up the LDR with a voltage divider on a breadboard, connecting it to the ESP32, and programming the ESP32 to read the light levels from the LDR and turn the LED on or off based on a predefined threshold.

## GitHub Repository Structure
The repository will be organized as follows:

ESP32_LED_Control/
│-- README.md                  (Project overview and instructions)
│-- Task_1_Blinking_LED/
│   │-- Blinking_LED.cpp       (Source code for blinking LED)
│   │-- Circuit_Diagram.png    (Circuit schematic for Task 1)
│   │-- Demo_Video.mp4         (Video demonstration for Task 1)
│   │-- Report.pdf             (Report for Task 1)
│
│-- Task_2_Fading_LED/
│   │-- Fading_LED.cpp         (Source code for fading LED)
│   │-- Circuit_Diagram.png    (Circuit schematic for Task 2)
│   │-- Demo_Video.mp4         (Video demonstration for Task 2)
│   │-- Report.pdf             (Report for Task 2)
│
│-- Task_3_Push_Button_LED/
│   │-- Push_Button_LED.cpp    (Source code for push-button controlled LED)
│   │-- Circuit_Diagram.png    (Circuit schematic for Task 3)
│   │-- Demo_Video.mp4         (Video demonstration for Task 3)
│   │-- Report.pdf             (Report for Task 3)
│
│-- Task_4_LDR_Controlled_LED/
│   │-- LDR_Controlled_LED.cpp (Source code for LDR-controlled LED)
│   │-- Circuit_Diagram.png    (Circuit schematic for Task 4)
│   │-- Demo_Video.mp4         (Video demonstration for Task 4)
│   │-- Report.pdf             (Report for Task 4)
## This repository includes:
A README file with project overview and instructions.

A folder for each task containing:

Source code files (.cpp) for each task.

Circuit diagrams (.png) for each task.

Video demonstrations (.mp4) for each task.

Detailed reports (.pdf) on project implementation and observations.

This structure ensures clear organization and easy access to all materials related to the ESP32 LED control project.
