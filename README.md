# ESP32 Traffic Light Controller

## Project Overview    
    This project implements a simple traffic light control system using an ESP32 microcontroller. Three LEDs (Green, Yellow, Red) simulate a real-world traffic signal sequence controlled by a push button.

## Operation
The traffic light system operates when the push button is pressed.
The LEDs follow this sequence:
Green → Yellow → Red
If the push button is released, all LEDs immediately turn OFF.

## Hardware Used
- ESP32 Development Board
- Green LED
- Yellow LED
- Red LED (All traffic Light LED Module)
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
demonstrating the Green → Yellow → Red LED transitions when the push button is pressed.

<img width="551" height="521" alt="image" src="https://github.com/user-attachments/assets/bc94285d-c8b0-4f2c-91aa-e24b2aca1a04" />
<img width="527" height="502" alt="image" src="https://github.com/user-attachments/assets/dc5b7363-c1f1-44f5-90a7-6d3a5c36eaa9" />
<img width="540" height="720" alt="image" src="https://github.com/user-attachments/assets/008b0783-b0a9-4d90-b62d-0a57dcb6656a" />


## 🧠Technical Skills Demonstrated
- Embedded Systems Programming
- ESP32 GPIO Control
- Digital Input and Output
- Real-time system timing
