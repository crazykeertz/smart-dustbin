# Smart Dustbin 🗑️

An Arduino-based Smart Dustbin that automatically opens its lid when an object is detected using an IR sensor.

## Components Used

- Arduino Board
- IR Sensor
- SG90 Servo Motor
- Jumper Wires
- Dustbin

## Working

The IR sensor detects an object near the dustbin.

When an object is detected:

1. The IR sensor sends a signal to the Arduino.
2. Arduino processes the sensor signal.
3. The SG90 servo motor rotates to 90°.
4. The dustbin lid opens.
5. After 3 seconds, the lid closes automatically.

## Pin Connections

| Component | Arduino Pin |
|---|---|
| IR Sensor OUT | D2 |
| SG90 Signal | D3 |
| SG90 VCC | 5V |
| SG90 GND | GND |

## Software Used

- Arduino IDE
- Arduino C/C++

## Features

- Automatic lid opening
- IR-based object detection
- Servo motor controlled by Arduino
- Simple and low-cost design

## Future Improvements

- Add an ultrasonic sensor for dustbin fill-level detection
- Add an LCD/OLED display
- Add IoT monitoring
- Add a full-bin alert system

## Project Status

Completed ✅
## Demo Video 🎥

The demo video shows the working of the Smart Dustbin, where the IR sensor detects an object and the SG90 servo motor automatically opens the lid.

[▶️ Watch Smart Dustbin Demo](https://github.com/crazykeertz/smart-dustbin/blob/main/smart-dustbin-demo%20(1).mp4)
