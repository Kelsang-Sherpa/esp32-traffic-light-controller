# ESP32 Traffic Light Controller

## Project Overview    
    This project implements a Traffic Light Controller using a microcontroller to simulate real-world traffic signal behavior. The embedded firmware manages the sequential operation of red, yellow, and green LEDs using GPIO control and timing-based logic.
    The system is designed using a finite state machine (FSM) approach to ensure reliable transitions between traffic signal states. This project demonstrates key embedded software engineering concepts, including low-level hardware interaction, real-time timing control, and microcontroller-based system design.

## Operation
The traffic light system operates when the push button is pressed.
The LEDs follow this sequence:
Red → Yellow → Green
If the push button is released, all LEDs immediately turn OFF.

## Hardware Used
- ESP32 Development Board
- Red LED
- Yellow LED
- Green LED (All traffic Light LED Module)
- Push Button Module
- Jumper wires

## Pin Configuration

| Component   | ESP32 Pin |
|-------------|-----------|
| Green LED   | GPIO 19   |
| Yellow LED  | GPIO 18   |
| Red LED     | GPIO 17   |
| Push Button | GPIO 27   |

## Hardware Schematic Diagram
<img width="537" height="228" alt="image" src="https://github.com/user-attachments/assets/bbe69631-732c-4fe2-bb78-8766be73a865" />

## 🔧Hardware Setup (Picture below)
  <img width="526" height="359" alt="image" src="https://github.com/user-attachments/assets/8189246d-cde1-487e-b855-bfc168d5f943" />

## 🚦System Output
The images below show the traffic light sequence running on the ESP32 system,
demonstrating the Red → Green → Yellow LED transitions when the push button is pressed.

![Red](https://github.com/user-attachments/assets/28c97ff1-5d27-419e-9de4-49a39338ee0a)
![Yellow](https://github.com/user-attachments/assets/e114fe52-7dc4-457b-a3c6-1e47d99e4e96)
![Green](https://github.com/user-attachments/assets/2ef2999e-a98a-4f97-876b-49ca4d4edf59)

## 🧠Technical Skills Demonstrated
- Embedded Systems Programming
- Microcontroller ESP32 GPIO Control
- Finite State Machine (FSM Implementation)
- Timing and delay management in firmware
- Hardware-software integration
- Debugging Embedded Systems
