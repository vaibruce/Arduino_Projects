# Arduino_Projects

This repository contains a collection of 8 Arduino projects designed to help you learn and explore various sensors, displays, and real-world applications. Each project includes code, wiring diagrams, and explanations to guide you in building, understanding, and modifying the projects.

## Projects Overview

1. **Distance Measurement Display**  
   Measure the distance to an object using an ultrasonic sensor, and display the reading on a 7-segment display.

2. **Smart Distance Counter**  
   Track object crossings within a specified range and display a counter on a 7-segment display. Reset the counter with a touch sensor.

3. **Touch-Activated Range Finder**  
   Display the distance reading only when a touch sensor is activated, holding the value for 5 seconds on a 7-segment display before clearing.

4. **Countdown Timer with Obstacle-Activated Reset**  
   Start a countdown on the 7-segment display using a touch sensor. Reset the countdown if an object is detected within range; show "E" if the countdown completes without interruptions.

5. **Digital Stopwatch**  
   Implement a stopwatch using an LCD display and two buttons: one for start/stop and another for reset.

6. **Motion-Activated Alarm**  
   Detect motion using a PIR sensor and trigger a buzzer alarm. Log each motion detection timestamp in the Serial Monitor.

7. **Temperature Monitoring System**  
   Use a DHT11 or LM35 sensor to monitor temperature, displaying data in the Serial Monitor. Include a warning if the temperature exceeds a preset threshold.

8. **People Counter with Direction Detection**  
   Use two IR sensors and an ultrasonic sensor to count people entering and exiting a doorway, displaying the count on a 7-segment display and determining direction.

## Getting Started

To use these projects, you’ll need:
- An Arduino board (Uno, Nano, or compatible).
- Components such as ultrasonic sensors, touch sensors, 7-segment displays, PIR sensors, LCDs, IR sensors, and temperature sensors.
- Arduino IDE installed on your computer.

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/arduino-project-collection.git
