# human-posture-recognition-using-mpu6050-and-arduino-uno IoT-based human posture recognition system 
An IoT project using Arduino and the MPU6050 sensor to recognize human posture in real time.

## Features
- Captures accelerometer and gyroscope data from the MPU6050 sensor
 Classifies posture (upright, leaning forward, leaning backward, slouching)
- Provides alerts or serial output when incorrect posture is detected
- Implemented in Embedded C on Arduino

## Tech Stack
- Arduino Uno (or compatible board)
- MPU6050 accelerometer + gyroscope sensor
- Embedded C programming
- Serial Monitor for output

## Hardware Setup
- VCC → 3.3V or 5V
- GND → GND
- SDA → A4 (Arduino Uno)
- SCL → A5 (Arduino Uno)

## How to Run
1. Connect the MPU6050 sensor to the Arduino board as per the wiring above.
2. Upload the `hp.c` (or `hp.ino`) file to the Arduino using the Arduino IDE.
3. Open the Serial Monitor at 9600 baud rate.
4. Observe posture classification messages in real time.

## Example Output
